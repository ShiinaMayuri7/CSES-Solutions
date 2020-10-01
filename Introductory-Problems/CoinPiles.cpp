#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define all(x) (x).begin(), (x).end()
#define forn(i,n) for(int i=0;i<(int)(n);i++)
#define for1(i,n) for(int i=1;i<=(int)(n);i++)
#define debug(x) cout << '>' << #x << ':' << x << endl;
const int MOD = 1e9 + 7 ;
int mpow(int a,int b,int p=MOD){  a=a%p;int res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
const int N=2*1e5+3;
 
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt","w",stdout);
      #endif
      int t;
      cin>>t;
      while(t--){
      int a,b;
      cin>>a>>b;
      if(((2*a-b)%3==0)&&((2*b-a)%3==0)&&(2*a-b>=0)&&(2*b-a>=0))
      {
            cout<<"YES\n";
      }   
      else cout<<"NO\n";
      }
}   