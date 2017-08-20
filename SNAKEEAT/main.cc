#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
using namespace std;

int main(){
    int t;
    cin >> t;
    rep(i,t){
        int n,q;
        cin >> n >> q;
        vi snakelength;
        int in;
        rep(i,n) cin >> in, snakelength.pb(in);
        sort(all(snakelength));
        //for(int c:snakelength) cout << c << " ";
        //cout << endl;
        rep(i,q){
            int k;
            cin >> k;
            int lower = lower_bound(all(snakelength), k) - snakelength.begin();
            //lower--;
            //cout << lower << endl; fflush(stdout);
            int l=0, r = lower;
            int more=0;
            while(l<r){
                int mid = (l+r)/2;
                if(k*mid - accumulate(snakelength.begin() +lower-mid+1, snakelength.begin() + lower, 0) <= lower-mid+1){
                    more = mid;
                    cout << mid << endl;
                    l = mid+1;
                }
                else
                {
                    r = mid-1;
                }
            }
            cout << n-more << endl;
        }
    }
    return 0;
}

