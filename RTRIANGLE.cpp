#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
ll n, m;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long n;
    cin >> n;
    long long root = sqrt(2 * n);
    if (root * (root + 1) == 2 * n) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

	return 0;
}
