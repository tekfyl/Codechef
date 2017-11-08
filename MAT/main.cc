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


void print(vvi v){
    
}

int main(){
    int n,q;
    cin >> n >> q;
    vvi v(n+1, vi(n+1));
    rep1(i, n){
        rep1(j, n){
            cin >> v[i][j];
        }
    }

    while(q--){
        int p;
        cin >> p;
        
        rep1(i, n){
            int in;
            cin >> in;
            v[i][p] = in;
            v[p][i] = in;
        }
    }
    return 0;
}

