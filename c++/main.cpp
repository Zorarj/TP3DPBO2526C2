#include "Car.cpp"
int main(){
    Car myCar("Toyota", "Prius AWD");

    myCar.addEngine(150, "Pertamax", 50, 45, "Roda Depan", "Eco", "A+");
    myCar.addEngine(100, "Listrik Murni", 30, 30, "Roda Belakang", "Sport Boost", "S");
    myCar.startCar();
}