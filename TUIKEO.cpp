#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll tuikeo[3];

	for (ll i = 0; i < 3; i++)
	{
		cin >> tuikeo[i];
	}
	ll loaikeo[3];
	for (ll i = 0; i < 3; i++)
	{
		cin >> loaikeo[i];
	}
	sort(tuikeo, tuikeo + 3);
	sort(loaikeo, loaikeo + 3);
	for (ll i = 0; i < 3; i++)
	{
		if (tuikeo[i]>=loaikeo[i])
		{
			continue;
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";


	return 0;
}
