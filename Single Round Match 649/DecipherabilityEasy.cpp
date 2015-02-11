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

struct DecipherabilityEasy
{
    string check(string s, string t)
    {
        if( s.size() <= t.size() || s.size() - t.size() >= 2){
            return "Impossible";
        }
        bool ig = false;
        for (int i = 0; i < s.size(); ++i)
        {
            if(s[i] != t[i - ig]){
                if(ig){
                    return "Impossible";
                }
                ig = true;
            }
        }
        return "Possible";
    }
};

// CUT begin
template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(string s, string t, string __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    DecipherabilityEasy *instance = new DecipherabilityEasy();
    string __result = instance->check(s, t);
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
            string s = "sunuke";
            string t = "snuke";
            string __expected = "Possible";
            return do_test(s, t, __expected, __no);
        }
        case 1: {
            string s = "snuke";
            string t = "skue";
            string __expected = "Impossible";
            return do_test(s, t, __expected, __no);
        }
        case 2: {
            string s = "snuke";
            string t = "snuke";
            string __expected = "Impossible";
            return do_test(s, t, __expected, __no);
        }
        case 3: {
            string s = "snukent";
            string t = "snuke";
            string __expected = "Impossible";
            return do_test(s, t, __expected, __no);
        }
        case 4: {
            string s = "aaaaa";
            string t = "aaaa";
            string __expected = "Possible";
            return do_test(s, t, __expected, __no);
        }
        case 5: {
            string s = "aaaaa";
            string t = "aaa";
            string __expected = "Impossible";
            return do_test(s, t, __expected, __no);
        }
        case 6: {
            string s = "topcoder";
            string t = "tpcoder";
            string __expected = "Possible";
            return do_test(s, t, __expected, __no);
        }
        case 7: {
            string s = "singleroundmatch";
            string t = "singeroundmatc";
            string __expected = "Impossible";
            return do_test(s, t, __expected, __no);
        }

        // Your custom testcase goes here
        case 8:
            break;
        default: break;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);
    cout << "DecipherabilityEasy (250 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 8; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
