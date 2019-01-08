/* RoKiFD - Robot Forward Dynamics library
 * Copyright (C) 1998 Tomomichi Sugihara (Zhidao)
 *
 * rkfd_mlcp -
 * contributer: 2014-2018 Naoki Wakisaka
 */

#ifndef __RKFD_MLCP_H__
#define __RKFD_MLCP_H__

/* NOTE: never include this header file in user programs. */

#include <roki-fd/rkfd_solver.h>
#include <roki/rk_force.h>

__BEGIN_DECLS

typedef struct{
  int colnum;
  zMat a;
  zVec b, t, f;
  int size;

  rkWrench *w[2];
} rkFDSolverPrpMLCP;

 RKFD_SOLVER_FUNCTION_DEFAULT( MLCP )
 RKFD_SOLVER_CREATE_DEFAULT( MLCP )

__END_DECLS

#endif /* __RKFD_MLCP_H__ */
