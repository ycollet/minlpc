*From CUNYVM.CUNY.EDU!phtoint%NEWTON Mon Nov  5 10:35 +01 1990
      SUBROUTINE VE08AD(N, NS, INVAR, NVAR,
     * ELFNCT, RANGE, XLOWER, XUPPER,
     * X, FX, EPSIL, EBOUND, NGR, NIT, FKNOWN, FLOWBD,
     * RELPR, DIFGRD, RESTRT, TESTGX, HESDIF, STMAX, STEPL, ISTATE,
     * IPDEVC, IPFREQ, IPWHAT, LWK, WK, INFO, IFLAG)
C
C
C
C
C***********************************************************************
C
C
C    *****************************************************************
C    *****************************************************************
C    **                                                             **
C    **                         VE08AD                              **
C    **                                                             **
C    **   A ROUTINE FOR SOLVING PARTIALLY SEPARABLE MINIMIZATION    **
C    **   PROBLEMS WITH POSSIBLE UPPER AND LOWER BOUNDS ON THE      **
C    **   VARIABLES.                                                **
C    **                                                             **
C    *****************************************************************
C    *****************************************************************
C
C       ************** DOUBLE PRECISION VERSION *************
C
C       PROGRAMMING: PH.L. TOINT, NAMUR (BELGIUM), 1982.
C       PROGRAM VERSION NUMBER: 1.2 (06.07.1983)
C       MODIFIED FOR THE HARWELL SUBROUTINE LIBRARY IN NOVEMBER 1983
C       WITH THE ASSISTANCE OF IAIN DUFF (EXT 2670) AND JOHN REID.
C       THE ORIGINAL NAME OF THIS PACKAGE WAS PSPMIN.
C
C       LAST MINOR UPDATE : 05.03.1985 (PH.L. TOINT)
C
C
C *********************************************************************
C *                                                                   *
C *                            PURPOSE                                *
C *                                                                   *
C *********************************************************************
C
C   To minimize an objective function consisting of a sum of
C   finite element' functions, each of which involves only a few
C   variables or whose second derivative matrix has a low rank for
C   other reasons.
C   Bounds on the variables and known values may be specified.
C   The routine is especially effective on problems involving a
C   large number of variables.
C
C   The objective function has the form
C
C               ns
C       F(x) = SUM  f ( x  )
C              k=1   k    k
C
C   where
C
C       x = ( x , x , ..., x )
C              1   2        n
C
C   and where
C
C       x   are small subsets of x.
C
C   The user is required to write a subroutine that
C   calculates each function {f SUB k} and (optionally) its
C   gradient
C                 df
C            ns     k
C       g  = SUM  ---
C         k  k=1  dx
C                   k
C
C   When code for the gradient is supplied (and this usually
C   results in faster and more reliable execution), there are
C   facilities for automatically checking it during the first
C   iteration.
C
C   There are flexible re-start facilities for problems that do
C   not differ too substantially from a problem previously solved.
C   Using these can sometimes lead to dramatically reduced
C   execution times.
C
C   If there is a linear transformation of variables such that
C   one or more of the element functions depend on fewer
C   transformed variables than the number of original variables
C   they involve, this may be specified. This too can lead
C   to substantially improved computing time.
C
C   There are facilities for the user:
C    - to specify the termination criterion,
C    - to influence the step size in the line-search procedure,
C    - to choose whether to calculate the first approximations to
C      the Hessian matrices
C                  2
C                 d f
C            ns      k
C       H  = SUM  ----
C        k   k=1     2
C                 dx
C                   k
C      by finite differences.
C
C **********************************************************************
C *                                                                    *
C *                           SOURCE                                   *
C *                                                                    *
C **********************************************************************
C
C   VE08 is a routine from the Harwell Subroutrine Library (Harwell
C   Laboratory, Harwell, Oxfordshire, United Kingdom).
C
C   Programming:  Ph. L. TOINT, FUNDP, Namur, Belgium
C                 December 1983.
C
C
C **********************************************************************
C *                                                                    *
C *                            USE                                     *
C *                                                                    *
C **********************************************************************
C
C    The Argument List
C    -----------------
C
C    VE08AD(N,NS,INVAR,NVAR,ELFNCT,RANGE,XLOWER,XUPPER,
C           X,FX,EPSIL,EBOUND,NGR,NIT,FKNOWN,FLOWBD,RELPR,
C           DIFGRD,RESTRT,TESTGX,HESDIF,STMAX,STEPL,ISTATE,
C           IPDEVC,IPFREQ,IPWHAT,LWK,WK,INFO,IFLAG)
C
C
C    N      is an INTEGER variable, that must be set by the user to
C           the number of variables. It is not altered by the routine.
C           Restriction: N > 0.
C
C    NS     is an INTEGER variable, that must be set by the user to ns,
C           the number of element functions. It is not altered by the
C           routine.
C           Restriction: NS > 0.
C
C    INVAR  is an INTEGER array containing the indices of the variables
C           in the first element, followed by those in the second
C           element, etc. See below for an example.
C           It is not altered by the routine.
C
C    NVAR   is an INTEGER array of length at least NS+1, whose k-th
C           value is the position  of the  first variable of element
C           function k,  in the list INVAR. In addition, NVAR(NS+1)
C           should be equal to the total  length of INVAR plus one.
C           See below for an example.
C           It is not altered by the routine.
C
C    ELFNCT is the name of a user supplied subroutine that
C           computes the values of the element functions at a given point.
C           See complete description below.  This name should be
C           declared EXTERNAL in the calling program.
C
C    RANGE  is the name of a user supplied subroutine that performs
C           various operations related to the true range of the element
C           function second derivative matrices.  See complete description
C           below.  This name should be declared EXTERNAL in the
C           calling program.
C
C    XLOWER is the name of a user supplied DOUBLE PRECISION
C           function routine that returns the lower bounds on the bounded
C           variables.  See complete description below. This name should
C           be declared `EXTERNAL in the calling program.
C
C    XUPPER is the name of a user supplied DOUBLE PRECISION
C           function routine that returns the upper bounds on the bounded
C           variables.  See complete description below. This name should
C           be declared `EXTERNAL in the calling program.
C
C    X      is a DOUBLE PRECISION array of length N which must be
C           set by the user to the value of the variables at the starting
C           point.  On exit, it contains the values of the variables at the
C           best point found (usually the solution).
C
C    FX     is a DOUBLE PRECISION variable. If the user knows the
C           value of the objective  function  at the starting point,
C           he must set its value in FX and set FKNOWN to true.
C           Otherwise, the user should set FKNOWN to false and need
C           not set FX.  On exit, FX contains the value of the
C           objective function at the point X.
C
C    EPSIL  is a DOUBLE PRECISION variable, that must be set by
C           the user to a measure of  the accuracy (in the sense of the
C           Euclidean norm of the projected gradient) required to stop the
C           minimization  procedure. This value  is passed to the
C           termination routine VE08SD (see below).  It is not altered by
C           the routine.
C
C    EBOUND is a DOUBLE PRECISION variable, that must be set by
C           the user to a tolerance  above which a  bound is considered to
C           be nearly active. If it is negative, the default value
C           10**(-5) is used.  This tolerance is used in the
C           antizigzaging  device of (Bertsekas 1982), and has no
C           influence on the precision  with which the bound
C           constraints  will be satisfied at the solution.
C           It is not altered by the routine.
C
C    NGR    is an INTEGER array of length 2. The first element
C           NGR(1) must be set by the user to the maximum number of calls
C           to ELFNCT allowed for the minimization and is not altered.  A
C           suitable value will depend on the problem, and may be chosen in
C           the first instance between NIT(1) and 3*NIT(1). It may be
C           necessary to increase it if the problem is highly nonlinear.
C           NGR(2) need not be set by the user and will contain, on exit,
C           the actual number of calls to the routine ELFNCT that were made
C           during the routine's execution.
C
C    NIT    is an INTEGER array of length 2. The first element
C           NIT(1) must be set by the user to the maximum number of
C           iterations that is allowed  for the minimization and is  not
C           altered.  The second element NIT(2) need not be be set by the
C           user, and will contain, on exit, the actual number of
C           minimization iterations performed by the routine.
C
C    FKNOWN is a LOGICAL variable. If it is set to true, FX must
C           contain the function value at the starting point X, the first
C           NS positions of the working vector WK must contain the
C           individual values  of the element  functions at X, and the
C           NVAR(NS+1)-1 following  positions in WK must contain the
C           gradients of the element functions. This option must be used
C           only when the gradients of all element functions are
C           analytically available.  It is not altered by the routine.
C
C    FLOWBD is a DOUBLE PRECISION variable, that must be set by
C           the user to a lower bound on  the optimal value of F(x).
C           For instance, if it is known that F(x) is always positive,
C           it can help convergence to pass this information to the routine.
C           If no bound is known, then a large negative value should be
C           used.  It is not altered by the routine.
C
C    RELPR  is a DOUBLE PRECISION variable, that should be set by
C           the user to the  machine  rounding  error unit, i.e. the
C           smallest  positive {epsilon} such  that {1+ epsilon} is  still
C           distinguishable from 1. The user may set RELPR  to a negative
C           number, and the routine will compute a value for it.  If it is
C           positive on input, then it is not altered by the routine.
C           Otherwise, it contains, on exit, the value computed by the
C           routine.
C
C    DIFGRD is a DOUBLE PRECISION variable, that should be set
C           by the user to the relative step size  that is to be used in the
C           first gradient estimation by differences.  If the user does not
C           know a suitable value, he may set it to a negative number, and
C           the routine will use the square root of RELPR. It is unaltered
C           if positive, and set to the square root of RELPR otherwise.
C
C    RESTRT is a LOGICAL variable that must be set to true by the
C           user if  VE08 is to be restarted and to false otherwise.  In
C           the first case, approximations to the element Hessians  must be
C           stored in the vector WK from position NS+NVAR(NS+1) onwards
C           (see the description of WK).  This preservation of
C           second-order information may be rather efficient. Examples for
C           which it is useful are for multiple  criteria optimization, when
C           one wishes  to reoptimize  a  weighted  sum  of objectives with
C           new weights and for a discretized problem with varying levels of
C           mesh coarseness.  RESTRT is not altered by the routine.
C
C    TESTGX is a LOGICAL variable that must be set to true by the user
C           if he provides analytical gradients in ELFNCT and wishes them
C           to be  tested for accuracy  at the starting point  by comparing
C           their values to difference approximations, and to false
C           otherwise. If RESTRT is true then TESTGX is reset to false
C           and it is as if it were false on entry.  Otherwise, it is not
C           altered by the routine.
C
C    HESDIF is a LOGICAL variable that must be set to true by
C           the user if the initial  Hessian  approximations are  to  be
C           computed  by  differences in the element gradient values, and to
C           false otherwise.  This option is only available if gradients are
C           calculated in ELFNCT.  When this option is not used, the
C           element Hessians are initialized to a correctly scaled multiple
C           of the identity matrix.  If RESTRT is true then HESDIF is
C           reset to false and it is as if it were false on entry.
C           Otherwise HESDIF is not altered by the routine.
C
C    STMAX  is a DOUBLE PRECISION variable, that should be set
C           by the user to the maximum steplength that is allowed during the
C           minimization process.  If the user does not know a suitable
C           value, STMAX may be set to any negative number; the routine
C           will then use a very large value. It is unaltered by the
C           routine.
C
C    STEPL  is a DOUBLE PRECISION array of length 2. The first
C           element STEPL(1) should be set by the user to an  upper  bound
C           on the length of  the first step taken by the method.  If
C           such a bound is unknown, STEPL(1) may be set to any
C           negative number; the routine will then use a large default
C           value. STEPL(1) is not altered by the routine.
C           The second element STEPL(2) need not be set by the user,
C           and on exit will contain the length of the last step taken
C           by the algorithm.
C
C    ISTATE is an INTEGER array of length at least N+NS. It must
C           be set as follows. For I=1,N, ISTATE(I) must be set to -1 if
C           the I-th variable is unconstrained,  to 0 if it is fixed, and
C           to 1 if it is bounded. The values of fixed variables are never
C           changed during the minimization process. (They may be useful,
C           for example, when  dealing with  discretized problems having
C           boundary conditions; the variables on the boundary can then be
C           fixed, but otherwise treated as ordinary variables, which avoids
C           the need for special expressions in  the  elements touching the
C           boundary.)  For I=N+1, ...,N+NS,  ISTATE(I) must be set to 1
C           if the gradient of the (I-N)th element function is supplied
C           by the user, or to -1 if it has to be estimated by differences.
C           (The difference approximations are computed by a modification of
C           the method proposed by (Stewart 1967).  Although efficiently
C           computed, the use of approximated gradients can sometimes
C           deteriorate the overall performance of VE08; analytical
C           gradients are always preferable when available.)  ISTATE is
C           used as workspace, so must be reset on a second entry.
C
C   IPDEVC  is an INTEGER variable, that must be set by the user
C           to the output device unit number for printing of messages.  It
C           is not altered by the routine.
C
C   IPFREQ  is an INTEGER variable, that must be set by the user
C           to specify the frequency of output by the routine VE08:
C           IPFREQ < 0: no output is generated,
C           IPFREQ = 0: output  only  at  first and last iteration,
C           IPFREQ > 0: output every IPFREQ iteration.
C           This argument is not altered by the routine.
C
C   IPWHAT  is an INTEGER variable, that must be set by the user to
C           specify the amount of output generated when output occurs:
C           IPWHAT = 0: iteration count, function value, norm of the
C                       active gradient and number of function calls,
C           IPWHAT = 1: + step selection iterations  and linesearch
C                       parameter,
C           IPWHAT = 2: + vector of variables,
C           IPWHAT = 3: + gradient vector,
C           IPWHAT = 4: + last step of the algorithm,
C           IPWHAT = 5: + element Hessian approximations.
C           This argument is not altered by the routine.
C
C   LWK     is an INTEGER array of length 2. The first element LWK(1)
C           must be set by the user to the length of the working array WK
C           and is not altered. The second element LWK(2) need not be set
C           by the user and contains, on exit, the length of the array
C           needed to store the approximating element matrices.  The length
C           of the workspace WK that  is  required  by  the  routine VE08
C           varies from problem to problem. It essentially depends on the
C           amount  of  storage  needed for the element Hessian
C           approximations.  Let
C
C           NV = NVAR(NS+1)-1,
C           NE = maximum of NVAR(I+1)-NVAR(I), I=1,NS,
C           NQ = maximum of "2*N" and NV,
C
C           then the minimum required storage is
C
C           LWK(1)=NS+NV+4*N+NQ+3*NE+LWK(2)
C
C           The quantity NE in the relation above is the  maximum number
C           of variables appearing in any element function.
C
C   WK      is a DOUBLE PRECISION working array of length LWK(1).
C           On sucessful termination, it contains a list of  the  element
C           function values, gradients and approximating Hessians and is
C           organized as follows : WK(I) contains, for
C
C           I=1,...,NS, the values of {f (x)}, i = I and X in X.
C                                       i
C           I=NS+1,...,NS+NVAR(NS+1)-1,  the NS successive element
C             gradient vectors,  one after the other,
C           I=NS+NVAR(NS+1),...,NS+NVAR(NS+1)+LWK(2)-1,  the lower
C             triangular parts of the element Hessian approximations,
C             stored one after the other in row-wise fashion.
C
C   INFO    is an INTEGER variable. It need not be set by the user
C           and contains, on exit under an error condition, information
C           about the error (see below for further details).
C
C   IFLAG   is an INTEGER variable, that need not be set by the
C           user and contains, on exit, the exit condition of the routine.
C           If this flag is greater or equal to 11, an error has been
C           detected by the routine (see below for further details).
C
C
C   Subroutine ELFNCT
C   -----------------
C
C   We now describe the calling sequence of the routine that the
C   user must provide to evaluate the element functions (and
C   possibly their gradients).
C
C   It  is  worth mentioning that the points at which element
C   functions are computed are almost always feasible, that is they
C   satisfy whatever bounds there are.  The only cases when they
C   may not is when gradients are to be estimated by differences;
C   in this case, the function value may be required at some points
C   that fail to satisfy one or more bounds by a small amount.
C
C   The routine has the following argument list:
C
C   SUBROUTINE ELFNCT(K,X,FX,GX,NDIMK,NS,JFLAG,FMAX,FNOISE)
C
C   K      is an INTEGER variable, that contains the index of the
C          element function to be computed.  It must be left unchanged by
C          the routine.
C
C   X      is a DOUBLE PRECISION array of length NDIMK, that
C          contains the values of the variables of element K,  in the
C          order in  which  they appear  in  the vector INVAR. It must be
C          left unchanged by the routine.
C
C   FX     is a DOUBLE PRECISION variable, that must be set by
C          the routine to the value of the element function at the
C          point X.
C
C   GX     is a DOUBLE PRECISION array of length NDIMK. If
C          JFLAG has value 2, the routine must set GX to the components
C
C                 df
C                   k
C                 ---
C                 dx
C                   k
C
C          of the gradient of the element function at the point X.
C          If JFLAG has other values, GX need not be set.
C
C   NDIMK  is an INTEGER variable, that contains the number of
C          variables in element K. It is equal to NVAR(K+1) - NVAR(K)
C          and must be left unchanged by the routine.
C
C   NS     is an INTEGER variable, that contains the total number
C          of elements in the problem. It must be left unchanged by the
C          routine.
C
C   JFLAG  is an INTEGER variable, that contains a code to
C          describe  the information  expected on return from the routine
C          ELFNCT:
C          JFLAG = 1: function value is needed,
C          JFLAG = 2: gradient and  function values are needed.
C          JFLAG < 0: if ELFNCT sets a negative value in JFLAG,
C                     VE08 will terminate abnormally, with exit
C                     condition 25 and INFO parameter equal to JFLAG.
C          JFLAG = 0: if ELFNCT sets JFLAG to 0, no further calls of
C                     ELFNCT will be made to complete the current
C                     evaluation of F and the steplength will be
C                     halved; this can be useful if F value is already
C                     too large  compared to FMAX, and if the user
C                     does not want to estimate the remaining  element
C                     functions because of cost.
C
C          If  none  of  these events  is desired, JFLAG should be left
C          unchanged.  The  possibility of tampering with the linesearch
C          using a zero return value for JFLAG should be used with caution,
C          especially when no bounds  are  imposed  and analytical
C          gradients available, as it may reduce the overall efficiency.
C
C   FMAX   is a DOUBLE PRECISION variable, that contains the
C          maximum function  value  that  will be accepted by the
C          algorithm as satisfying the current linesearch criteria. It must
C          be left unchanged by the routine.
C
C   FNOISE is a DOUBLE PRECISION variable that the routine must
C          set to an estimate of the noise (roundoff) present in the
C          computation of the element function and element gradient.
C
C   An example of the use of ELFNCT is shown below.
C
C
C   Subroutine RANGE
C   ----------------
C
C   We now turn to describing the  way  in  which  the  user can
C   pass  to  the algorithm information  about a linear
C   transformation that reduces the number of independent variables
C   upon which each element function depends.  For example the
C   function
C
C         2             2
C        x  + ( x  - x )
C         1      2    3
C
C   depends on the two variables y  = x   and y  = x  - x .
C                                 1    1       2    2    3
C   In such cases, the convergence of the algorithm may be substantially
C   enhanced. For each element function k, the user must  express
C   the dependence in terms of a full-rank matrix U , with fewer rows
C                                                  k
C   than columns, that maps the variables x , i = INVAR(NVAR(k)) up
C                                          i
C   to INVAR(NVAR(k+1)-1), that are involved in element function k
C   to the smaller set. In the example of this paragraph
C
C             ( 1   0   0 )
C        U  = ( 0   1  -1 )
C         k
C
C   In such cases, the Hessian matrix can be held as
C
C               T
C        H  =  U  C  U
C         k     k  k  k
C
C   where C is a square symmetric matrix of order the number of
C          k
C   rows in U .
C            k
C
C   The  user should therefore provide a routine called RANGE,
C   that is called by VE08, and has the following argument list:
C
C   SUBROUTINE RANGE(K,MODE,W1,W2,NDIMK,NSUBK,NS)
C
C   K       is an INTEGER variable, that contains the index of the
C           element function. It must be left unchanged by the routine.
C
C   MODE    is an INTEGER variable, that contains a code for
C           the work to be accomplished by the routine :
C           MODE=1: the user should  provide the  vector w2
C                   such that
C
C                            U w1 = w2.
C                             k
C           MODE=2: the user should  provide the  vector w2
C                   with the smallest norm such that
C
C                            U w2 = w1.
C                             k
C
C                   Equivalently, w2 is the result of the
C                   application of the Moore-Penrose generalized
C                   inverse of U  to w1.
C                               k
C           MODE=3: the user should  provide the  vector w2
C                   such that
C
C                             T
C                            U w1 = w2.
C                             k
C
C           MODE=4: the user should  provide the  vector w2
C                   such that
C
C                             T
C                            U w2 = w1.
C                             k
C
C           MODE must be left unchanged by the routine.
C
C   W1      is a DOUBLE PRECISION array containing the input vector w1.
C           Itmust be left unchanged by the routine.
C
C   W2      is a DOUBLE PRECISION array that must be set by the
C           routine to the result vector w2, related to U  and w1
C                                                        k
C           as required by the argument MODE.
C           When NSUBK=NDIMK, W2 must be set equal to W1.
C
C   NDIMK   is an INTEGER variable, containing the number of
C           variables in the element. It must be left unchanged by the
C           routine.
C
C   NSUBK   is an INTEGER variable that must be set by RANGE to
C           the number of rows in U.
C
C   NS      is an INTEGER variable, containing the number of elements
C           of the problem. It must be left unchanged by the routine.
C
C   If the user does not know such information it is always
C   possible  to use the following empty routine RANGE:
C
C       SUBROUTINE RANGE(K,MODE,W1,W2,NDIMK,NSUBK,NS)
C       DOUBLE PRECISION W1(1),W2(1)
C       NSUBK=NDIMK
C       DO 1 I=1,NDIMK
C           W2(I)=W1(I)
C   1   CONTINUE
C       RETURN
C       END
C
C   The use of this  empty  routine  is  nevertheless  not
C   recommended, especially when  the gradients  are  not available
C   analytically,  or  when  the option HESDIF=.FALSE.  is  used in
C   VE08.  It may, in these cases, result in much slower
C   convergence, or possibly in no convergence at all.
C
C
C   Functions XLOWER and XUPPER
C   ---------------------------
C
C   The fact that the I-th variable of the problem is bounded
C   is signalled to the routine  VE08  by  ISTATE(I) being equal
C   to 1. VE08 will then need to known the actual values of the
C   bounds on this variable. This information is provided by two
C   user-supplied double precision functions XLOWER(I) and XUPPER(I).
C
C   XLOWER(I)  returns  the value of the lower bound on the
C   I-th variable, while XUPPER(I) returns the  value  of  the
C   upper  bound  on  this  variable.  Their specification is as
C   follows:
C
C   DOUBLE PRECISION FUNCTION XLOWER(I)
C   DOUBLE PRECISION FUNCTION XUPPER(I)
C
C   Remarks:
C
C   1. The  functions XLOWER and XUPPER are only called for
C   arguments I such that ISTATE(I)=1, i.e.  they are  only
C   called  for  bounded variables.
C
C   2. When the I-th variable is bounded, both XLOWER and
C   XUPPER are called for  this variable : each bounded
C   variable must be bounded below and above. If the problem
C   only incorporates one  of  these  bounds,  the other  should
C   be  supplied  using  a  very  small  or a very large
C   constant.
C
C   3. It is more efficient to declare  a  variable  "fixed"
C   (ISTATE(I)=0) than to constrain it by equal lower and
C   upper bounds.
C
C
C   Error Messages
C   --------------
C
C   When  the  exit condition of VE08, i.e. IFLAG, is greater
C   than 10, this means that it has detected something going wrong
C   in the computation.  The routine is terminated with IFLAG set
C   to an appropriate  error  index  and  INFO  to a (sometimes)
C   meaningful value. A complete list of these errors, together with
C   the associated value of IFLAG and INFO is given below.
C
C   IFLAG=11: The value of variable N is not positive. INFO = N.
C   IFLAG=12: The machine  precision  constant RELPR   is  out of
C             range.  INFO is meaningless.
C   IFLAG=13: The last call to ELFNCT returned a negative
C             value for FNOISE.  INFO is meaningless.
C   IFLAG=14: The number of element functions NS is not positive.
C             INFO=NS
C   IFLAG=15: The starting position for the internal variables
C             of the {k}th element NVAR(k) is not positive.
C             INFO = {k}.
C   IFLAG=16: The number of variables internal to the k-th
C             element is not positive.  INFO = k.
C   IFLAG=17: NSUBK {GT} NDIMK on return from RANGE for
C             element k.  INFO = k.
C   IFLAG=18: The maximum number of iterations has been
C             reached. INFO = maximum number of iterations.
C   IFLAG=19: The initial  status of the k-th element
C             function is incorrect:  the only allowed  values
C             for ISTATE(N+k) are 1 (derivatives available)
C             or  -1  (derivatives not available).  INFO = k.
C   IFLAG=20: The initial status of the I-th variable is
C             incorrect because the  only allowed  values for
C             ISTATE(I) are 1 (bounded), 0 (fixed), or -1 (free).
C             INFO=I.
C   IFLAG=21: The accumulated dimension of the elements,
C             NVAR(NS+1)-1, is not positive.  INFO =  NVAR(NS+1)-1.
C   IFLAG=22: The index of the I-th variable that appears  in
C             the vector  INVAR is not  positive, or greater
C             than N.  INFO = I.
C   IFLAG=23: The total  available  work  space provided  in
C             the vector WK, of length LWK(1), is too small.
C             INFO = minimum necessary length of the vector WK.
C   IFLAG=24: The bounds on the I-th variable are inconsistent.
C             INFO = I.
C   IFLAG=25: The user has  stopped  the  minimization
C             procedure by setting  the element function  flag
C             to a negative value.  INFO = value of the
C             element function flag.
C   IFLAG=26: {F(<x>)} is unbounded because the I-th variable
C             appears linearly and is unbounded. INFO = I.
C   IFLAG=27: The directional derivative at  the  beginning of a
C             linesearch  is  non-negative.  This  can  be  caused
C             by  an incorrect analytical gradient.  INFO is meaningless.
C   IFLAG=28: The linesearch step became too small after I
C             trials. This can  be  caused  by  an  incorrect
C             analytical gradient or a too noisy function or an
C             exceptionally non-linear function. (This error is
C             controlled by the variable MAXLS, representing  the
C             maximum number of linesearch trials, which is set at
C             the beginning of the code of VE08>).  This can also
C             be caused near the solution,  when the accuracy
C             requirement for termination is too high. In this
C             case, further progress of the algorithm  seems
C             unlikely on this machine.  INFO = I.
C   IFLAG=29: The algorithm  was stopped  because the
C             difference between two successive function values
C             along the current search direction is
C             insignificant compared to the noise on these
C             function values.  This type of exit usually
C             occurs quite close to the solution, and is mainly
C             due to a too high accuracy requirement for
C             termination. In this case, further progress of
C             the algorithm on this machine is unlikely. INFO
C             is meaningless.
C   IFLAG=30: An error was detected when scaling the I-th
C             initial element Hessian matrix at the first step. This
C             is usually caused by an incorrect gradient, or by
C             incorrect problem structure specifications. INFO = I.
C   IFLAG=31: The last call to the routine VE08SD (see below)
C             returned a value for IFLAG outside the range 0 .LE.
C             IFLAG .LE. 10. INFO = returned value of IFLAG.
C   IFLAG=32: The check on the correctness of the  analytical
C             gradient at the  starting point, has discovered a
C             possible error in this computation.  INFO is
C             meaningless.
C   IFLAG=33: The lower bound on the  objective function  is  not
C             consistent  with the function value  at the starting
C             point.  INFO is meaningless.
C   IFLAG=34: The parameter IPWHAT, which  controls the amount
C             of output required by the user, is incorrect
C             (outside the range 0 .LE. IPWHAT .LE. 5). INFO = IPWHAT.
C   IFLAG=35: The routine  stopped  because  the norm  of  the
C             computed search direction is  smaller than the
C             given machine precision  times the  size  of the
C             current approximate solution.  This error
C             usually occurs when too much accuracy is required
C             by the user for termination.  INFO = iteration
C             number when VE08 was stopped.
C   IFLAG=36: The routine is stopped because 5 successive very
C             large  steps ({GT_0.999 times STMAX})  were
C             taken.  This is interpreted as a sign  of
C             divergence of the algorithm. This usually happens
C             when the problem's minimum is at infinity.
C             INFO = iteration number when VE08 was stopped.
C
C   The  values  of IFLAG between 1 and 10 are left free for
C   description of normal termination (see the description  of  the
C   routine  VE08SD below).
C
C   Termination Criterion
C   ---------------------
C
C   One of the features of VE08AD is to allow the interested
C   user to  provide  a problem-suited stopping  criterion.  There
C   may  be  cases where the classical tests on the Euclidean length
C   of the gradient are rather  inadequate.  One may wish to use
C   another norm, or another stopping rule altogether. This can be
C   done  by  replacing  the  routine VE08SD  by another routine
C   VE08SD incorporating the user's stopping criterion.
C
C   The routine VE08SD has the following argument list:
C
C   SUBROUTINE VE08SD(EPSIL,NIT,NGR,DNGR,ITMAX,NFMAX,GXN,NEGCUR,
C                     DIFEST,X,FX,GX,DX,DF,N,INFO,IFLAG)
C
C   EPSIL  is a DOUBLE PRECISION variable, containing a measure
C          of the accuracy that is required by the user to terminate the
C          minimization method successfully.  It is the  same value  as
C          that passed to VE08 by the user (see above).  It must not be
C          altered by VE08SD.
C
C   NIT    is an INTEGER variable, that contains the number of
C          iterations already performed by VE08.  It must not be altered
C          by VE08SD.
C
C   NGR    is an INTEGER variable, that contains the number of
C          calls already made to the routine ELFNCT.  It must not be
C          altered by VE08SD.
C
C   DNGR   is a DOUBLE PRECISION variable, containing the value
C          of NGR divided by NS, i.e. a number representing the total
C          number of calls to the complete objective function.  It must not
C          be altered by VE08SD.
C
C   ITMAX  is an INTEGER variable, containing the maximum number
C          of iterations of VE08 allowed.  It must not be altered by
C          VE08SD.
C
C   NFMAX  is an INTEGER variable, containing the maximum number
C          of  calls to  the complete  objective function allowed.  It
C          must not be altered by VE08SD.
C
C   GXN    is a DOUBLE PRECISION variable, containing the
C          Euclidean   norm of  the   orthonormal projection of the
C          gradient  onto the feasible region.  It must not be altered by
C          VE08SD.
C
C   NEGCUR is a LOGICAL variable, whose value is true if and
C          only if  some  direction  of   negative curvature was detected
C          on the current overall quadratic  approximation  to  the
C          objective function.  It must not be altered by VE08SD.
C
C   DIFEST is a LOGICAL variable, whose value is true if and
C          only if some of the element gradients are computed by
C          differences.  It must not be altered by VE08SD.
C
C   X      is a DOUBLE PRECISION array of length N, containing  the
C          current best  point  found by the routine VE08.  It must not be
C          altered by VE08SD.
C
C   FX     is a DOUBLE PRECISION variable, containing the value of the
C          objective function at X.  It must not be altered by VE08SD.
C
C   GX     is a DOUBLE PRECISION array of length N, containing
C          the overall gradient of the overall objective function at X.
C          It must not be altered by VE08SD.
C
C   DX     is a DOUBLE PRECISION variable, containing the
C          Euclidean  length of the  last step taken by the routine VE08.
C          It must not be altered by VE08SD.
C
C   DF     is a DOUBLE PRECISION variable, containing the  last improvement
C          in objective  function values realized by VE08.  It must
C          not be altered by VE08SD.
C
C   N      is an INTEGER variable, that contains the number of
C          variables of the problem.  It must not be altered by VE08SD.
C
C   INFO   is an INTEGER variable, that is meaningless on input.
C          The output value is only relevant if VE08 is terminated by a
C          nonzero output value of IFLAG. In this case, the argument
C          INFO of VE08 will return this value to the user.
C
C   IFLAG  is an INTEGER variable, that is meaningless on input.
C          If if is  decided  to  continue  the  minimization process, the
C          value  0  should be returned in IFLAG. If it is decided that
C          the minimization is complete, a value in the range 1 .LE. IFLAG
C          .LE. 10 should  be returned.  A return value outside the range
C          0 .LE. IFLAG .LE. 10 will cause abnormal termination  of VE08
C          with error message 31.
C
C   The default routine supplied with VE08 tests
C   1. if the Euclidean length of the gradient is smaller than
C      EPSIL when DIFEST  is  false,  or is the maximum of 10**(-4)
C      and EPSIL when DIFEST is true, and if the
C      quadratic model looks convex (normal successful exit)
C      (IFLAG set to 1),
C   2. or  if  the  maximum  number  of  function  calls  has
C      been exceeded (IFLAG set to 2),
C   3. or if both the length of the last step and the last
C      improvement  in the function values are insignificant
C      (IFLAG set to 3).
C
C   If none of these occur, then IFLAG is set to 0.
C
C
C   Linesearch Step
C   ---------------
C
C   Another  interesting  feature  of  VE08 is to allow the user
C   with some knowledge of his problem to verify if the proposed
C   value of the step along  the current search direction is
C   plausible, and to modify it, if it is not the case.  This
C   verification  can be based on some relevant quantities that are
C   passed to the user by VE08.
C
C   This verification takes the form of a routine called
C   VE08TD, whose  argument list is as follows:
C
C   SUBROUTINE VE08TD(A,X,FX,GXS,SNORM,S,N)
C
C   A      is a DOUBLE PRECISION variable, containing the steplength
C          proposed by VE08.  On output (i.e. when control is returned to
C          VE08), it may be set to a new and  more  realistic  stepsize
C          for minimizing  the objective  function starting from X in
C          the direction S, i.e.  A should be such that F( X + A *S )
C          is close to its minimum with respect to A.
C
C   X      is a DOUBLE PRECISION array of length N containing the base
C          point for  the  current linesearch. It must not be altered by
C          VE08TD.
C
C   FX     is a DOUBLE PRECISION variable, containing the value
C          of the objective function at X.  It must not be altered by
C          VE08TD.
C
C   GXS    is a DOUBLE PRECISION variable, containing the
C          directional derivative  at the base point in X  along the
C          direction S.  It must not be altered by VE08TD.
C
C   SNORM  is a DOUBLE PRECISION variable, containing the
C          Euclidean  length of the search direction S.  It must not be
C          altered by VE08TD.
C
C   S      is a DOUBLE PRECISION array of length N containing
C          the current search direction.  It must not be altered by
C          VE08TD.
C
C   N      is an INTEGER variable, containing the number of
C          variables of the problem.  It must not be altered by VE08TD.
C
C   The default routine VE08TD supplied with VE08 is just the empty routine:
C
C         SUBROUTINE VE08TD(A,X,FX,GSX,SNORM,S,N)
C         DOUBLE PRECISION A,X(1),FX,GSX,SNORM,S(1)
C         RETURN
C         END
C
C   It  should  be replaced by a more complex routine VE08TD only
C   if the user feels his knowledge of the problem is sufficient to
C   predict rather accurately  the minimum of the objective
C   function along any search direction.
C
C
C *********************************************************************
C *                                                                   *
C *                           GENERAL                                 *
C *                                                                   *
C *********************************************************************
C
C   COMMON:       None.
C   WORKSPACE:    Provided by the user (see argument WK).
C   USES:         VE08BD, VE08CD, VE08DD, ... VE08TD; ELFNCT, RANGE,
C                 XUPPER, XLOWER.
C   I/O:          No input; output on device number IPDEVC.
C   RESTRICTIONS: N > 0, NS > 0.
C   PORTABILITY:  Fortran 77.
C
C   METHOD
C   ------
C
C   The method that is implemented by  routine  VE08 is  a
C   partitioned quasi-Newton  algorithm, as decribed in (Griewank
C   & Toint 1982a), and whose convergence analysis for the convex
C   case can  be  found  in (Griewank & Toint 1982b).  The theory
C   for the  non-convex decomposition is still an open question.
C
C   The  main  idea  is  that  a  collection of small matrices
C   approximating the Hessian matrices of each f   is used and
C                                               k
C   updated at  every  iteration  using the BFGS or rank 1 updates,
C   depending on the curvature properties of f .
C                                             k
C   The  step  is  determined  by  a trust-region approach that
C   uses a truncated conjugate-gradient algorithm, followed by a
C   very weak  linesearch.  The  trust-region size  is  then
C   augmented  if  the  reduction obtained in the objective function
C   is reasonable when compared with the predicted reduction,  and
C   reduced otherwise.
C
C   The strategy for treating bound constraints is based on the
C   usual projection device. For a more detailed description, see
C   (Bertsekas 1982).
C
C   ACKNOWLEDGEMENTS
C   ----------------
C
C   The author of the routine wishes to acknowledge the useful
C   discussions with A. Griewank, and the most kind help of J.K. Reid
C   and I.S. Duff in setting up this specification sheet and
C   modifying the routines for the Harwell Subroutine Library format.
C
C   REFERENCES
C   ----------
C
C   Bertsekas,D.P. 1982.
C   Projected Newton Methods for Optimization Problems with
C   Simple Constraints.
C   SIAM Journal of Control and Optimization 20(2):221-246.
C
C   Griewank, A. and Ph.L. Toint. 1982a.
C   Partitioned Variable Metric Updates for Large Structured
C   Optimization Problems.
C   Numerische Mathematik (39):119-137.
C
C   Griewank, A. and Ph.L. Toint. 1982b.
C   Local Convergence Analysis for Partitioned Quasi-Newton Updates.
C   Numerische Mathematik (39):429-448.
C
C   Griewank, A. and Ph.L. Toint. 1982c.
C   On the Unconstrained  Optimization of Partially Separable Functions.
C   In M.J.D. Powell (editor), Nonlinear Optimization 1981.
C   Academic Press, New-York.
C
C   Stewart, G.W. 1967.
C   A Modification of Davidon's Minimization Method to Accept
C   Difference Approximations of Derivatives.
C    Journal of the ACM 14.
C
C *********************************************************************
C *                                                                   *
C *                           EXAMPLE                                 *
C *                                                                   *
C *********************************************************************
C
C   We now consider the small example  problem,
C
C
C                ---------------------       ---------------------
C              /      2             2       /     2             2
C   minimize  V  1 + x  + ( x  - x )    +  V 1 + x  + ( x  - x )
C                     1      2    3               2      3    4
C
C   subject to the bound   x  .LE. -1.
C                           1
C
C   The solution to this problem is at the point (-1,0,0,0)
C   and the optimal function value is {1+ SQRT {2}}.
C
C   This function has four variables and two elements, namely
C
C       -----------------------
C      /       2             2
C     V   1 + x  + ( x  - x )
C              1      2    3
C
C   and
C
C       -----------------------
C      /       2             2
C     V   1 + x  + ( x  - x )
C              2      3    4
C
C   We  can  then set N=4 and NS=2. The first element
C   involves variables 1, 2 and 3 while the second element
C   involves variables 2, 3  and  4; we now build the
C   vector INVAR corresponding to the problem :
C
C   I           1   2   3   4   5   6
C   INVAR(I)    1   2   3   2   3   4
C              <-- elt 1--><--elt 2-->
C
C   In  this vector, we now locate the position of the first
C   variable of each element, and build the vector NVAR as
C   follows:
C
C   I           1   2   3
C   NVAR(I)     1   4   7
C
C   Observe that NVAR(NS+1) is set to the total length of
C   INVAR plus 1,  as required.
C
C   The  first  variable is bounded, so we set ISTATE(1) to
C   1, while the other  variables  are  unbounded, which  imposes
C   ISTATE(I)=-1  for I=2,4.   Moreover, the  analytical
C   gradients  of  both  element functions are available, so that
C   the last 2 components of ISTATE are set to 1. We therefore
C   obtain
C
C   I           1   2   3   4   5   6
C   ISTATE(I)   1  -1  -1  -1   1   1
C
C   The minimum length required for the workspace WK, i.e.
C   LWK is given by
C
C   LWK = 2+6+4*4+8+3*3+6 = 47
C
C   This  count  is  obviously  much  more favourable when the
C   dimension increases and when the element Hessians can  be
C   stored  in  compact form.
C
C   We now give the  routine ELFNCT that would describe our
C   simple example problem:
C
C           SUBROUTINE ELFNCT(K,X,FX,GX,NDIMK,NS,JFLAG,FMAX,FNOISE)
C           DOUBLE PRECISION X(NDIMK),FX,GX(NDIMK),FMAX,FNOISE,TEMP
C           TEMP=X(2)-X(3)
C           FX=DSQRT(1.0D0+X(1)**2+TEMP**2)
C           FNOISE=1.0D-25*FX
C           IF(JFLAG.LT.2)RETURN
C           GX(1)=X(1)/FX
C           GX(2)=TEMP/FX
C           GX(3)=-GX(2)
C           GMAX=DMAX1(DABS(GX(1)),DABS(GX(2)))
C           FNOISE=DMAX1(FNOISE,1.0D-25*GMAX)
C           RETURN
C           END
C
C   We now wish to write down the routine RANGE associated with
C   our example.  First, we observe that both  element functions
C   may be reduced to dependence on two variables with the matrix
C
C          ( 1  0  0 )
C      U = (         )
C       k  ( 0  1 -1 )
C
C   As  a  consequence,  it  is  easy  to  verify  that the
C   following routine RANGE satisfies all the above requirements
C
C          SUBROUTINE RANGE(K,MODE,W1,W2,NDIMK,NSUBK,NS)
C          DOUBLE PRECISION W1(1),W2(1
C          NSUBK=2
C          GO TO (1,2,3,4),MODE
C   C
C   C      1) U*w1=w2
C   C
C        1 W2(1)=W1(1)
C          W2(2)=W1(2)-W1(3)
C          RETURN
C   C
C   C      2) U*w2=w1
C   C
C        2 W2(1)=W1(1)
C          W2(2)=0.5*W1(2)
C          W2(3)=-W2(2)
C          RETURN
C   C
C   C   3) U'*w1=w2
C   C
C        3 W2(1)=W1(1)
C          W2(2)=W1(2)
C          W2(3)=-W1(2)
C          RETURN
C   C
C   C   4) U'*w2=w1
C   C
C        4 W2(1)=W1(1)
C          W2(2)=W1(2)
C          RETURN
C          END
C
C   As one can see, writing routine RANGE is not difficult.
C
C   The last thing we have to set up for our example is the bound
C   specification.  Only the first variable is bounded, so we do
C   not have  to distinguish between  them for finding the bounds.
C   Moreover, it is only bounded above, so we have to build an
C   artificial lower bound. This gives the following functions :
C
C          DOUBLE PRECISION FUNCTION XLOWER(I)
C          XLOWER=-1.0D35
C          RETURN
C          END
C
C   and
C
C          DOUBLE PRECISION FUNCTION XUPPER(I)
C          XUPPER=-1.0D0
C          RETURN
C          END
C
C   This completes the supply of information to VE08.  We now
C   consider a restart of VE08, after some previous computation.
C   Assume  that after solving the problem we wish to solve another
C   which is the same except that the first element function is
C   scaled by 0.9. This will require the stored Hessian
C   approximations to be rescaled.  The components of WK are
C
C
C   WK(1)             f
C                      1
C   WK(2)             f
C                      2
C   WK(3) to WK(5)    g
C                      1
C   WK(6) to WK(8)    g
C                      2
C   WK(9) to WK(11)   C     (The Hessians are approximated by
C                      1           T
C   WK(12) to WK(14)  C           U  C  U  , see above )
C                      2           k  k  k
C
C   The sequence of instructions preceeding the restart call to
C   VE08 is now as follows :
C
C   C     RESCALE THE APPROXIMATE HESSIANS
C   C
C         DO 10 I=9,11
C         WK(I)=WK(I)*0.9
C      10 CONTINUE
C   C
C   C     RESET THE PARAMETERS OF VE08AD
C   C
C         RESTRT=.TRUE.
C   C
C   C     RESTART CALL TO VE08AD
C   C
C         ...
C
C
C****************************************************************************
C****************************************************************************
C****************************************************************************
C
C    DATA TYPE DECLARATIONS
C    ----------------------
C
      DOUBLE PRECISION A, ABMAX, ABMIN, ALMAX, ALMIN, B, BBOUND, BETA,
     * BND, BOLD, C, CC, CURV, DBIG, DD, DECR, DECR0, DECR1, DECR2,
     * DELDIV, DELTAM, DF, DIFGRD, DII, DNGR, DSMALL, DTOL, DX, DXN,
     * DXN1, DXN1P, DXN2, EBOUND, EPSACT, EPSIL, EPSIZE,
     * EPSQRT, EPSTEP, FA, FACT, FATMAX, FATMIN, FB, FBOLD, FIMAX,
     * FLOWBD, FMAX, FN, FNIMAX, FNOISE, FX, FXI, FXOLD, GAM, GAMHAT,
     * GATMAX, GATMIN, GMAXI, GNOIS, GNOISE,
     * GSA, GSB, GSBOLD, GSINI, GSOUTI, GS0, GTOL, GXMAX, GXNB,
     * PRERDI, PRERED, RAPGS, RAPRED, RELPR, RESN2, RESOL2, RS2OLD,
     * STEP, STMAX, TEMP, TEMP2, TEST, TOLCNT, UBOUND, XD, XLOWER,
     * XNEW, XNOISE, XSIZE, XU, XUPPER, XX, WKIFXI
