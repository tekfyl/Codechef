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
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int flagA=0, flagB=0, counter=0, tribeA=0, tribeB=0;
        char prev = 32;
        for(char c:s){
            if(c == 'A'){
                if(prev == 'A') tribeA += counter;
                prev = 'A';
                tribeA++; flagA = !flagA;
                counter = 0;
            }
            else if(c == 'B'){
                if(prev == 'B') tribeB += counter;
                prev = 'B';
                tribeB++; flagB = !flagB;
                counter = 0;
            }
            else{
                counter++;
            }
        }
        cout << tribeA << " " << tribeB << endl;
    }
    return 0;
}

