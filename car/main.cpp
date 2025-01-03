#include "Car.h"
#include <iostream>
#include <string>
#include <memory> // to use unique pointers
using namespace std;

int main(){
  // making an instance of the car class
  Car car1("blue", "benz", "c320", 12); // car1 automatically deallocates itself since its on the stack

  cout << "Fuel: " << car1.getFuel() << endl;
  cout << "Odometer: " << car1.getOdometer() << endl;
  cout << "Paint color: " << car1.getPaint() << endl; // getter

  // changing the paint color
  car1.setPaint("black"); // setter
  cout << "Paint color: " << car1.getPaint() << endl;

  Car * car2 = new Car("red", "jeep", "123", 20); // car2 needs to be explicitly deallocated using the 'delete' keyword since it is dynamically allocated

  Car car4 = car1; // car 4 is made by referencing car 1

  delete car2; // this will call the destructor function within car2

  // creating a unique pointer  
  unique_ptr<Car> car3(new Car); // we don't have to explicitly delete this instance of the Car class. The destructor is automatically called
                                 // car3 is directly initialized without parentheses as a pointer to a car object. *Car car3 = new Car
  return 0;
}