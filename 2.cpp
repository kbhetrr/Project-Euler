#include <bits/stdc++.h>

using namespace std;

int dp[111111];
long long int res;

int main() {
	dp[0] = dp[1] = 1;
	for (int i = 2; dp[i - 1] < 4000000; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
		if (dp[i] % 2 == 0) res += dp[i];
	}
	cout << res;
	return 0;
}
