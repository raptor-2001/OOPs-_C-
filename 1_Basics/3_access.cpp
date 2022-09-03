// Demo in OPPs

// Basic Class structure 
// Object decleration in main and using new keyword;

#include<bits/stdc++.h>
using namespace std;


class Access{

    // By default a class has private as access specifier
    // Data members and member functions declared as private
    // cannot be accessed outside the class.
private:
    int private_var = 5;

    void print_private_var(){

        cout<<private_var<<"\n";
    }


    // Protected members can be accessed within the class and by a derived class.
    // but a protected member cannot be accessed by a object of that class or any derived class
protected:

    int protected_var = 7;

    void print_protected_var(){

        cout<<protected_var<<"\n";
    }

    // members declared as public can be accessed by within or outside the class
public:

    int public_var = 8;

    void print_public_var(){

        // cout<<public_var<<"\n";
        cout<<this->public_var<<"\n";
    }


    // Accessing the private members via public
    void public_to_private(){

        // private_var = 20;
        this->private_var = 20;

        print_private_var();
    }


    // Accessing the private members via public
    void public_to_protected(){

        // protected_var = 20;
        this->protected_var = 40;

        print_protected_var();
    }
 
};


int main(){

    // Creating an instance for accessing the private members.

    // Access private_obj;

    // private_obj.private_var = 10;

    // private_obj.print_private_var();


    // Creating an instance for accessing the protected members.

    // Access protected_obj;

    // protected_obj.protected_var = 10;

    // protected_obj.print_protected_var();


    // Creating an instance for accessing the public members.

    Access public_obj;

    public_obj.public_var = 10;

    public_obj.print_public_var();

    public_obj.public_to_private();

    public_obj.public_to_protected();

    return 0;
}