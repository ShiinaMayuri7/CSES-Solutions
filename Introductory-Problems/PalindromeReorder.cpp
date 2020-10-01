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
      string s;
      cin>>s;
      int cnt[26]={0};
      for(int i=0;i<s.length();i++)
      {
            cnt[s[i]-'A']++;
      }
      int cntt=0;
      for(int i=0;i<26;i++)
      {
            if(cnt[i]&1) cntt++;
      }
      if(cntt>1||(s.length()%2==0&&cntt))
      {
            cout<<"NO SOLUTION";
            return 0;
      }
      for(int i=0;i<26;i++)
      {
            int x=cnt[i]/2;
            //cnt[i]-=x;
            // cout<<x<<" ";
            for(int j=0;j<x;j++) cout<<(char)(i+'A');
      }
      for(int i=0;i<26;i++)
      {
            if(cnt[i]&1) cnt[i]--,cout<<(char)(i+'A');
      }
      for(int i=0;i<26;i++)
      {
            int x=cnt[i]/2;
            cnt[i]-=x;
            // cout<<x<<" ";
      }
      for(int i=25;i>=0;i--)
      {
            int x=cnt[i];
            for(int j=0;j<x;j++) cout<<(char)(i+'A');
      }
 
}