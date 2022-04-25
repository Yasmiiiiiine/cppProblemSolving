#include<bits/stdc++.h>
using namespace std;
#define ll long long
int
main ()
{
  int age, x, y, z;
  cin >> age;
  cout << age / 365 << " years\n";
  x = age % 365;
  age = x;
  y = age % 30;
  age = y;
  cout << x / 30 << " months\n";
  cout << y << " days\n";
  return 0;
}
