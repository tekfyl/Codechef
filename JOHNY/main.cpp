#include <bits/stdc++.h>

using namespace std;

int main(){
        int i,t;
        cin >> t;
        for(i=0; i<t; i++){
            vector<int> v;
            int j, n, k, johny;
            cin >> n;
            for(j=0; j<n; j++){
                int in; cin >> in; v.push_back(in);
            }
            cin >> k;
            johny = v[k-1];
            sort(v.begin(), v.end());
            int d = distance(v.begin(), find(v.begin(), v.end(), johny));
            cout << d+1 << endl;
        }
    return 0;
}

