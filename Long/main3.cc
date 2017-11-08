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
    int n; cin >> n;
    while(n--){
        string s,r; cin >> s;
        map<char,int> m;
        for(char c:s) m[c-'0']++;
        for(int i=6; i<=8; i++){
            if(i == 6){
                if(m[6] > 0){
                    for(int j=5; j<=9; j++){
                        if(j == 6 && m[j] > 1){
                            r += 10*i+j;
                        }
                        else{
                            if(m[j] > 0 && j != 6){
                                r += 10*i+j;
                            }
                        }
                    }
                }
            }
            else if(m[i] > 0){
                for(int j=0; j<=9; j++){
                        if((j == 7 && m[j]>1) || (j==8 && m[j]>1)){
                            r += 10*i+j;
                        }
                        else{
                            if(m[j] > 0 && !((i == 7 && j == 7) || (i == 8 && j == 8))){
                                r += 10*i+j;
                            }
                        }
                    }
                }
        }
        if(m[9] > 0 && m[0] > 0) r += 90;
        cout << r << endl;
    }
    return 0;
}

