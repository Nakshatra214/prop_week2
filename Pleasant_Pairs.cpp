#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpll vector<pair<ll, ll>>
#define all(x) (x).begin(), (x).end()
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

bool is_prime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

ll fib(ll n) {
    if (n == 1) return 1;
    else if (n == 2) return 2;
    return fib(n - 1) + fib(n - 2);
}

vector<bool> sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; ++i)
        if (prime[i])
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
    return prime;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
      ll n;
        cin >> n;
        vector<ll> a(n);
        vpll v(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for(int i=0;i<n;i++)
        v[i] = {a[i],i+1};
        sort(v.begin(), v.end());

        ll ct = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (v[i].first * v[j].first > 2 * n) break;
                if (v[i].first * v[j].first == v[i].second + v[j].second) ct++;
            }
        }
        cout << ct << "\n";//qwerty
    }
}

//Nakshatra