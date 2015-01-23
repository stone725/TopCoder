#include <bits/stdc++.h>
using namespace std;

#define MP make_pair
#define FORIT(i, A) for (auto i : A)
#define SZ(a) int((a).size())
#define dump(x) cout << #x << " = " << (x) << "n"
#define SORT(c) sort((c).begin(),(c).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define NCLR(a) memset((a), -1 ,sizeof(a))

struct EllysNumberGuessing
{
    int getNumber(vector<int> guesses, vector<int> answers)
    {
        vector<int> _array;
        for (int i = 0; i < guesses.size(); ++i)
        {
            _array.push_back(guesses[i] + answers[i]);
            _array.push_back(guesses[i] - answers[i]);
        }
        SORT(_array);
        int ans = -2;
        for (int i = 0; i < _array.size(); ++i)
        {
            int cnt = upper_bound(_array.begin(), _array.end(), _array[i]) - lower_bound(_array.begin(), _array.end(), _array[i]);
            if(cnt == guesses.size()){
                if(ans != -2){
                    return -1;
                }
                ans = guesses[i];
                i += cnt - 1;
            }
        }
        return ans;
    }
};

// CUT begin
// Array to vector converter
template <typename T> vector<T> vector_wrapper(T arr[], int n) { return vector<T>(arr, arr + n); }
#define to_vector(arr) vector_wrapper(arr, sizeof(arr) / sizeof(arr[0]))

template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(vector<int> guesses, vector<int> answers, int __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    EllysNumberGuessing *instance = new EllysNumberGuessing();
    int __result = instance->getNumber(guesses, answers);
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
            int guesses[] = {
                600,
                594
            };
            int answers[] = {
                6,
                12
            };
            int __expected = 606;
            return do_test(to_vector(guesses), to_vector(answers), __expected, __no);
        }
        case 1: {
            int guesses[] = {
                100,
                50,
                34,
                40
            };
            int answers[] = {
                58,
                8,
                8,
                2
            };
            int __expected = 42;
            return do_test(to_vector(guesses), to_vector(answers), __expected, __no);
        }
        case 2: {
            int guesses[] = {
                500000,
                600000,
                700000
            };
            int answers[] = {
                120013,
                220013,
                79987
            };
            int __expected = -2;
            return do_test(to_vector(guesses), to_vector(answers), __expected, __no);
        }
        case 3: {
            int guesses[] = {
                500000000
            };
            int answers[] = {
                133742666
            };
            int __expected = -1;
            return do_test(to_vector(guesses), to_vector(answers), __expected, __no);
        }
        case 4: {
            int guesses[] = {
                76938260,
                523164588,
                14196746,
                296286419,
                535893832,
                41243148,
                364561227,
                270003278,
                472017422,
                367932361,
                395758413,
                301278456,
                186276934,
                316343129,
                336557549,
                52536121,
                98343562,
                356769915,
                89249181,
                335191879
            };
            int answers[] = {
                466274085,
                20047757,
                529015599,
                246925926,
                7318513,
                501969197,
                178651118,
                273209067,
                71194923,
                175279984,
                147453932,
                241933889,
                356935411,
                226869216,
                206654796,
                490676224,
                444868783,
                186442430,
                453963164,
                208020466
            };
            int __expected = 543212345;
            return do_test(to_vector(guesses), to_vector(answers), __expected, __no);
        }
        case 5: {
            int guesses[] = {
                42
            };
            int answers[] = {
                42
            };
            int __expected = 84;
            return do_test(to_vector(guesses), to_vector(answers), __expected, __no);
        }
        case 6: {
            int guesses[] = {
                999900000
            };
            int answers[] = {
                100001
            };
            int __expected = 999799999;
            return do_test(to_vector(guesses), to_vector(answers), __expected, __no);
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
    cout << "EllysNumberGuessing (500 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 7; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
