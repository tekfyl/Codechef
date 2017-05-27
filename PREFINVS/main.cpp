#include <bits/stdc++.h>

using namespace std;

int main(){
        int i=0,n,t,count=0;
        string s;
        cin >> s; n = (int)s.size();
            if(s[0] == '1') {
                count++;
                while(s[i] == '1'){
                    i++;
                }
            }
        for(i=0; i<n-1; i++){
            if(s[i] == '0' && s[i+1] == '1'){
                count += 2;
            }
        }
            cout << count;
    return 0;
}

