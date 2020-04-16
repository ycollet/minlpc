*From CUNYVM.CUNY.EDU!phtoint%NEWTON Mon Nov  5 10:34 +01 1990
C
C       *********************************************
C       *                                           *
C       *     TEST OF MINIMIZATION ROUTINE VE08AD   *
C       *                                           *
C       *********************************************
C
C
      DOUBLE PRECISION DIFGRD, EBOUND, EPSIL, FLOWBD, FX, RELPR, STMAX
      LOGICAL FKNOWN, TESTGX, RESTRT, HESDIF
C
      DOUBLE PRECISION STEPL(2), X(100), WK(1000)
      INTEGER ISTATE(300), NVAR(101), INVAR(700), LWK(2), NGR(2), NIT(2)
C
      COMMON /TEST/ ITEST
C
      EXTERNAL ELFTS, RGETS, XLWTS, XUPTS
C
C   LOOP OVER THE TEST PROBLEMS
C
      NPROB = 6
      DO 30 ITEMP=1,NPROB
C
C   READ IN SOME PARAMETERS
C   -----------------------
C
C   1) INDEX OF TEST PROBLEM CONSIDERED
C
        ITEST = ITEMP
C
C   2) DIMENSION
C
        N = 50
        IF (ITEMP.EQ.4) N = 3
        IF (ITEMP.EQ.6) N = 10
C
C   3) AVAILABILITY OF ANALYTICAL DERIVATIVES
C
        IDER = MOD(ITEMP,2)
C
C   4) OUTPUT PARAMETERS (IPFREQ, IPWHAT)
C
        IPFREQ = 0
        IF (ITEMP.EQ.1) IPFREQ = 1
        IPWHAT = 0
        IF (ITEMP.EQ.4) IPWHAT = 5
C
C   5) ESTIMATION OF FIRST HESSIAN MATRIX AT THE STARTING POINT ?
C
        HESDIF = .FALSE.
        IF (ITEMP.EQ.3 .OR. ITEMP.EQ.4) HESDIF = .TRUE.
C
C   6) ACCURACY
C
        EPSIL = 0.0000001
        IF (ITEMP.EQ.5) EPSIL = 0.0
C
C   SET THE LENGTH OF THE WORK SPACE
C   --------------------------------
C
        LWK(1) = 1000
C
C   DEFINE OUTPUT DEVICE
C   --------------------
C
        IPDEVC = 6
C
C   SET THE MAXIMUM NUMBER OF FUNCTION CALLS
C   ----------------------------------------
C
        NGR(1) = 1000
        NIT(1) = 500
C
C   DEFINE TOLERANCE FOR ANTI-ZIGZAG DEVICE (BERTSEKAS)
C   ---------------------------------------------------
C
        EBOUND = 1.0D-4
C
C   INITIALIZE THE LOGICAL VARIABLE THAT ASKS FOR TESTING OF THE
C   ------------------------------------------------------------
C       ANALYTICAL GRADIENT
C       -------------------
C
        TESTGX = .TRUE.
C
C   SET THE RESTART PARAMETER TO FALSE
C   ----------------------------------
C
        RESTRT = .FALSE.
C
C   DEFINE STEPSIZE FOR DIFFERENCE ESTIMATION OF THE FIRST GRADIENT
C   ---------------------------------------------------------------
C
        DIFGRD = 1.0D-7
C
C   DEFINE THE MACHINE PRECISION
C   ----------------------------
C
        RELPR = -1.0
        IF (ITEMP.EQ.6) RELPR = 1.0D-7
C
C   DEFINE THE OVERAL MAXIMUM STEPLENGTH AND THE MAXIMUM STEP
C   ---------------------------------------------------------
C       AT THE FIRST ITERATION
C       ----------------------
C
        STMAX = 1.0D+10
        STEPL(1) = 1.D+5
C
C   INITIALIZE THE PROCESS FOR THE CONSIDERED TEST PROBLEM
C   ------------------------------------------------------
C
        CALL INIELF(INVAR, NVAR, ISTATE, X, FLOWBD, FKNOWN, N, NS)
C
C   IF THE DERIVATIVES ARE NOT AVAILABLE, MODIFY ISTATE
C   ---------------------------------------------------
C
        IF (IDER.NE.0) GO TO 20
        ITEMP1 = N + 1
        ITEMP2 = N + NS
        DO 10 I=ITEMP1,ITEMP2
          ISTATE(I) = -1
   10   CONTINUE
   20   CONTINUE
