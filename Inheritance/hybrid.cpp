#include <bits/stdc++.h>
using namespace std;

/*
    Hybrid Inheritance

           Root
            |   <- single inheritance
            A
           / \  <- hybrid inheritance
          B   C
          |   | <- multilevel inheritance
          D   E
           \ /  <- multiple inheritance
            F

*/

class root
{
public:
  root()
  {
    cout << "Constructor of class root is envoked\n";
  }

  void show_class_name()
  {
    cout << "I am root\n";
  }
  ~root()
  {
    cout << "Destructor of class root is envoked\n";
  }
};

// Derived class of root

class A : public root
{
public:
  A()
  {
    cout << "Constructor of class A is envoked\n";
  }
  void show_class_name()
  {
    cout << "I am A\n";
  }
  ~A()
  {
    cout << "Destructor of class A is envoked\n";
  }
};

// Derived class of A

class B : public A
{
public:
  B()
  {
    cout << "Constructor of class B is envoked\n";
  }
  void show_class_name()
  {
    cout << "I am B\n";
  }
  ~B()
  {
    cout << "Destructor of class B is envoked\n";
  }
};

// Derived class of A

class C : public A
{
public:
  C()
  {
    cout << "Constructor of class C is envoked\n";
  }
  void show_class_name()
  {
    cout << "I am C\n";
  }
  ~C()
  {
    cout << "Destructor of class C is envoked\n";
  }
};

// Derived class of B

class D : public B
{
public:
  D()
  {
    cout << "Constructor of class D is envoked\n";
  }
  void show_class_name()
  {
    cout << "I am D\n";
  }
  ~D()
  {
    cout << "Destructor of class D is envoked\n";
  }
};

// Derived class of C

class E : public C
{

public:
  E()
  {
    cout << "Constructor of class E is envoked\n";
  }
  void show_class_name()
  {
    cout << "I am E\n";
  }
  ~E()
  {
    cout << "Destructor of class E is envoked\n";
  }
};

// Derived class of D,E

class F : public D, public E
{

public:
  F()
  {
    cout << "Constructor of class F is envoked\n";
  }
  void show_class_name()
  {
    cout << "I am F\n";
  }
  ~F()
  {
    cout << "Destructor of class F is envoked\n";
  }
};

int main()
{

  F f;
  f.show_class_name();

  return 0;
}