C
      LOGICAL NEGCUR, FKNOWN, BOUNDS, BEND, TESTGX, LTEMP,
     * DIFEST, RESTRT, GRADAV, HESDIF, BACTIV
C
C    DIMENSION STATEMENTS
C    --------------------
C
      DOUBLE PRECISION STEPL(2), X(1), WK(1)
      INTEGER INVAR(1), NVAR(1), ISTATE(1), LWK(2), NGR(2), NIT(2)
C
      EXTERNAL ELFNCT,RANGE,XUPPER,XLOWER
C
C    SOME IMPLEMENTATION REMARKS
C    ---------------------------
C
C       THE ROUTINE ASSUMES THAT THE RESULT OF AN UNDERFLOWED
C    OPERATION IS SET TO ZERO AND THE CALCULATION CONTINUED.
C
C       THE CONSTANT DBIG IS SET TO A VERY LARGE NUMBER STILL
C    REPRESENTABLE IN MACHINE WITHOUT OVERFLOW. IT IS USED IN THE
C    PROCEDURE AS THE VALUE OF +INFINITY.
C
C       THE FOLLOWING VALUE IS ADEQUATE FOR DEC2060
C                                           DIGITAL VAX
C              (IN DOUBLE PRECISION )
C
      DATA DBIG /1.0D+36/
