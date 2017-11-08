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
    int q;
    cin >> q;
    ll n,k;
    cin >> n >> k;
    vll v;
    rep(i,pow(2,n)){
        v.pb(i);
    }
    rep(i,n){
        int j = 0;
        ll p = pow(2,i);
        for(int z=1; z <= p; z++){
            for( ; j<z*n/p; j++){
                int l=j,r=z*n/p;
                while(l<r){
                    while(v[l]%2 == 0 && l<r) l++;
                    while(v[r]%2 == 1 && l<r) r--;
                    if(l<r){
                cout << v[l] << " " << v[r] << endl; 
                        swap(v[l],v[r]);
                        l++; r--;
                    }
                }
            }
        }
        
    for(ll c:v) cout << c;
    cout << endl;
    }
    return 0;
}

