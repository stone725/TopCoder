#include <bits/stdc++.h>
using namespace std;

#define MP make_pair
#define FORIT(i, A) for (auto i : A)
#define SZ(a) int((a).size())
#define dump(x) cout << #x << " = " << (x) << "n"
#define SORT(c) sort((c).begin(),(c).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define NCLR(a) memset((a), -1 ,sizeof(a))

struct PlatypusDuckAndBeaver
{
    int minimumAnimals(int webbedFeet, int duckBills, int beaverTails)
    {
        for (int i = 0; i <= min(duckBills, beaverTails); ++i)
        {
            if((duckBills - i) * 2 + (beaverTails - i) * 4 == (webbedFeet - i * 4)){
                return duckBills + beaverTails - i;
            }
        }
        return 0;
    }
};

// CUT begin
template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(int webbedFeet, int duckBills, int beaverTails, int __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    PlatypusDuckAndBeaver *instance = new PlatypusDuckAndBeaver();
    int __result = instance->minimumAnimals(webbedFeet, duckBills, beaverTails);
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
            int webbedFeet = 4;
            int duckBills = 1;
            int beaverTails = 1;
            int __expected = 1;
            return do_test(webbedFeet, duckBills, beaverTails, __expected, __no);
        }
        case 1: {
            int webbedFeet = 0;
            int duckBills = 0;
            int beaverTails = 0;
            int __expected = 0;
            return do_test(webbedFeet, duckBills, beaverTails, __expected, __no);
        }
        case 2: {
            int webbedFeet = 10;
            int duckBills = 2;
            int beaverTails = 2;
            int __expected = 3;
            return do_test(webbedFeet, duckBills, beaverTails, __expected, __no);
        }
        case 3: {
            int webbedFeet = 60;
            int duckBills = 10;
            int beaverTails = 10;
            int __expected = 20;
            return do_test(webbedFeet, duckBills, beaverTails, __expected, __no);
        }
        case 4: {
            int webbedFeet = 1000;
            int duckBills = 200;
            int beaverTails = 200;
            int __expected = 300;
            return do_test(webbedFeet, duckBills, beaverTails, __expected, __no);
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
    cout << "PlatypusDuckAndBeaver (250 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 5; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
