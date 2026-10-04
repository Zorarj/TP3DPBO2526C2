from HybridEngine import HybridEngine
class Car:
    def __init__(self,brand,model):
        self.brand = brand
        self.model = model
        self.engine_list : list[HybridEngine] = []
        
    def add_engine(self,horse_power,fuel_type,battery_capacity,charge_level,engine_position,mode,efficiency_rating):
        engine = HybridEngine(horse_power,fuel_type,battery_capacity,charge_level,engine_position,mode,efficiency_rating)
        self.engine_list.append(engine)
        print(f"+ Mesin Hybrid baru [{engine_position}] berhasil ditambahkan ke mobil {self.brand} {self.model}.")
        
    def start_car(self):
        print(f"\n=== Menyalakan Mobil {self.brand} {self.model} ===")
        print(f"Mendeteksi {len(self.engine_list)} sistem motor hybrid...")
        
        for engine in self.engine_list:
            engine.activate_hybrid()