C
C
C***********************************************************************
C
C                           INITIALIZATION.
C
C***********************************************************************
C
C
C   SET ITERATION COUNT TO ZERO
C   ---------------------------
C
      ITMAX = NIT(1)
      NIT(2) = -1
C
C   SET FUNCTION CALLS COUNTS TO ZERO
C   ---------------------------------
C
      NGRMAX = NGR(1)
      NGR(2) = 0
C
C   TEST POSITIVITY OF THE DIMENSION (N)
C   ------------------------------------
C
      IF (N.GT.0) GO TO 10
      INFO = N
      IFLAG = 11
      GO TO 1090
C
C   SET SOME MACHINE DEPENDENT CONSTANTS FOR STEWART'S ALGORITHM FOR
C   ----------------------------------------------------------------
C       ESTIMATING THE GRADIENT BY DIFFERENCES
C       --------------------------------------
C
C   1) MACHINE ROUNDING ERROR UNIT
C
   10 CONTINUE
      IF (RELPR.GT.0.0D0) GO TO 30
      RELPR = 0.125D0
   20 CONTINUE
      RELPR = 0.5D0*RELPR
      TEST = 1.0D0 + RELPR
      IF (TEST.GT.1.0D0) GO TO 20
      RELPR = RELPR + RELPR
   30 CONTINUE
      IF (RELPR.LT.1.0D0) GO TO 40
      INFO = IDINT(RELPR)
      IFLAG = 12
      GO TO 1090
   40 CONTINUE
      EPSQRT = DSQRT(RELPR)
      DSMALL = 1000.0D0/(RELPR*DBIG)
C
C   2) NOISE ON THE NORM OF THE CURRENT POINT
C
      XNOISE = 2.0*FLOAT(N)*RELPR
C
C   3) TOLERANCE ON THE ROUNDING ERROR ABOVE WHICH ONE SWITCHES TO
C       CENTRAL DIFFERENCES
C
      TOLCNT = 2.0D-2
C
C   MAXIMUM NUMBER OF ITERATIONS IN STEP STRATEGY.
C   ----------------------------------------------
C
      MAXSTE = N + 2
C
C   UNIFORM BOUND ON THE STEP LENGTH AND FIRST STEP SIZE
C   ----------------------------------------------------
C
      DELTAM = STMAX
      IF (DELTAM.LE.0.0) DELTAM = DSQRT(DBIG)
      STEPL(2) = STEPL(1)
      IF (STEPL(1).LE.0.0) STEPL(2) = 0.1*DELTAM
C
C   INITIALIZE THE TOLERANCE FOR A DIAGONAL ELEMENT TO BE CONSIDERED
C   ----------------------------------------------------------------
C       POSITIVE ENOUGH FOR USE IN THE PRECONDITIONING
C       ----------------------------------------------
C
      DTOL = 1.0D-10
C
C   SQUARE OF THE ACCURACY ON THE WEIGHTED RESIDUAL THAT IS REQUIRED FOR
C   --------------------------------------------------------------------
C       COMPLETION OF A FULL QUASI-NEWTON STEP (LINEAR SYSTEM)
C       ------------------------------------------------------
C
      EPSTEP = 0.01D0
C
C   INITIALIZE THE STEPSIZE FOR THE DIFFERENCE ESTIMATION OF THE FIRST
C   ------------------------------------------------------------------
C       GRADIENT
C       --------
C
      IF (DIFGRD.LE.0.0) DIFGRD = EPSQRT
C
C   INITIALIZE THE ACCURACY ABOVE WHICH A POSSIBLE ERROR IN THE
C   -----------------------------------------------------------
C       COMPUTATION OF THE ANALYTICAL GRADIENT IS DETECTED
C       --------------------------------------------------
C
      GTOL = 100.0*DIFGRD
C
C   INITIALIZE THE "DANGEROUS INDICES" TOLERANCE FOR THE BOUNDS
C   -----------------------------------------------------------
C
      IF (EBOUND.LE.0.0) EBOUND = 1.0D-5
C
C   SET THE STEP STRATEGY COUNT TO ZERO
C   -----------------------------------
C
      NSTEPS = 0
C
C   SET THE QUANTITIES THAT WILL BE USED IN TESTING FOR DIVERGENCE
C   --------------------------------------------------------------
C
C   1) LOWER BOUND THAT DEFINES A VERY LARGE STEP
C
      DELDIV = 0.999*DELTAM
C
C   2) NUMBER OF VERY LARGE STEPS ALLOWED BEFORE DIVERGENCE IS
C       IDENTIFIED
C
      IDIVX = 5
C
C   3) SET THE CURRENT NUMBER OF VERY LARGE STEPS TO ZERO
C
      IDIV = 0
C
C   MAXIMUM NUMBER OF FUNCTION CALLS IN ONE LINESEARCH.
C   ---------------------------------------------------
C
      MAXLS = 15
C
C   MAXIMUM NUMBER OF FREE TRIALS FOR THE LINE SEARCH IN THE PRESENCE OF
C   --------------------------------------------------------------------
C       BOUNDS
C       ------
C
      NRLS = 5
C
C   SET THE ANGULAR DECREASE THAT SHOULD BE ACHEIVED IN THE LINE SEARCH
C   -------------------------------------------------------------------
C
      DECR = 0.005
C
C   SET THE NEGATIVE CURVATURE INDICATOR TO FALSE
C   ---------------------------------------------
C
      NEGCUR = .FALSE.
C
C   AVOID TESTING THE ANALYTICAL GRADIENT AND ESTIMATING THE INITIAL
C   ----------------------------------------------------------------
C       HESSIANS BY DIFFERENCES IF THIS CALL IS A RESTART
C       -------------------------------------------------
C
      TESTGX = TESTGX .AND. .NOT.RESTRT
      HESDIF = HESDIF .AND. .NOT.RESTRT
C
C   PRESET THE INDICES FOR THE USE OF THE USER'S ROUTINE RANGE
C   ----------------------------------------------------------
C
      IUB = 1
C
C   SET THE ERROR FLAGS TO THE "EVERYTHING OK" POSITION
C   ---------------------------------------------------
C
      IFLAG = 0
      INFO = 0
C
C
C***********************************************************************
C
C                        CHECK THE DIMENSIONS
C
C***********************************************************************
C
C
C   COMPUTE THE TOTAL LENGTH OF STORAGE NEEDED FOR THE ELEMENT HESSIANS
C   -------------------------------------------------------------------
C       (MB) AND THE MAXIMAL SUBDIMENSION (NDIMAX). VERIFY ALSO
C       -------------------------------------------------------
C       POSITIVITY OF NUMBER OF ELEMENTS (NS), OF THE INPUT PARAMETERS
C       --------------------------------------------------------------
C       NVAR AND THE COHERENCE OF THE SUBDIMENSIONS.
C       --------------------------------------------
C
      IF (NS.GT.0) GO TO 50
      INFO = NS
      IFLAG = 14
      GO TO 1090
   50 CONTINUE
      NDIMAX = 0
      M = NVAR(NS+1) - 1
      LB = M + NS + 1
      MB = 0
      DO 90 I=1,NS
        ISUBF = I
        IF (NVAR(I).GT.0) GO TO 60
        INFO = I
        IFLAG = 15
        GO TO 1090
   60   CONTINUE
        NDIMI = NVAR(I+1) - NVAR(I)
        IF (NDIMI.GT.0) GO TO 70
        INFO = I
        IFLAG = 16
        GO TO 1090
   70   CONTINUE
        CALL RANGE(ISUBF, IUB, X, WK(LB), NDIMI, NSUBI, NS)
        IF (NSUBI.LE.NDIMI .AND. NSUBI.GE.0) GO TO 80
        INFO = I
        IFLAG = 17
        GO TO 1090
   80   CONTINUE
        MB = MB + ((NSUBI+1)*NSUBI)/2
        NDIMAX = MAX0(NDIMAX,NDIMI)
   90 CONTINUE
      INFO = 0
C
C   CHECK THE CONTENT OF THE VECTOR OF SPECIFICATION ISTATE
C   -------------------------------------------------------
C
      DIFEST = .FALSE.
      ITEMP = N + NS
      DO 120 I=1,ITEMP
        IF (RESTRT) GO TO 110
        IF (I.LE.N .OR. ISTATE(I).NE.0) GO TO 100
        INFO = I
        IFLAG = 19
        GO TO 1090
  100   CONTINUE
        IF (IABS(ISTATE(I)).LE.1) GO TO 110
        INFO = I
        IFLAG = 20
        GO TO 1090
C
C   IS DIFFERENCE ESTIMATION FOR THE GRADIENT NEEDED?
C   -------------------------------------------------
C
  110   CONTINUE
        IF (I.GT.N .AND. ISTATE(I).LT.0) DIFEST = .TRUE.
  120 CONTINUE
C
C   CHECK THE CONTENT OF THE INPUT VECTOR INVAR, AS WELL AS THE TOTAL
C   -----------------------------------------------------------------
C       DIMENSION
C       ---------
C
      IF (M.GT.0) GO TO 130
      INFO = M
      IFLAG = 21
      GO TO 1090
  130 CONTINUE
      DO 140 I=1,M
        IF (INVAR(I).GT.0 .AND. INVAR(I).LE.N) GO TO 140
        INFO = I
        IFLAG = 22
        GO TO 1090
  140 CONTINUE
C
C   DEFINE THE POINTERS TO THE VARIOUS VECTOR SLICES IN WK.
C   -------------------------------------------------------
C
C   1) VALUES OF THE ELEMENT FUNCTIONS
C
      NFXI = 0
      LFXI = 1
C
C   2) SUCCESSIVE ELEMENT GRADIENTS
C
      NGXI2 = NFXI + NS
C
C   3) SUCCESSIVE ELEMENT HESSIAN APPROXIMATIONS
C
      NB = NGXI2 + M
C
C   4) STEP IN THE VARIABLES
C
      NDX = NB + MB
      LDX = NDX + 1
C
C   5) ASSEMBLED DIAGONAL OF THE COMPLETE HESSIAN
C
      NDG = NDX + N
      LDG = NDG + 1
C
C   6) ASSEMBLED GRADIENT VECTOR
C
      NGX = NDG + N
      LGX = NGX + 1
C
C   7) THREE WORK SPACE VECTORS
C
      NW1 = NGX + N
      LW1 = NW1 + 1
C
      NW2 = NW1 + N
      LW2 = NW2 + 1
C
      NW3 = NW2 + N
      LW3 = NW3 + 1
C
C   8) STORAGE FOR THE OLD ELEMENT GRADIENTS
C       (OVERLAPPING WITH THE 2D AND 3RD WORK VECTORS)
C
      NGXI1 = NW2
C
C   9) THREE WORKING VECTORS IN THE MAXIMUM DIMENSION
C       OF THE ELEMENT HESSIANS
C
      NP1 = MAX0(NW3+N,NGXI1+M)
      LP1 = NP1 + 1
C
      NP2 = NP1 + NDIMAX
      LP2 = NP2 + 1
C
      NP3 = NP2 + NDIMAX
      LP3 = NP3 + 1
C
C   CHECK THE TOTAL LENGTH OF THE WORK SPACE WK.
C   --------------------------------------------
C
      LENGTH = NP3 + NDIMAX
      IF (LWK(1).GE.LENGTH) GO TO 150
      INFO = LENGTH
      IFLAG = 23
      GO TO 1090
  150 CONTINUE
      LWK(2) = MB
C
C   CHECK THE AMOUNT OF PRINTOUT PARAMETER IPWHAT
C   ---------------------------------------------
C
      IF (IPWHAT.GE.0 .AND. IPWHAT.LE.5) GO TO 160
      IFLAG = 34
      INFO = IPWHAT
      GO TO 1090
C
C
C***********************************************************************
C
C            ASSURE FEASIBILITY OF THE STARTING POINT
C
C***********************************************************************
C
C
  160 CONTINUE
      BOUNDS = .FALSE.
      GXNB = 0.0
C
C   PROJECT THE STARTING POINT ON THE FEASIBLE DOMAIN:
C   --------------------------------------------------
C
C   1) LOOP ON THE VARIABLES
C
      DO 200 I=1,N
        NDXPI = NDX + I
        WK(NDXPI) = X(I)
        IF (ISTATE(I).LE.0) GO TO 200
C
C   2) THE I-TH VARIABLE IS BOUNDED
C
        IVAR = I
        UBOUND = XUPPER(IVAR)
        BBOUND = XLOWER(IVAR)
C
C   3) CHECK IF THE BOUNDS ARE COMPATIBLE
C
        IF (BBOUND.LE.UBOUND) GO TO 170
        INFO = IVAR
        IFLAG = 24
        GO TO 1090
C
C   4) CHECK IF THE BOUNDS ARE EQUAL.
C       IN THIS CASE, FIX THE VARIABLE
C
  170   CONTINUE
        IF (BBOUND.LT.UBOUND) GO TO 180
        X(I) = UBOUND
        FKNOWN = .FALSE.
        ISTATE(IVAR) = 0
        GO TO 200
C
C   5) CHECK IF THE UPPER BOUND IS SATISFIED
C
  180   CONTINUE
        BOUNDS = .TRUE.
        IF (X(I).LE.UBOUND) GO TO 190
        X(I) = UBOUND
        FKNOWN = .FALSE.
        ISTATE(I) = 1
        GO TO 200
C
C   6) CHECK IF THE LOWER BOUND IS SATISFIED
C
  190   CONTINUE
        IF (X(I).GE.BBOUND) GO TO 200
        X(I) = BBOUND
        FKNOWN = .FALSE.
        ISTATE(I) = 1
C
C   7) END OF THE LOOP ON THE VARIABLES
C
  200 CONTINUE
C
C
C***********************************************************************
C
C       FIND THE ELEMENT FUNCTIONS WHOSE VARIABLES HAVE BEEN MODIFIED
C
C***********************************************************************
C
C
C   LOOP ON THE ELEMENTS
C   --------------------
C
      FKNOWN = FKNOWN .AND. (.NOT.TESTGX)
      IF (FKNOWN .AND. .NOT.HESDIF) GO TO 240
      DO 210 I=1,NS
        IELF = I
        IN = N + I
        JL = NVAR(I)
        NDIMI = NVAR(I+1) - JL
        IF (.NOT.FKNOWN) ISTATE(IN) = ISTATE(IN) + 10
        IF (FKNOWN) CALL VE08CD(IELF, NDIMI, WK(LDX), X, INVAR(JL),
     *   ISTATE(IN))
  210 CONTINUE
C
C
C***********************************************************************
C
C               RECOMPUTE THE INITIAL FUNCTION AND GRADIENT VALUES
C                IF NOT AVAILABLE ON ENTRY, OR IF INITIAL POINT
C                WAS INFEASIBLE.
C
C***********************************************************************
C
      LTEMP = .TRUE.
      IF (FKNOWN) FXOLD = FX
C
C   LOOP ON THE ELEMENT FUNCTIONS
C   -----------------------------
C
      LL = LB
      FX = 0.0D0
      DO 220 I=1,NS
        JL = NVAR(I)
        NDIMI = NVAR(I+1) - JL
        IELF = I
        IN = N + I
        LIG2 = NGXI2 + JL
C
C   RECOMPUTE THE ELEMENT FUNCTION, AND POSSIBLY TEST ITS GRADIENT
C   --------------------------------------------------------------
        ISTATN = ISTATE(IN)
        IFXI = NFXI + I
        FXI = WK(IFXI)
        CALL VE08DD(IELF, NDIMI, NS, WK(LP1), WK(LP2), WK(LP3),
     *   WK(LIG2), WK(LDG), X, WK(LL), INVAR(JL), ISTATE(1),
     *   ISTATN, IPDEVC, IPFREQ, FXI, NGRI, NSUBI, LTEMP, TESTGX,
     *   HESDIF, RELPR, EPSQRT, DIFGRD, FNOISE, DBIG, GTOL, INFO,
     *   IFLAG, IRTN, ELFNCT, RANGE)
        ISTATE(IN) = ISTATN
        IF (IRTN.EQ.1) GO TO 1090
        FX = FX + FXI
        WK(IFXI) = FXI
        NGR(2) = NGR(2) + NGRI
        LL = LL + ((NSUBI+1)*NSUBI)/2
  220 CONTINUE

C
C   CHECK THE PLAUSIBILITY OF THE LOWER BOUND ON THE FUNCTION
C   ---------------------------------------------------------
C
      IF (FX.GE.FLOWBD) GO TO 230
      IFLAG = 33
      INFO = 0
      GO TO 1090
  230 CONTINUE
C
C   CHECK IF THE ANALYTICAL GRADIENT PASSED THE TEST SUCCESSFULLY
C   -------------------------------------------------------------
C
      IF (LTEMP) GO TO 240
      IFLAG = 32
      INFO = IELF
      GO TO 1090
C
C
C***********************************************************************
C
C                TEST FOR STOPPING AFTER FIRST FUNCTION CALL.
C
C***********************************************************************
C
C
C   ASSEMBLE THE OVERAL INITIAL GRADIENT
C   ------------------------------------
C
  240 CONTINUE
      DO 250 I=LGX,NW1
        WK(I) = 0.0
  250 CONTINUE
      DO 260 I=1,NS
        IELF = I
        JL = NVAR(I)
        LIG2 = NGXI2 + JL
        NDIMI = NVAR(I+1) - JL
        CALL VE08FD(IELF, NDIMI, INVAR(JL), WK(LGX), WK(LIG2), ISTATE)
  260 CONTINUE
C
C   DETERMINE THE STATE OF THE VARIABLES W.R.T. THEIR BOUNDS
C   --------------------------------------------------------
C
      IF (BOUNDS) CALL VE08RD(X, WK(LGX), ISTATE, N, EBOUND,
     * XUPPER, XLOWER)
C
C   COMPUTE THE NORM OF THE ACTIVE GRADIENT
C   ---------------------------------------
C
      GXNB = 0.0
      DO 270 I=1,N
        IF (ISTATE(I).GE.0 .AND. ISTATE(I).LE.1) GO TO 270
        NGXPI = NGX + I
        GXNB = GXNB + WK(NGXPI)**2
  270 CONTINUE
      GXNB = DSQRT(GXNB)
C
C   TEST FOR STOPPING
C   -----------------
C
      DNGR = FLOAT(NGR(2))/FLOAT(NS)
      DX = DBIG
      DF = 0.0
      IF (FKNOWN) DF = FXOLD - FX
      CALL VE08SD(EPSIL, NIT, NGR, DNGR, ITMAX, NGRMAX, GXNB, NEGCUR,
     * DIFEST, X, FX, WK(LGX), DX, DF, N, INFO, IFLAG)
      IF (IFLAG.GE.0 .AND. IFLAG.LE.10) GO TO 280
      INFO = IFLAG
      IFLAG = 31
      GO TO 1090
C
C
C***********************************************************************
C
C                    WRITE INITIAL DATA
C
C***********************************************************************
C
C
C
  280 CONTINUE
      IF (IPFREQ.GE.0) CALL VE08QD(NIT, FX, GXNB, NGR, DNGR, 1.0D0,
     * NSTEPS, BOUNDS, X, WK(LGX), WK(LDX), WK(LB), IPWHAT, IPDEVC, N,
     * NS, M, NVAR, WK(LP1), WK(LP2), RANGE)
      IF (IFLAG.NE.0) GO TO 1090
C
C
C***********************************************************************
C
C        COMPUTE THE INITIAL APPROXIMATIONS TO THE ELEMENT HESSIANS
C
C***********************************************************************
C
C
C   AVOID REINITIALIZATION OF THE ELEMENT HESSIANS IF A RESTART OCCURED
C   -------------------------------------------------------------------
C
      IF (RESTRT) GO TO 300
C
C   LOOP ON THE ELEMENTS
C   --------------------
C
      LL = LB
      DO 290 I=1,NS
        IELF = I
        IN = N + I
        NDIMI = NVAR(I+1) - NVAR(I)
        CALL VE08ED(IELF, NDIMI, NS, WK(LP1), WK(LP2), WK(LL),
     *   ISTATE(IN), NSUBI, HESDIF, RANGE)
        LL = LL + ((NSUBI+1)*NSUBI)/2
  290 CONTINUE
C
C
C***********************************************************************
C
C       ASSEMBLE THE DIAGONAL OF THE OVERAL APPROXIMATION B IN WK(LDG)
C
C***********************************************************************
C
C
C   INITIALIZE THE DIAGONAL TO ZERO
C   -------------------------------
C
  300 CONTINUE
      DO 310 I=LDG,NGX
        WK(I) = 0.0
  310 CONTINUE
      IF (MB.EQ.0) GO TO 330
C
C   ACCUMULATE THE DIAGONAL BY CONSIDERING ELEMENT AFTER ELEMENT
C   ------------------------------------------------------------
C
      L = LB
      DO 320 I=1,NS
        JL = NVAR(I)
        NDIMI = NVAR(I+1) - JL
        IELF = I
        CALL VE08GD(IELF, NDIMI, NS, WK(LP1), WK(LP2), WK(LP3),
     *   WK(LDG), WK(L), INVAR(JL), NSUBI, RESTRT, HESDIF, RANGE)
        L = L + ((NSUBI+1)*NSUBI)/2
  320 CONTINUE
C
C
C***********************************************************************
C
C         ELIMINATE THE VARIABLES THAT APPEAR ONLY LINEARLY IN THE
C            OBJECTIVE FUNCTION BY SETTING THEM TO THEIR BOUNDS
C
C***********************************************************************
C
C
  330 CONTINUE
      NIT(2) = 0
      XSIZE = DSMALL
      DX = 0.0
C
C   LOOP ON THE VARIABLES
C   ---------------------
C
      DO 350 I=1,N
        IDX = NDX + I
        TEMP = X(I)
        WK(IDX) = TEMP
C
C   COMPUTE THE SIZE OF THE CURRENT POINT
C   -------------------------------------
C
        XSIZE = DMAX1(XSIZE,DABS(TEMP))
