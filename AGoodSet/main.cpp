#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,t;
        cin >> t;
        vector<int> v;
        for(i=1; i<500; i=i+2){
            v.push_back(i);
        }
        for(i=0; i<t; i++){
            cin >> n;
            for(int j=0; j<n; j++){
                cout << v[j] << " ";
            }
            cout << endl;
        }

    return 0;
}

