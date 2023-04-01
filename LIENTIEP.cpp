#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll n; cin >> n;
	ll array[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	sort(array, array + n);
	ll ans = 1;
	ll dem = 1;
	for (ll i = 0; i < n - 1; i++)
	{
		if (array[i+1]-array[i]==1)
		{
			dem += 1; ans = max(ans, dem);
		}
		else
		{
			dem = 1;
		}
	}
	cout << n - ans;

	return 0;
}
