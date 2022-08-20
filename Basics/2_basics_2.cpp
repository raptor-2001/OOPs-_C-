// Demo in OPPs

// Basic Class structure 
// Object decleration in main and using new keyword;

#include<bits/stdc++.h>
using namespace std;

class demo{

public: 

    // data member
    int hello_count = 0;

    // member funtions

    void print_hello_1(int x){
        cout<<"Hello from print_hello_1\n";
        while(x--){
            cout<<"Hello World"<<"\n";
        }
    }

    //  Using this-> keyword
    void print_hello_2(){
        cout<<"\nHello from print_hello_2\n";
        int i = this->hello_count;
        while(i--){
            cout<<"Hello World"<<"\n";
        }
    }

};

int main() {

    // Creating the object in main

    // By creating the object in stack
    demo demo_obj;

    // Accessing the data member
    cout<<demo_obj.hello_count<<"\n";


    // Accessing the member function
    demo_obj.print_hello_1(demo_obj.hello_count);

    demo_obj.print_hello_2();

    // By creating the pointer object in heap 
    demo *demo_obj_1 = new demo();



    // Accessing the data member
    cout<<demo_obj_1->hello_count<<"\n";

    demo_obj_1->hello_count = 5;


    // Accessing the member function
    demo_obj_1->print_hello_1(demo_obj.hello_count);

    demo_obj_1->print_hello_2();

    return 0;
}