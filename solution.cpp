#include <iostream>
using namespace std;

int main()
{
   int A, B;

   cin >> A >> B;

   A % B == 0 || B % A == 0 ? cout << "Multiples" : cout << "No Multiples";

   return 0;
}