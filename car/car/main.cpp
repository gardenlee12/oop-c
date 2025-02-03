#include "car.h"

int main() {
    Car myCar;

    myCar.setSpeed(80);
    cout << "현재 속도는 " << myCar.getSpeed() << endl;

    return 0;
}