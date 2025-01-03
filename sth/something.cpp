#include <iostream>
#include <memory>
using namespace std;


class Something {
  public:
    Something(){thing = 0;} // constructor
    int getThing(){cout << "Thing: " << thing << endl;}
    ~Something(){cout << "Deallocated Something..." << endl;} // destructor

  private:
    int thing = 1; // I still don't get why we have this set to 1. We reset it to 0 above
};

int main(){
  unique_ptr<Something> up1(new Something);

  up1->getThing(); // just testing. this prints 0

  unique_ptr<Something> up2 = make_unique<Something>(); // different syntax. Doesn't use 'new' keyword and can handle exceptions
  
  return 0;
}