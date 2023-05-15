#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findSubarrayWithSumK(vector<int>& s, int k,int ans1) {
    int n = s.size();
    vector<int> prefixSum(n + 1);
    for (int i = ans1; i <= n; i++)
        prefixSum[i] = prefixSum[i - 1] + s[i - 1];

    pair<int, int> result = { -1, -1 };
    for (int i = ans1; i <= n; i++) {
        int target = prefixSum[i - 1] + k;
        int left = i, right = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (prefixSum[mid] == target) {
                result.first = i;
                result.second = mid;
                break;
            }
            else if (prefixSum[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        if (result.first != -1)
            break;
    }
    return result;
}
int ans1=1;
int main() {
    int n;
    cin >> n;

    int p,q,r;
    cin >> p>>q>>r;
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    pair<int, int> resulta = findSubarrayWithSumK(s, p+q+r, ans1);
    ans1 = resulta.first;
    
    
    pair<int, int> result = findSubarrayWithSumK(s, p, ans1);
    cout << result.first << " ";
    ans1 = result.second+1;
    
    pair<int, int> result1 = findSubarrayWithSumK(s, q, ans1);
    cout << result1.first<< " ";
    
    ans1 = result1.second+1;
    pair<int, int> result2 = findSubarrayWithSumK(s, r, ans1);
    cout << result2.first<< " " << result2.second;
    // 12 11 10 17 1 3 2 6 4 6 3 6 2 6 5 3
    // 2 5 7 10
    return 0;
}
