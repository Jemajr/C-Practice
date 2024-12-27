#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

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