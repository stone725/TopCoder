#include <bits/stdc++.h>
using namespace std;

#define MP make_pair
#define FORIT(i, A) for (auto i : A)
#define SZ(a) int((a).size())
#define dump(x) cout << #x << " = " << (x) << "n"
#define SORT(c) sort((c).begin(),(c).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define NCLR(a) memset((a), -1 ,sizeof(a))

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef priority_queue<int> maxpq;
typedef priority_queue< int, vector<int>, greater<int> > minpq;

static const double EPS = 1e-10;
static const double PI = acos( -1.0 );
static const int INF = 1 << 29;
static const LL LL_INF = 1L << 60;
static const int dx[] = { -1, 0, 1, 0, 1, -1, 1, -1 };
static const int dy[] = { 0, -1, 0, 1, 1, 1, -1, -1 };

struct Suminator
{
    int findMissing(vector<int> program, int wantedResult)
    {
        return 0;
    }
};

// CUT begin
// Array to vector converter
template <typename T> vector<T> vector_wrapper(T arr[], int n) { return vector<T>(arr, arr + n); }
#define to_vector(arr) vector_wrapper(arr, sizeof(arr) / sizeof(arr[0]))

template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(vector<int> program, int wantedResult, int __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    Suminator *instance = new Suminator();
    int __result = instance->findMissing(program, wantedResult);
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
            int program[] = {
                7,
                -1,
                0
            };
            int wantedResult = 10;
            int __expected = 3;
            return do_test(to_vector(program), wantedResult, __expected, __no);
        }
        case 1: {
            int program[] = {
                100,
                200,
                300,
                0,
                100,
                -1
            };
            int wantedResult = 600;
            int __expected = 0;
            return do_test(to_vector(program), wantedResult, __expected, __no);
        }
        case 2: {
            int program[] = {
                -1,
                7,
                3,
                0,
                1,
                2,
                0,
                0
            };
            int wantedResult = 13;
            int __expected = 0;
            return do_test(to_vector(program), wantedResult, __expected, __no);
        }
        case 3: {
            int program[] = {
                -1,
                8,
                4,
                0,
                1,
                2,
                0,
                0
            };
            int wantedResult = 16;
            int __expected = -1;
            return do_test(to_vector(program), wantedResult, __expected, __no);
        }
        case 4: {
            int program[] = {
                1000000000,
                1000000000,
                1000000000,
                1000000000,
                -1,
                0,
                0,
                0,
                0
            };
            int wantedResult = 1000000000;
            int __expected = -1;
            return do_test(to_vector(program), wantedResult, __expected, __no);
        }
        case 5: {
            int program[] = {
                7,
                -1,
                3,
                0
            };
            int wantedResult = 3;
            int __expected = -1;
            return do_test(to_vector(program), wantedResult, __expected, __no);
        }

        // Your custom testcase goes here
        case 6:
            break;
        default: break;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);
    cout << "Suminator (500 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 6; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
