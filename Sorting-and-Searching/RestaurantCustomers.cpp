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
      vector<pair<int,pii>> v;
      for(int i=0;i<n;i++)
      {
            int x,y; cin>>x>>y;
            v.pb({x,{0,i}});
            v.pb({y,{1,i}});
      }
      sort(all(v));
      int ans=0;
      set<int> s;
      for(int i=0;i<v.size();i++)
      {
            if(v[i].se.fi==0)
            {
                  s.insert(v[i].se.se);
                  ans=max(ans,(int)s.size());
            }
            else{
                  ans=max(ans,(int)s.size());
                  s.erase(v[i].se.se);
            }
      }
      cout<<ans;
}
