#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
  for (int i = 1; i <= n; i++)
  {
    cout << i << (i == n ? "" : " ");
  }
}

int main()
{
  int n;
  cin >> n;

  print(n);

  return 0;
}