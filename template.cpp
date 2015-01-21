#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

${<if Problem.Description.Modulo}
  static const int MOD = ${Problem.Description.Modulo};
${<end}


struct ${ClassName}
{
    ${Method.ReturnType} ${Method.Name}(${Method.Params})
    {
        return ${Method.ReturnType;zeroval};
    }
};

${CutBegin}
${<TestCode}
${CutEnd}
