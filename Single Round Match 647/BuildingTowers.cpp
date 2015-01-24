#include <bits/stdc++.h>
using namespace std;

#define MP make_pair
#define FORIT(i, A) for (auto i : A)
#define SZ(a) int((a).size())
#define dump(x) cout << #x << " = " << (x) << "n"
#define SORT(c) sort((c).begin(),(c).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define NCLR(a) memset((a), -1 ,sizeof(a))

typedef long long LL;

static const double EPS = 1e-10;
static const double PI = acos( -1.0 );
static const int INF = 1 << 29;
static const int dx[] = { -1, 0, 1, 0, 1, -1, 1, -1 };
static const int dy[] = { 0, -1, 0, 1, 1, 1, -1, -1 };


struct BuildingTowers
{
    LL maxHeight(int N, int K, vector<int> x, vector<int> t)
    {
        if(x.size() == 0){
            return ((LL)(N - 1) * K);
        }
        LL ans = 0;
        
        return 0;
    }
};

// CUT begin
// Array to vector converter
template <typename T> vector<T> vector_wrapper(T arr[], int n) { return vector<T>(arr, arr + n); }
#define to_vector(arr) vector_wrapper(arr, sizeof(arr) / sizeof(arr[0]))

template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(int N, int K, vector<int> x, vector<int> t, LL __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    BuildingTowers *instance = new BuildingTowers();
    LL __result = instance->maxHeight(N, K, x, t);
    delete instance;

    if (__result == __expected) {
        cout << "PASSED!" << endl;
        return true;
    }
    else {
        cout << "FAILED!" << endl;
        cout << "           Expected: " << pretty_print(__expected) << endl;
        cout << "           Received: " << pretty_print(__result) << endl;
        return false;
    }
}

bool run_testcase(int __no) {
    switch (__no) {
        case 0: {
            int N = 10;
            int K = 1;
            int x[] = {
                3,
                8
            };
            int t[] = {
                1,
                1
            };
            LL __expected = 3LL;
            return do_test(N, K, to_vector(x), to_vector(t), __expected, __no);
        }
        case 1: {
            int N = 1000000000;
            int K = 1000000000;
            int x[] = {
            };
            int t[] = {
            };
            LL __expected = 999999999000000000LL;
            return do_test(N, K, to_vector(x), to_vector(t), __expected, __no);
        }
        case 2: {
            int N = 20;
            int K = 3;
            int x[] = {
                4,
                7,
                13,
                15,
                18
            };
            int t[] = {
                8,
                22,
                1,
                55,
                42
            };
            LL __expected = 22LL;
            return do_test(N, K, to_vector(x), to_vector(t), __expected, __no);
        }
        case 3: {
            int N = 780;
            int K = 547990606;
            int x[] = {
                34,
                35,
                48,
                86,
                110,
                170,
                275,
                288,
                313,
                321,
                344,
                373,
                390,
                410,
                412,
                441,
                499,
                525,
                538,
                568,
                585,
                627,
                630,
                671,
                692,
                699,
                719,
                752,
                755,
                764,
                772
            };
            int t[] = {
                89,
                81,
                88,
                42,
                55,
                92,
                19,
                91,
                71,
                42,
                72,
                18,
                86,
                89,
                88,
                75,
                29,
                98,
                63,
                74,
                45,
                11,
                68,
                34,
                94,
                20,
                69,
                33,
                50,
                69,
                54
            };
            LL __expected = 28495511604LL;
            return do_test(N, K, to_vector(x), to_vector(t), __expected, __no);
        }
        case 4: {
            int N = 7824078;
            int K = 2374;
            int x[] = {
                134668,
                488112,
                558756,
                590300,
                787884,
                868112,
                1550116,
                1681439,
                1790994,
                1796091,
                1906637,
                2005485,
                2152813,
                2171716,
                2255697,
                2332732,
                2516853,
                2749024,
                2922558,
                2930163,
                3568190,
                3882735,
                4264888,
                5080550,
                5167938,
                5249191,
                5574341,
                5866912,
                5936121,
                6142348,
                6164177,
                6176113,
                6434368,
                6552905,
                6588059,
                6628843,
                6744163,
                6760794,
                6982172,
                7080464,
                7175493,
                7249044
            };
            int t[] = {
                8,
                9,
                171315129,
                52304509,
                1090062,
                476157338,
                245,
                6,
                253638067,
                37,
                500,
                29060,
                106246500,
                129,
                22402,
                939993108,
                7375,
                2365707,
                40098,
                10200444,
                3193547,
                55597,
                24920935,
                905027,
                1374,
                12396141,
                525886,
                41,
                33,
                3692,
                11502,
                180,
                3186,
                5560,
                778988,
                42449532,
                269666,
                10982579,
                48,
                3994,
                1,
                9
            };
            LL __expected = 1365130725LL;
            return do_test(N, K, to_vector(x), to_vector(t), __expected, __no);
        }

        // Your custom testcase goes here
        case 5:
            break;
        default: break;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);
    cout << "BuildingTowers (950 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 5; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
