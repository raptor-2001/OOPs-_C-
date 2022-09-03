#include <bits/stdc++.h>
using namespace std;

// class overload is there to demonstrate the function overloading.
// here we have used two numbers addition and three numbers addition.
class overload
{
public:
  // add function with two agruments.
  int add(int a, int b)
  {
    cout << "Addition of two numbers: ";
    return a + b;
  }

  // add function with three arguments.
  int add(int a, int b, int c)
  {
    cout << "Addition of three numbers: ";
    return a + b + c;
  }
};

int main()
{

  overload obj;

  cout << obj.add(5, 5) << "\n";
  cout << obj.add(5, 5, 5) << "\n";

  return 0;
}