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

struct KitayutaMart2
{
    int numBought(int K, int T)
    {
        int many = 0;
        int use = 1;
        while( T ){
            many++;
            T -= K * use;
            use *= 2;
        }
        return many;
    }
};

// CUT begin
template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(int K, int T, int __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    KitayutaMart2 *instance = new KitayutaMart2();
    int __result = instance->numBought(K, T);
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
            int K = 100;
            int T = 100;
            int __expected = 1;
            return do_test(K, T, __expected, __no);
        }
        case 1: {
            int K = 100;
            int T = 300;
            int __expected = 2;
            return do_test(K, T, __expected, __no);
        }
        case 2: {
            int K = 150;
            int T = 1050;
            int __expected = 3;
            return do_test(K, T, __expected, __no);
        }
        case 3: {
            int K = 160;
            int T = 163680;
            int __expected = 10;
            return do_test(K, T, __expected, __no);
        }

        // Your custom testcase goes here
        case 4:
            break;
        default: break;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);
    cout << "KitayutaMart2 (250 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 4; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
