class ElectricBattery:
    def __init__(self,battery_capacity,charge_level):
        self.battery_capacity = battery_capacity
        self.charge_level = charge_level
        
    def show_battery_status(self):
        print(f"Status Baterai Listrik: {self.charge_level}/{self.battery_capacity} kWh") 