#include <bits/stdc++.h>
using namespace std;

/*
Here it is a tea machine which ask for the quantinty of sugar in your tea and
prepare a cup of tea for you.
*/
class teaMachine
{

  // All the data members should be in private section should not be
  // accessed by anyone.

private:
  int water = 5,
      milk = 4,
      sugar;

public:
  void addSugar()
  {
    cout << "Enter the number of sugar cubes you like: ";
    int cubes;
    cin >> cubes;
    sugar = cubes;
    cout << sugar;
    cout << "\nPlease wait for some few minutes...";
  }

  int getSugar()
  {
    return this->sugar;
  }
  void start()
  {
    int tea = water + milk + getSugar();
    for (int i = 0; i < 1e9; i++)
    {
    }
    cout << "\nTea prepared " << tea;
  }

  void on()
  {
    addSugar();
    start();
  }
};
int main()
{
  teaMachine t;
  t.on(); // Just a simple function to be called by a customer of tea shop.
  return 0;
}