// Demo of OPPs

// Basic Class structure

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

} demo_obj;

int main() {

    // Accessing the demo_obj and it's hello demo_obj;
    cout<<demo_obj.hello_count<<"\n";

    // Updating the hello_count;
    demo_obj.hello_count = 5;

    // Accessing the member function
    demo_obj.print_hello_1(demo_obj.hello_count);

    demo_obj.print_hello_2();
    return 0;
}