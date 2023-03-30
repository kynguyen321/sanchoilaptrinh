#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
void sohoanhao(ll n) {
	ll tong = 0;
	for (ll i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			tong += i;
		}
	}
	if (n == tong)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> n;
	sohoanhao(n);

	return 0;
}
    