C
C   MINIMIZE
C   --------
C
        CALL VE08AD(N, NS, INVAR, NVAR, ELFTS, RGETS, XLWTS, XUPTS,
     *   X, FX, EPSIL, EBOUND, NGR, NIT, FKNOWN, FLOWBD, RELPR, DIFGRD,
     *   RESTRT, TESTGX, HESDIF, STMAX, STEPL, ISTATE, IPDEVC, IPFREQ,
     *   IPWHAT, LWK, WK, INFO, IFLAG)
C
C   END OF TEST
C   -----------
C
   30 CONTINUE
      STOP
      END
      SUBROUTINE INIELF(INVAR, NVAR, ISTATE, X, FLOWBD, FKNOWN, N, NS)
C
C
C       ******************************************************
C       *                                                    *
C       *   INITIALIZATION OF THE IELF-TH ELEMENT FUNCTION   *
C       *                                                    *
C       ******************************************************
C
C
      DOUBLE PRECISION DN, FLOWBD, XTEMP
C
      DOUBLE PRECISION X(1)
      INTEGER INVAR(1), NVAR(1), ISTATE(1)
      LOGICAL FKNOWN
C
      COMMON /TEST/ ITEST
C
C
C   DECIDE WHAT FUNCTION IS USED
C   ----------------------------
C
      GO TO (50, 50, 50, 10, 20, 80), ITEST
C
C   FIRST TRIAL TRIVIAL PROBLEM (LOWER BOUND)
C   -----------------------------------------
C
   10 CONTINUE
      FKNOWN = .FALSE.
      N = 3
      NS = 2
      X(1) = 10.0
      X(2) = 4.0
      X(3) = 10.0
      NVAR(1) = 1
      NVAR(2) = 2
      NVAR(3) = 4
      INVAR(1) = 1
      INVAR(2) = 2
      INVAR(3) = 3
      ISTATE(1) = 1
      ISTATE(2) = -1
      ISTATE(3) = -1
      ISTATE(4) = 1
      ISTATE(5) = 1
      FLOWBD = 0.0
      RETURN
C
C   EXTENDED ROSENBROCK
C   -------------------
C
   20 CONTINUE
      FKNOWN = .FALSE.
      NS = N - 1
      FLOWBD = 0.0
      DO 30 I=1,NS
        IP = I + I - 1
        NVAR(I) = IP
        INVAR(IP) = I
        INVAR(IP+1) = I + 1
        NPI = N + I
        ISTATE(NPI) = 1
   30 CONTINUE
      NVAR(NS+1) = NS + NS + 1
      ITEMP = -1
      DN = FLOAT(N) + 1.0
      DO 40 I=1,N
        ISTATE(I) = ITEMP
        X(I) = -1.0
   40 CONTINUE
      RETURN
C
C   BROYDEN TRIDIAGONAL NONLINEAR SYSTEM (BROY3)
C   --------------------------------------------
C
   50 CONTINUE
      FKNOWN = .FALSE.
      FLOWBD = 0.0
      NS = N - 2
      IF (NS.LE.0) STOP
      DO 60 I=1,NS
        IP = 3*I - 2
        NVAR(I) = IP
        INVAR(IP) = I
        INVAR(IP+1) = I + 1
        INVAR(IP+2) = I + 2
        NPI = N + I
        ISTATE(NPI) = 1
   60 CONTINUE
      NVAR(NS+1) = 3*NS + 1
      XTEMP = -1.0
      ITEMP = 1
      ITEMP1 = N - 1
      DO 70 I=2,ITEMP1
        X(I) = XTEMP
        ISTATE(I) = ITEMP
   70 CONTINUE
      X(1) = 0.0
      ISTATE(1) = 0
      X(N) = 0.0
      ISTATE(N) = 0
      RETURN
C
C   BROYDEN BANDED FUNCTION (BROYB)
C   -----------------------
C
   80 CONTINUE
      FKNOWN = .FALSE.
      FLOWBD = 0.0
      NS = N
      IP = 1
      DO 100 I=1,NS
        NVAR(I) = IP
        ILOW = MAX0(1,I-5)
        IUP = MIN0(N,I+1)
        DO 90 J=ILOW,IUP
          INVAR(IP) = J
          IP = IP + 1
   90   CONTINUE
        NPI = N + I
        ISTATE(NPI) = 1
  100 CONTINUE
      NVAR(NS+1) = IP
      DO 110 I=1,N
        ISTATE(I) = -1
        X(I) = -1.0
  110 CONTINUE
      RETURN
      END
      SUBROUTINE RGETS(K, MODE, W1, W2, NDIMK, NSUBK, NS)
