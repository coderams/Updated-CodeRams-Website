
// Problem : C. Chocolate Bunny
// Contest : Codeforces - Codeforces Round #669 (Div. 2)
// URL : https://codeforces.com/contest/1407/problem/C
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <map>
#include <fstream>
#include <bitset>
#include <unordered_map>
#include <stack>
#include <list>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef map<int, int> mii;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef set<int> si;
typedef set<ll> sl;
typedef map<ll, ll> mll;
typedef queue<int> qi;
typedef queue<ii> qii;
typedef vector<string> vs;
typedef pair<ll, ll> iil;
typedef priority_queue<int> pqi;
typedef priority_queue<ii> pqii;
typedef priority_queue<ll> pqil;
typedef priority_queue<iil> pqiil;
typedef vector<iil> viil;
typedef vector<vi> vvi;
typedef long double ld;
typedef pair<int, ii> iii;
typedef pair<iil, ll> iiil;
typedef vector<pair<pair<int,int>,int> > viii;
typedef vector<pair<pair<ll,ll>,ll> > viiil;
typedef vector<vl> vvl;

#define pb push_back
#define mp make_pair
#define rep(i, n) for (int i = 0 ; i < n ; i++)
#define INF 2000000000

ll MOD = 1000000007;

void solve() {
    int n, k;
    cin >> n >> k;

    if (k >= (n+1)/2 || n <= 2) {
        cout << -1 << endl;
        return;
    }

    vii c;

    for (int i = 1 ; i <= k ; i++) {
        int ct = 0;
        int t = 0;
        bool seen[n];
        memset(seen, false, sizeof seen);
        seen[0] = true;
        while (ct < n) {
            int ot = t;
            t = (t + i) % n;
            if (seen[t]) {
                t++;
            }
            if (ct == n - 1) {
                t = 0;
            }
            seen[t] = true;
            c.pb({ot+1, t+1});
            ct++;
        }
    }

    cout << c.size() << endl;
    rep(i, c.size()) cout << c[i].first << " " << c[i].second << '\n';
}

void querySolve() {
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++) {
        solve();
    }
}

int main() {
    solve();
    //querySolve();
}
