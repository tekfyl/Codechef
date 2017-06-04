#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        cin >> n;
        while(n--){
            int x,y,rank=0;
            cin >> x >> y;
            rank = (x+1)*(x+2)/2 + ((y)*(y+1)/2 + 1) + max(x,y)-1;
            if(x == 0 || y == 0) {
                rank -= max(x,y);
            }
            else if (x == y){    
            rank = (x+1)*(x+2)/2 + ((y)*(y+1)/2 + 1) + x+y-1;
            }
            cout << rank << endl;
        }
    return 0;
}

