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
    int n,t;
    cin >> t;
    while(t--){
        vi v(26,0), pan(26,0);
        rep(i,26){
            int in;
            cin >> in;
            v[i] = in;
        }
        //int in; cin >> in;
        string s;
        cin >> s;
        set<char> ss(s.begin(), s.end());
        ll sum=0;
        rep(i,26){
            if(ss.find('a'+i) == ss.end()){
                sum += v[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}

