#ifndef CAR_H  //preprocessing directives (to avoid processing if car_h is already defined)
#define CAR_H
#include <string>
using namespace std;

class Car {
public:
  // the constructor
  Car(); // default constructor with no parameters
  Car(string paint, string brand, string model, int fuel);
  Car(Car &obj);
  ~Car(); // adding the destructor
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
  vector<int> * _upgradeCodes; // a vector of integers that will contain upgrade codes
};

#endif // endif for ifndef