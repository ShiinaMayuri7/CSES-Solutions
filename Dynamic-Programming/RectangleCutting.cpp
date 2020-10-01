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
int memo[505][505];
bool vis[505][505];
int dp(int l,int r)
{
      if(l==r) return 0;
      if(vis[l][r]) return memo[l][r];
      vis[l][r]=true;
      int ans=1e15;
      for(int i=1;i<l;i++)
      {
            ans=min(ans,1+dp(i,r)+dp(l-i,r));
      }
      for(int i=1;i<r;i++)
      {
            ans=min(ans,1+dp(l,i)+dp(l,r-i));
      }
      return memo[l][r]=ans;
}
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt","w",stdout);
      #endif
      int n,m;
      cin>>n>>m;
      cout<<dp(n,m);
}
