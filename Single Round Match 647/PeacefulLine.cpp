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

struct PeacefulLine
{
    string makeLine(vector<int> x)
    {
        SORT(x);
        for (int i = 0; i < x.size(); ++i)
        {
            if(upper_bound(x.begin(), x.end(), x[i]) - lower_bound(x.begin(), x.end(), x[i]) > x.size() / 2 + x.size() % 2){
                return "impossible";
            }
        }
        return "possible";
    }
};

// CUT begin
// Array to vector converter
template <typename T> vector<T> vector_wrapper(T arr[], int n) { return vector<T>(arr, arr + n); }
#define to_vector(arr) vector_wrapper(arr, sizeof(arr) / sizeof(arr[0]))

template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(vector<int> x, string __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    PeacefulLine *instance = new PeacefulLine();
    string __result = instance->makeLine(x);
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
            int x[] = {
                1,
                2,
                3,
                4
            };
            string __expected = "possible";
            return do_test(to_vector(x), __expected, __no);
        }
        case 1: {
            int x[] = {
                1,
                1,
                1,
                2
            };
            string __expected = "impossible";
            return do_test(to_vector(x), __expected, __no);
        }
        case 2: {
            int x[] = {
                1,
                1,
                2,
                2,
                3,
                3,
                4,
                4
            };
            string __expected = "possible";
            return do_test(to_vector(x), __expected, __no);
        }
        case 3: {
            int x[] = {
                3,
                3,
                3,
                3,
                13,
                13,
                13,
                13
            };
            string __expected = "possible";
            return do_test(to_vector(x), __expected, __no);
        }
        case 4: {
            int x[] = {
                3,
                7,
                7,
                7,
                3,
                7,
                7,
                7,
                3
            };
            string __expected = "impossible";
            return do_test(to_vector(x), __expected, __no);
        }
        case 5: {
            int x[] = {
                25,
                12,
                3,
                25,
                25,
                12,
                12,
                12,
                12,
                3,
                25
            };
            string __expected = "possible";
            return do_test(to_vector(x), __expected, __no);
        }
        case 6: {
            int x[] = {
                3,
                3,
                3,
                3,
                13,
                13,
                13,
                13,
                3
            };
            string __expected = "possible";
            return do_test(to_vector(x), __expected, __no);
        }

        // Your custom testcase goes here
        case 7:
            break;
        default: break;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);
    cout << "PeacefulLine (250 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 7; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
