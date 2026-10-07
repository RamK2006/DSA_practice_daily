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
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<pair<int,int>> sum(n-4);
        for(int i=0;i<n-4;i++){
            sum[i].first= a[i]+a[i+2]-a[i+4];
            sum[i].second= i;
        }
        // for(int i=0;i<n-4;i++){
        //     if(sum[i].second-sum[i+1].second)
        // }
        sort(sum.begin(),sum.end());
        long long ans=0;
        for(int i=0;i<n-4;){
            int j=i;
            while(j<n-4&&sum[j].first==sum[i].first) j++;
            long long cnt=j-i;
            ans+= cnt*(cnt-1)/2;
            set<int> mem;
            for (int k=i;k<j;k++) {
                int x=sum[k].second;
                if(mem.count(x-2)) ans--;
                if(mem.count(x-4)) ans--;
                mem.insert(x);
            }
            i=j;
        }
        cout<<ans<<'\n';
    }

    return 0;
}