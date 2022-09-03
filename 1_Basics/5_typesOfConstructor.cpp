// Demo in OPPs

// Types of Constructors in C++

#include<bits/stdc++.h>
using namespace std;

class construct{

public:
    int var;
    // A constructor is a method of a class which is invoked by automatically when an 
    //  instance of a class is created.

    // Well there are three type of constructors.

    // Syntax of constructor:
    // name of constructor should be same as class name with void as return type.

    // default constructor: It is there by default but can be created, it is also essential while 
    // declaring a copy constructor

    // Default constructor.
    construct(){
        var = 5;
        cout<<"\nuser default_constructor is invoked\n";
    }

    // parameterize constructor: It should be called with arguments.

    // Parameterized constructor.
    construct(int x){

        var = x;
        cout<<"\nparameterized constructor is invoked\n";
    }

    // copy constructor: It should be called with argument as object of same class.
    construct(construct &obj){
        this->var = obj.var;
        cout<<"\ncopy constructor is invoked\n";
    }

};


int main(){

    // User defined default constructor

    construct obj_user_default;

    cout<<obj_user_default.var;


    // Parameterized constructor

    construct obj_parameter(20);

    cout<<obj_parameter.var;


    // Copy constructor

    construct obj_copy(25);

    construct obj_copy_construct(obj_copy);

    cout<<obj_copy_construct.var;
}