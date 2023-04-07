#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
#define str string
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // chương trình tắt đồng bộ giữa cin và cout để tăng tốc độ nhập xuất
    string x; getline(cin, x);
    stringstream ss(x);
    // sử dụng lớp stringstream để tách các từ trong chuỗi.
    string word;
    ll count = 0;
    while (ss >> word)
    {
        count++;
        // chương trình đếm số lượng từ và in ra kết quả.
    }
    cout << count;

    return 0;
}
