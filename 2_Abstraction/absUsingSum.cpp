/*C++ program to show abtraction*/
#include <bits/stdc++.h>
using namespace std;

// Here class sum is hiding the private data and the method of operation, in order
// to make it a better abstraction.

class Sum
{
private:
    int a, b;

public:
    void add()
    {

        int x, y;
        cout << "Enter two numbers\n";
        cin >> x >> y;

        a = x;
        b = y;

        cout << "Sum of two numbers: " << a + b << "\n";
    }
};

// main function.
int main()
{
    Sum s;
    s.add();
}