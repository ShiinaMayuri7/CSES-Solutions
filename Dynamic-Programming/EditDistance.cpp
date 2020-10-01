#include <bits/stdc++.h> 
using namespace std;
 
 
int main(){
	cin.tie(0)->sync_with_stdio(0);
	#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	#endif
	string a,b;
	cin>>a>>b;
	int n=a.length(),m=b.length();
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0)
			{
				dp[i][j]=j;
			}
			else if(j==0)
			{
				dp[i][j]=i;
			}
			else if(a[i-1]==b[j-1])
			{
				dp[i][j]=dp[i-1][j-1];
			}
			else{
				dp[i][j] = 1+min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]});
			}
		}
	}
	cout<<dp[n][m];
}