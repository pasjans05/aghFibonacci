#include <iostream>
using namespace std;

bool spr(long long int a)
{
  long long int n = 0;
  long long int fib = 0;
  long long int poprz = 0;
  long long int ost = 0;
  while (fib <= a)
  {
    if (n == 0) fib = 0;
    else if (n == 1) fib = 1;
    else if (n > 1) fib = poprz + ost;
    long long int n2 = 0;
    long long int fib2 = 0;
    long long int poprz2 = 0;
    long long int ost2 = 0;
    while (fib2 <= a)
    {
      if (n2 == 0) fib2 = 0;
      else if (n2 == 1) fib2 = 1;
      else if (n2 > 1) fib2 = poprz2 + ost2;
      if (fib * fib2 == a && fib != fib2) return true;
      ost2 = poprz2;
      poprz2 = fib2;
      n2++;
    }
    ost = poprz;
    poprz = fib;
    n++;
  }
  return false;
}
int main() 
{
  long long int liczba;
  cin >> liczba;
  if (spr(liczba)) cout << "TAK";
  else cout << "NIE";
}