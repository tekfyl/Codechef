#include <bits/stdc++.h>

using namespace std;

int main(){
        int i,t;
        cin >> t;
        for(i=0; i<t; i++){
            int j, n, min = INT_MAX, tempdiff; cin >> n;
            vector<int> v;
            for(j=0; j<n; j++){
                int in; cin >> in; v.push_back(in);
            }
            sort(v.begin(),v.end());
            for(j=0; j<n-1; j++){
                tempdiff = v[j+1] - v[j];
                min = min>tempdiff? tempdiff : min;
            }
            cout << min << endl;
        }
    return 0;
}

