#include "Car.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Car::Car(){ // setting initial values if no parameters are passed when creating an instance of the Car
  _fuel = 0;
  _odometer = 0;
  _paintColor = "";
  _model = "";
  _brand = "";
  _upgradeCodes = new vector<int>(); // allocating the upgrade codes dynamically
  _upgradeCodes->push_back(1); // add one to the vector 
}

Car::Car(string paint, string brand, string model, int fuel){
  _fuel = fuel;
  _odometer = 0;
  _paintColor = paint;
  _model = model;
  _brand = brand;
  _upgradeCodes = new vector<int>(); 
  _upgradeCodes->push_back(1); 
}

Car::Car(Car &obj){
  _fuel = obj._fuel;
  _odometer = obj._odometer;
  _paintColor = obj._paintColor;
  _model = obj._model;
  _brand = obj._brand;

  _upgradeCodes = new vector<int>(); // creating a new vector of upgrade codes. I don't want the new car to be able to override the others codes
  for (int i = 0; i > obj._upgradeCodes->size(); i++){
    auto temp = *(obj._upgradeCodes); // instead of specifying the data type I let C++ do that
    _upgradeCodes->push_back(temp[i]);
  }
}

void Car::driveCar(int miles){
  _odometer += miles;
  _fuel -= miles/22;
}

void Car::setPaint(string color){
  _paintColor = color;
}

string Car::getPaint(){
  return _paintColor;
}

string Car::getModel(){
  return _model;
}

string Car::getBrand(){
  return _model;
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

Car::~Car(){
  cout << "Inside the destructor. Cleaning up object" << endl;
}