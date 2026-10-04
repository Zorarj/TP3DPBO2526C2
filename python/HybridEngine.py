from Engine import Engine
from ElectricBattery import ElectricBattery

class HybridEngine(Engine,ElectricBattery):
    def __init__(self,horse_power,fuel_type,battery_capacity,charge_level,engine_position,mode,efficiency_rating):
        Engine.__init__(self,horse_power,fuel_type)
        ElectricBattery.__init__(self,battery_capacity,charge_level)
        self.engine_position = engine_position
        self.mode = mode
        self.efficiency_rating = efficiency_rating
        
    def activate_hybrid(self):
        print(f"\n--- Mengaktifkan Motor Hybrid [{self.engine_position}] (Mode: {self.mode}) ---")
        self.start_engine()
        self.show_battery_status()
        print(f"Efisiensi Mesin: {self.efficiency_rating}")