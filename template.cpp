#include <bits/stdc++.h>
using namespace std;

#define MP make_pair
#define FORIT(i, A) for (auto i : A)
#define SZ(a) int((a).size())
#define dump(x) cout << #x << " = " << (x) << "\n"
#define SORT(c) sort((c).begin(),(c).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define NCLR(a) memset((a), -1 ,sizeof(a))

typedef long long LL;

static const double EPS = 1e-10;
static const double PI = acos( -1.0 );
static const int INF = 1 << 29;
static const LL LL_INF = 1L << 60;
static const int dx[] = { -1, 0, 1, 0, 1, -1, 1, -1 };
static const int dy[] = { 0, -1, 0, 1, 1, 1, -1, -1 };

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