C
C
C       *
C       *   TRANSFERS ON THE RANGE OF THE HESSIAN OF THE K-TH ELEMENT
C       *
C
C       MODE=1 <=> U*W1=W2
C       MODE=2 <=> U*W2=W1
C       MODE=3 <=> U'*W1=W2
C       MODE=4 <=> U'*W2=W1
C
C
      DOUBLE PRECISION W1(1), W2(1)
C
C
      COMMON /TEST/ ITEST
C
C
C   DECIDE WHAT TEST PROBLEM IS CONSIDERED
C   --------------------------------------
C
      GO TO (50, 50, 50, 30, 10, 10), ITEST
C
C   NO NULLSPACE AT ALL
C   -------------------
C
   10 CONTINUE
      DO 20 I=1,NDIMK
        W2(I) = W1(I)
   20 CONTINUE
      NSUBK = NDIMK
      RETURN
C
C   CORRECT NULLSPACE FOR TEST PROBLEM 1
C   ------------------------------------
C
   30 CONTINUE
      IF (K.GT.1) GO TO 40
      NSUBK = 0
      RETURN
   40 CONTINUE
      NSUBK = 2
      W2(1) = W1(1)
      W2(2) = W1(2)
      RETURN
C
C   BROYDEN TRIDIAGONAL NONLINEAR SYSTEM (BROY3)
C   --------------------------------------------
C
   50 CONTINUE
      GO TO (60, 100, 80, 120), MODE
C
C   1) UW1=W2C
C
   60 CONTINUE
      IF (K.EQ.1 .OR. K.EQ.NS) GO TO 70
      NSUBK = 2
      W2(1) = W1(1) + W1(3) + W1(3)
      W2(2) = W1(2)
      RETURN
   70 CONTINUE
      NSUBK = 3
      W2(1) = W1(1)
      W2(2) = W1(2)
      W2(3) = W1(3)
      RETURN
C
C   2) U'W1=W2
C
   80 CONTINUE
      IF (K.EQ.1 .OR. K.EQ.NS) GO TO 90
      W2(1) = W1(1)
      W2(2) = W1(2)
      W2(3) = W2(1) + W2(1)
      RETURN
   90 CONTINUE
      W2(1) = W1(1)
      W2(2) = W1(2)
      W2(3) = W1(3)
      RETURN
C
C   3) UW2=W1
C
  100 CONTINUE
      IF (K.EQ.1 .OR. K.EQ.NS) GO TO 110
      W2(1) = 0.2*W1(1)
      W2(2) = W1(2)
      W2(3) = W2(1) + W2(1)
      RETURN
  110 CONTINUE
      W2(1) = W1(1)
      W2(2) = W1(2)
      W2(3) = W1(3)
      RETURN
C
C   4) U'W2=W1
C
  120 CONTINUE
      IF (K.EQ.1 .OR. K.EQ.NS) GO TO 130
      NSUBK = 2
      W2(1) = W1(1)
      W2(2) = W1(2)
      RETURN
  130 CONTINUE
      NSUBK = 3
      W2(1) = W1(1)
      W2(2) = W1(2)
      W2(3) = W1(3)
      RETURN
      END
      DOUBLE PRECISION FUNCTION XLWTS(IVAR)
C
C
C       ***************************************
C       *                                     *
C       *   LOWER BOUNDS ON THE VARIABLES     *
C       *                                     *
C       ***************************************
C
      COMMON /TEST/ ITEST
C
C
C   DECIDE WHICH TEST IS CONDIDERED
C   -------------------------------
C
      GO TO (30, 30, 30, 20, 10, 10), ITEST
C
C   NO LOWER BOUND
C   --------------
C
   10 CONTINUE
      XLWTS = -1.0D20
      RETURN
C
C   POSITIVE VARIABLE
C   -----------------
C
   20 CONTINUE
      XLWTS = 0.0
      RETURN
C
C  BOUNDED BROYDEN TRIDIAGONAL PROBLEM
C  -----------------------------------
C
   30 CONTINUE
      XLWTS = 0.65
      RETURN
      END
      DOUBLE PRECISION FUNCTION XUPTS(IVAR)
