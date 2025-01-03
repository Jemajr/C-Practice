#include <iostream>
#include <memory>
using namespace std;


class Something {
  public:
    Something(){thing = 0;} // constructor
    int getThing(){cout << "Thing: " << thing << endl;}
    ~Something(){cout << "Deallocated Something..." << endl;} // destructor

  private:
    int thing = 1;
};

int main(){
  unique_ptr<Something> up1(new Something);

  up1->getThing(); // just testing. this prints 0

  unique_ptr<Something> up2 = make_unique<Something>(); // different syntax. Doesn't use 'new' keyword and can handle exceptions

  // making shared pointers instead of unique pointers so they can point to the same piece of memory
  shared_ptr<Something> sp1 = make_shared<Something>();
  shared_ptr<Something> sp2 = sp1; // sp2 points to the same address as sp1. Interesting stuff!

  weak_ptr<Something> wp1; // weak pointer syntax

  return 0;
}