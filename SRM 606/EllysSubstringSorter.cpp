#include <bits/stdc++.h>
using namespace std;

#define MP make_pair
#define FORIT(i, A) for (auto i : A)
#define SZ(a) int((a).size())
#define dump(x) cout << #x << " = " << (x) << "n"
#define SORT(c) sort((c).begin(),(c).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define NCLR(a) memset((a), -1 ,sizeof(a))


struct EllysSubstringSorter
{
    string getMin(string S, int L)
    {
        string ans = S;
        for (int i = L; i <= S.size(); ++i)
        {
            string add_copy = S.substr(i - L, L);
            SORT(add_copy);
            string str = S.substr(0, i - L) + add_copy + S.substr(i, max<int>(0, ((int)S.size()) - i));
            ans = min(ans, str);
        }
        return ans;
    }
};

// CUT begin
template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(string S, int L, string __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    EllysSubstringSorter *instance = new EllysSubstringSorter();
    string __result = instance->getMin(S, L);
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
            string S = "TOPCODER";
            int L = 4;
            string __expected = "COPTODER";
            return do_test(S, L, __expected, __no);
        }
        case 1: {
            string S = "ESPRIT";
            int L = 3;
            string __expected = "EPRSIT";
            return do_test(S, L, __expected, __no);
        }
        case 2: {
            string S = "AAAAAAAAA";
            int L = 2;
            string __expected = "AAAAAAAAA";
            return do_test(S, L, __expected, __no);
        }
        case 3: {
            string S = "ABRACADABRA";
            int L = 5;
            string __expected = "AAABCRDABRA";
            return do_test(S, L, __expected, __no);
        }
        case 4: {
            string S = "BAZINGA";
            int L = 6;
            string __expected = "ABGINZA";
            return do_test(S, L, __expected, __no);
        }
        case 5: {
            string S = "AAAWDIUAOIWDESBEAIWODJAWDBPOAWDUISAWDOOPAWD";
            int L = 21;
            string __expected = "AAAAAABDDDEEIIIJOOSUWWWWDBPOAWDUISAWDOOPAWD";
            return do_test(S, L, __expected, __no);
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
    cout << "EllysSubstringSorter (250 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 6; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
