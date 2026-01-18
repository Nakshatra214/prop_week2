#include<bits/stdc++.h>
#define endl "\n"
#define print(val) cout << val << endl;
#define for1(i,n) for(int i = 0; i < n ; i++)
#define lli long long int
#define all(x) (x).begin(), (x).end()
#define py print("YES")
#define pn print("NO")
#define printcontainer(i,container) for1(i,container.size()) print(container[i])
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin.tie(0);
    cout.tie(0);
    
    int n , m;

    cin >> n >> m;

    if(m % n != 0) {
        cout << -1 << endl;
    }
    else {
        m /= n;
        int cnt = 0;
        while(m % 2 == 0) {
            m >>= 1;
            cnt++;
        }
        while(m % 3 == 0) {
            m /= 3;
            cnt++;
        }
        if(m == 1) {
            cout << cnt << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;//qwerty
}

//Nakshatra