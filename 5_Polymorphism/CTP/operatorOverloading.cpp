#include <bits/stdc++.h>
using namespace std;

// Operator Overloading

// Uniary Operator Overloading

class Count
{

public:
  int value;

  Count()
  { // Intializing the instance of the class by setting the,
    // variable value as 5.
    this->value = 5;
  }
  Count(int x)
  { // Parameterized constructor.
    this->value = x;
  }

  int display()
  { // to display the value variable.
    return this->value;
  }
  operator+()
  { // Overloading the + operator to increase the value variable by 1.
    this->value = this->value + 1;
  }
};

// Binary Operator Overloading

class Complex
{

public:
  int real, imaginary;

  Complex()
  {
    this->real = 2;
    this->imaginary = 3;
  }

  Complex(int a, int b)
  {
    this->real = a;
    this->imaginary = b;
  }

  void display()
  {
    cout << this->real << " + i" << this->imaginary << "\n";
  }
  // here the operator + is overloaded to get the addition of two complex numbers.
  Complex operator+(Complex &obj)
  { // here the required argument is the second operand of the binary operation.

    Complex temp(0, 0);
    temp.real = real + obj.real;
    temp.imaginary = imaginary + obj.imaginary;

    return temp;
  }
};
int main()
{

  // Uniary operator overloading.
  Count r(5);
  cout << r.display() << "\n";
  +r;
  cout << r.display() << "\n";

  // Binary operator overloading.
  Complex c1(7, 8),
      c2(8, 7);

  c1.display();
  c2.display();

  Complex sum = c1 + c2;

  sum.display();

  return 0;
}