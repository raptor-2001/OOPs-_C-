#include <iostream>
using namespace std;

/************************************************************************************/ 
// Code on Single Level inheritance
// Here in C++ we have three modes
// i) public 
// ii) private
// iii) protected



// Parent class or base class
/************************************************************************************/ 
class b{

// It neither accessed by the Object of the class nor by the derived class in any mode.
    private:
        void show_private() { cout << "This is b's private area\n"; }

// Only be accessed by the derived class in public or protected mode.
    protected:
        void show_protected() { cout << "This is b's protected area\n"; }

// It is accessed by both object and derived class in any of the modes.
    public:
        void show_public() { cout << "This is b's public area\n"; };

     // void show_protected_via_public(){show_protected();}
     // void show_private_via_public(){show_private();}
};



// NOTE: Comment the previous code if you want to try another mode of derived class



// Public derived class: Private area cannot be accessed rest others are by the object
/************************************************************************************/ 
class d : public b {
    public:
        void show_base() { 
            cout<<"Hello I am d\n";
            show_public();
            show_protected();
            
            // show_private(); 
        }
};



//  Main aim to use the protected is that is not accessible by the object of the parent 
//  class directly, but protected can be inherited by the derived class.

// Protected derived class: Public and Protected area is accessible by the object.
/************************************************************************************/ 
// class d : protected b { 
//     public:
//         void show_base() { 
//             cout<<"Hello I am d\n";
//             this->show_public();
//             this->show_protected(); 

//             // show_private();
            
//         }

// };



// Private derived class: It cannot be accessed in by anyone directly.
/************************************************************************************/ 
// class d : private b { 
//     public:
//         void show_base() { 
//             cout<<"Hello I am d\n";
//             show_private(); 
//         }
// };


int main() {

  // Object of the base class it can only access the public members of the class.
    b obj_b;
    obj_b.show_public();

    // obj_b.show_private_via_public();



  // Private and Protected is not accessible by obj_b.
    // obj_b.show_private();
    // obj_b.show_protected();

    


  // Object of the derived class it can only access the public
  // of the base class in public mode.
    d obj_d;
    obj_d.show_public();


  // Private and Protected is not accessible by obj_d.
    // obj_d.show_private();
    // obj_d.show_protected();

    
    // Accessing the base class members 
    // obj_d.show_base();

    return 0;
}