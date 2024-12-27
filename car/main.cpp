#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
  // making an instance of the car class
  Car car("blue", "benz", "c320", 12);

  cout << "Fuel: " << car.getFuel() << endl;
  cout << "Odometer: " << car.getOdometer() << endl;
  cout << "Paint color: " << car.getPaint() << endl; // getter

  // changing the paint color
  car.setPaint("black"); // setter

  cout << "Paint color: " << car.getPaint();

  return 0;
}