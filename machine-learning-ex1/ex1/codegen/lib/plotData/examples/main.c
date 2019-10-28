/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * main.c
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include files */
#include "plotData.h"
#include "main.h"
#include "plotData_terminate.h"
#include "plotData_emxAPI.h"
#include "plotData_initialize.h"

/* Function Declarations */
static emxArray_real_T *argInit_1xUnbounded_real_T(void);
static double argInit_real_T(void);
static void main_plotData(void);

/* Function Definitions */
static emxArray_real_T *argInit_1xUnbounded_real_T(void)
{
  emxArray_real_T *result;
  int idx1;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreate_real_T(1, 2);

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result->data[idx1] = argInit_real_T();
  }

  return result;
}

static double argInit_real_T(void)
{
  return 0.0;
}

static void main_plotData(void)
{
  emxArray_real_T *x;
  emxArray_real_T *y;

  /* Initialize function 'plotData' input arguments. */
  /* Initialize function input argument 'x'. */
  x = argInit_1xUnbounded_real_T();

  /* Initialize function input argument 'y'. */
  y = argInit_1xUnbounded_real_T();

  /* Call the entry-point 'plotData'. */
  plotData(x, y);
  emxDestroyArray_real_T(y);
  emxDestroyArray_real_T(x);
}

int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  plotData_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_plotData();

  /* Terminate the application.
     You do not need to do this more than one time. */
  plotData_terminate();
  return 0;
}

/* End of code generation (main.c) */
