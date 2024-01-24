#include <bits/stdc++.h>
using namespace std;
const int MM = 1e9;
int dp[MM][MM];
int main()
{
	//	ofstream cout ("Ans.out");
	int a, b, N;
	cin >> N;
	while (N--)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}
