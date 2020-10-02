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
 
int32_t main(){
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      #ifndef ONLINE_JUDGE
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt","w",stdout);
      #endif
      int n,s;
      cin>>n>>s;
      int a[n];
      map<int,set<int>> ma;
      for(int i=0;i<n;i++)
      {
            cin>>a[i];
            ma[a[i]].insert(i);
      }
      for(int i=0;i<n;i++)
      {
            ma[a[i]].erase(i);
            if((int)ma[s-a[i]].size()!=0)
            {
                  cout<<i+1<<" "<<(*ma[s-a[i]].begin())+1;
                  return 0;
            }
            ma[a[i]].insert(i);
      }
      cout<<"IMPOSSIBLE";
}
