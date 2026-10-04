class Engine:
    def __init__(self,horse_power,fuel_type):
        self.horse_power = horse_power
        self.fuel_type = fuel_type
        
    def start_engine(self):
        print(f"Mesin Bensin ({self.horse_power} HP | Bahan bakar: {self.fuel_type}) dinyalakan... Vroom!")