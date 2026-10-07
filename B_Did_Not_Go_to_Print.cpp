#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<int> ptd;
        set<int> all;
        for(int i=0;i<n;i++){
            all.insert(i+1);
        }
        stack<int> mem;
        for(int i=0;i<n;i++){
            if(s[i]=='1') mem.push(i+1);
            else if(s[i]=='2'){
                if(mem.empty()) ptd.insert(i+1);
                else{
                    ptd.insert(mem.top());
                    mem.pop();
                }
            }
            else if(s[i]=='3') ptd.insert(i+1);
        }
        //result = all - ptd;
        set<int> res;
        set_difference(all.begin(), all.end(), ptd.begin(), ptd.end(),inserter(res, res.end()));
        cout<<res.size()<<endl;
        for(int i :res) cout<<i<<" ";
        cout<<endl;

    }

    return 0;
}