C
C   IS THE I-TH VARIABLE A LINEAR VARIABLE? IF THIS IS NOT THE CASE,
C   ----------------------------------------------------------------
C       CONTINUE THE LOOP ON THE VARIABLES
C       ----------------------------------
C
        NDGPI = NDG + I
        IF (WK(NDGPI).NE.0.0) GO TO 350
C
C   YES: CHECK IF IT IS BOUNDED. IF IT IS NOT, ERROR RETURN
C   -------------------------------------------------------
C
        IF (ISTATE(I).GE.0) GO TO 340
        INFO = I
        IFLAG = 26
        GO TO 1090
C
C   IF IT IS FIXED, CONTINUE THE LOOP ON THE VARIABLES
C   --------------------------------------------------
C
  340   CONTINUE
        IF (ISTATE(I).EQ.0) GO TO 350
C
C   ELSE, SET IT TO ITS LOWER OR UPPER BOUND, DEPENDING ON THE SIGN OF
C   ------------------------------------------------------------------
C       THE I-TH COMPONENT OF THE OVERAL GRADIENT VECTOR. THEN, CONSIDER
C       ----------------------------------------------------------------
C       IT AS A ORDINARY FIXED VARIABLE
C       -------------------------------
C
        IGX = NGX + I
        IVAR = I
        FKNOWN = .FALSE.
        IF (WK(IGX).LT.0.0) X(I) = XUPPER(IVAR)
        IF (WK(IGX).GT.0.0) X(I) = XLOWER(IVAR)
        DX = DX + (X(I)-WK(IDX))**2
        ISTATE(I) = 0
  350 CONTINUE
C
C   COMPUTE THE LOWER BOUND ON THE NORM OF THE NEXT STEP
C   ----------------------------------------------------
C
      EPSIZE = RELPR*XSIZE
C
C   DETERMINE IF THE APPROXIMATE SOLUTION HAS BEEN CHANGED, DUE TO THE
C   ------------------------------------------------------------------
C       MODIFICATION OF PURELY LINEAR VARIABLES
C       ---------------------------------------
C
C   1) LOOP ON THE ELEMENTS
C
      IF ((.NOT.BOUNDS) .OR. DX.LE.RELPR) GO TO 420
      DO 360 I=1,NS
        JL = NVAR(I)
        NDIMI = NVAR(I+1) - JL
        IN = N + I
        IELF = I
        CALL VE08CD(IELF, NDIMI, WK(LDX), X, INVAR(JL), ISTATE(IN))
C
C   5) END OF THE LOOP ON THE ELEMENTS
C
  360 CONTINUE
C
C   RECOMPUTE THE OBJECTIVE FUNCTION
C   --------------------------------
C
      FXOLD = FX
      FMAX = FX
C
C   1) LOOP ON THE ELEMENT FUNCTIONS
C
      FX = 0.0D0
      DO 370 I=1,NS
        IFXI = NFXI + I
        IN = N + I
        JL = NVAR(I)
        NDIMI = NVAR(I+1) - JL
        IELF = I
        LIG2 = NGXI2 + JL
        ISTATN = ISTATE(IN)
        WKIFXI = WK(IFXI)
        CALL VE08HD(IELF, NDIMI, NS, WK(LP1), WK(LP2), WK(LP3), X,
     *   WK(LIG2), INVAR(JL), ISTATE, ISTATN, WKIFXI, NGRI,
     *   DIFGRD, FNOISE, DBIG, FMAX, INFO, IFLAG, IRTN, ELFNCT, RANGE)
        ISTATE(IN) = ISTATN
        WK(IFXI) = WKIFXI
        IF (IRTN.EQ.1) GO TO 1090
        FX = FX + WK(IFXI)
        NGR(2) = NGR(2) + NGRI
  370 CONTINUE
C
C
C***********************************************************************
C
C   TEST AGAIN FOR STOPPING, AFTER MODIFICATION OF THE LINEAR VARIABLES
C
C***********************************************************************
C
C
C   ASSEMBLE THE OVERAL GRADIENT
C   ----------------------------
C
      DO 380 I=LGX,NW1
        WK(I) = 0.0
  380 CONTINUE
      DO 390 I=1,NS
        IELF = I
        JL = NVAR(I)
        NDIMI = NVAR(I+1) - JL
        LIG2 = NGXI2 + JL
        CALL VE08FD(IELF, NDIMI, INVAR(JL), WK(LGX), WK(LIG2), ISTATE)
  390 CONTINUE
C
C   DETERMINE THE STATE OF THE VARIABLES W.R.T. THEIR BOUNDS
C   --------------------------------------------------------
C
      IF (BOUNDS) CALL VE08RD(X, WK(LGX), ISTATE, N, EBOUND,
     * XUPPER, XLOWER)
C
C   COMPUTE THE NORM OF THE ACTIVE GRADIENT
C   ---------------------------------------
C
      GXNB = 0.0
      DO 400 I=1,N
        IF (ISTATE(I).GE.0 .AND. ISTATE(I).LE.1) GO TO 400
        NGXPI = NGX + I
        GXNB = GXNB + WK(NGXPI)**2
  400 CONTINUE
      GXNB = DSQRT(GXNB)
C
C   TEST FOR STOPPING
C   -----------------
C
      DNGR = FLOAT(NGR(2))/FLOAT(NS)
      DX = DSQRT(DX)
      DF = FXOLD - FX
      CALL VE08SD(EPSIL, NIT, NGR, DNGR, ITMAX, NGRMAX, GXNB, NEGCUR,
     * DIFEST, X, FX, WK(LGX), DX, DF, N, INFO, IFLAG)
      IF (IFLAG.GE.0 .AND. IFLAG.LE.10) GO TO 410
      INFO = IFLAG
      IFLAG = 31
      GO TO 1090
C
C
C***********************************************************************
C
C                    WRITE THE ACTUAL DATA
C
C***********************************************************************
C
C
C
  410 CONTINUE
      IF (IPFREQ.GE.0) CALL VE08QD(NIT, FX, GXNB, NGR, DNGR, 1.0D0,
     * NSTEPS, BOUNDS, X, WK(LGX), WK(LDX), WK(LB), IPWHAT, IPDEVC, N,
     * NS, M, NVAR, WK(LP1), WK(LP2), RANGE)
      IF (IFLAG.NE.0) GO TO 1090
C
C
C***********************************************************************
C
C            MAIN LOOP OF THE ITERATIVE MINIMIZATION PROCEDURE
C
C***********************************************************************
C
C
  420 CONTINUE
      RAPRED = 0.0D0
      DXN = 1.0D0
      RESN2 = DXN
      DO 1080 NITI=1,ITMAX
        RS2OLD = DSQRT(RESN2)/DXN
        NIT(2) = NITI
C
C
C***********************************************************************
C
C   STEP SELECTION : INEXACT TRUST REGION STRATEGY WITH PRECONDITIONING
C                 ( USING TRUNCATED CONJUGATE GRADIENTS )
C
C***********************************************************************
C
C
C   INITIALIZE THE INITIAL RESIDUAL AS THE OPPOSITE OF THE GRADIENT
C   ---------------------------------------------------------------
C       AND THE STEP TO ZERO. SOLVE ALSO FOR THE COMPONENTS
C       ---------------------------------------------------
C       CORRESPONDING TO FIXED VARIABLES OR VARIABLES THAT ARE IN
C       ---------------------------------------------------------
C       THE DANGEROUS SET.
C       ------------------
C
        NEGCUR = .FALSE.
        RESN2 = 0.0
        GXMAX = 0.0
        DO 440 J=1,N
          IGX = NGX + J
          IDX = NDX + J
          IW1 = NW1 + J
          IW3 = NW3 + J
          IDG = NDG + J
          WK(IDX) = 0.0
          GXMAX = DMAX1(GXMAX,DABS(WK(IGX)))
          IF (ISTATE(J).LT.0 .OR. ISTATE(J).GE.3) GO TO 430
          IF (ISTATE(J).NE.0) WK(IDX) = -WK(IGX)/DABS(WK(IDG))
          WK(IGX) = 0.0
          WK(IW1) = 0.0
          WK(IW3) = 0.0
          GO TO 440
  430     CONTINUE
          WK(IGX) = -WK(IGX)
C
C   COMPUTE THE INVERSE OF THE PRECONDITIONING DIAGONAL.
C   ----------------------------------------------------
C
          WK(IW3) = 1.0
          DII = DABS(WK(IDG))
          IF (DII.GE.DTOL) WK(IW3) = 1.0/DII
C
C   PRECONDITION THE INITIAL RESIDUAL TO OBTAIN THE FIRST SEARCH
C   ------------------------------------------------------------
C       DIRECTION
C       ---------
C
          WK(IW1) = WK(IW3)*WK(IGX)
C
C   COMPUTE THE SQUARE OF THE NORM OF THE PRECONDITIONED RESIDUAL
C   -------------------------------------------------------------
C
          RESN2 = RESN2 + WK(IW1)*WK(IGX)
  440   CONTINUE
C
C   DEFINE THE ACCURACY THAT WILL BE REQUIRED ON THE PRECONDITIONED
C   ---------------------------------------------------------------
C       RESIDUAL TO STOP THE CONJUGATE GRADIENT ROUTINE
C       -----------------------------------------------
C
        EPSACT = DMIN1(EPSTEP,EPSTEP*DSQRT(GXNB))*RESN2
        TEMP = DABS(RAPRED-1.0D0)
        TEMP = 0.1*DMAX1(TEMP,RS2OLD)
        IF (TEMP.LE.EPSQRT) EPSACT = DMIN1(EPSACT,TEMP)
C
C   MAIN LOOP OF THE CONJUGATE GRADIENT ROUTINE THAT DEFINES
C   --------------------------------------------------------
C       THE STEP STRATEGY
C       -----------------
C
        DO 480 KSTEP=1,MAXSTE
          KSTEPS = KSTEP
C
C   COMPUTE THE PRODUCT OF THE CURRENT APPROXIMATION B TIMES THE SEARCH
C   -------------------------------------------------------------------
C       DIRECTION WK(LW1) AND STORE THE RESULT IN WK(LW2)
C       -------------------------------------------------
C
C   1) SET THE VECTOR WK(LW2) TO ZERO
C
          DO 450 K=LW2,NW3
            WK(K) = 0.0
  450     CONTINUE
C
C   2) LOOP ON THE ELEMENTS OF B
C
          L = LB
          DO 460 I=1,NS
            JL = NVAR(I)
            NDIMI = NVAR(I+1) - JL
            IELF = I
            CALL VE08ID(IELF, NDIMI, NS, WK(LP1), WK(LP2), WK(LW1),
     *       WK(LW2), WK(L), INVAR(JL), ISTATE, NSUBI, RANGE)
            L = L + ((NSUBI+1)*NSUBI)/2
  460     CONTINUE
C
C   COMPUTE THE CURVATURE TERM
C   --------------------------
C
          CALL VE08MD(CURV,WK(LW1),WK(LW2),N)
C
C   TEST THE SIGN OF THE CURVATURE. IF IT IS NEGATIVE, SET NEGCUR TO
C   ----------------------------------------------------------------
C       .TRUE. AND BRANCH TO CHECK THE SIZE OF THE STEP W.R.T. TRUST
C       ------------------------------------------------------------
C       REGION BOUDARY
C       --------------
C
          IF (CURV.GT.0.0) GO TO 470
          NEGCUR = .TRUE.
          GO TO 490
C
C   POSITIVE CURVATURE: COMPUTE THE OPTIMAL STEPSIZE
C   ------------------------------------------------
C
  470     CONTINUE
          STEP = RESN2/CURV
C
C   COMPUTE THE NEW POINT
C   ---------------------
C
          RESOL2 = RESN2
          CALL VE08ND(WK(LDX), WK(LW1), STEP, WK(LGX), WK(LW2),
     *     WK(LW3), RESN2, N)
C
C   TEST FOR STOPPING THE CONJUGATE GRADIENT BECAUSE THE REQUIRED
C   -------------------------------------------------------------
C       ACCURACY ON THE PRECONDITIONED RESIDUAL HAS BEEN REACHED
C       --------------------------------------------------------
C
          IF (RESN2.LE.EPSACT) GO TO 490
C
C   COMPUTE THE NEXT SEARCH DIRECTION OF THE CONJUGATE GRADIENT
C   -----------------------------------------------------------
C
          BETA = RESN2/RESOL2
          CALL VE08OD(WK(LW1), WK(LW2), WK(LW1), BETA, N)
C
C   END OF THE MAIN LOOP OF THE CONJUGATE GRADIENT
C   ----------------------------------------------
C
  480   CONTINUE
C
C   CHECK FEASIBILITY OF THE STEP W.R.T. THE TRUST REGION BOUNDARY
C   --------------------------------------------------------------
C
C   1) CHECK THE LENGTH OF THE PRESENT DIRECTION
C
  490   CONTINUE
        CALL VE08MD(XX,WK(LDX),WK(LDX),N)
        DXN = DSQRT(XX)

C   2) THE NORM OF THE DIRECTION IS TOO SMALL : EXIT FROM VE08AD
C       WITH AN ERROR MESSAGE
C
        IF (DXN.GE.EPSIZE) GO TO 500
        IF (CURV.LT.0.0 .AND. STEPL(2).GE.EPSIZE) GO TO 500
        INFO = NIT(2)
        IFLAG = 35
        GO TO 1090
C
C   3) THE DIRECTION IS TOO SHORT, BUT THE MODEL IS CONVEX :
C       NO RESCALING IS NECESSARY
C
  500   CONTINUE
        IF (DXN.LE.STEPL(2) .AND. (.NOT.NEGCUR)) GO TO 530
C
C   4) IF THE DIRECTION IS TOO LONG, SHORTEN IT TO THE BOUNDARY
C
        IF (DXN.LE.STEPL(2)) GO TO 520
        FACT = STEPL(2)/DXN
        DO 510 I=1,N
           IDX = NDX + I
           WK(IDX) = WK(IDX)*FACT
510     CONTINUE
        DXN = STEPL(2)
        GO TO 530
C
C   5) COMPUTE THE STEP SIZE TO THE BOUNDARY
C
  520   CONTINUE
        IF (DXN.EQ.STEPL(2)) GO TO 530
        CALL VE08MD(DD,WK(LW1),WK(LW1),N)
        IF (DD.LT.RELPR) GO TO 530
        CALL VE08MD(XD,WK(LDX),WK(LW1),N)
        XD = XD/DD
        DD = ((STEPL(2)-DXN)*(STEPL(2)+DXN))/DD
        XU = XD + DSQRT(XD*XD+DD)
        STEP = DD/XU
C
C   6) SET THE NEW DIRECTION
C
        CALL VE08OD(WK(LDX), WK(LDX), WK(LW1), STEP, N)
        DXN = STEPL(2)
C
C   UPDATE THE COUNT OF ITERATIONS IN THE STEP STRATEGY
C   ---------------------------------------------------
C
  530   CONTINUE
        NSTEPS = NSTEPS + KSTEPS
C
C
C***********************************************************************
C
C                      LINESEARCH
C
C***********************************************************************
C
C
C   MODIFY THE SEARCH DIRECTION WHEN MINIMIZING IN A SUBSPACE
C   ---------------------------------------------------------
C
        BACTIV = .FALSE.
        IF (.NOT.BOUNDS) GO TO 560
C
C   1)  LOOP ON THE VARIABLES
C
        DO 550 I=1,N
          IDX = NDX + I
          NGXPI = NGX + I
          WK(NGXPI) = WK(IDX)
C
C   2) IF THE VARIABLE IS NOT BOUNDED, CONSIDER NEXT ONE
C
          IF (ISTATE(I).NE.1) GO TO 550
          BACTIV = .TRUE.
C
C   3) SET THE CORRESPONDING SEARCH DIRECTION COMPONENT TO ZERO
C
          IVAR = I
          UBOUND = XUPPER(IVAR)
          IF (X(I).NE.UBOUND) GO TO 540
          WK(IDX) = DMIN1(WK(IDX),0.0D0)
          GO TO 550
  540     CONTINUE
          WK(IDX) = DMAX1(WK(IDX),0.0D0)
C
C   4) END OF THE LOOP ON THE VARIABLES
C
  550   CONTINUE
C
C   COMPUTE THE INITIAL DIRECTIONAL DERIVATIVE
C   ------------------------------------------
C
  560   CONTINUE
        GSB = 0.0
        GSOUTI = 0.0
C
C   1) LOOP ON THE ELEMENTS
C
        DO 580 I=1,NS
          JL = NVAR(I)
          JU = NVAR(I+1) - 1
C
C   2) ACCUMULATE THE I-TH DIRECTIONAL DERIVATIVE
C
          DO 570 J=JL,JU
            IVAR = INVAR(J)
            ISVAR = ISTATE(IVAR)
            IF (ISVAR.EQ.0) GO TO 570
            NGXI2J = NGXI2 + J
            NDXIVA = NDX + IVAR
            GSB = GSB + WK(NGXI2J)*WK(NDXIVA)
            IF (.NOT.BOUNDS) GO TO 570
            NGXIVA = NGX + IVAR
            IF (ISVAR.EQ.1 .OR. ISVAR.EQ.2) GO TO 570
            GSOUTI = GSOUTI + WK(NGXI2J)*WK(NGXIVA)
  570     CONTINUE
C
C   3) END OF THE LOOP ON THE ELEMENTS
C
  580   CONTINUE
C
C   TEST IF INITIAL SLOPE IS NEGATIVE. IF IT IS NOT THE CASE, STOP
C   --------------------------------------------------------------
C       WITH AN ERROR MESSAGE
C       ---------------------
C
        IF (GSB.LT.0.0) GO TO 590
        INFO = 0
        IFLAG = 27
        GO TO 1090
C
C   COMPUTE THE LENGTH OF THE SEARCH DIRECTION, DUE TO THE
C   ------------------------------------------------------
C       POSSIBLE MODIFICATION INTRODUCED BY THE PROJECTION
C       --------------------------------------------------
C       ON THE ACTIVE BOUNDS
C       --------------------
C
  590   CONTINUE
        DXN1 = DXN
        DO 600 I=1,N
          NGXPI = NGX + I
          WK(NGXPI) = X(I)
  600   CONTINUE
        IF (.NOT.BACTIV) GO TO 620
        DXN2 = 0.0
        DO 610 I=1,N
          NDXPI = NDX + I
          DXN2 = DXN2 + WK(NDXPI)**2
  610   CONTINUE
        DXN1 = DSQRT(DXN2)
C
C   CHECK IF THE DIRECTION IS NOT TOO SMALL. IT IS IS
C   -------------------------------------------------
C       BELOW EPSIZE IN NORM, EXIT FROM VE08AD WITH AN ERROR
C       ----------------------------------------------------
C       MESSAGE
C       -------
C
  620   CONTINUE
        IF (DXN1.GE.EPSIZE) GO TO 630
        INFO = NIT(2)
        IFLAG = 35
        GO TO 1090
C
C   PRESET THE SLOPE OF THE LINEAR UPPER BOUND ON THE
C   -------------------------------------------------
C       FUNCTION VALUES
C       ---------------
  630   CONTINUE
        DECR0 = DECR*GSOUTI
        DECR1 = DECR*GSB
        DECR2 = DMIN1(DECR0,DECR1)
C
C   INITIALIZE SOME LINESEARCH VARIABLES
C   ------------------------------------
C
C   1) LINESEARCH PARAMETER AT ORIGIN
C
        B = 0.0
C
C   2) FUNCTION VALUE AND DIRECTIONAL DERIVATIVE AT ORIGIN
C
        FB = FX
        GS0 = GSB
        BOLD = 0.0
        FBOLD = FX
        GSBOLD = GS0
C
C   3) MAXIMUM AND MINIMUM LINESEARCH PARAMETER
C
        ALMAX = DELTAM/DXN1
        TEMP = FLOWBD-FX
        IF (DABS(DECR2).GT.1.D0) THEN
          ALMAX = DMIN1(TEMP/DECR2,ALMAX)
        ELSE IF (DABS(TEMP).LE.DABS(DECR2)*DBIG) THEN
          ALMAX = DMIN1(TEMP/DECR2,ALMAX)
        END IF
        ALMIN = 0.0
C
C   4) PRESET THE INDICATOR THAT SAYS IF A BOUND HAS BEEN ENCOUNTERED
C       DURING THE LINESEARCH
C
        BEND = .FALSE.
C
C   SET THE FIRST ESTIMATE OF THE FIRST VALUE OF THE LINESEARCH
C   -----------------------------------------------------------
C       PARAMETER
C       ---------
C
        A = 1.0D0
C
C   BRANCHING POINT FOR THE LINESEARCH MAIN ITERATION
C   -------------------------------------------------
C
        DO 900 IKLS=1,MAXLS
          KLS = IKLS
C
C   LET THE USER VERIFY THE PLAUSIBILITY OF THE STEP LENGTH
C   -------------------------------------------------------
C
          IF (.NOT.BEND) CALL VE08TD(A, X, FX, GS0, DXN1, WK(LDX), N)
C
C   TEST IF A IS SUFFICIENTLY INSIDE THE PERMITTED INTERVAL
C   -------------------------------------------------------
C
          TEMP = DMAX1(1.01*ALMIN,RELPR)
          IF (A.LT.TEMP .OR. A.GT.0.99*ALMAX) A = 0.5*(ALMIN+ALMAX)
          IF (A.GT.0.4*DELTAM .AND. ALMIN.GT.0.) A = DMIN1(A,10.*ALMIN)
C
C   TEST FOR LINESEARCH FAILURE
C   ---------------------------
C
          TEMP = DMIN1(ALMAX-ALMIN,DABS(A-B),A)
          IF (TEMP*DXN1.GT.EPSIZE) GO TO 640
          INFO = KLS
          IFLAG = 28
          GO TO 1090
C
C   COMPUTE THE MAXIMUM ADMISSIBLE FUNCTION VALUE
C   ---------------------------------------------
C
  640     CONTINUE
          FMAX = FX + DECR1*A
          IF ((BACTIV .AND. IKLS.GE.NRLS) .OR. BEND) FMAX = FX
C
C   BUILD THE NEW POINT WHERE THE FUNCTION SHOULD BE EVALUATED
C   ----------------------------------------------------------
C       (IN WK(LGX))
C       ------------
C
C   1) BUILD THE NEW POINT
C
          DO 670 I=1,N
            IGX = NGX + I
            NW1PI = NW1 + I
            WK(NW1PI) = WK(IGX)
            XNEW = X(I)
            IF (ISTATE(I).EQ.0) GO TO 660
            NDXPI = NDX + I
            XNEW = X(I) + A*WK(NDXPI)
            IF (ISTATE(I).LT.0) GO TO 660
C
C   2) PROJECT ON THE FEASIBLE REGION
C
            IVAR = I
            UBOUND = XUPPER(IVAR)
            IF (XNEW.LE.UBOUND) GO TO 650
            XNEW = UBOUND
            BEND = .TRUE.
            GO TO 660
  650       CONTINUE
            BBOUND = XLOWER(IVAR)
            IF (XNEW.GE.BBOUND) GO TO 660
            XNEW = BBOUND
            BEND = .TRUE.
