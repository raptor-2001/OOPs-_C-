/*
  Function overriding demonstration via real life example of a vechilces.
*/

#include <bits/stdc++.h>
using namespace std;

// Parent class Vehicle.

class Vehicle
{
public:
  void originName()
  {
    cout << "It's belongs to Vehicle class.\n";
  }
  void showVehicleName()
  {
    cout << "This is a general vehicle.\n";
  }

  void countTyres()
  {
    cout << "The count of tyres present depends on the vehicle type.\n";
  }
};

class Car : public Vehicle
{

public:
  void showVehicleName()
  {
    cout << "This is a car.\n";
  }

  void countTyres()
  {
    cout << "Car has 4 tyres.\n";
  }
};

class Truck : public Vehicle
{

public:
  void showVehicleName()
  {
    cout << "This is a truck.\n";
  }

  void countTyres()
  {
    cout << "Truck has 12 tyres.\n";
  }
};

int main()
{
  Vehicle v;

  v.originName();
  v.showVehicleName();
  v.countTyres();

  Car c;
  c.originName();
  c.showVehicleName();
  c.countTyres();

  Truck t;
  t.originName();
  t.showVehicleName();
  t.countTyres();
}