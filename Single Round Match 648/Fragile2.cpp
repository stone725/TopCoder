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

struct Union_Find {
    vector<int> par;
    vector<int> rank;
    void init( int n ) {
        par.resize( n );
        rank.resize( n );
        for ( int i = 0; i < n; ++i ) {
            par[ i ] = i;
            rank[ i ] = 0;
        }
    }
    int find( int s ) {
        if ( par[ s ] == s ) {
            return s;
        }
        return par[ s ] = find( par[ s ] );
    }
    void unite( int x, int y ) {
        int a = find( x ), b = find( y );
        if ( a == b ) {
            return;
        }
        if ( rank[ x ] < rank[ y ] ) {
            par[ x ] = y;
        }
        else {
            par[ y ] = x;
            if ( rank[ x ] == rank[ y ] ) {
                ++rank[ x ];
            }
        }
    }
    bool same( int x, int y ) {
        return find( x ) == find( y );
    }
    unsigned int size() {
        return par.size();
    }
};

struct Fragile2
{
    int countPairs(vector<string> graph)
    {
        int ans = 0;
        vector<vector<int>> v(graph.size());
        for (int i = 0; i < graph.size(); ++i)
        {
            for (int j = 0; j < graph.size(); ++j)
            {
                if(graph[i][j] == 'Y'){
                    v[i].push_back(j);
                }
            }
        }
        Union_Find uf;
        uf.init(graph.size());
        for (int i = 0; i < graph.size(); ++i)
        {
            for (auto j : v[i])
            {
                uf.unite(i, j);
            }
        }
        set<int> s;
        int cnt = 0;
        for (int i = 0; i < graph.size(); ++i)
        {
            if(s.count(uf.find(i))){
                continue;
            }
            s.insert(uf.find(i));
            cnt = s.size();
        }
        
        for (int i = 0; i < graph.size(); ++i)
        {
            for (int j = i + 1; j < graph.size(); ++j)
            {
            uf.init(graph.size());
                for (int k = 0; k < graph.size(); ++k)
                {
                    if(k == i || k == j){
                        continue;
                    }
                    for (auto l : v[k])
                    {
                        if(l == i || l == j || uf.same(k, l)){
                            continue;
                        }
                        uf.unite(k, l);
                        a = true;
                    }
                }
                if( !a){
                    break;
                }
                int c = 0;
                s.clear();
                for (int k = 0; k < graph.size(); ++k)
                {
                    if(k == i || k == j || s.count(uf.find(k))){
                        continue;
                    }
                    s.insert(uf.find(k));
                    c = s.size();
                }
                if(c > cnt){
                    ans++;
                }
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

bool do_test(vector<string> graph, int __expected, int caseNo) {
    cout << "  Testcase # " << caseNo << " ... ";

    Fragile2 *instance = new Fragile2();
    int __result = instance->countPairs(graph);
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
            string graph[] = {
                "NYNN",
                "YNYN",
                "NYNY",
                "NNYN"
            };
            int __expected = 3;
            return do_test(to_vector(graph), __expected, __no);
        }
        case 1: {
            string graph[] = {
                "NYNNNN",
                "YNYNNN",
                "NYNNNN",
                "NNNNYN",
                "NNNYNY",
                "NNNNYN"
            };
            int __expected = 5;
            return do_test(to_vector(graph), __expected, __no);
        }
        case 2: {
            string graph[] = {
                "NNN",
                "NNN",
                "NNN"
            };
            int __expected = 0;
            return do_test(to_vector(graph), __expected, __no);
        }
        case 3: {
            string graph[] = {
                "NYNYNNYYNN",
                "YNNNYNYYNN",
                "NNNNYNNNYN",
                "YNNNYYNNNN",
                "NYYYNNNNYN",
                "NNNYNNNNYN",
                "YYNNNNNNNN",
                "YYNNNNNNYN",
                "NNYNYYNYNY",
                "NNNNNNNNYN"
            };
            int __expected = 9;
            return do_test(to_vector(graph), __expected, __no);
        }
        case 4: {
            string graph[] = {
                "NNNYNNYNNNNNNNYYNNNY",
                "NNNNNNNNYNNNNNNNNNNN",
                "NNNNNNNNNNNNNNNNNNNN",
                "YNNNNNNNNNYNNNNNNNNN",
                "NNNNNNNYNNNNNYNNNNYN",
                "NNNNNNNNNNNNNNNNYNNY",
                "YNNNNNNNNNNNNYYYNYNN",
                "NNNNYNNNNNNNNYYNNNNN",
                "NYNNNNNNNYNNNNNNNNNN",
                "NNNNNNNNYNNNYNNNNNYN",
                "NNNYNNNNNNNNNNYNNNNN",
                "NNNNNNNNNNNNNNNNNNNN",
                "NNNNNNNNNYNNNNNNNYNN",
                "NNNNYNYYNNNNNNNNNNNN",
                "YNNNNNYYNNYNNNNNNNNN",
                "YNNNNNYNNNNNNNNNYNNN",
                "NNNNNYNNNNNNNNNYNYNN",
                "NNNNNNYNNNNNYNNNYNNN",
                "NNNNYNNNNYNNNNNNNNNN",
                "YNNNNYNNNNNNNNNNNNNN"
            };
            int __expected = 42;
            return do_test(to_vector(graph), __expected, __no);
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
    cout << "Fragile2 (500 Points)" << endl << endl;

    int nPassed = 0, nAll = 0;
    if (argc == 1)
        for (int i = 0; i < 5; ++i) nAll++, nPassed += run_testcase(i);
    else
        for (int i = 1; i < argc; ++i) nAll++, nPassed += run_testcase(atoi(argv[i]));
    cout << endl << "Passed : " << nPassed << "/" << nAll << " cases" << endl;

    return 0;
}
// CUT end
