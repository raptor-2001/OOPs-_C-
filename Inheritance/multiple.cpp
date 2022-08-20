#include <bits/stdc++.h>
using namespace std;

// Program for demonstarting the Multiple Inheritance.

class parent_1
{

public:
  // parent has a hello function which it will pass to all it's children.
  void hello()
  {
    cout << "Hello from Parent 1\n";
  }
};

class parent_2
{

public:
  // parent has a hello function which it will pass to all it's children.
  void hello()
  {
    cout << "Hello from Parent 2\n";
  }
};

// child_1 is first child of parent class.
class child_1 : public parent_1, public parent_2
{

public:
  void greet()
  {
    cout << "Hello from Child 1\n";
  }
};

int main()
{

  parent_1 P1;
  P1.hello();

  parent_2 P2;
  P2.hello();

  child_1 C1;
  C1.greet();

  /*
      Error int he below code due to ambiguity.
      as complier don't know which function to call from which parent.

      C1.hello();


      To remove the ambiguity follow the below syntax.
      Choose the parent whose method need to be called.

  */

  C1.parent_1::hello();

  return 0;
}