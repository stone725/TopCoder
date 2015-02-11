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

struct CartInSupermarketEasy
{
    int calc(int N, int K)
    {
        vector<int> v(1, N);
        queue<pair<vector<int>, pair<int, int> > > q;
        q.push(MP(v, MP(0, K)));

        while(q.size()){
            vector<int> vc = q.front().first;
            int n = q.front().second.first;
            int c = q.front().second.second;
            q.pop();
            if(vc.size() == 0){
                return n;
            }
            sort(vc.begin(), vc.end());
            if(c){
                vector<int> vcc = vc;
                int k = vc.back();
                vc.pop_back();
                vc.push_back(k / 2);
                vc.push_back((k + 1) / 2);
                for (int i = 0; i < vc.size(); ++i)
                {
                    vc[i]--;
                }
                sort(vc.rbegin(), vc.rend());
                while(vc.size() && vc.back() <= 0){
                    vc.pop_back();
                }
                q.push(MP(vc, MP(n + 1, c - 1)));
                vc = vcc;
            }
            for (int i = 0; i < vc.size(); ++i)
            {
                vc[i]--;
            }
            sort(vc.rbegin(), vc.rend());
            while(vc.size() && vc.back() <= 0){
                vc.pop_back();
            }
            q.push(MP(vc, MP(n + 1, c)));
        }
    }
};

// CUT begin
template <typename T> string pretty_print(T t) { stringstream s; typeid(T) == typeid(string) ? s << "\"" << t << "\"" : s << t; return s.str(); }

bool do_test(int N, int K, int __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    CartInSupermarketEasy *instance = new CartInSupermarketEasy();
    int __result = instance->calc(N, K);
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
            int N = 5;
            int K = 0;
            int __expected = 5;
            return do_test(N, K, __expected, __no);
        }
        case 1: {
            int N = 5;
            int K = 2;
            int __expected = 4;
            return do_test(N, K, __expected, __no);
        }
        case 2: {
            int N = 15;
            int K = 4;
            int __expected = 6;
            return do_test(N, K, __expected, __no);
        }
        case 3: {
            int N = 7;
            int K = 100;
            int __expected = 4;
            return do_test(N, K, __expected, __no);
        }
        case 4: {
            int N = 45;
            int K = 5;
            int __expected = 11;
            return do_test(N, K, __expected, __no);
        }
        case 5: {
            int N = 100;
            int K = 100;
            int __expected = 8;
            return do_test(N, K, __expected, __no);
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
    cout << "CartInSupermarketEasy (500 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 6; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
