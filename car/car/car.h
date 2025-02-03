#include <iostream>
#include <string>
using namespace std;

class Car {
    int speed;
    int gear;
    string color;
public:             
    int getSpeed();      // 프로토타입 
      void setSpeed(int s); // 프로토타입
};