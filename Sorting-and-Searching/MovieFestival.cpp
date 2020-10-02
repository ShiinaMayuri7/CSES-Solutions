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
const int N=2*1e5+3;
 
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt","w",stdout);
      #endif
      int n;
      cin>>n;
      vector<pii> a;
      for(int i=0;i<n;i++)
      {
            int x,y;
            cin>>x>>y;
            a.pb({y,x});
      }
      sort(all(a));
      int s=0;
      int ans=0;
      for(auto z:a)
      {
            int x=z.se;
            int y=z.fi;
            if(x>=s) s=y,ans++;
      }
      cout<<ans;
}
