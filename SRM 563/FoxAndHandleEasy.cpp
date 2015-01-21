#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

struct FoxAndHandleEasy
{
    string isPossible(string S, string T)
    {
        string str = S;
        if (S == T || T.size() != S.size() * 2){
            return "No";
        }
        bool added = false;
        for (int i = 0; i < str.size(); ++i)
        {
            str.insert(str.begin() + i, S.begin(), S.end());
            if(str == T){
                return "Yes";
            }
            str = S;
        }
        if(!added){
            str += S;
        }
        return str == T ? "Yes" : "No";
    }
};

// CUT begin
template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(string S, string T, string __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    FoxAndHandleEasy *instance = new FoxAndHandleEasy();
    string __result = instance->isPossible(S, T);
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
            string S = "Ciel";
            string T = "CieCiell";
            string __expected = "Yes";
            return do_test(S, T, __expected, __no);
        }
        case 1: {
            string S = "Ciel";
            string T = "FoxCiel";
            string __expected = "No";
            return do_test(S, T, __expected, __no);
        }
        case 2: {
            string S = "FoxCiel";
            string T = "FoxFoxCielCiel";
            string __expected = "Yes";
            return do_test(S, T, __expected, __no);
        }
        case 3: {
            string S = "FoxCiel";
            string T = "FoxCielCielFox";
            string __expected = "No";
            return do_test(S, T, __expected, __no);
        }
        case 4: {
            string S = "Ha";
            string T = "HaHaHaHa";
            string __expected = "No";
            return do_test(S, T, __expected, __no);
        }
        case 5: {
            string S = "TheHandleCanBeVeryLong";
            string T = "TheHandleCanBeVeryLong";
            string __expected = "No";
            return do_test(S, T, __expected, __no);
        }
        case 6: {
            string S = "Long";
            string T = "LongLong";
            string __expected = "Yes";
            return do_test(S, T, __expected, __no);
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
    cout << "FoxAndHandleEasy (250 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 7; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