C
C   3) BUILD THE NEW POINT IN WK(LGX)
C
  660       CONTINUE
            WK(IGX) = XNEW
  670     CONTINUE
          BACTIV = BACTIV .OR. BEND
C
C   FIND THE ELEMENT FUNCTIONS WHOSE VARIABLES HAVE BEEN MODIFIED
C   -------------------------------------------------------------
C
          DO 680 I=1,NS
            IELF = I
            IN = N + I
            JL = NVAR(I)
            NDIMI = NVAR(I+1) - JL
            CALL VE08CD(IELF, NDIMI, WK(LW1), WK(LGX), INVAR(JL),
     *       ISTATE(IN))
  680     CONTINUE
C
C   EVALUATE THE OBJECTIVE FUNCTION AT THE NEW POINT WK(LGX)
C   --------------------------------------------------------
C
C
C   1) INITIALIZE THE OVERAL FUNCTION VALUE AND DIRECTIONAL DERIVATIVE
C
          FN = 0.0
          FA = 0.0
          GSA = 0.0
          GSINI = 0.0
          FIMAX = -DBIG
          FNIMAX = RELPR
C
C   2) LOOP ON THE ELEMENT FUNCTIONS
C
          DO 690 I=1,NS
            JL = NVAR(I)
            NDIMI = NVAR(I+1) - JL
            LIG1 = NGXI1 + JL
            LIG2 = NGXI2 + JL
            IELF = I
            IFXI = NFXI + I
            IN = N + I
            ISTATN = ISTATE(IN)
            WKIFXI = WK(IFXI)
            CALL VE08JD(IELF, NDIMI, NS, WK(LP1), WK(LGX), X, WK(LIG1),
     *       WK(LIG2), INVAR(JL), ISTATE, ISTATN, NGRI, DIFEST,
     *       GSINI, A, FNOISE, FMAX, WKIFXI, GSA, KLS, MAXLS, INFO,
     *       IFLAG, IRTN, ELFNCT)
            ISTATE(IN) = ISTATN
            WK(IFXI) = WKIFXI
            IF (IRTN.EQ.1) GO TO 1090
            IF (IRTN.EQ.2) GO TO 790
            FIMAX = DMAX1(DABS(WK(IFXI)),FIMAX)
            FNIMAX = DMAX1(FNIMAX,FNOISE)
            FA = FA + WK(IFXI)
            FN = FN + FNOISE
            NGR(2) = NGR(2) + NGRI
  690     CONTINUE
C
C   TEST SATISFACTION OF THE LINE SEARCH CRITERIA
C   ---------------------------------------------
C
C   1) IF BOUNDS ARE PRESENT, DECIDE UPON THE MAXIMUM ADMISSIBLE
C       FUNCTION VALUE
C
          LTEMP = BEND .OR. (BACTIV .AND. IKLS.GE.NRLS)
          IF (.NOT.BACTIV) GO TO 700
          FMAX = FX + DECR0*A + DECR*GSINI
          IF (IKLS.GE.NRLS) GO TO 700
          TEMP = FX + DECR1*A
          FMAX = DMIN1(FMAX,TEMP)
C
C   2) CHECK IF THE GRADIENT IS AVAILABLE
C
  700     CONTINUE
          GRADAV = .NOT.DIFEST
          IF (GRADAV) GO TO 720
C
C   3) CRITERION WITHOUT GRADIENT
C
          IF (FA.LE.FMAX) GO TO 730
          ITEMP1 = N + 1
          ITEMP2 = N + NS
          DO 710 IN=ITEMP1,ITEMP2
            IF (ISTATE(IN).GE.8) ISTATE(IN) = ISTATE(IN) - 10
  710     CONTINUE
          GO TO 750
C
C   4) CRITERION WITH GRADIENT
C
  720     CONTINUE
          RAPGS = GSA/GS0
          IF (FA.LE.FMAX .AND. (LTEMP .OR. RAPGS.LE.0.9)) GO TO 910
          GO TO 750
C
C   ESTIMATE THE FINAL GRADIENT BY DIFFERENCES
C   ------------------------------------------
C
  730     CONTINUE
C
C   1) LOOP ON THE ELEMENT FUNCTIONS
C
          GSA = 0.0
          GSINI = 0.0
          L = LB
          DO 740 I=1,NS
            JL = NVAR(I)
            NDIMI = NVAR(I+1) - JL
            LIG1 = NGXI1 + JL
            LIG2 = NGXI2 + JL
            IELF = I
            IN = N + I
            IFXI = NFXI + I
            ISTATN = ISTATE(IN)
            CALL VE08KD(IELF, NDIMI, NS, WK(LP1), WK(LP2), WK(LP3),
     *       WK(LIG1), WK(LIG2), WK(LGX), X, WK(L), ISTATN,
     *       INVAR(JL), ISTATE, NSUBI, NGRI, WK(IFXI), FNOISE, XNOISE,
     *       EPSQRT, RELPR, TOLCNT, A, DXN1, GSA, GSINI, GXMAX, INFO,
     *       IFLAG, IRTN, ELFNCT, RANGE)
            ISTATE(IN) = ISTATN
            IF (IRTN.EQ.1) GO TO 1090
            NGR(2) = NGR(2) + NGRI
            IF (NSUBI.EQ.0) GO TO 740
            L = L + ((NSUBI+1)*NSUBI)/2
  740     CONTINUE
C
C   2) FINAL CURVATURE TEST
C
          RAPGS = GSA/GS0
          IF (RAPGS.LE.0.9 .OR. LTEMP) GO TO 910
C
C   4) TEST NOT SATISFIED: BRANCH FOR A NEW LINESEARCH STEP
C
          GSB = GSBOLD
          B = BOLD
          GSBOLD = GSA
          BOLD = A
          FBOLD = FA
          GRADAV = .TRUE.
C
C   TEST TO CHECK THAT THE DIFFERENCES IN FUNCTION VALUES ARE ABOVE THE
C   -------------------------------------------------------------------
C       NOISE
C       -----
C
  750     CONTINUE
          IF (IKLS.EQ.1 .OR. (BEND .AND. IKLS.LE.NRLS)) GO TO 760
          TEMP = DABS(FB-FA)
          IF (TEMP.GT.FN .AND. TEMP.GT.FIMAX*FLOAT(NS)*RELPR) GO TO
     *     760
          INFO = IKLS
          IFLAG = 29
          GO TO 1090
C
C   TEST FOR MAXIMUM NUMBER OF LINESEARCH ITERATIONS
C   ------------------------------------------------
C
  760     CONTINUE
          IF (IKLS.GE.MAXLS) GO TO 900
C
C   BERTSEKAS STRATEGY FOR SHORTENING THE STEP IN THE PRESENCE OF
C   -------------------------------------------------------------
C       UNDETECTED ACTIVE BOUNDS
C       ------------------------
C
          IF (.NOT.BOUNDS .OR. IKLS.NE.NRLS) GO TO 790
C
C   1) COMPUTE THE MAXIMUM FEASIBLE STEPSIZE
C
          GAMHAT = DELTAM
          DO 780 K=1,N
            IF (ISTATE(K).NE.3) GO TO 780
            IVAR = K
            NDXPK = NDX + K
            TEMP = WK(NDXPK)
            IF (DABS(TEMP).LT.1.D-15) GO TO 780
            IF (TEMP.GT.0.0) BND = XUPPER(IVAR)
            IF (TEMP.LT.0.0) BND = XLOWER(IVAR)
            TEMP2 = BND - X(K)
            IF (DABS(TEMP).GE.1.0) GO TO 770
            IF (TEMP2.GE.TEMP*GAMHAT) GO TO 780
            GAMHAT = TEMP2/TEMP
  770       CONTINUE
            GAM = TEMP2/TEMP
            GAMHAT = DMIN1(GAM,GAMHAT)
  780     CONTINUE
C
C  2) TEST IT W.R.T. THE BOUNDS ALREADY AVAILABLE
C
          IF (GAMHAT.GE.ALMAX .AND. (BEND .OR. DIFEST)) GO TO 810
          IF (GAMHAT.GE.ALMAX) GO TO 790
          C = GAMHAT
          ALMAX = 1.02*GAMHAT
          ALMIN = 0.0
          BEND = .TRUE.
          GO TO 890
C
C   ORDER THE TWO DATA POINTS
C   -------------------------
C
  790     CONTINUE
          IF (A.LT.B) GO TO 800
          ABMIN = B
          ABMAX = A
          FATMIN = FB
          FATMAX = FA
          IF (.NOT.GRADAV) GO TO 810
          GATMAX = GSA
          GATMIN = GSB
          GO TO 810
  800     CONTINUE
          ABMIN = A
          ABMAX = B
          FATMIN = FA
          FATMAX = FB
          IF (.NOT.GRADAV) GO TO 810
          GATMAX = GSB
          GATMIN = GSA
C
C   UPDATE THE UPPER AND LOWER BOUNDS ON THE STEP
C   ---------------------------------------------
C
C   1) IF THE CALCULATED FUNCTION VALUE EXCEEDS ITS MAXIMUM ALLOWED
C       VALUE FMAX, REDUCE THE INTERVAL TO (0,A)
C
  810     CONTINUE
          IF (FA.GT.FMAX) ALMAX = DMIN1(A,ALMAX)
C
C   2) IF THE GRADIENT AT A IS UNAVAILABLE, WE KNOW NOTHING MORE.
C       HENCE, BRANCH FOR A NEW BISECTION STEP BETWEEN ALMIN
C       AND ALMAX
C
          IF (.NOT.GRADAV .OR. BEND) GO TO 880
C
C   3) ELSE, THE GRADIENT IS AVAILABLE AT ABMIN AND ABMAX.
C       CHECK THE SLOPE AT ABMIN.
C
          LTEMP = .TRUE.
          IF (GATMIN.LT.0.0) GO TO 820
C
C   4) THE SLOPE AT THE FIRST POINT IS POSITIVE : THE MINIMUM
C       MUST LIE IN (ALMIN,ABMIN)
C
          ALMAX = DMIN1(ALMAX,ABMIN)
          GO TO 870
C
C   5) THE SLOPE AT THE FIRST POINT IS NEGATIVE.
C       TEST THE SIZE OF THE FUNCTION AT THE FIRST POINT
C
  820     CONTINUE
          IF (FATMIN.LE.(FX+DECR1*ABMIN)) GO TO 830
C
C   6) THE FUNCTION AT THE FIRST POINT IS ABOVE ITS UPPER LIMIT.
C       THE STEP MUST LIE BEFORE ABMIN.
C
          ALMAX = DMIN1(ALMAX,ABMIN)
          GO TO 870
C
C   7) THE FUNCTION AT THE FIRST POINT IS BELOW ITS UPPER LIMIT.
C       ABMIN MUST BE A LOWER BOUND ON THE STEP
C
  830     CONTINUE
          ALMIN = DMAX1(ALMIN,ABMIN)
C
C   8) TEST THE SIGN OF THE SLOPE AT THE SECOND POINT
C
          IF (GATMAX.LT.0.0) GO TO 840
C
C   7) THE SLOPE AT THE SECOND POINT IS POSITIVE (AND NEGATIVE
C       AT THE FIRST) : THE MINIMUM MUST LIE BEFORE ABMAX
C
          ALMAX = DMIN1(ALMAX,ABMAX)
          GO TO 870
C
C   8) THE SLOPE AT THE SECOND POINT IS NEGATIVE.
C       TEST THE SIZE OF THE FUNCTION AT THE SECOND POINT.
C
  840     CONTINUE
          IF (FATMAX.LT.FATMIN) GO TO 850
C
C   9) THE FUNCTION VALUE AT THE SECOND POINT IS ABOVE ITS UPPER LIMIT.
C       THE MINIMUM MUST LIE BEFORE ABMAX, BUT THE INTERPOLATION WONT
C       WORK : BRANCH FOR A BISECTION BETWEEN ALMIN AND ABMAX
C
          ALMAX = DMIN1(ALMAX,ABMAX)
          GO TO 880
C
C   10) THE FUNCTION VALUE AT THE SECOND POINT IS BELOW ITS UPPER LIMIT.
C       TEST IT AGAIN AGAINST THE MORE SEVERE BOUND
C
  850     CONTINUE
          IF (FATMAX.LE.(FX+DECR1*ABMAX)) GO TO 860
C
C   11) THE FUNCTION AT THE SECOND POINT IS ABOVE THE LINEAR LIMIT,
C       BUT BELOW THE FIRST POINT. THE STEP MUST LIE IN
C       (ABMIN,ABMAX)
C
          ALMAX = DMIN1(ALMAX,ABMAX)
          GO TO 870
C
C   12) THE FUNCTION AT THE SECOND POINT IS SUFFICIENTLY LOW :
C       THE MINIMUM MUST BE FURTHER ON THE SEARCH DIRECTION
C
  860     CONTINUE
          LTEMP = .FALSE.
          ALMIN = ABMAX
C
C   USE CUBIC EXTRAPOLATION
C   -----------------------
C
  870     CONTINUE
          C = GATMIN + GATMAX - 3.0*(FATMAX-FATMIN)/(ABMAX-ABMIN)
          CC = DMAX1(C*C-GATMIN*GATMAX,0.0D0)
          CC = DSQRT(CC)
          TEMP = GATMAX - GATMIN + CC + CC
          IF (TEMP.EQ.0.0) GO TO 880
          C = ABMIN + (ABMAX-ABMIN)*(C-GATMIN+CC)/TEMP
C
C   IF THE MINIMUM LIES FURTHER ON THE SEARCH DIRECTION, MAKE SURE THE
C   ------------------------------------------------------------------
C       STEP IS LARGE ENOUGH
C       --------------------
C
          IF (LTEMP) GO TO 890
          IF (C.LT.1.01*ALMIN) C = ALMIN + ALMIN
          GO TO 890
C
C   HALVE THE STEP
C   --------------
C
  880     CONTINUE
          C = 0.5D0*(ALMAX+ALMIN)
C
C   SWITCH VALUES
C   -------------
C
  890     CONTINUE
          B = A
          A = C
          FB = FA
          GSB = GSA
C
C   END OF THE MAIN LOOP OF THE LINE SEARCH
C   ---------------------------------------
  900   CONTINUE
        INFO = MAXLS
        IFLAG = 28
        GO TO 1090
C
C   EXIT OF THE LINESEARCH: COMPUTE THE NEW POINT, THE TRUE DISPLACEMENT
C   --------------------------------------------------------------------
C       AND CORRECT THE STEP NORMS AND THE DIRECTIONAL DERIVATIVE
C       ---------------------------------------------------------
C       ALSO COMPUTE THE LOWER BOUND ON THE NEXT STEP
C       ---------------------------------------------
C
  910   CONTINUE
        DXN2 = 0.0
        XSIZE = DSMALL
        DO 920 I=1,N
          IGX = NGX + I
          IDX = NDX + I
          WK(IDX) = WK(IGX) - X(I)
          DXN2 = DXN2 + WK(IDX)**2
          TEMP = WK(IGX)
          X(I) = TEMP
          XSIZE = DMAX1(XSIZE,DABS(TEMP))
  920   CONTINUE
        FXOLD = FX
        FX = FA
        DXN1P = DSQRT(DXN2)
        FACT = DXN1P/DXN1
        DXN1 = DXN1P
        DXN = FACT*DXN
        EPSIZE = RELPR*XSIZE
        GSA = A*GSA
        IF (BEND) GO TO 930
        GS0 = A*GS0
        GO TO 960
C
C   RECOMPUTE THE INITIAL DIRECTIONAL DERIVATIVE IF BENDING HAS OCCURED
C   -------------------------------------------------------------------
  930   CONTINUE
        GS0 = 0.0
        DO 950 I=1,NS
          JL = NVAR(I)
          JU = NVAR(I+1) - 1
          DO 940 J=JL,JU
            IVAR = INVAR(J)
            IF (ISTATE(IVAR).EQ.0) GO TO 940
            NDXVAR=NDX+IVAR
            NGXI2J=NGXI2+J
            GS0 = GS0 + WK(NGXI2J)*WK(NDXVAR)
  940     CONTINUE
  950   CONTINUE
C
C
C***********************************************************************
C
C              TEST FOR STOPPING THE MAIN MINIMIZATION ITERATION
C
C***********************************************************************
C
C
C   TEST FOR DIVERGENCE
C   -------------------
C
  960   CONTINUE
        IF (DXN.LT.DELDIV) GO TO 970
        IDIV = IDIV + 1
        IF (IDIV.LT.IDIVX) GO TO 980
        INFO = NIT(2)
        IFLAG = 36
        GO TO 1090
  970   CONTINUE
        IDIV = 0
C   ASSEMBLE THE OVERAL GRADIENT
C   ----------------------------
C
  980   CONTINUE
        DO 990 I=LGX,NW1
          WK(I) = 0.0
  990   CONTINUE
        DO 1000 I=1,NS
          IELF = I
          JL = NVAR(I)
          NDIMI = NVAR(I+1) - JL
          LIG1 = NGXI1 + JL
          CALL VE08FD(IELF, NDIMI, INVAR(JL), WK(LGX), WK(LIG1), ISTATE)
 1000   CONTINUE
C
C   DETERMINE THE STATE OF THE VARIABLES W.R.T. THEIR BOUNDS
C   --------------------------------------------------------
C
        IF (BOUNDS) CALL VE08RD(X, WK(LGX), ISTATE, N, EBOUND,
     * XUPPER, XLOWER)
C
C   COMPUTE THE NORM OF THE ACTIVE GRADIENT
C   ---------------------------------------
C
        GXNB = 0.0
        DO 1010 I=1,N
          IF (ISTATE(I).GE.0 .AND. ISTATE(I).LE.1) GO TO 1010
          NGXPI=NGX+I
          GXNB = GXNB + WK(NGXPI)**2
 1010   CONTINUE
        GXNB = DSQRT(GXNB)
C
C   TEST FOR STOPPING
C   -----------------
C
        DNGR = FLOAT(NGR(2))/FLOAT(NS)
        DF = FXOLD - FX
        CALL VE08SD(EPSIL, NIT, NGR, DNGR, ITMAX, NGRMAX, GXNB, NEGCUR,
     *   DIFEST, X, FX, WK(LGX), DXN1, DF, N, INFO, IFLAG)
        IF (IFLAG.GE.0 .AND. IFLAG.LE.10) GO TO 1020
        INFO = IFLAG
        IFLAG = 31
        GO TO 1090
C
C
C***********************************************************************
C
C                    WRITE THE ACTUAL DATA
C
C***********************************************************************
C
C
 1020   CONTINUE
        IF (IPFREQ.LT.0) GO TO 1030
        MIP = 1
        IF (IPFREQ.NE.0) MIP = MOD(NIT(2),IPFREQ)
        IF (MIP.EQ.0 .OR. IFLAG.NE.0) CALL VE08QD(NIT, FX, GXNB, NGR,
     *   DNGR, A, NSTEPS, BOUNDS, X, WK(LGX), WK(LDX), WK(LB), IPWHAT,
     *   IPDEVC, N, NS, M, NVAR, WK(LP1), WK(LP2), RANGE)
 1030   CONTINUE
        IF (IFLAG.NE.0) GO TO 1090
C
C
C***********************************************************************
C
C          UPDATE THE ELEMENT HESSIANS APPROXIMATIONS
C
C***********************************************************************
C
C
C   INITIALIZE THE PREDICTED FUNCTION REDUCTION AND THE SQUARE OF THE
C   -----------------------------------------------------------------
C       NORM OF THE OVERAL RESIDUAL
C       ---------------------------
C
        PRERED = -GSA
        RESN2 = 0.0
        GNOIS = FNIMAX
        IF (DIFEST) GNOIS = DSQRT(GNOIS)
C
C   LOOP ON THE ELEMENTS
C   --------------------
C
        LL = LB
        DO 1050 I=1,NS
          JL = NVAR(I)
          NDIMI = NVAR(I+1) - JL
          LIG1 = NGXI1 + JL
          NIG1 = LIG1 - 1
          NIG2 = NGXI2 + JL - 1
C
C   BUILD THE DIFFERENCES IN GRADIENT AND SHIFT THE NEW VALUE
C   ---------------------------------------------------------
C
          GMAXI = 0.0
          DO 1040 J=1,NDIMI
            IGXI1 = NIG1 + J
            IGXI2 = NIG2 + J
            TEMP = WK(IGXI1)
            TEMP2 = WK(IGXI2)
            WK(IGXI2) = TEMP
            WK(IGXI1) = TEMP - TEMP2
            GMAXI = DMAX1(GMAXI,DABS(TEMP)+DABS(TEMP2))
 1040     CONTINUE
          GNOISE = GMAXI*GNOIS
C
C   UPDATE
C   ------
C
          IELF = I
          IN = N + I
          LTEMP = NIT(2).GT.1 .OR. RESTRT .OR. (HESDIF .AND.
     *     ISTATE(IN).GT.0)
          CALL VE08LD(IELF, NDIMI, NS, WK(LP1), WK(LP2), WK(LP3),
     *     WK(LIG1), WK(LDX), WK(LDG), WK(LL), RESN2, ISTATE(IN),
     *     INVAR(JL), KU, PRERDI, LTEMP, RELPR, GNOISE, INFO, IFLAG,
     *     IRTN, RANGE)
          IF (IRTN.EQ.1) GO TO 1090
          PRERED = PRERED + PRERDI
          LL = LL + KU
 1050   CONTINUE
C
C
C***********************************************************************
C
C                   TRUST REGION BOUNDS MANAGEMENT
C
C***********************************************************************
C
C
C   COMPUTE THE RATIO OF THE PREDICTED REDUCTION AND THE TRUE REDUCTION
C   -------------------------------------------------------------------
C
        IF (DF.LE.RELPR) GO TO 1060
        RAPRED = PRERED/DF
C
C   IF THIS RATIO IS TOO SMALL, HALVE THE MAXIMUM STEPLENGTH
C   --------------------------------------------------------
C
        IF (RAPRED.LE.10.0) GO TO 1070
 1060   CONTINUE
        STEPL(2) = 0.5*DXN
        GO TO 1080
C
C   ELSE, DOUBLE IT
C   ---------------
C
 1070   CONTINUE
        STEPL(2) = DXN + DXN
        STEPL(2) = DMIN1(STEPL(2),DELTAM)
C
C
C***********************************************************************
C
C     END OF THE MAIN ITERATION OF THE WHOLE MINIMIZATION PROCESS
C
C***********************************************************************
C
C
 1080 CONTINUE
      IFLAG = 18
      INFO = NIT(2)
