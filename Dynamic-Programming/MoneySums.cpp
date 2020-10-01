#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define all(x) (x).begin(), (x).end()
const int MOD = 1e9 + 7 ;
int mpow(int a,int b,int p=MOD){a=a%p;int res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const int N=1e5+3;
bool dp[N];
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt","w",stdout);
      #endif
      int n;
      cin>>n;
      int a[n];
      int s=0;
      for(int i=0;i<n;i++) cin>>a[i],s+=a[i];
      dp[0]=true;
      for(int i=0;i<n;i++)
      {
            for(int j=s;j>=a[i];j--)
            {
                  dp[j]|=dp[j-a[i]];
            }
      }
      vector<int> ans;
      for(int i=1;i<=s;i++) if(dp[i]) ans.pb(i);
      cout<<ans.size()<<"\n";
      for(auto x:ans) cout<<x<<" ";
}