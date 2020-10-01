#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define PI 3.14159265358979323846
const int MOD = 1e9 + 7 ;
const int EPS = 1e-9;
const int N=1000005;
int dp[250001][501];
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      /*#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      #endif*/
      int n;
      cin>>n;
      int s=n*(n+1)/2;
      if(s&1){
      	 cout<<"0";
      	 return 0;
      }
      dp[0][0]=1;
      for(int i=1;i<=s;i++)
      {
      	for(int j=1;j<=n;j++)
      	{
      	  dp[i][j]+=dp[i][j-1];
      	  dp[i][j]%=MOD;
          if(i-j>=0)
          {
            dp[i][j]+=dp[i-j][j-1];
            dp[i][j]%=MOD;
          }
      	}
      }
      cout<<dp[s/2][n];
}