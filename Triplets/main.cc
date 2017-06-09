#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,t;
        cin >> t;
        rep(i,t){
            int p,q,r,in; cin >> p >> q >> r;
            vi X,Y,Z;
            rep(j,p){
                 cin >> in; X.pb(in);
            }
            rep(j,q){
                cin >> in; Y.pb(in);
            }
            rep(j,r){
                cin >> in; Z.pb(in);
            }
            sort(all(X)); sort(all(Z));
            sort(all(Y), greater<int>());
            for(auto c:Y) cout << c << " ";
        }

    return 0;
}

