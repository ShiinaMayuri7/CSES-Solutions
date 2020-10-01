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
int dp[1110][1110];
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt","w",stdout);
      #endif
      int n;
      cin>>n;
      string a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<n;i++)
      {
            for(int j=0;j<n;j++)
            {
                  if(a[i][j]=='*') continue;
                  if(i==0&&j==0) 
                  {
                        dp[i][j]=1;
                        continue;
                  }
                  if(i-1>=0) dp[i][j]+=dp[i-1][j];
                  dp[i][j]%=MOD;
                  if(j-1>=0) dp[i][j]+=dp[i][j-1];
                  dp[i][j]%=MOD;   
                  // cout<<dp[i][j]<<" ";                 
            }
            // cout<<"\n";
      }
      cout<<dp[n-1][n-1];
}