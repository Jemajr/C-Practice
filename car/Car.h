#ifndef CAR_H  //preprocessing directives
#define CAR_H
#include <string>
using namespace std;

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
  string getPaint();
  string getBrand();
  string getModel();


private:
  // member variables
  float _fuel;
  string _paintColor;
  string _model;
  string _brand;
  int _odometer;
};

#endif // endif for ifndef