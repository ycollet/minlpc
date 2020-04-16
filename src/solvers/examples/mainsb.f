C***********************************************************************
C EASY TO USE, BOUNDS ON VARIABLES
C***********************************************************************
C MAIN PROGRAM TO MINIMIZE A FUNCTION (REPRESENTED BY THE ROUTINE SFUN)
C SUBJECT TO BOUNDS ON THE VARIABLES X
C
      DOUBLE PRECISION  X(50), F, G(50), W(700), LOW(50), UP(50)
      INTEGER           IPIVOT(50)
      EXTERNAL          SFUN
C
C DEFINE SUBROUTINE PARAMETERS
C N   - NUMBER OF VARIABLES
C X   - INITIAL ESTIMATE OF THE SOLUTION
C LOW - LOWER BOUNDS
C UP  - UPPER BOUNDS
C F   - ROUGH ESTIMATE OF FUNCTION VALUE AT SOLUTION
C LW  - DECLARED LENGTH OF THE ARRAY W
C
      N  = 10
      DO 10 I = 1,N
         LOW(I) = 0.D0
         UP(I)  = 6.D0
         X(I)   = I / FLOAT(N+1)
10    CONTINUE
      F  = 1.D0
      LW = 700
      CALL TNBC (IERROR, N, X, F, G, W, LW, SFUN, LOW, UP, IPIVOT)
      STOP
      END
C
C
      SUBROUTINE SFUN (N, X, F, G)
      DOUBLE PRECISION  X(N), G(N), F, T
C
C ROUTINE TO EVALUATE FUNCTION (F) AND GRADIENT (G) OF THE OBJECTIVE
C FUNCTION AT THE POINT X
C
      F = 0.D0
      DO 10 I = 1,N
         T    = X(I) - I
         F    = F + T*T
         G(I) = 2.D0 * T
10    CONTINUE
      RETURN
      END