C
C
C***********************************************************************
C
C       EXITS OF THE MAIN ROUTINE AND RETURN TO USER'S CONTROL
C
C***********************************************************************
C
C
C   DETERMINE WHAT TYPE OF EXIT IS REQUIRED
C   ---------------------------------------
C
 1090 CONTINUE
      IF (IPFREQ.LT.0) RETURN
      DNGR = FLOAT(NGR(2))/FLOAT(NS)
      IPWERR = MIN0(2,IPWHAT)
      IF (IFLAG.GT.10) CALL VE08QD(NIT, FX, GXNB, NGR, DNGR, A, NSTEPS,
     * BOUNDS, X, WK(LGX), WK(LDX), WK(LB), IPWERR, IPDEVC, N, NS, M,
     * NVAR, WK(LP1), WK(LP2), RANGE)
      WRITE (IPDEVC,99999)
      IF (IFLAG.GT.10) WRITE (IPDEVC,99998)
      GO TO (1100, 1100, 1100, 1100, 1100, 1100, 1100, 1100, 1100,
     * 1100, 1110, 1120, 1130, 1140, 1150, 1160, 1170, 1180, 1190,
     * 1200, 1210, 1220, 1230, 1240, 1250, 1260, 1270, 1280, 1290,
     * 1300, 1310, 1320, 1330, 1340, 1350, 1360), IFLAG
C
C   EXIT BECAUSE USER'S TERMINATION CRITERION (VE08SD) HAS BEEN
C   -----------------------------------------------------------
C       SATISFIED
C       ---------
C
 1100 CONTINUE
      WRITE (IPDEVC,99997) IFLAG
      RETURN
C
C   ERROR EXITS
C   -----------
C
C   1) IFLAG=11
C
 1110 CONTINUE
      WRITE (IPDEVC,99996) INFO
      RETURN
C
C   2) IFLAG=12
C
 1120 CONTINUE
      WRITE (IPDEVC,99995) RELPR
      RETURN
C
C   3) IFLAG=13
C
 1130 CONTINUE
      WRITE (IPDEVC,99994) FNOISE
      RETURN
C
C   4) IFLAG=14
C
 1140 CONTINUE
      WRITE (IPDEVC,99993) INFO
      RETURN
C
C   5) IFLAG=15
C
 1150 CONTINUE
      WRITE (IPDEVC,99992) INFO, INFO, NVAR(INFO)
      RETURN
C
C   6) IFLAG=16
C
 1160 CONTINUE
      WRITE (IPDEVC,99991) INFO, NDIMI
      RETURN
C
C   7) IFLAG=17
C
 1170 CONTINUE
      WRITE (IPDEVC,99990) NSUBI, INFO
      RETURN
C
C   8) IFLAG=18
C
 1180 CONTINUE
      WRITE (IPDEVC,99989) INFO
      RETURN
C
C   9) IFLAG=19
C
 1190 CONTINUE
      IELF = INFO - N
      WRITE (IPDEVC,99988) IELF, INFO, ISTATE(INFO)
      RETURN
C
C   10) IFLAG=20
C
 1200 CONTINUE
      WRITE (IPDEVC,99987) INFO, INFO, ISTATE(INFO)
      RETURN
C
C   11) IFLAG=21
C
 1210 CONTINUE
      WRITE (IPDEVC,99986) INFO
      RETURN
C
C   12) IFLAG=22
C
 1220 CONTINUE
      WRITE (IPDEVC,99985) INFO, INVAR(INFO)
      RETURN
C
C   13) IFLAG=23
C
 1230 CONTINUE
      WRITE (IPDEVC,99984) LWK(1), INFO
      RETURN
C
C   14) IFLAG=24
C
 1240 CONTINUE
      WRITE (IPDEVC,99983) INFO, UBOUND, BBOUND
      RETURN
C
C   15) IFLAG=25
C
 1250 CONTINUE
      WRITE (IPDEVC,99982) INFO
      RETURN
C
C   16) IFLAG=26
C
 1260 CONTINUE
      WRITE (IPDEVC,99981) INFO
      RETURN
C
C   17) IFLAG=27
C
 1270 CONTINUE
      WRITE (IPDEVC,99980)
      RETURN
C
C   18) IFLAG=28
C
 1280 CONTINUE
      WRITE (IPDEVC,99979) INFO
      RETURN
C
C   19) IFLAG=29
C
 1290 CONTINUE
      WRITE (IPDEVC,99978)
      RETURN
C
C   20) IFLAG=30
C
 1300 CONTINUE
      WRITE (IPDEVC,99977) INFO
      RETURN
C
C   21) IFLAG=31
C
 1310 CONTINUE
      WRITE (IPDEVC,99976) INFO
      RETURN
C
C   22) IFLAG=32
C
 1320 CONTINUE
      WRITE (IPDEVC,99975)
      RETURN
C
C   23) IFLAG=33
C
 1330 CONTINUE
      WRITE (IPDEVC,99974) FX, FLOWBD
      RETURN
C
C   24) IFLAG=34
C
 1340 CONTINUE
      WRITE (IPDEVC,99973) IPWHAT
      RETURN
C
C   25) IFLAG=35
C
 1350 CONTINUE
      WRITE (IPDEVC,99972) RELPR
      RETURN
C
C   26) IFLAG=36
C
 1360 CONTINUE
      WRITE (IPDEVC,99971) IDIVX, DELDIV
      RETURN
99999 FORMAT (/5X, 50H************* EXIT OF ROUTINE VE08AD *************
     * //)
99998 FORMAT (7X, 14HERROR RETURN .)
99997 FORMAT (5X, 46HTERMINATION CRITERION OF USER SATISFIED (FLAG=,
     * I2, 1H))
99996 FORMAT (5X, 24HTHE TOTAL DIMENSION N = , I5, 2H .)
99995 FORMAT (5X, 29HTHE MACHINE PRECISION RELPR (, D14.7, 8H) IS OUT,
     * 10H OF RANGE.)
99994 FORMAT (5X, 44HTHE NOISE IN THE OBJECTIVE FUNCTION FNOISE (,
     * D14.7, 14H) IS NEGATIVE.)
99993 FORMAT (5X, 36HTHE NUMBER OF ELEMENT FUNCTION NS = , I5, 6H IS NO,
     * 11HN POSITIVE.)
99992 FORMAT (5X, 38HTHE STARTING POSITION OF THE VARIABLES, 8H INTERNA,
     * 9HL TO THE /8X, I5, 28H-TH ELEMENT FUNCTION  (NVAR(, I5, 4H) = ,
     * I5, 2H) /8X, 16HIS NON POSITIVE.)
99991 FORMAT (5X, 40HTHE NUMBER OF VARIABLES INTERNAL TO THE , I5,
     * 21H-TH ELEMENT FUNCTION /8X, 9H(NDIMI = , I5, 15H) IS NON POSITI,
     * 3HVE.)
99990 FORMAT (5X, 26HTHE SUBDIMENSION (NSUBI = , I5, 16H) ASSOCIATED TO
     * /8X, 4HTHE , I5, 35H-TH ELEMENT FUNCTION BY THE ROUTINE,
     * 12H OF THE USER/8X, 20HRANGE IS IMPOSSIBLE.)
99989 FORMAT (5X, 24HALGORITHM STOPPED AFTER , I5, 12H ITERATIONS.)
99988 FORMAT (5X, 26HTHE INITIAL STATUS OF THE , I3, 15H-TH ELEMENT FUN,
     * 5HCTION/8X, 8H(ISTATE(, I5, 4H) = , I2, 21H) IS NOT IN THE ALLOW,
     * 9HED RANGE.)
99987 FORMAT (5X, 26HTHE INITIAL STATUS OF THE , I5, 12H-TH VARIABLE/8X,
     * 8H(ISTATE(, I5, 4H) = , I5, 30H) IS NOT IN THE ALLOWED RANGE.)
99986 FORMAT (5X, 49HTHE TOTAL OF THE ELEMENT DIMENSIONS M=NVAR(NS+1)=,
     * I5, 1H.)
99985 FORMAT (5X, 17HTHE INDEX OF THE , I4, 25H-TH VARIABLE DESCRIBED IN
     * /8X, 7HINVAR (, I5, 2H)=, I5, 16H) IS IMPOSSIBLE.)
99984 FORMAT (5X, 37HTHE TOTAL AVAILABLE WORKSPACE LWK(1)=, I6, 4H IS ,
     * 10HTOO SMALL./8X, 22HIT SHOULD BE AT LEAST , I6, 1H.)
99983 FORMAT (5X, 18HTHE BOUNDS ON THE , I5, 12H-TH VARIABLE, 7H ARE IN,
     * 11HCONSISTENT./8X, 14H(UPPER BOUND =, D14.7, 16H AND LOWER BOUND,
     * 2H =, D14.7, 2H.))
99982 FORMAT (5X, 50HTHE USER HAS STOPPED THE MINIMIZATION PROCEDURE BY/
     * 8X, 32HSETTING THE SUBFUNCTION FLAG TO , I3, 1H.)
99981 FORMAT (5X, 4HTHE , I5, 29H-TH VARIABLE IS PURELY LINEAR,
     * 15H AND UNBOUNDED.)
99980 FORMAT (5X, 50HTHE DIRECTIONAL DERIVATIVE AT THE BEGINNING OF THE/
     * 8X, 27HLINESEARCH IS NON-NEGATIVE.)
99979 FORMAT (5X, 25HLINESEARCH FAILURE AFTER , I2, 8H TRIALS.)
99978 FORMAT (5X, 46HTHE ALGORITHM WAS STOPPED BECAUSE THE FUNCTION,
     * 12H DIFFERENCES/8X, 30HALONG THE CURRENT DIRECTION OF, 7H SEARCH,
     * 18H ARE INSIGNIFICANT/8X, 15HCOMPARED TO THE, 15H NOISE ON THE F,
     * 15HUNCTION VALUES.)
99977 FORMAT (5X, 24HTHE PRODUCT SBS FOR THE , I5, 17H-TH ELEMENT HESSI,
     * 2HAN/8X, 29HIS TOO SMALL FOR BFGS UPDATE.)
99976 FORMAT (5X, 51HINCORRECT FLAG IFLAG RETURNED FROM THE LAST CALL TO
     * /8X, 50HTHE ROUTINE VE08SD. IT SHOULD BE BETWEEN 0 AND 10,/8X,
     * 17HAND WAS EQUAL TO , I3, 2H .)
99975 FORMAT (5X, 51HTHE MINIMIZATION PROCEDURE HAS BEEN STOPPED BECAUSE
     * /8X, 53HA POSSIBLE ERROR HAS BEEN DETECTED IN THE COMPUTATION/8X,
     * 25HOF THE ELEMENT GRADIENTS.)
99974 FORMAT (5X, 51HINCONSISTENT LOWER BOUND ON THE OBJECTIVE FUNCTION.
     * /8X, 44HTHE FUNCTION VALUE AT THE STARTING POINT IS , D14.7/8X,
     * 25HWHILE THE LOWER BOUND IS , D14.7, 1H.)
99973 FORMAT (5X, 37HTHE PARAMETER IPWHAT IS OUT OF RANGE./8X, 6HITS VA,
     * 7HLUE IS , I3, 30H AND SHOULD BE 0,1,2,3,4 OR 5.)
99972 FORMAT (5X, 38HTHE ROUTINE VE08AD WAS STOPPED BECAUSE/8X,
     * 44HTHE NORM OF THE COMPUTED STEP WAS NEGLIGIBLE/8X,10H( LT RELPR,
     * 12H*NORM(X) = , D9.2, 2H)./8X,
     * 39HTHIS ERROR USUALLY OCCURS WHEN TOO MUCH/
     * 8X, 37HACCURACY IS REQUIRED FOR TERMINATION.)
99971 FORMAT (5X, 38HTHE ROUTINE VE08AD WAS STOPPED BECAUSE/8X, I1,
     * 28H SUCCESSIVE VERY LARGE STEPS/8X, 5H( GT , D9.2, 8H ) WERE ,
     * 19HTAKEN.. THE ROUTINE/8X, 21HIS PROBABLY DIVERGING)
      END

      SUBROUTINE VE08BD(FNOISE, IFFLAG, IFLAG, INFO, IRTN)
C
C
C       *********************************************************
C       *                                                       *
C       *     CONTROL OF THE ERROR DURING FUNCTION EVALUATION   *
C       *                                                       *
C       *********************************************************
C
C
C
      DOUBLE PRECISION FNOISE
C
C
C   IS FNOISE REALISTIC?
C   --------------------
C
      IRTN = 0
      IF (FNOISE.GE.0.0) GO TO 10
      INFO = IDINT(FNOISE)
      IFLAG = 13
      IRTN = 1
      RETURN
C
C   DOES THE USER WANT TO STOP THE ROUTINE?
C   ---------------------------------------
C
   10 CONTINUE
      IF (IFFLAG.GE.0) RETURN
      INFO = IFFLAG
      IFLAG = 25
      IRTN = 1
      RETURN
      END

      SUBROUTINE VE08CD(I, NDIMI, X, XNEW, INVAR, ISELF)
C
C
C       **************************************************
C       *                                                *
C       *   DETECT IF ELEMENT I IS TO BE RECOMPUTED      *
C       *                                                *
C       **************************************************
C
C
      DOUBLE PRECISION X(1), XNEW(1)
      INTEGER INVAR(1)
C
C   LOOP ON THE VARIABLES OF THE I-TH ELEMENT FUNCTION
C   --------------------------------------------------
C
      DO 10 J=1,NDIMI
        IVAR = INVAR(J)
        IF (X(IVAR).EQ.XNEW(IVAR)) GO TO 10
C
C   THE IVAR-TH VARIABLE HAS BEEN MODIFIED: ASSURE THE I-TH ELEMENT
C   ---------------------------------------------------------------
C       FUNCTION WILL BE RECOMPUTED
C       ---------------------------
C
        IF (ISELF.LE.8) ISELF = ISELF + 10
        RETURN
C
C   END OF THE LOOP ON THE VARIABLES OF THE I-TH ELEMENT
C   ----------------------------------------------------
C
   10 CONTINUE
      RETURN
      END

      SUBROUTINE VE08DD(IELF, NDIMI, NS, P1, P2, P3, GX, DG, X, B,
     * INVAR, ISTATE, ISELF, IPDEVC, IPFREQ, FXI, NGRI, NSUBI, GXOK,
     * TESTGX, HESDIF, RELPR, EPSQRT, DIFGRD, FNOISE, DBIG, GTOL,
     * INFO, IFLAG, IRTN, ELFNCT, RANGE)
C
C
C       *********************************************************
C       *                                                       *
C       *     EVALUATION OF THE IELF-THE ELEMENT FUNCTION,      *
C       *      ITS GRADIENT AND POSSIBLY ITS HESSIAN AT         *
C       *      THE INITIAL POINT X.                             *
C       *                                                       *
C       *********************************************************
C
C
      DOUBLE PRECISION DBIG, DIF, DIFGRD, DIF2, RELPR, EPSQRT, ERR,
     * FNOISE, FXI, FXIP, GTOL, TEMP
      LOGICAL GXOK, TESTGX, HESDIF
      EXTERNAL ELFNCT,RANGE
C
C
      DOUBLE PRECISION P1(1), P2(1), P3(1), GX(1), X(1), DG(1), B(1)
      INTEGER INVAR(1), ISTATE(1)
C
C
C   CHECK IF THE I-TH ELEMENT FUNCTION HAS TO BE RECOMPUTED. IF THIS IS
C   --------------------------------------------------------------------
C       THE CASE, BRANCH TO POSSIBLE HESSIAN ESTIMATION
C       -----------------------------------------------
C
      IRTN = 0
      IUTMB = 4
      IUMB = 2
      NGRI = 0
      IF (ISELF.GE.8) GO TO 10
      GO TO 90
C
C   THE I-TH ELEMENT FUNCTION HAS TO BE RECOMPUTED
C   ----------------------------------------------
C
   10 CONTINUE
      ISELF = ISELF - 10
      IFFLAG = 2
      IF (ISELF.LT.0) IFFLAG = 1
C
C   PREPARE THE DATA POINT FOR THE I-TH ELEMENT FUNCTION IN P1
C   ----------------------------------------------------------
C
      DO 20 I=1,NDIMI
        INVARI = INVAR(I)
        P1(I) = X(INVARI)
   20 CONTINUE
C
C   EVALUATE THE I-TH ELEMENT FUNCTION
C   ----------------------------------
C
      CALL ELFNCT(IELF, P1, FXI, GX, NDIMI, NS, IFFLAG, DBIG, FNOISE)
      NGRI = NGRI + 1
      CALL VE08BD(FNOISE, IFFLAG, IFLAG, INFO, JRTN)
      IF (JRTN.EQ.1) GO TO 140
C
C   ESTIMATION OF THE GRADIENT BY DIFFERENCE
C   ----------------------------------------
C
C   1) IS ESTIMATION NEEDED?
C
      IF (ISELF.GE.0 .AND. (.NOT.TESTGX)) GO TO 90
C
C   2) YES: LOOP ON THE SUBDIMENSIONS TO PREPARE THE PERTURBED DATA
C       POINT
C
      JJ = 1
      DO 80 J=1,NDIMI
        INVARJ = INVAR(J)
        IF (ISTATE(INVARJ).EQ.0) GO TO 70
        TEMP = P1(J)
        IF (DABS(TEMP).GT.RELPR) GO TO 30
        P1(J) = TEMP + EPSQRT
        GO TO 40
   30   CONTINUE
        P1(J) = TEMP*(1.0+DIFGRD)
   40   CONTINUE
        DIF = P1(J) - TEMP
C
C   3) RE-EVALUATE THE I-TH ELEMENT FUNCTION AT PERTURBED POINT
C
        CALL ELFNCT(IELF, P1, FXIP, P2, NDIMI, NS, IFFLAG, DBIG, FNOISE)
        NGRI = NGRI + 1
        CALL VE08BD(FNOISE, IFFLAG, IFLAG, INFO, JRTN)
        IF (JRTN.EQ.1) GO TO 140
C
C   4) ESTIMATE THE J-TH COMPONENT OF THE GRADIENT AND TEST IT W.R.T. IT
C       ANALYTICAL VALUE IF NEEDED
C
        TEMP = (FXIP-FXI)/DIF
        IF (ISELF.GE.0) GO TO 50
        GX(JJ) = TEMP
        GO TO 60
   50   CONTINUE
        ERR = DABS(GX(JJ)-TEMP)/(1.0+DABS(TEMP))
        IF (ERR.LE.GTOL) GO TO 60
        IF (IPFREQ.GE.0) WRITE (IPDEVC,99999) J, IELF, GX(JJ), TEMP
        GXOK = .FALSE.
   60   CONTINUE
C
C   5) RESET DATA POINT
C
        P1(J) = P1(J) - DIF
C
C   6) END OF THE LOOP ON THE SUBDIMENSIONS
C
   70   CONTINUE
        JJ = JJ + 1
   80 CONTINUE
C
C   ESTIMATE THE INITIAL I-TH ELEMENT HESSIAN BY DIFFERENCES
C   --------------------------------------------------------
C
C   1) GET THE SUBDIMENSION AND PROJECT THE ELEMENT GRADIENT ON THE
C       RANGE
C
   90 CONTINUE
      IF (.NOT.HESDIF) RETURN
      CALL RANGE(IELF, IUTMB, GX, P3, NDIMI, NSUBI, NS)
      IF (NSUBI.EQ.0 .OR. ISELF.LT.0) RETURN
      L = 0
      DIF2 = DIFGRD + DIFGRD
C
C   2) LOOP ON THE SUBDIMENSION
C
      NSUBIT = NSUBI
      DO 130 J=1,NSUBI
C
C   3) BUILD THE PERTURBED DATA POINT
C
        DO 100 K=1,NSUBI
          P1(K) = 0.0
  100   CONTINUE
        P1(J) = 1.0
        CALL RANGE(IELF, IUMB, P1, P2, NDIMI, NSUBIT, NS)
        TEMP = DIF2
        DO 110 K=1,NDIMI
          INVARK = INVAR(K)
          DG(K) = TEMP*P2(K) + X(INVARK)
  110   CONTINUE
C
C   4) COMPUTE THE NEW PERTURBED GRADIENT, PROJECTED ON THE RANGE
C
        IFFLAG = 2
        CALL ELFNCT(IELF, DG, TEMP, P1, NDIMI, NS, IFFLAG, DBIG, FNOISE)
        NGRI = NGRI + 1
        CALL VE08BD(FNOISE, IFFLAG, IFLAG, INFO, JRTN)
        IF (JRTN.EQ.1) GO TO 140
C
C   5) COMPUTE THE J-TH ROW OF THE I-TH ELEMENT HESSIAN
C
        CALL RANGE(IELF, IUTMB, P1, P2, NDIMI, NSUBIT, NS)
        DO 120 K=1,J
          L = L + 1
          B(L) = (P2(K)-P3(K))/DIF2
  120   CONTINUE
C
C   6) END OF THE LOOP ON THE SUBDIMENSION
C
  130 CONTINUE
      RETURN
C
C   ERROR EXIT
C   ----------
C
  140 IRTN = 1
      RETURN
99999 FORMAT (5X, 36HPOSSIBLE ERROR IN THE COMPUTATION OF, 9H THE ANAL,
     * 16HYTICAL GRADIENT /5X, 4HTHE , I3, 21H-TH COMPONENT OF THE ,
     * I5, 24H-TH ELEMENT GRADIENT HAS/5X, 22HA COMPUTED VALUE OF   ,
     * D14.7, 4H AND/5X, 22HAN ESTIMATED VALUE OF , D14.7, 1H./)
      END

      SUBROUTINE VE08ED(IELF, NDIMI, NS, P1, P2, B, ISELF, NSUBI,
     * HESDIF, RANGE)
C
C
C       ************************************************
C       *                                              *
C       *   INITIALIZES THE IELF-TH ELEMENT HESSIAN    *
C       *      TO THE IDENTITY MATRIX                  *
C       *                                              *
C       ************************************************
C
C
      LOGICAL HESDIF
      EXTERNAL RANGE
C
C
      DOUBLE PRECISION P1(1), P2(1), B(1)
C
C
C   GET THE TRUE SUBDIMENSION NSUBI
C   -------------------------------
C
      L = 1
      IUB = 1
      CALL RANGE(IELF, IUB, P1, P2, NDIMI, NSUBI, NS)
C
C   INITIALIZE THE I-TH ELEMENT HESSIAN
C   -----------------------------------
C
      IF (NSUBI.EQ.0 .OR. (HESDIF .AND. ISELF.GT.0)) RETURN
      B(1) = 1.0
      IF (NSUBI.LE.1) RETURN
      DO 20 J=2,NSUBI
        JJ = J - 1
        DO 10 K=1,JJ
          L = L + 1
          B(L) = 0.0
   10   CONTINUE
        L = L + 1
        B(L) = 1.0
   20 CONTINUE
      RETURN
      END

      SUBROUTINE VE08FD(IELF, NDIMI, INVAR, GX, GI, ISTATE)
C
C
C       **************************************************
C       *                                                *
C       *  THIS ROUTINE ACCUMULATES THE OVERAL GRADIENT  *
C       *    FROM THE IELF-TH ELEMENT GRADIENT           *
C       *                                                *
C       **************************************************
C
C
C
C
      DOUBLE PRECISION GX(1), GI(1)
      INTEGER INVAR(1), ISTATE(1)
C
C
      DO 10 I=1,NDIMI
        IVAR = INVAR(I)
        IF (ISTATE(IVAR).NE.0) GX(IVAR) = GX(IVAR) + GI(I)
   10 CONTINUE
      RETURN
      END

      SUBROUTINE VE08GD(IELF, NDIMI, NS, P1, P2, P3, DG, B, INVAR,
     * NSUBI, RESTRT, HESDIF, RANGE)
