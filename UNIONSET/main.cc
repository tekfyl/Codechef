#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,t;
        cin >> t;
        for(i=0; i<t; i++){
            long long int k;
            int l,total=0;
            cin >> n >> k;
            vector<int> f(k+1,0);
            vector< vector<int> > v(n);
            for(int j=0; j<n; j++){
                cin >> l; int ll = l;
                while(l--){
                    int in; cin >> in; v[j].push_back(in);
                }
                sort(v[j].begin(), v[j].end());
                v[j].erase(unique(v[j].begin(),v[j].end()),v[j].end());
                if(v[j].size() != ll){
                    v.erase(v.begin()+j);
                }
            }
            int z,x;
            for(z=0; z<n; z++){
                for(x=z+1; x<n; x++){
                    for(auto c:v[z]) f[c]++;
                    for(auto c:v[x]) f[c]++;
                    count(f.begin(), f.end(), 0) == 1? total++ : 1;
                }
            }
            f.clear(); v.clear();
            cout << total << endl;
        }
    return 0;
}

