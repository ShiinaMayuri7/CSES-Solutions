#include <bits/stdc++.h> 
using namespace std;
 
int main(){
	cin.tie(0)->sync_with_stdio(0);
	#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	#endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	long long dp[n][n][2];
	long long pref[n];
	for(int i=0;i<n;i++)
	{
		if(i==0) pref[i] = a[i];
		else pref[i] = pref[i-1]+a[i];
	}
	auto sum = [&](int i,int j){
		if(i==0)
		{
			return pref[j];
		}
		else return pref[j]-pref[i-1];
	};
	for(int len=1;len<=n;len++)
	{
		for(int i=0;i+len-1<n;i++)
		{
			int l = i;
			int r = i+len-1;
			if(len==1)
			{
				dp[l][r][0] = a[i];
				dp[l][r][1] = a[i];
			}
			else{
				dp[l][r][0] = max(sum(l+1,r)-dp[l+1][r][1]+a[l],sum(l,r-1)-dp[l][r-1][1]+a[r]);
				dp[l][r][1] = max(sum(l+1,r)-dp[l+1][r][0]+a[l],sum(l,r-1)-dp[l][r-1][0]+a[r]);
			}
			// cout<<l<<" "<<r<<" "<<dp[l][r][0]<<" "<<dp[l][r][1]<<"\n";
		}
	}
	cout<<dp[0][n-1][0];
}