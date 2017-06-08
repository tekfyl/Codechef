#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,t;
        cin >> t;
            long long sum=0;
        while(t--){
            int n; cin >> n;
            vector<int> v;
            for(i=0; i<n; i++){
                int in; cin >> in; v.push_back(in);
            }
            sum += accumulate(v.begin(), v.end(), 0);
        }
            cout << sum << endl;

    return 0;
}