C
C
C       ************************************************************
C       *                                                          *
C       *   ASSEMBLY OF THE DIAGONAL OF THE FIRST ELEMENT HESSIAN  *
C       *           APPROXIMATIONS                                 *
C       *                                                          *
C       ************************************************************
C
C
      LOGICAL RESTRT, HESDIF
      EXTERNAL RANGE
C
C
      DOUBLE PRECISION P1(1), P2(1), P3(1), DG(1), B(1)
      INTEGER INVAR(1)
C
C
C
C   LOOP ON THE SUBDIMENSION
C   ------------------------
C
      IUB = 1
      IUTB = 3
      DO 40 J=1,NDIMI
C
C   PREPARE THE J-TH SUB-BASIS VECTOR
C   ---------------------------------
C
        DO 10 K=1,NDIMI
          P1(K) = 0.0
   10   CONTINUE
        P1(J) = 1.0
C
C   PROJECT ON THE RANGE
C   --------------------
C
        CALL RANGE(IELF, IUB, P1, P2, NDIMI, NSUBI, NS)
        IF (NSUBI.EQ.0) RETURN
C
C   WHEN RESTARTING, COMPUTE THE PRODUCT WITH THE STARTING APPROXIMATION
C   --------------------------------------------------------------------
C       TO THE ELEMENT HESSIANS:
C       ------------------------
C
        IF (.NOT.(RESTRT .OR. HESDIF)) GO TO 30
        CALL VE08PD(B, P2, P3, NSUBI)
        DO 20 K=1,NSUBI
          P2(K) = P3(K)
   20   CONTINUE
C
C   RESTORE TO FULL SUBDIMENSION
C   ----------------------------
C
   30   CONTINUE
        CALL RANGE(IELF, IUTB, P2, P1, NDIMI, NSUBI, NS)
C
C   ACCUMULATE IN THE CORRESPONDING DIAGONAL ELEMENT
C   ------------------------------------------------
C
        IVAR = INVAR(J)
        DG(IVAR) = DG(IVAR) + P1(J)
   40 CONTINUE
      RETURN
      END

      SUBROUTINE VE08HD(IELF, NDIMI, NS, P1, P2, P3, X, GXI, INVAR,
     * ISTATE, ISELF, FXI, NGRI, DIFGRD, FNOISE, DBIG, FMAX, INFO,
     * IFLAG, IRTN, ELFNCT, RANGE)
C
C
C       *************************************************************
C       *                                                           *
C       *   RECOMPUTATION OF THE IELF-TH ELEMENT FUNCTION AND       *
C       *      GRADIENT AFTER MODIFICATION OF THE LINEAR VARIABLES  *
C       *                                                           *
C       *************************************************************
C
C
      DOUBLE PRECISION DBIG, DERJ, DIFGRD, FMAX, FNOISE, FXFWD, FXI
      EXTERNAL ELFNCT, RANGE
C
C
      DOUBLE PRECISION P1(1), P2(1), P3(1), X(1), GXI(1)
      INTEGER INVAR(1), ISTATE(1)
C
C
      IRTN = 0
      IUB = 1
      IUTB = 3
      IUMB = 2
      NGRI = 0
C
C   CHECK IF THE I-TH ELEMENT FUNCTION HAS TO BE RECOMPUTED.
C   --------------------------------------------------------
C
      IF (ISELF.LT.8) RETURN
C
C   THE I-TH ELEMENT FUNCTION HAS TO BE RECOMPUTED
C   ----------------------------------------------
C
      ISELF = ISELF - 10
C
C   PREPARE THE DATA POINT FOR THE I-TH ELEMENT FUNCTION IN P1
C   ----------------------------------------------------------
C
      DO 10 I=1,NDIMI
        INVARI = INVAR(I)
        P1(I) = X(INVARI)
   10 CONTINUE
C
C   EVALUATE THE I-TH ELEMENT FUNCTION
C   ----------------------------------
C
      IFFLAG = 2
      IF (ISELF.LT.0) IFFLAG = 1
      CALL ELFNCT(IELF, P1, FXI, GXI, NDIMI, NS, IFFLAG, FMAX, FNOISE)
      NGRI = NGRI + 1
      CALL VE08BD(FNOISE, IFFLAG, IFLAG, INFO, JRTN)
      IF (JRTN.EQ.1) GO TO 60
C
C   ESTIMATE THE ELEMENT GRADIENT BY DIFFERENCES
C   --------------------------------------------
C
C   1) CHECK IF ESTIMATION IS NEEDED
C
      IF (ISELF.GT.0) RETURN
C
C   2) GET THE TRUE SUBDIMENSION
C
      CALL RANGE(IELF, IUB, GXI, P3, NDIMI, NSUBI, NS)
      IF (NSUBI.EQ.0) RETURN
C
C   3) LOOP ON THE SUBDIMENSION
C
      NSUBIT = NSUBI
      DO 40 J=1,NSUBI
        INVARJ = INVAR(J)
        IF (NSUBI.EQ.NDIMI .AND. ISTATE(INVARJ).EQ.0) GO TO 40
C
C   4) SET DATA POINT
C
        DO 20 K=1,NSUBI
          P2(K) = 0.0
   20   CONTINUE
        P2(J) = 1.0
        CALL RANGE(IELF, IUTB, P2, P1, NDIMI, NSUBIT, NS)
        DO 30 K=1,NDIMI
          INVARK = INVAR(K)
          P2(K) = P1(K)*DIFGRD + X(INVARK)
   30   CONTINUE
C
C   5) COMPUTE FUNCTION VALUE AT PERTURBED DATA POINT
C
        CALL ELFNCT(IELF, P2, FXFWD, P1, NDIMI, NS, IFFLAG, DBIG,
     *   FNOISE)
        NGRI = NGRI + 1
        CALL VE08BD(FNOISE, IFFLAG, IFLAG, INFO, JRTN)
        IF (JRTN.EQ.1) GO TO 60
C
C   6) ESTIMATE THE J-TH COMPONENT OF THE ELEMENT GRADIENT IN
C       SUBDIMENSION
C
        DERJ = (FXFWD-FXI)/DIFGRD
        P3(J) = DERJ - P3(J)
   40 CONTINUE
C
C   7) RESTORE THE ELEMENT GRADIENT TO FULL SUBDIMENSION
C
      CALL RANGE(IELF, IUMB, P3, P2, NDIMI, NSUBI, NS)
      DO 50 J=1,NDIMI
        GXI(J) = GXI(J) + P2(J)
        INVARJ = INVAR(J)
        IF (ISTATE(INVARJ).EQ.0) GXI(J) = 0.0
   50 CONTINUE
      RETURN
   60 CONTINUE
      IRTN = 1
      RETURN
      END

      SUBROUTINE VE08ID(IELF, NDIMI, NS, P1, P2, W1, W2, B, INVAR,
     * ISTATE, NSUBI, RANGE)
C
C
C       **********************************************************
C       *                                                        *
C       *    COMPUTATION OF THE PRODUCT OF THE IELF-TH ELEMENT   *
C       *     HESSIAN WITH W1 INTO W2.                           *
C       *                                                        *
C       **********************************************************
C
C
C
C
      DOUBLE PRECISION W1(1), W2(1), B(1), P1(1), P2(1)
      INTEGER INVAR(1), ISTATE(1)
      EXTERNAL RANGE
C
C
      IUB = 1
      IUTB = 3
C
C   BUILD THE CORRESPONDING DIRECTION VECTOR IN SUBDIMENSION
C   --------------------------------------------------------
C
      DO 10 I=1,NDIMI
        INVARI = INVAR(I)
        P1(I) = W1(INVARI)
   10 CONTINUE
C
C   PROJECT ON THE RANGE OF THE I-TH ELEMENT HESSIAN
C   ------------------------------------------------
C
      CALL RANGE(IELF, IUB, P1, P2, NDIMI, NSUBI, NS)
      IF (NSUBI.EQ.0) RETURN
C
C   CHECK IF PRODUCT IS NEEDED
C   --------------------------
C
      DO 20 J=1,NSUBI
        IF (P2(J).NE.0.0) GO TO 30
   20 CONTINUE
      RETURN
C
C   COMPUTE THE PRODUCT ON THE RANGE
C   --------------------------------
C
   30 CONTINUE
      CALL VE08PD(B, P2, P1, NSUBI)
C
C   RESTORE PRODUCT TO FULL SUBDIMENSION
C   ------------------------------------
C
      CALL RANGE(IELF, IUTB, P1, P2, NDIMI, NSUBI, NS)
C
C   ACCUMULATE THE EXPANDED PRODUCT IN THE VECTOR W2
C   ------------------------------------------------
C
      DO 40 J=1,NDIMI
        IVAR = INVAR(J)
        IF (ISTATE(IVAR).NE.0) W2(IVAR) = W2(IVAR) + P2(J)
   40 CONTINUE
      RETURN
      END

      SUBROUTINE VE08JD(IELF, NDIMI, NS, P1, X, XOLD, GI1, GI2, INVAR,
     * ISTATE, ISELF, NGRI, DIFEST, GSINI, A, FNOISE, FMAX, FXI, GSA,
     * IKLS, MAXLS, INFO, IFLAG, IRTN, ELFNCT)
C
C
C       *****************************************************
C       *                                                   *
C       *   COMPUTATION OF THE VALUE OF THE IELF-TH ELEMENT *
C       *     FUNCTION AT THE POINT X, AND OF ITS GRADIENT, *
C       *     IF ANALYTICAL GRADIENTS ARE AVAILABLE.        *
C       *                                                   *
C       *****************************************************
C
C
      DOUBLE PRECISION A, FMAX, FNOISE, FXI, GSA, GSINI, TEMP
      LOGICAL DIFEST
      EXTERNAL ELFNCT
C
C
      DOUBLE PRECISION P1(1), GI1(1), GI2(1), X(1), XOLD(1)
      INTEGER INVAR(1), ISTATE(1)
C
C
      IRTN = 0
      NGRI = 0
      IF (ISELF.GE.8) GO TO 20
      DO 10 I=1,NDIMI
        GI1(I) = GI2(I)
   10 CONTINUE
      GO TO 40
C
C   PREPARE THE DATA POINT
C   ----------------------
C
   20 CONTINUE
      ITEMP = ISELF - 10
      IF (.NOT.DIFEST) ISELF = ITEMP
      IFFLAG = 2
      IF (ITEMP.LT.0) IFFLAG = 1
      DO 30 I=1,NDIMI
        INVARI = INVAR(I)
        P1(I) = X(INVARI)
   30 CONTINUE
C
C   COMPUTE THE NEW VALUE OF THE I-TH ELEMENT FUNCTION
C   --------------------------------------------------
C
      CALL ELFNCT(IELF, P1, FXI, GI1, NDIMI, NS, IFFLAG, FMAX, FNOISE)
      NGRI = NGRI + 1
      CALL VE08BD(FNOISE, IFFLAG, IFLAG, INFO, JRTN)
      IF (JRTN.EQ.1) GO TO 60
C
C   TEST IF OVERSHOOT IS DETECTED BY THE USER. IN THIS CASE, STOP
C   -------------------------------------------------------------
C       EVALUATION AND BRANCH TO HALVE THE STEP
C       ---------------------------------------
C
      IF (IFFLAG.EQ.0 .AND. IKLS.LT.MAXLS) IRTN = 2
      IF (IFFLAG.EQ.0 .AND. IKLS.LT.MAXLS) RETURN
C
C   ACCUMULATE THE NEW DIRECTIONAL DERIVATIVE
C   -----------------------------------------
C
   40 CONTINUE
      IF (DIFEST) RETURN
      DO 50 J=1,NDIMI
        IVAR = INVAR(J)
        ISVAR = ISTATE(IVAR)
        IF (ISVAR.EQ.0) GO TO 50
        TEMP = X(IVAR)-XOLD(IVAR)
        GSA = GSA + TEMP*GI1(J)/A
        IF (ISVAR.LT.0 .OR. ISVAR.GT.2) GO TO 50
        GSINI = GSINI + TEMP*GI2(J)
   50 CONTINUE
      RETURN
   60 CONTINUE
      IRTN = 1
      RETURN
      END

      SUBROUTINE VE08KD(IELF, NDIMI, NS, P1, P2, P3, G1, G2, X, XOLD,
     * B, ISELF, INVAR, ISTATE, NSUBI, NGRI, FXI, FNOISE, XNOISE,
     * EPSQRT, RELPR, TOLCNT, A, DXN1, GSA, GSINI, GXMAX, INFO,
     * IFLAG, IRTN, ELFNCT, RANGE)
C
C
C       *************************************************************
C       *                                                           *
C       *    COMPUTATION OF ONE ELEMENT GRADIENT BY DIFFERENCES,    *
C       *        USING STEWART'S ALGORITHM.                         *
C       *                                                           *
C       *************************************************************
C
C
C
      DOUBLE PRECISION A, ALPHA, DALPHA, DBIG, DDENOM, DELTA, DERJ,
     * DGAMMA, DISCR, DNUM, DPHI, DXN1, RELPR, EPSQRT, ETA,
     * FNOISE, FXBWD, FXFWD, FXI, GAMMA, GAM2, GSA, GSINI, GXMAX,
     * TEMP, TEST, TOLCNT, XI, XNOISE
      EXTERNAL ELFNCT, RANGE
C
C
      DOUBLE PRECISION P1(1), P2(1), P3(1), G1(1), G2(1), X(1),
     * XOLD(1), B(1)
      INTEGER ISTATE(1), INVAR(1)
C
C
      IRTN = 0
      IUB = 1
      IUTB = 3
      IUMB = 2
      NGRI = 0
C
C   PROJECT THE ELEMENT GRADIENT ON THE RANGE
C   -----------------------------------------
C
      CALL RANGE(IELF, IUB, G2, G1, NDIMI, NSUBI, NS)
C
C   IF THE GRADIENT IS KNOWN ALREADY, COPY ITS VALUE
C   ------------------------------------------------
C
      IF (ISELF.GE.8) GO TO 20
      DO 10 I=1,NDIMI
        G1(I) = G2(I)
   10 CONTINUE
      GO TO 210
   20 CONTINUE
      ISELF = ISELF - 10
      IF (ISELF.GE.0) RETURN
      IF (NSUBI.EQ.0) GO TO 190
C
C   PREPARE THE DATA POINT
C   ----------------------
C
      IFFLAG = 1
      DO 30 I=1,NDIMI
        INVARI = INVAR(I)
        P1(I) = X(INVARI)
   30 CONTINUE
C
C   SET THE PARAMETERS FOR STEWART'S ALGORITHM
C   ------------------------------------------
C
      DPHI = DMAX1(DABS(FXI),FNOISE,RELPR)
      XI = 0.0
      DO 40 I=1,NDIMI
        XI = XI + P1(I)**2
   40 CONTINUE
      XI = DSQRT(XI)
C
C   LOOP ON THE TRUE SUBDIMENSION
C   -----------------------------
C
      LL = 0
      NSUBIT = NSUBI
      DO 150 J=1,NSUBI
        LL = LL + J
        INVARJ = INVAR(J)
        IF (NSUBI.EQ.NDIMI .AND. ISTATE(INVARJ).EQ.0) GO TO 150
        ALPHA = B(LL)
        DALPHA = DABS(ALPHA)
        IF (DALPHA.GE.EPSQRT) GO TO 50
        DELTA = EPSQRT
        TEST = 1.0
        GO TO 90
   50   CONTINUE
        GAMMA = G1(J)
        DGAMMA = DABS(GAMMA)
C
C   COMPUTE ETA, THE ACCURACY FACTOR
C   --------------------------------
C
        ETA = DMAX1(FNOISE,(DGAMMA*XI*XNOISE)/DPHI)
C
C   TEST IF CENTRAL DIFFERENCE IS NEEDED BECAUSE OF CANCELLATION ERRORS
C   -------------------------------------------------------------------
C        IN THE COMPUTATION OF THE OVERAL GRADIENT
C         ----------------------------------------
C
        IF (GXMAX.LE.100.0*EPSQRT*DGAMMA) GO TO 80
C
C   COMPUTE THE VALUE OF ACCURACY CONDITION
C   ---------------------------------------
C
        TEST = DALPHA*DPHI*ETA
        GAM2 = GAMMA**2
        IF (GAM2.LE.TEST .AND. DGAMMA.GE.(100.*EPSQRT)) GO TO 60
C
C   FIRST ALTERNATIVE
C   -----------------
C
        DELTA = 2.0*DSQRT(ETA*DPHI/DALPHA)
        DNUM = DALPHA*DELTA
        GO TO 70
C
C   SECOND ALTERNATIVE
C   ------------------
C
   60   CONTINUE
        DELTA = 2.0*(ETA*DPHI*DGAMMA/ALPHA**2)**(1.0/3.0)
        DNUM = GAMMA + GAMMA
C
C   NEWTON'S REFINEMENT
C   -------------------
C
   70   CONTINUE
        DDENOM = 3.0*DALPHA*DELTA + 4.0*DGAMMA
        IF (DABS(DDENOM).GT.RELPR) DELTA = DELTA*(1.0-DNUM/DDENOM)
        DELTA = DSIGN(DELTA,GAMMA)
        DELTA = DSIGN(DELTA,ALPHA)
C
C   TEST IF CENTRAL DIFFERENCE ARE NEEDED. IF YES, COMPUTE THE NEW DELTA
C   --------------------------------------------------------------------
C
        TEST = 1.0
        IF (DABS(ALPHA*DELTA).LT.TOLCNT*DGAMMA .AND. DELTA.LE.A*DXN1)
     *   GO TO 90
   80   CONTINUE
        DISCR = GAM2 + 4.0*DALPHA*DPHI*ETA/TOLCNT
        DELTA = -DGAMMA/DALPHA + DSQRT(DISCR)/DALPHA
        TEST = -1.0
   90   CONTINUE
        TEMP = DMAX1(DABS(DELTA),0.001*EPSQRT)
        DELTA = DSIGN(TEMP,DELTA)
C
C   FORWARD DIFFERENCE: COMPUTE THE PERTURBED POINT
C   -----------------------------------------------
C
        DO 100 K=1,NSUBI
          P2(K) = 0.0
  100   CONTINUE
        P2(J) = 1.0
        CALL RANGE(IELF, IUTB, P2, P1, NDIMI, NSUBIT, NS)
        DO 110 K=1,NDIMI
          P2(K) = P1(K)*DELTA
          INVARK = INVAR(K)
          P1(K) = X(INVARK) + P2(K)
  110   CONTINUE
C
C   FORWARD DIFFERENCE: COMPUTE THE PERTURBED VALUE OF THE ELEMENT
C   --------------------------------------------------------------
C       FUNCTION
C       --------
C
        CALL ELFNCT(IELF, P1, FXFWD, P3, NDIMI, NS, IFFLAG, DBIG,
     *   FNOISE)
        NGRI = NGRI + 1
        CALL VE08BD(FNOISE, IFFLAG, IFLAG, INFO, JRTN)
        IF (JRTN.EQ.1) GO TO 230
C
C   BACKWARD DIFFERENCE: COMPUTE THE SECOND PERTURBED DATA POINT
C   ------------------------------------------------------------
C
        IF (TEST.GT.0.0) GO TO 130
        DO 120 K=1,NDIMI
          INVARK = INVAR(K)
          P1(K) = X(INVARK) - P2(K)
  120   CONTINUE
C
C   BACKWARD DIFFERENCE: COMPUTE THE ELEMENT FUNCTION VALUE AT SECOND
C   -----------------------------------------------------------------
C       PERTURBED DATA POINT
C       --------------------
C
        CALL ELFNCT(IELF, P1, FXBWD, P3, NDIMI, NS, IFFLAG, DBIG,
     *   FNOISE)
        NGRI = NGRI + 1
        CALL VE08BD(FNOISE, IFFLAG, IFLAG, INFO, JRTN)
        IF (JRTN.EQ.1) GO TO 230
C
C   CENTRAL DIFFERENCE: ESTIMATE THE J-TH COMPONENT OF GRADIENT IN
C   --------------------------------------------------------------
C       SUBDIMENSION
C       ------------
C
        DERJ = (FXFWD-FXBWD)/(DELTA+DELTA)
        GO TO 140
C
C   FORWARD DIFFERENCE: ESTIMATE THE J-TH COMPONENT OF GRADIENT IN
C   --------------------------------------------------------------
C       SUBDIMENSION
C       ------------
C
  130   CONTINUE
        DERJ = (FXFWD-FXI)/DELTA
C
C   MODIFY THE J-TH COMPONENT OF THE PROJECTED GRADIENT
C   ---------------------------------------------------
C
  140   CONTINUE
        G1(J) = DERJ - G1(J)
C
C   END OF THE LOOP ON THE SUBDIMENSIONS
C   ------------------------------------
C
  150 CONTINUE
C
C   RESTORE THE ELEMENT GRADIENT TO THE FULL SUBDIMENSION
C   -----------------------------------------------------
C
      IF (NDIMI.EQ.NSUBI) GO TO 170
      DO 160 I=1,NSUBI
        P1(I) = G1(I)
  160 CONTINUE
      CALL RANGE(IELF, IUMB, P1, G1, NDIMI, NSUBI, NS)
  170 CONTINUE
      DO 180 J=1,NDIMI
        G1(J) = G2(J) + G1(J)
        INVARJ = INVAR(J)
        IF (ISTATE(INVARJ).EQ.0) G1(J) = 0.0
  180 CONTINUE
      GO TO 210
  190 CONTINUE
      DO 200 I=1,NDIMI
        G1(I) = G2(I)
  200 CONTINUE
C
C   ACCUMULATE THE DIRECTIONAL DERIVATIVE
C   -------------------------------------
C
  210 CONTINUE
      DO 220 J=1,NDIMI
        IVAR = INVAR(J)
        ISVAR = ISTATE(IVAR)
        IF (ISVAR.EQ.0) GO TO 220
        TEMP = X(IVAR)-XOLD(IVAR)
        GSA = GSA + TEMP*G1(J)/A
        IF (ISVAR.LT.0 .OR. ISVAR.GT.2) GO TO 220
        GSINI = GSINI + TEMP*G2(J)
  220 CONTINUE
      RETURN
  230 CONTINUE
      IRTN = 1
      RETURN
      END

      SUBROUTINE VE08LD(IELF, NDIMI, NS, P1, P2, P3, Y, S, D, B, RESN2,
     * ISELF, INVAR, KU, PRERED, SCAL1, RELPR, GNOISE, INFO, IFLAG,
     * IRTN, RANGE)
C
C
C
C       ****************************************************
C       *                                                  *
C       *     UPDATING OF THE IELF-TH ELEMENT HESSIAN      *
C       *                                                  *
C       ****************************************************
C
C
C
      DOUBLE PRECISION DSBSI, DYSI, RELPR, GNOISE, PRERED, Q, RESN2,
     * RNI1, RNI2, RSI, RSII, SBSI, SNI2, TEMP, YSI
      LOGICAL SCAL1
      EXTERNAL RANGE
