#include <iostream>
using namespace std;

// OBJECT ORIENTED PROGRAMMING


class Car {
public:
  // the constructor
  Car(string paint, string brand, string model, int fuel);
  // member functions
  void driveCar(int miles);
  void setPaint(string color);
  int getOdometer();
  float getFuel();
  void addFuel(int gallons);


private:
  // member variables
  float _fuel;
  string _paintColor;
  string _model;
  string _brand;
  int _odometer;
};


int main(){
  // making an instance of the car class
  Car car("blue", "benz", "c320", 12);

  // printing out the defaults
  cout << car.getFuel() << endl;
  cout << car.getOdometer() << endl;

  return 0;
}


Car::Car(string paint, string brand, string model, int fuel){
  _fuel = fuel;
  _odometer = 0;
  _paintColor = paint;
  _model = model;
  _brand = brand;
}

void Car::driveCar(int miles){
  _odometer += miles;
  _fuel -= miles/22;
}

void Car::setPaint(string color){
  _paintColor = color;
}

int Car::getOdometer(){
  return _odometer;
}

float Car::getFuel(){
  return _fuel;
}

void Car::addFuel(int gallons) {
  _fuel += gallons;
}