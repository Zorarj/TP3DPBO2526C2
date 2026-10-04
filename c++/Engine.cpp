#include <iostream>
#include <string>
using namespace std;

class Engine{
    private:
        int horsePower;
        string fuelType;
    public:
        Engine(int horsePower,string fuelType){
            this->horsePower = horsePower;
            this->fuelType = fuelType;
        }

        void startEngine(){
            cout << "Mesin Bensin (" << horsePower << " HP | Bahan bakar: " << fuelType << ") dinyalakan... Vroom!\n";
        }
};