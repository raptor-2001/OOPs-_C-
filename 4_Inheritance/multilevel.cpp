#include <bits/stdc++.h>
using namespace std;

/*
    Multilevel Inheritance

    Here a new class is derived from a derived class itself.
    Also check how the constructor and destructor of different classes are invoked;
*/

class vehicle
{
public:
  vehicle()
  {
    cout << "Constructor of class vehicle is envoked\n";
  }

  void show_class_name()
  {
    cout << "I am vehicle\n";
  }
  ~vehicle()
  {
    cout << "Destructor of class vechicle is envoked\n";
  }
};

class car : public vehicle
{
public:
  car()
  {
    cout << "Constructor of class car is envoked\n";
  }
  void show_class_name()
  {
    cout << "I am car\n";
  }
  ~car()
  {
    cout << "Destructor of class car is envoked\n";
  }
};

class audi : public car
{
public:
  audi()
  {
    cout << "Constructor of class audi is envoked\n";
  }
  // void show_class_name(){
  //     cout<<"I am audi\n";
  // }
  ~audi()
  {
    cout << "Destructor of class audi is envoked\n";
  }
};

int main()
{

  // vehicle v;
  // v.show_class_name();

  // car c;
  // c.show_class_name();

  audi a;

  // If show_class_name() method is not in audi class, it will call from it's parent.
  a.show_class_name();
  a.vehicle::show_class_name(); // to call the show_class_name() method of vehicle.

  return 0;
}