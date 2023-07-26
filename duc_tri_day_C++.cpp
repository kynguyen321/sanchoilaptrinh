#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll d,m,y;
ll s1[12]={1,0,3,0,5,0,7,8,0,10,0};
ll s2[12]={0,0,0,4,0,6,0,0,9,0,11,0};
main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>d>>m>>y;
    if(m == 12)if(d + 1 > 31)cout << "1 1 " << y + 1;else cout << d + 1 << " " << m << " " << y;
    else if(m == s1[m-1])if(d + 1 > 31)cout << "1 " << m + 1 << " " << y;else cout << d + 1 << " " << m << " " << y;
    else if(m == s2[m-1])if(d + 1 > 30)cout << "1 " << m + 1 << " " << y;else cout << d + 1 << " " << m << " " << y;
    else if(m == 2)
        if ((y % 400 == 0 && y % 100 != 0) || (y % 4 == 0 && y % 100 != 0))
            if(d + 1 > 29)cout << "1 " << m + 1 << " " << y;else cout << d + 1 << " " << m << " " << y;
        else
            if(d + 1 > 28)cout << "1 " << m + 1 << " " << y;else cout << d + 1 << " " << m << " " << y;
}
