#include <iostream>
#include <cctype>
using namespace std;

int main()
{
   char x;

   cin >> x;

   if (isupper(x))
      cout << char(tolower(x));
   else
      cout << char(toupper(x));

   return 0;
}