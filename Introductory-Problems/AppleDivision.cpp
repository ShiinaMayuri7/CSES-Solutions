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
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      int ans=1e17;
      for(int i=0;i<(1LL<<n);i++)
      {
            int s1=0,s2=0;
            for(int j=0;j<n;j++) if((i>>j)&1) s1+=a[j]; else s2+=a[j];
            ans=min(ans,abs(s1-s2));
      }
      cout<<ans;
}