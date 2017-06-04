#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        cin >> n;
        while(n--){
            long long int x,y;
            long long int rank=0;
            cin >> x >> y;
            rank = (x+1)*(x+2)/2 + ((y)*(y+1)/2 + x*y);
            cout << rank << endl;
        }
    return 0;
}

