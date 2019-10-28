/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_plotData_info.c
 *
 * Code generation for function 'plotData'
 *
 */

/* Include files */
#include "_coder_plotData_info.h"

/* Function Definitions */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[7] = {
    "789ced57cb6ed340149da052c1a2281b100b7ea1759e245dd13c4a1b352615491baaaa0a137b6abb1ddb913d6e9c6cfa235db064c7820f206b3e80353f80f884"
    "60c7766a5b1a1cb5c1128daf644d8e8f3d67eef5d599094835d81400e099757dbf06c07c0966b1e10c20ed8e8f4030c27cca1dd742d88bc72eb3e1e36dbd1b17",
    "73aa4290491c802505bd33e43ed22ca04019cda7e1555952a0423aa301021ad2557c85f819732e61d49164d4547d605fb280fcd647cd814dd9bf6b22e22edb86"
    "0c3451bf5d2ef603e0d6c78e0925ff35100c5a7dce28f54987f8d3dd33465465c4e843385024ccd40c4d430ae9d521814c2657ecb19060d86758c88956b97a4d",
    "043545520446766e6c62f7c62632b38c7d0db04aecb7b7645f3e1f29eb5d5f309ff0e8c553f0c4875eed44e92d5abff51006f3e71ce65c120c0d45e717a5170e"
    "daf7f2c2d3fb7c473d6ffe6a849ec79f363eb0d5508bb0954eb35265dee732d96dc81055c57dd5b4fa61d627820607a2c4e98c53a159138038fbe0e7743afd5d",
    "49f4fe8d9e49996fd1be7b4ed14b87f852b6992183b17e52db3bbaca97f403615c3806b77d7418a113b50e40c171cd3fa1bc9ff87b3082fe5e589abfd3ce0f69"
    "97b193b4c7b8f6135e35fad8b79f7cbaa7de1baa5e90bf9bbfe7f85917581db02abef7d0f5eeebeb2f287ae9109f2f1ff547f56e799829e7d8d2f0f0826fe1cb",
    "fdc4d757dbd78bb19ddb47564d105e9eaf47ed239c08ed3f974bf3f51daa5e90b77c3ddc210bd9ba539f2d39beef3ff9f6ebeb8f187dcf8955d18bcbd779c968"
    "15f604f3a4d11e752fc476ab98cf9677135f5f6d5f7f1d9baf9b89afffd5d7cdf87dfd4be2ebffbfaf13ad921d43e318916e315fe4b93ab77dd07800e7f53f61",
    "5a971b", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 6288U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("plotData"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (0.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/swapnil/Current_Data/025_Matlab/Machine_Learning/machine-learning-ex1/ex1/plotData.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737520.57189814816));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.6.0.1072779 (R2019a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_plotData_info.c) */
