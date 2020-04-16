C***********************************************************************
C EASY TO USE, NO BOUNDS
C***********************************************************************
C MAIN PROGRAM TO MINIMIZE A FUNCTION (REPRESENTED BY THE ROUTINE SFUN)
C OF N VARIABLES X
C
      DOUBLE PRECISION  X(50), F, G(50), W(700)
      EXTERNAL          SFUN
C
C DEFINE SUBROUTINE PARAMETERS
C N  - NUMBER OF VARIABLES
C X  - INITIAL ESTIMATE OF THE SOLUTION
C F  - ROUGH ESTIMATE OF FUNCTION VALUE AT SOLUTION
C LW - DECLARED LENGTH OF THE ARRAY W
C
      N  = 10
      DO 10 I = 1,N
         X(I) = I / FLOAT(N+1)
10      CONTINUE
      F  = 1.D0
      LW = 700
      CALL TN (IERROR, N, X, F, G, W, LW, SFUN)
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
