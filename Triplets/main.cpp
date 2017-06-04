#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,t,p,q,r,a,b,c;

        long long int sum=0;
        cin >> t;
        while(t--){
            sum = 0;
            cin >> p >> q >> r;
            vector<int> A,B,C;
            for(i=0; i<p; i++){
                cin >> a; A.push_back(a);
            }
            for(i=0; i<q; i++){
                cin >> b; B.push_back(b);
            }
            for(i=0; i<r; i++){
                cin >> c; C.push_back(c);
            }
            for(b=0; b<q; b++){
                int y = B[b];
                for(a=0; a<p; a++){
                    int x = A[a];
                    if(x>y) continue;
                    for(c=0; c<r; c++){
                        int z = C[c];
                        if(z>y) continue;
                        sum += (x+y)*(y+z);
                    }
                }
            }
            cout << sum%1000000007 << endl;
        }
    return 0;
}

