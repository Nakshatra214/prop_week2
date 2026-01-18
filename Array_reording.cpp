#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> a(n),odd,even;
    for (int i = 0; i < n; i++)
      cin >> a[i];

    for(int i=0;i<n;i++)
    {
      if(a[i]&1)
      odd.push_back(a[i]);
      else
      even.push_back(a[i]);
    }
    ll idx = 0;
    for(int i=0;i<even.size();i++)
    {
      a[idx++] = even[i];
    }
    for(int i=0;i<odd.size();i++)
    {
      a[idx++] = odd[i];
    }
    ll cnt = 0;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(__gcd(a[i],2*a[j])>1)
        cnt++;
      }
    }
    cout << cnt << endl;//qwert
  }
}

//Nakshatra