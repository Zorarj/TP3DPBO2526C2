#include <iostream>
#include <string>
#include "Engine.cpp"
#include "ElectricBattery.cpp"
using namespace std;

class HybridEngine : public Engine,public ElectricBattery{
    private:
        string enginePosition;
        string mode;
        string efficiencyRating;
    public:
        HybridEngine(int horsePower,string fuelType,int batteryCapacity,int chargeLevel,string enginePosition,string mode,string efficiencyRating)
        : Engine(horsePower,fuelType),ElectricBattery(batteryCapacity,chargeLevel){
            this->enginePosition = enginePosition;
            this->mode = mode;
            this->efficiencyRating = efficiencyRating;
        }

        void activateHybrid() {
        cout << "\n--- Mengaktifkan Motor Hybrid [" << enginePosition << "] (Mode: " << mode << ") ---\n";
        startEngine();
        showBatteryStatus();
        cout << "Efisiensi Mesin: " << efficiencyRating << "\n";
        }
};