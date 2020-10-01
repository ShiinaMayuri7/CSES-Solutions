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
const int N=5*1e5+2;
int dp[N];
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      // #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // // freopen("output.txt","w",stdout);
      // #endif
      int n;
      cin>>n;
      vector<pair<int,pair<int,pii>>> v;
      for(int i=0;i<n;i++)
      {
        int a,b,p;
        cin>>a>>b>>p;
        v.pb({a,{0,{p,i}}});
        v.pb({b,{1,{p,i}}});
      }
      sort(all(v));
      map<int,int> ma; 
      int mx=0;
      for(int i=0;i<v.size();i++)
      {
        if(v[i].se.fi==0)
        {
          dp[i+1]=dp[i];
          ma[v[i].se.se.se]=i+1;
        }
        else{
          dp[i+1]=v[i].se.se.fi+dp[ma[v[i].se.se.se]-1];
          dp[i+1]=max(dp[i+1],dp[i]);
        }
        mx=max(mx,dp[i+1]);
      }
      cout<<mx;
}