// Demo in OPPs

// Constructor and Destructor

#include<bits/stdc++.h>
using namespace std;

class A{

public:
    int var;


    // Constructor: The syntax of writing a constructor.
    // Constructor name should be same as of the class name 
    // with void a return type.
    // It can have arguments

    // It's is envoked, when an object is created.

    A(){
        cout<<"Constuctor is envoked\n";
        var = 5;
    }

    // Destructor: The syntax of writing a destructor.
    // Destructor name should be same as of the class name but should have a '~' sign at start.
    // It's has a void return type and no arguments.

    ~A(){
        cout<<"\nDestructor is envoked";
    }

    // It is envoked at the end of program.
};

int main(){

    A obj;

    cout<<obj.var;

    return 0;
}