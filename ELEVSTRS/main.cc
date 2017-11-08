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
    while(t--){
        double n, v1, v2;
        cin >> n >> v1 >> v2;
        if(pow(2,0.5)*n/v1 < 2*n/v2){
            cout << "Stairs" << endl;
        }
        else{
            cout << "Elevator" << endl;
        }
    }
    return 0;
}

