#include <iostream>
#include <string>
using namespace std;

class ElectricBattery{
    private:
        int batteryCapacity;
        int chargeLevel;
    public:
        ElectricBattery(int batteryCapacity,int chargeLevel){
            this->batteryCapacity = batteryCapacity;
            this->chargeLevel = chargeLevel;
        }
        void showBatteryStatus(){
            cout << "Status Baterai Listrik: " << chargeLevel << "/" << batteryCapacity << " kWh\n";
        }
        
};