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
int t; cin >> t;
while(t--){
int n; cin >> n;
vector<int> v;
vector<long long> p(n),s(n);
for(int i=0;i<n;i++){
int in; cin >> in;
v.push_back(in);
}
p[0]=v[0];
ll sum = v[0];
for(int i=1; i<n; i++){
p[i] = p[i-1]+v[i];
sum += v[i];
}
//for(int c:p) cout << c << " "; 
//cout << endl;
//reverse(v.begin(),v.end());
s[0]=sum;
for(int i=1; i<n; i++){
s[i] = s[i-1]-v[i-1];
}
//for(int c:s) cout << c << " ";
//cout << endl;
for(int i=0; i<n; i++){
p[i] += s[i];
}
ll f = *mn(all(p));
cout << 1+find(all(p), f)-p.begin()<<endl;
//for(int c:p) cout << c << " ";
//cout << endl;
}
    return 0;
}

