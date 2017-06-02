#include <bits/stdc++.h>

using namespace std;

int main(){
        int i,n,q;
        cin >> n >> q;
        string s, temp,  g = "0";
        vector<string> v;
        for(i=0; i<n; i++){
          s.append(g);
       }
        temp = s;
        v.push_back(s);
        for(i=0; i<q; i++){
            int l, r; cin >> l >> r;
            for(int j=l-1; j<r; j++){
                s[j] = (s[j] == '0'? '1':'0');
            }
            if(s>temp) { temp = s; }
        }
        cout << temp;
    return 0;
}

