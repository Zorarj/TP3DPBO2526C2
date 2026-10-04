#include <iostream>
#include <string>
#include <vector>
#include "HybridEngine.cpp"
using namespace std;

class Car{
    private:
        string brand;
        string model;
        vector<HybridEngine> engineList;
    public:
        Car(string brand,string model){
            this->brand = brand;
            this->model = model;
        }

        void addEngine(int horsePower,string fuelType,int batteryCapacity,int chargeLevel,string enginePosition,string mode,string efficiencyRating){
            HybridEngine engine(horsePower,fuelType,batteryCapacity,chargeLevel,enginePosition,mode,efficiencyRating);
            engineList.push_back(engine);
            cout << "+ Mesin Hybrid baru [" << enginePosition << "] berhasil ditambahkan ke mobil " << brand << " " << model << ".\n";
        }

        void startCar(){
            cout << "\n=== Menyalakan Mobil " << brand << " " << model << " ===\n";
            cout << "Mendeteksi " << engineList.size() << " sistem motor hybrid...\n";
            for(HybridEngine engine : engineList){
                engine.activateHybrid();
            }
        }
};