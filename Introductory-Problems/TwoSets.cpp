#include <bits/stdc++.h> 
 
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define fi first
#define se second
#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef long double ld;
typedef string st;
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
const ll MOD = 1e9 + 7 ;
const ll INF=1e14;        
template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }                                                                                   
ll mpow(ll a,ll b,ll p=MOD){a=a%p;ll res=1;while(b>0){if(b&1)res=(res*a)%p;a=(a*a)%p;b=b>>1;}return res%p;}             
const ll N=3003;
ll dp[200][200];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 /* #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif*/
  ll n;
  cin>>n;
  if(n%4==0)
  {
    vi ans1,ans2;
    for(ll i=1;i<=n;i++)
    {
      if(i%4==0||i%4==1)
      {
        ans1.pb(i);
      }
      else ans2.pb(i);
    }
    cout<<"YES\n";
    cout<<ans1.size()<<"\n";
    for(auto x:ans1) cout<<x<<" ";
    cout<<"\n"<<ans2.size()<<"\n";
    for(auto x:ans2) cout<<x<<" ";
  }
  else if(n%4==3)
  {
    vi ans1,ans2;
    ans1.pb(1);
    ans1.pb(2);
    ans2.pb(3);
    for(ll i=4;i<=n;i++)
    {
      if(i%4==0||i%4==3)
      {
        ans1.pb(i);
      }
      else ans2.pb(i);
    }
    cout<<"YES\n";
    cout<<ans1.size()<<"\n";
    for(auto x:ans1) cout<<x<<" ";
    cout<<"\n"<<ans2.size()<<"\n";
    for(auto x:ans2) cout<<x<<" ";
  }
  else{
    cout<<"NO\n";
  }
} 