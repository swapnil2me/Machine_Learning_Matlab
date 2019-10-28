/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_plotData_mex.c
 *
 * Code generation for function '_coder_plotData_mex'
 *
 */

/* Include files */
#include "_coder_plotData_api.h"
#include "_coder_plotData_mex.h"

/* Function Declarations */
static void plotData_mexFunction(int32_T nlhs, int32_T nrhs, const mxArray *
  prhs[2]);

/* Function Definitions */
static void plotData_mexFunction(int32_T nlhs, int32_T nrhs, const mxArray *
  prhs[2])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4, 8,
                        "plotData");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "plotData");
  }

  /* Call the function. */
  plotData_api(prhs, nlhs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  (void)plhs;
  mexAtExit(plotData_atexit);

  /* Module initialization. */
  plotData_initialize();

  /* Dispatch the entry-point. */
  plotData_mexFunction(nlhs, nrhs, prhs);

  /* Module termination. */
  plotData_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_plotData_mex.c) */
