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
static const LL LL_INF = 1L << 60;
static const int dx[] = { -1, 0, 1, 0, 1, -1, 1, -1 };
static const int dy[] = { 0, -1, 0, 1, 1, 1, -1, -1 };

struct XorSequenceEasy
{
    int getmax(vector<int> A, int N)
    {
        return 0;
    }
};

// CUT begin
// Array to vector converter
template <typename T> vector<T> vector_wrapper(T arr[], int n) { return vector<T>(arr, arr + n); }
#define to_vector(arr) vector_wrapper(arr, sizeof(arr) / sizeof(arr[0]))

template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(vector<int> A, int N, int __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    XorSequenceEasy *instance = new XorSequenceEasy();
    int __result = instance->getmax(A, N);
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
            int A[] = {
                3,
                2,
                1,
                0,
                3,
                2
            };
            int N = 4;
            int __expected = 8;
            return do_test(to_vector(A), N, __expected, __no);
        }
        case 1: {
            int A[] = {
                3,
                0,
                4,
                6,
                1,
                5,
                7,
                6
            };
            int N = 8;
            int __expected = 21;
            return do_test(to_vector(A), N, __expected, __no);
        }
        case 2: {
            int A[] = {
                3,
                1,
                4,
                1,
                5,
                9,
                2,
                6,
                5,
                3,
                5,
                8,
                9,
                7,
                9
            };
            int N = 16;
            int __expected = 76;
            return do_test(to_vector(A), N, __expected, __no);
        }
        case 3: {
            int A[] = {
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5,
                5
            };
            int N = 8;
            int __expected = 0;
            return do_test(to_vector(A), N, __expected, __no);
        }
        case 4: {
            int A[] = {
                408024109,
                11635919,
                196474438,
                117649705,
                812669700,
                553475508,
                445349752,
                271145432,
                730417256,
                738416295,
                147699711,
                880268351,
                816031019,
                686078705,
                1032012284,
                182546393,
                875376506,
                220137366,
                906190345,
                16216108,
                799485093,
                715669847,
                413196148,
                122291044,
                777206980,
                68706223,
                769896725,
                212567592,
                809746340,
                964776169,
                928126551,
                228208603,
                918774366,
                352800800,
                849040635,
                941604920,
                326686120,
                920977486,
                964528038,
                659998484,
                207195539,
                607901477,
                725914710,
                655525412,
                949610052,
                142750431,
                766838105,
                1024818573,
                836758851,
                97228667
            };
            int N = 1073741824;
            int __expected = 720;
            return do_test(to_vector(A), N, __expected, __no);
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
    cout << "XorSequenceEasy (1000 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 5; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
