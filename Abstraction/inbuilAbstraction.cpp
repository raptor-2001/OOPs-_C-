#include <iostream>
#include <math.h>

using namespace std;

int main()
{

  double n;
  cout << "Enter a number: ";
  cin >> n;

  double ans = pow(n, 3); // here pow function's inbuilt mechanism is hidded inside the math.h header file

  cout << "Cube of " << n << " is: " << ans;

  return 0;
}