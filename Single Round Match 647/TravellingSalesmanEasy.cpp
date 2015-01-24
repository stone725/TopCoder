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



struct TravellingSalesmanEasy
{
    int getMaxProfit(int M, vector<int> profit, vector<int> city, vector<int> visit)
    {
        vector<vector<int>> vv(M);
        for (int i = 0; i < profit.size(); ++i)
        {
            vv[city[i] - 1].push_back(profit[i]);
            SORT(vv[city[i] - 1]);
        }
        int ans = 0;
        for (int i = 0; i < visit.size(); ++i)
        {
            if(vv[visit[i] - 1].size() != 0){
                ans += vv[visit[i] - 1][vv[visit[i] - 1].size() - 1];
                vv[visit[i] - 1].pop_back();
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

bool do_test(int M, vector<int> profit, vector<int> city, vector<int> visit, int __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    TravellingSalesmanEasy *instance = new TravellingSalesmanEasy();
    int __result = instance->getMaxProfit(M, profit, city, visit);
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
            int M = 2;
            int profit[] = {
                3,
                10
            };
            int city[] = {
                1,
                1
            };
            int visit[] = {
                2,
                1
            };
            int __expected = 10;
            return do_test(M, to_vector(profit), to_vector(city), to_vector(visit), __expected, __no);
        }
        case 1: {
            int M = 1;
            int profit[] = {
                3,
                5,
                2,
                6,
                4
            };
            int city[] = {
                1,
                1,
                1,
                1,
                1
            };
            int visit[] = {
                1,
                1,
                1
            };
            int __expected = 15;
            return do_test(M, to_vector(profit), to_vector(city), to_vector(visit), __expected, __no);
        }
        case 2: {
            int M = 6;
            int profit[] = {
                77,
                33,
                10,
                68,
                71,
                50,
                89
            };
            int city[] = {
                4,
                1,
                5,
                6,
                2,
                2,
                1
            };
            int visit[] = {
                6,
                5,
                5,
                6,
                4
            };
            int __expected = 155;
            return do_test(M, to_vector(profit), to_vector(city), to_vector(visit), __expected, __no);
        }
        case 3: {
            int M = 7;
            int profit[] = {
                22,
                91,
                53,
                7,
                80,
                100,
                36,
                65,
                92,
                93,
                19,
                92,
                95,
                3,
                60,
                50,
                39,
                36,
                2,
                30,
                63,
                84,
                2
            };
            int city[] = {
                5,
                3,
                4,
                3,
                6,
                5,
                6,
                6,
                5,
                2,
                7,
                6,
                3,
                2,
                6,
                1,
                7,
                4,
                6,
                3,
                7,
                2,
                5
            };
            int visit[] = {
                5,
                7,
                1,
                3,
                6,
                2,
                5,
                7,
                3,
                6,
                3,
                2,
                7,
                3,
                1,
                3,
                1,
                7,
                2,
                3,
                1,
                1,
                3,
                1,
                6,
                1
            };
            int __expected = 1003;
            return do_test(M, to_vector(profit), to_vector(city), to_vector(visit), __expected, __no);
        }
        case 4: {
            int M = 85;
            int profit[] = {
                94,
                21,
                99,
                27,
                91,
                1,
                64,
                96,
                32,
                39,
                84,
                71,
                97,
                53,
                73,
                20,
                7,
                13,
                33,
                45,
                5,
                85,
                7,
                87,
                94,
                37,
                48,
                30,
                5,
                85,
                47,
                62,
                91,
                18,
                71,
                37,
                7,
                25,
                75,
                17,
                40,
                19,
                89,
                85,
                86,
                87,
                45,
                12,
                61,
                71,
                32,
                73,
                63,
                89,
                25,
                51,
                60,
                76,
                32,
                2,
                69,
                78,
                28,
                32,
                74,
                44,
                47,
                11,
                82,
                5,
                2,
                28,
                54,
                35,
                67,
                44,
                35,
                6,
                70,
                66,
                77,
                7,
                60,
                67,
                33,
                66,
                21,
                91,
                76,
                75,
                16,
                79,
                20,
                24,
                91,
                31,
                2,
                50,
                11,
                19,
                93,
                49,
                4,
                7,
                55,
                9,
                95,
                39,
                54,
                12,
                48,
                38,
                73,
                100,
                57,
                97,
                44,
                2,
                2,
                51,
                40,
                4,
                51,
                3,
                95,
                93,
                56,
                88,
                60,
                98,
                67,
                7,
                99,
                46,
                71,
                75,
                24,
                82,
                87,
                29,
                92,
                92,
                81,
                87,
                34,
                83,
                58,
                46,
                79,
                53,
                38,
                32,
                97,
                41,
                65,
                10,
                54,
                81,
                42,
                37,
                76,
                28,
                11,
                50,
                13,
                29,
                15,
                99,
                73,
                72,
                2,
                81,
                39,
                75,
                1,
                54
            };
            int city[] = {
                72,
                69,
                19,
                25,
                3,
                65,
                10,
                42,
                37,
                76,
                29,
                34,
                41,
                14,
                46,
                46,
                37,
                55,
                30,
                32,
                84,
                57,
                74,
                16,
                10,
                48,
                67,
                31,
                44,
                84,
                11,
                59,
                67,
                63,
                5,
                31,
                28,
                71,
                3,
                21,
                42,
                21,
                61,
                50,
                5,
                79,
                79,
                27,
                69,
                33,
                47,
                70,
                76,
                70,
                17,
                73,
                28,
                64,
                77,
                84,
                9,
                6,
                63,
                71,
                17,
                71,
                40,
                9,
                8,
                16,
                76,
                76,
                6,
                53,
                47,
                10,
                45,
                31,
                78,
                55,
                13,
                35,
                50,
                43,
                32,
                78,
                78,
                44,
                20,
                56,
                24,
                43,
                80,
                62,
                72,
                16,
                5,
                72,
                67,
                29,
                11,
                51,
                64,
                27,
                7,
                44,
                59,
                1,
                40,
                71,
                64,
                63,
                67,
                81,
                72,
                22,
                73,
                59,
                21,
                44,
                3,
                18,
                9,
                75,
                72,
                43,
                13,
                44,
                79,
                42,
                58,
                49,
                81,
                44,
                42,
                41,
                35,
                81,
                63,
                74,
                42,
                79,
                42,
                39,
                45,
                49,
                18,
                73,
                53,
                36,
                80,
                34,
                75,
                57,
                10,
                79,
                79,
                33,
                48,
                18,
                81,
                3,
                69,
                36,
                37,
                49,
                54,
                29,
                17,
                81,
                83,
                13,
                8,
                69,
                5,
                84
            };
            int visit[] = {
                39,
                29,
                15,
                5,
                3,
                65,
                29,
                64,
                60,
                21,
                13,
                10,
                73,
                75,
                44,
                84,
                15,
                61,
                26,
                49,
                31,
                27,
                83,
                24,
                16,
                55,
                60,
                74,
                71,
                53,
                68,
                15,
                75,
                15,
                36,
                4,
                47,
                9,
                77,
                45,
                63,
                32,
                77,
                84,
                8,
                68,
                11,
                5,
                18,
                80,
                36,
                52,
                42,
                59,
                79,
                83,
                81,
                29,
                43,
                70,
                29,
                19,
                68,
                5,
                83,
                60,
                71,
                66,
                62,
                81,
                85,
                39,
                42,
                40,
                69,
                60,
                34,
                12,
                2,
                4,
                31,
                36,
                81,
                33,
                71,
                32,
                68,
                5,
                30,
                59,
                61,
                10,
                71,
                49,
                63,
                30,
                62,
                83,
                35,
                56,
                82,
                2,
                14,
                59,
                68,
                74,
                32,
                31,
                3,
                28,
                38,
                54,
                38
            };
            int __expected = 4369;
            return do_test(M, to_vector(profit), to_vector(city), to_vector(visit), __expected, __no);
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
    cout << "TravellingSalesmanEasy (500 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 5; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
