#include <bits/stdc++.h>

using namespace std;

int maxreturn(int n){
        int t, t1, t2, t3;
        t1 = n/2; t2 = n/3; t = n/4;
        if(t1 < 4 || t2 < 6 || t3 < 8) return 1; 
        t = t1+t2+t3;
        //int max =  (n>t? n:t);
        
        return maxreturn(t1) + maxreturn(t2) + maxreturn(t3);
}

int main(){
        int i=10,n,t,t1,t2,t3;
        while(i--){
            cin >> n;
            cout << maxreturn(n) << endl;
        }
    return 0;
}

