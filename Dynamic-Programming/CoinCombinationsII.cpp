#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define all(x) (x).begin(), (x).end()
const int MOD = 1e9+7;
int mpow(int a,int b,int p=MOD){a=a%p;int res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
const int N=1e6+2;
int dp[N];
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      // #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // // freopen("output.txt","w",stdout);
      // #endif
      int n,x;
      cin>>n>>x;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      dp[0]=1;
      for(int i=0;i<n;i++)
      {
        for(int j=1;j<=x;j++)
        {
          if(a[i]<=j)
          dp[j]+=dp[j-a[i]],dp[j]%=MOD;
        }
      }
      cout<<dp[x];
}
