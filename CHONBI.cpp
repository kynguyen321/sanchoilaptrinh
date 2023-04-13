#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
#define str string
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll n, m; cin >> n >> m;
	cout << n * (n - 1) / 2 + m * (m - 1) / 2;

	return 0;
} 
