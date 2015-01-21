#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

struct CoinsGameEasy
{
    int minimalSteps(vector<string> board)
    {
        return 0;
    }
};

// CUT begin
// Array to vector converter
template <typename T> vector<T> vector_wrapper(T arr[], int n) { return vector<T>(arr, arr + n); }
#define to_vector(arr) vector_wrapper(arr, sizeof(arr) / sizeof(arr[0]))

template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(vector<string> board, int __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    CoinsGameEasy *instance = new CoinsGameEasy();
    int __result = instance->minimalSteps(board);
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
            string board[] = {
                "oo"
            };
            int __expected = 1;
            return do_test(to_vector(board), __expected, __no);
        }
        case 1: {
            string board[] = {
                ".#",
                ".#",
                ".#",
                "o#",
                "o#",
                "##"
            };
            int __expected = 4;
            return do_test(to_vector(board), __expected, __no);
        }
        case 2: {
            string board[] = {
                "..",
                "..",
                "..",
                "o#",
                "o#",
                "##"
            };
            int __expected = 3;
            return do_test(to_vector(board), __expected, __no);
        }
        case 3: {
            string board[] = {
                "###",
                ".o.",
                "###",
                ".o.",
                "###"
            };
            int __expected = -1;
            return do_test(to_vector(board), __expected, __no);
        }
        case 4: {
            string board[] = {
                "###",
                ".o.",
                "#.#",
                ".o.",
                "###"
            };
            int __expected = 3;
            return do_test(to_vector(board), __expected, __no);
        }
        case 5: {
            string board[] = {
                "###########",
                "........#o#",
                "###########",
                ".........o#",
                "###########"
            };
            int __expected = 10;
            return do_test(to_vector(board), __expected, __no);
        }
        case 6: {
            string board[] = {
                "############",
                ".........#o#",
                "############",
                "..........o#",
                "############"
            };
            int __expected = -1;
            return do_test(to_vector(board), __expected, __no);
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
    cout << "CoinsGameEasy (550 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 7; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
