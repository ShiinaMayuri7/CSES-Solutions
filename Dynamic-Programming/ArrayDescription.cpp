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
const int N=1e5+2;
int dp[N][102];
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      // #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // // freopen("output.txt","w",stdout);
      // #endif
      int n,m;
      cin>>n>>m;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      if(a[0]==0)
      {
        for(int i=1;i<=m;i++) dp[0][i]=1;
      }
      else dp[0][a[0]]=1;
      for(int i=1;i<n;i++)
      {
        if(a[i]==0)
        {
          for(int j=1;j<=m;j++)
          {
            for(int k=-1;k<=1;k++)
            {
              if(j+k>=0) dp[i][j]+=dp[i-1][j+k],dp[i][j]%=MOD;
            }
          }
        }
        else{
          for(int j=1;j<=m;j++){
            if(a[i]==j)
            {
              for(int k=-1;k<=1;k++)
              {
                if(j+k>=0) dp[i][j]+=dp[i-1][j+k],dp[i][j]%=MOD;
              }   
            }
            else dp[i][j]=0;
          }
        }
      }
      int ans=0;
      for(int i=1;i<=m;i++) ans+=dp[n-1][i],ans%=MOD;
      cout<<ans;
}