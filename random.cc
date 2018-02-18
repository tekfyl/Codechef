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
        int n;
        cin >> n;
        vector<int> data;
        rep(i,n){
            int j; cin >> j;
            data.pb(j);
        }
        int adder;
        if(n%2 == 1){
            adder = data[n/2];
        }
        else{
            adder = data[n/2-1] + data[n/2];
        }

        int neg = 0, pos = 0;

        for(auto c:data){
            if(c == 0){
                cout << c << " " << adder << " ";
                continue;
            }
            else if(neg == 0 && c < 0){
                neg = 1;
                continue;
            }
            else if(c > 0 && pos < 2){
                pos++;
                if(pos == 2){
                    continue;
                }
            }
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}