C
C
C       ***************************************
C       *                                     *
C       *   UPPER BOUNDS ON THE VARIABLES     *
C       *                                     *
C       ***************************************
C
      COMMON /TEST/ ITEST
C
C
C   DECIDE WHICH TEST IS CONDIDERED
C   -------------------------------
C
      GO TO (20, 20, 20, 10, 10, 10), ITEST
C
C   NO UPPER BOUND
C   --------------
C
   10 CONTINUE
      XUPTS = 1.0D+20
      RETURN
C
C   BOUNDED BROYDEN TRIDIAGONAL PROBLEM
C   -----------------------------------
C
   20 CONTINUE
      XUPTS = 0.71
      RETURN
      END
      SUBROUTINE ELFTS(K, X, FX, GX, NDIMK, NS, JFLAG, FMAX,
     * FNOISE)
C
C
C       **************************************************
C       *                                                *
C       *    COMPUTATION OF THE ELEMENT FUNCTION VALUE   *
C       *                                                *
C       **************************************************
C
C
      DOUBLE PRECISION FMAX, FNOISE, FX, TEMP, XX
C
      DOUBLE PRECISION X(1), GX(1)
C
      COMMON /TEST/ ITEST
C
C
C   DECIDE WHICH TEST IS CONDIDERED
C   -------------------------------
C
      GO TO (40, 40, 40, 10, 30, 50), ITEST
C
C   FIRST TRIVIAL TEST PROBLEM
C   --------------------------
C
   10 CONTINUE
      IF (K.GT.1) GO TO 20
      FX = X(1)
      FNOISE = 0.0
      IF (JFLAG.LT.2) RETURN
      GX(1) = 1.0
      RETURN
   20 CONTINUE
      FX = 0.5*(X(1)-X(2))**2 + X(1)**2
      FNOISE = 0.0
      IF (JFLAG.LT.2) RETURN
      GX(1) = X(1) - X(2) + X(1) + X(1)
      GX(2) = X(2) - X(1)
      RETURN
C
C   EXTENDED ROSENBROCK FUNCTION
C   ----------------------------
C
   30 CONTINUE
      XX = X(2) - X(1)**2
      FX = 100.0*XX*XX + (X(1)-1.0)**2
      FNOISE = 0.0
      IF (JFLAG.LT.2) RETURN
      GX(1) = -400.0*XX*X(1) + 2.0*(X(1)-1.0)
      GX(2) = 200.0*XX
      RETURN
C
C   BROYDEN TRIDIAGONAL NONLINEAR SYSTEM
C   ------------------------------------
C
   40 CONTINUE
      TEMP = (3.0-X(2)-X(2))*X(2) - X(1) - X(3) - X(3) + 1.0
      FX = TEMP*TEMP
      TEMP = TEMP + TEMP
      FNOISE = 0.0
      IF (JFLAG.LT.2) RETURN
      GX(1) = -TEMP
      GX(2) = TEMP*(3.0-4.0*X(2))
      GX(3) = -TEMP - TEMP
      RETURN
C
C   BROYDEN BANDED FUNCTION (BROYB)
C   -------------------------------
C
   50 CONTINUE
      ILOW = MAX0(1,K-5)
      IUP = MIN0(NS,K+1)
      FX = 1.0
      DO 70 J=ILOW,IUP
        JJ = J - ILOW + 1
        IF (J.EQ.K) GO TO 60
        FX = FX - X(JJ)*(1.0+X(JJ))
        GO TO 70
   60   CONTINUE
        FX = FX + X(JJ)*(2.0+5.0*X(JJ)*X(JJ))
   70 CONTINUE
      TEMP = FX + FX
      FX = FX*FX
      FNOISE = 0.0
      IF (JFLAG.LT.2) RETURN
      DO 80 J=ILOW,IUP
        JJ = J - ILOW + 1
        GX(JJ) = 0.0
   80 CONTINUE
      DO 90 J=ILOW,IUP
        JJ = J - ILOW + 1
        IF (J.EQ.K) GX(JJ) = TEMP*(2.0+15.0*X(JJ)*X(JJ))
        IF (J.NE.K) GX(JJ) = -TEMP*(1.0+2.0*X(JJ))
   90 CONTINUE
      RETURN
      END