C
C
      DOUBLE PRECISION P1(1), P2(1), P3(1), Y(1), S(1), D(1), B(1)
      INTEGER INVAR(1)
C
C
C
      IRTN = 0
      PRERED = 0.0
      IUTB = 3
      IUTMB = 4
      IUB = 1
C
C   BUILD THE PRODUCT OF THE DIFFERENCE IN GRADIENTS TIMES THE STEP(YSI)
C   --------------------------------------------------------------------
C
C   1) BUILD THE UNPROJECTED DIFFERENCE IN P1
C
      DO 10 I=1,NDIMI
        P1(I) = Y(I)
   10 CONTINUE
C
C   2) PROJECT IT ON THE RANGE
C
      CALL RANGE(IELF, IUTMB, P1, P2, NDIMI, NSUBI, NS)
      KU = (NSUBI*(NSUBI+1))/2
      IF (NSUBI.EQ.0) RETURN
      IF (NSUBI.EQ.NDIMI) GO TO 30
C
C   3) STORE THE RESULT IN Y
C
      DO 20 I=1,NSUBI
        Y(I) = P2(I)
   20 CONTINUE
C
C   4) BUILD THE UNPROJECTED STEP IN P1
C
   30 CONTINUE
      DO 40 I=1,NDIMI
        INVARI = INVAR(I)
        P1(I) = S(INVARI)
   40 CONTINUE
C
C   5) PROJECT THE STEP ON THE RANGE
C
      CALL RANGE(IELF, IUB, P1, P2, NDIMI, NSUBI, NS)
C
C   6) COMPUTE YSI
C
      YSI = 0.0
      DO 50 J=1,NSUBI
        YSI = YSI + P2(J)*Y(J)
   50 CONTINUE
C
C   COMPUTE THE PRODUCT OF THE PROJECTED STEP TIMES THE ELEMENT HESSIAN
C   -------------------------------------------------------------------
C
C
C   1) COMPUTE THE PRODUCT ON THE RANGE
C
      CALL VE08PD(B, P2, P1, NSUBI)
C
C   2) COMPUTE THE PRODUCT OF THE RESULT WITH THE PROJECTED STEP (SBSI)
C       AND THE SQUARE OF THE NORM OF THE PROJECTED STEP
C
      SBSI = 0.0
      SNI2 = 0.0
      RNI2 = 0.0
      DO 60 J=1,NSUBI
        SNI2 = SNI2 + P2(J)**2
        SBSI = SBSI + P1(J)*P2(J)
C
C   3) UPDATE THE SQUARE OF THE RESIDUAL NORM
C
        RNI2 = RNI2 + (Y(J)-P1(J))**2
   60 CONTINUE
      RESN2 = RESN2 + RNI2
C
C   4) UPDATE THE VALUE OF THE PREDICTED REDUCTION IN THE
C       OBJECTIVE FUNCTION
C
      PRERED = YSI - 0.5*SBSI
C
C   CHECK IF THE NOISE ON THE DIFFERENCE IN GRADIENT IS BELOW THE
C   -------------------------------------------------------------
C       NORM OF THE RESIDUAL. IF IT IS NOT THE CASE, SKIP UPDATING
C       ----------------------------------------------------------
C
      RNI1 = DSQRT(RNI2)
      IF (RNI1.LT.GNOISE) RETURN
C
C   SELECT BFGS OR RK1 UPDATE, DEPENDING ON CONVEXITY OF THE ELEMENT
C   ----------------------------------------------------------------
C       FUNCTION
C       --------
C
      IF (YSI.GT.0.0 .AND. SBSI.GT.0.0 .AND. IABS(ISELF).LE.1) GO TO 120
      ISELF = ISIGN(2,ISELF)
C
C   1) THE ELEMENT FUNCTION IS NOT CONVEX: APPLY RK1 UPDATE. BUILD THE
C       INNER PRODUCT OF THE RESIDUAL TIMES THE PROJECTED STEP, AND THE
C       NORM OF THESE VECTORS
C
      RSI = YSI - SBSI
      DO 70 J=1,NSUBI
        P1(J) = Y(J) - P1(J)
   70 CONTINUE
C
C   2) TEST IF THE DENOMINATOR IS BIG ENOUGH. IF THIS IS NOT THE CASE,
C       AVOID UPDATING
C
      TEMP = DABS(RSI)
      IF (TEMP.LE.RELPR .OR. TEMP.LE.(0.1*DSQRT(SNI2)*RNI1)) RETURN
C
C   3) APPLY RK1 UPDATE
C
      L = 0
      RSII = 1.0D0/RSI
      DO 80 J=1,NSUBI
        P2(J) = P1(J)*RSII
   80 CONTINUE
      DO 100 J=1,NSUBI
        DO 90 K=1,J
          L = L + 1
          B(L) = B(L) + P1(J)*P2(K)
   90   CONTINUE
  100 CONTINUE
C
C   4) UPDATE THE DIAGONAL ACCORDINGLY
C
      CALL RANGE(IELF, IUTB, P1, P2, NDIMI, NSUBI, NS)
      DO 110 J=1,NDIMI
        IVAR = INVAR(J)
        D(IVAR) = D(IVAR) + P2(J)*P2(J)/RSI
  110 CONTINUE
      RETURN
C
C   5) THE ELEMENT FUNCTION IS CONVEX: TEST FOR SCALING AT FIRST
C       ITERATION
C
  120 CONTINUE
      IF (SCAL1) GO TO 160
C
C   6) SCALING OF THE ELEMENT HESSIAN
C
      IF (SBSI.LE.RELPR .AND. YSI.LE.RELPR) RETURN
      IF (SBSI.GT.RELPR) GO TO 130
      INFO = IELF
      IFLAG = 30
      GO TO 260
  130 CONTINUE
      Q = YSI/SBSI
      DO 140 J=1,KU
        B(J) = Q*B(J)
  140 CONTINUE
      DO 150 J=1,NSUBI
        P1(J) = Q*P1(J)
  150 CONTINUE
      SBSI = YSI
      Q = Q - 1.0
C
C   7) APPLY BFGS UPDATE
C
  160 CONTINUE
      L = 0
      DYSI = 1./DSQRT(YSI)
      DSBSI = 1./DSQRT(SBSI)
      DO 170 J=1,NSUBI
        P3(J) = Y(J)*DYSI
        P2(J) = P1(J)*DSBSI
  170 CONTINUE
      DO 190 J=1,NSUBI
        DO 180 K=1,J
          L = L + 1
          B(L) = B(L) + P3(J)*P3(K) - P2(J)*P2(K)
  180   CONTINUE
  190 CONTINUE
C
C   8) UPDATE THE DIAGONAL ACCORDINGLY
C
      CALL RANGE(IELF, IUTB, P1, P2, NDIMI, NSUBI, NS)
      DO 200 J=1,NDIMI
        P1(J) = (P2(J)**2)/SBSI
  200 CONTINUE
      CALL RANGE(IELF, IUTB, Y, P2, NDIMI, NSUBI, NS)
      DO 210 J=1,NDIMI
        Y(J) = (P2(J)**2)/YSI - P1(J)
  210 CONTINUE
      NDIMIT = NDIMI
      DO 250 J=1,NDIMI
        IVAR = INVAR(J)
        IF (SCAL1) GO TO 240
        DO 220 K=1,NDIMI
          P1(K) = 0.0
  220   CONTINUE
        P1(J) = 1.0
        IF (NSUBI.EQ.NDIMI) GO TO 230
        CALL RANGE(IELF, IUB, P1, P2, NDIMIT, NSUBI, NS)
        CALL RANGE(IELF, IUTB, P2, P1, NDIMIT, NSUBI, NS)
  230   CONTINUE
        D(IVAR) = D(IVAR) + Q*P1(J)
  240   CONTINUE
        D(IVAR) = D(IVAR) + Y(J)
  250 CONTINUE
      RETURN
  260 CONTINUE
      IRTN = 1
      RETURN
      END

      SUBROUTINE VE08MD(RES,X,Y,N)
C
C
C       **********************************************
C       *                                            *
C       *    INNER PRODUCT OF X AND Y IN RES         *
C       *                                            *
C       **********************************************
C

      INTEGER N
      DOUBLE PRECISION RES, X(N), Y(N)


      RES = 0.0
      DO 10 I=1,N
         RES = RES + X(I)*Y(I)
10    CONTINUE
      RETURN
      END

      SUBROUTINE VE08ND(DX, W1, STEP, GX, W2, W3, RES, N)
C
C
C       **********************************************
C       *                                            *
C       *    FIRST INNER LOOP OF CONJUGATE GRADIENT  *
C       *                                            *
C       **********************************************
C
C
      DOUBLE PRECISION RES, STEP
C
C
      DOUBLE PRECISION DX(1), W1(1), W2(1), W3(1), GX(1)
C
C
      RES = 0.0
      DO 10 I=1,N
        DX(I) = DX(I) + STEP*W1(I)
        GX(I) = GX(I) - STEP*W2(I)
        W2(I) = GX(I)*W3(I)
        RES = RES + W2(I)*GX(I)
   10 CONTINUE
      RETURN
      END

      SUBROUTINE VE08OD(R, X, Y, BETA, N)
C
C
C       ************************************************
C       *                                              *
C       *   SECOND INNER LOOP OF CONJUGATE GRADIENTS   *
C       *                                              *
C       ************************************************
C
C
      DOUBLE PRECISION BETA
C
C
      DOUBLE PRECISION R(1), X(1), Y(1)
C
C
      DO 10 I=1,N
        R(I) = X(I) + BETA*Y(I)
   10 CONTINUE
      RETURN
      END

      SUBROUTINE VE08PD(H, X, Y, NSUBI)
C
C
C       *********************************************************
C       *                                                       *
C       *   THIS ROUTINE COMPUTES THE PRODUCT H*X=Y, WHERE      *
C       *     H IS AN ELEMENT HESSIAN MATRIX OF DIMENSION       *
C       *     NSUBI*NSUBI AND WHERE X AND Y AND TWO VECTORS     *
C       *     OF DIMENSION NSUBI.                               *
C       *                                                       *
C       *********************************************************
C
C
C
      DOUBLE PRECISION H(1), X(1), Y(1)
C
C
C
C   RESET THE RESULT VECTOR Y TO ZERO
C   ---------------------------------
C
      DO 10 I=2,NSUBI
        Y(I) = 0.0
   10 CONTINUE
C
C   COMPUTE THE PRODUCT
C   -------------------
C
      L = 1
      Y(1) = H(1)*X(1)
      IF (NSUBI.LT.2) RETURN
      DO 30 I=2,NSUBI
        ITEMP = I - 1
        DO 20 J=1,ITEMP
          L = L + 1
          Y(I) = Y(I) + H(L)*X(J)
          Y(J) = Y(J) + H(L)*X(I)
   20   CONTINUE
        L = L + 1
        Y(I) = Y(I) + H(L)*X(I)
   30 CONTINUE
      RETURN
      END

      SUBROUTINE VE08QD(KIT, FX, GXN, NGR, DNGR, ALPHA, ITSTEP, BOUNDS,
     * X, GX, S, B, IP1, NLP, N, NS, M, NVAR, P1, P2, RANGE)
C
C
C       ****************************************************
C       *                                                  *
C       *   PRINTING SUBROUTINE FOR PARTIALLY SEPARABLE    *
C       *               MINIMIZATION                       *
C       *                                                  *
C       ****************************************************
C
C
      DOUBLE PRECISION ALPHA, DNGR, FX, GXN
      INTEGER KIT(2), NGR(2)
      LOGICAL BOUNDS
      EXTERNAL RANGE
C
C
C       THE PRINTOUT GENERATED BY THIS ROUTINE IS GOVERNED BY THE VALUE
C       OF THE ARGUMENTS IP1 AS FOLLOWS :
C
C       IP1 DETERMINE THE ITEMS TO BE PRINTED :
C
C       IP1=0   THE ITERATION COUNT (KIT(2)), THE FUNCTION VALUE (FX),
C                THE NORM OF THE GRADIENT (GXN) AND THE NUMBER OF
C                OBJECTIVE FUNCTION SUBROUTINE CALLS (NGR(2),DNGR)
C       IP1=1   AS WITH IP1=0 + STEP SELECTION ITERATIONS (ITSTEP)
C                AND THE LINESEARCH PARAMETER (ALPHA)
C       IP1=2   AS WITH IP1=1 + THE VECTOR OF VARIABLES (X(K),K=1,N)
C       IP1=3   AS WITH IP1=2 + THE GRADIENT VECTOR (GX(K),K=1,N)
C       IP1=4   AS WITH IP1=3 + THE RECENT CHANGE IN THE VARIABLES
C                (S(K),K=1,N)
C       IP1=5   AS WITH IP1=4 + THE VALUES OF THE NONZERO ELEMENTS IN
C                THE APPROXIMATE HESSIAN MATRIX (B(K),K=1,M)
C
C
C       THE ARRAYS APPEARING IN THE ARGUMENT LIST ARE DIMENSIONED BY
      DOUBLE PRECISION X(1), GX(1), S(1), B(1), P1(1), P2(1)
      INTEGER NVAR(1)
C
C   PRINT THE REQUIRED ITEMS
C
      WRITE (NLP,99999) KIT(2), DNGR, NGR(2)
      IF (.NOT.BOUNDS) WRITE (NLP,99998) FX, GXN
      IF (BOUNDS) WRITE (NLP,99997) FX, GXN
      IF (IP1.LE.0) RETURN
      WRITE (NLP,99996) ITSTEP, ALPHA
      IF (IP1.LE.1) RETURN
      WRITE (NLP,99995)
      WRITE (NLP,99994) (X(K),K=1,N)
      IF (IP1.LE.2) RETURN
      WRITE (NLP,99993)
      WRITE (NLP,99994) (GX(K),K=1,N)
      IF (IP1.LE.3) RETURN
      IF (KIT(2).GE.0) WRITE (NLP,99992)
      IF (KIT(2).LT.0) WRITE (NLP,99991)
      WRITE (NLP,99994) (S(K),K=1,N)
      IF (IP1.LE.4) RETURN
      L = 0
        NST = NS
      DO 20 J=1,NS
        WRITE (NLP,99989) J
        JL = NVAR(J)
        NDIMI = NVAR(J+1) - JL
        IELF = J
        CALL RANGE(IELF, 1, P1, P2, NDIMI, NSUBI, NST)
        IF (NSUBI.EQ.0) GO TO 20
        DO 10 K=1,NSUBI
          LP1 = L + 1
          LPK = L + K
          WRITE (NLP,99988) (B(KK),KK=LP1,LPK)
          L = LPK
   10   CONTINUE
   20 CONTINUE
      WRITE (NLP,99990)
      RETURN
C
C   FORMATS
C
99999 FORMAT (///4X, 15H**** ITERATION , I4, 11H   ( AFTER , F9.2, 2H (,
     * I7, 17H) FUNCTION CALLS))
99998 FORMAT (//5X, 17HFUNCTION VALUE = , D23.15//5X, 14HNORM OF THE GR,
     * 9HADIENT = , D16.7)
99997 FORMAT (//5X, 17HFUNCTION VALUE = , D23.15//5X, 14HNORM OF THE PR,
     * 19HOJECTED GRADIENT = , D16.7)
99996 FORMAT (/5X, 25HSTEP STRATEGY ITERATIONS , I7, 5X, 10HLINESEARCH,
     * 11H PARAMETER , D10.3)
99995 FORMAT (/5X, 22HAPPROXIMATE SOLUTION X/)
99994 FORMAT (5X, 5D15.7)
99993 FORMAT (/5X, 34HGRADIENT AT APPROXIMATE SOLUTION X/)
99992 FORMAT (/5X, 26HLAST STEP OF THE ALGORITHM/)
99991 FORMAT (/5X, 23HORIGINAL STARTING POINT/)
99990 FORMAT (/5X, 50(1H*)//)
99989 FORMAT (/5X, 10HPROJECTED , I4, 19H-TH ELEMENT HESSIAN/)
99988 FORMAT (5X, 10D12.2)
      END

      SUBROUTINE VE08RD(X, GX, ISTATE, N, EBOUND, XUPPER, XLOWER)
C
C
C       ************************************************************
C       *                                                          *
C       *     THIS ROUTINE REDEFINES THE STATE OF THE BOUNDED      *
C       *       VARIABLES WITH RESPECT TO THEIR BOUND, ACCORDING   *
C       *       TO A STRATEGY PROPOSED BY BERTSEKAS.               *
C       *                                                          *
C       ************************************************************
C
C
      DOUBLE PRECISION DBI, EBOUND, EPSIT, UBI, WI, XUPPER, XLOWER
      EXTERNAL XUPPER, XLOWER
C
C
C
      DOUBLE PRECISION X(1), GX(1)
      INTEGER ISTATE(1)
C
C
C***********************************************************************
C
C         DETERMINE THE TOLERANCE ASSOCIATED WITH THE PRESENT ITERATE
C
C***********************************************************************
C
C
C   LOOP ON THE VARIABLES
C   ---------------------
C
      EPSIT = 0.0
      DO 30 I=1,N
        IF (ISTATE(I).LE.0) GO TO 30
        IVAR = I
C
C   BUILD THE GRADIENT STEP FROM THE PRESENT ITERATE
C   ------------------------------------------------
C
        WI = X(I) - GX(I)
C
C   CHECK GRADIENT STEP W.R.T. THE UPPER BOUND
C   ------------------------------------------
C
        UBI = XUPPER(IVAR)
        IF (WI.LE.UBI) GO TO 10
        WI = UBI
        GO TO 20
C
C   CHECK GRADIENT STEP W.R.T. THE LOWER BOUND
C   ------------------------------------------
C
   10   CONTINUE
        DBI = XLOWER(IVAR)
        IF (WI.LT.DBI) WI = DBI
C
C   ACCUMULATE THE SQUARE OF THE TOLERANCE
C   --------------------------------------
C
   20   CONTINUE
        EPSIT = EPSIT + (X(I)-WI)**2
C
C   END OF THE LOOP ON THE VARIABLES: DEFINE THE FINAL TOLERANCE
C   ------------------------------------------------------------
C
   30 CONTINUE
      EPSIT = DSQRT(EPSIT)
      EPSIT = DMIN1(EPSIT,EBOUND)
C
C
C***********************************************************************
C
C               REDEFINE THE STATE OF EACH BOUNDED VARIABLE
C
C***********************************************************************
C
C
C   LOOP ON THE BOUNDED VARIABLES
C   -----------------------------
C
      DO 60 I=1,N
        IF (ISTATE(I).LE.0) GO TO 60
        IVAR = I
        ISTATE(I) = 3
C
C   CHECK THE I-TH VARIABLE W.R.T. ITS UPPER BOUND
C   ----------------------------------------------
C
        UBI = XUPPER(IVAR)
        WI = UBI - X(I)
        IF (WI.GT.EPSIT) GO TO 40
        IF (GX(I).LT.0.0) GO TO 50
C
C   CHECK THE I-TH VARIABLE W.R.T. ITS LOWER BOUND
C   ----------------------------------------------
C
   40   CONTINUE
        DBI = XLOWER(IVAR)
        WI = X(I) - DBI
        IF (WI.GT.EPSIT) GO TO 60
        IF (GX(I).LE.0.0) GO TO 60
C
C   THE I-TH VARIABLE SHOULD BE IN THE DANGEROUS SET. SET THE VALUE
C   ---------------------------------------------------------------
C         OF ISTATE ACCORDINGLY
C         ---------------------
C
   50   CONTINUE
        IF (WI.LE.0.0) ISTATE(I) = 1
        IF (WI.GT.0.0) ISTATE(I) = 2
C
C   END OF THE LOOP ON THE BOUNDED VARIABLES
C   ----------------------------------------
C
   60 CONTINUE
      RETURN
      END

      SUBROUTINE VE08SD(EPSIL, NIT, NGR, DNGR, ITMAX, NFMAX, GXN,
     * NEGCUR, DIFEST, X, FX, GX, DX, DF, N, INFO, IFLAG)
C
C
C       *********************************************************
C       *                                                       *
C       *   THIS ROUTINE IMPLEMENTS THE CLASSICAL STOPPING      *
C       *     CRITERION FOR MINIMIZATION ROUTINES.              *
C       *                                                       *
C       *   NORM USED: ORDINARY 2-NORM.                         *
C       *                                                       *
C       *********************************************************
C
C
      DOUBLE PRECISION DF, DNGR, DNGRMX, DX, EPSIL, EPS2, EPS3
      DOUBLE PRECISION FX, GXN, EPS
      LOGICAL NEGCUR, DIFEST
C
      DOUBLE PRECISION X(1), GX(1)
      INTEGER NGR(2), NIT(2)
C
C
C
C   INITIALIZE THE MAIN ACCURACY CONSTANTS
C   --------------------------------------
C
      EPS = EPSIL
      IF (DIFEST) EPS = DMAX1(EPSIL,1.0D-4)
      EPS2 = EPS*EPS
      EPS3 = 0.001*EPS2
C
C   SET RETURN FLAG TO DISABLED
C   ---------------------------
C
      IFLAG = 0
C
C   TEST FOR SUFFICIENT ACCURACY
C   ----------------------------
C
      IF (GXN.GT.EPS .OR. NEGCUR) GO TO 10
      IFLAG = 1
      RETURN
C
C   CHECK IF THE MAXIMUM NUMBER OF FUNCTION CALLS HAS BEEN EXCEEDED
C   ---------------------------------------------------------------
C
   10 CONTINUE
      DNGRMX = FLOAT(NFMAX)
      IF (DNGR.LT.DNGRMX) GO TO 20
      IFLAG = 2
      RETURN
C
C   CHECK IF PROGRESS OF THE ALGORITHM IS SUFFICIENT
C   ------------------------------------------------
C
   20 CONTINUE
      IF (DF.GT.EPS3 .OR. DX.GT.EPS3) RETURN
      IFLAG = 3
      RETURN
      END

      SUBROUTINE VE08TD(A, X, FX, GXS, SNORM, S, N)
C
C
C       ***************************************************************
C       *                                                             *
C       *   THIS SUBROUTINE ALLOWS THE USER TO VERIFY THE PLAUSIBILTY *
C       *     OF THE VALUE TO BE ATTRIBUTED TO THE LINESEARCH         *
C       *     PARAMETER. IF THE VALUE PROPOSED IN A IS NOT SUITABLE,  *
C       *     THE USER SHOULD RETURN (IN A) A MORE APPROPRIATE ONE.   *
C       *                                                             *
C       *   THE LINESEARCH IS STARTING FROM THE POINT X IN DIRECTION  *
C       *     S (OF NORM SNORM). THE INITIAL FUNCTION AND DIRECTIONAL *
C       *     DERIVATIVE VALUES ARE GIVEN IN FX AND GXS. THE NUMBER   *
C       *     OF VARIABLES IS N.                                      *
C       *                                                             *
C       ***************************************************************
C
      DOUBLE PRECISION X(1), S(1), A, FX, GXS, SNORM
C
C
C
      RETURN
      END
