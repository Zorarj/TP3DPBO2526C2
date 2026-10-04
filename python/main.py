from Car import Car
if __name__ == "__main__":
    # Membuat objek Mobil
    my_car = Car("Toyota", "Prius AWD")

    # Menambahkan objek HybridEngine ke dalam Array of Objects di Car (Composition)
    my_car.add_engine(
        horse_power=150, 
        fuel_type="Pertamax", 
        battery_capacity=50, 
        charge_level=45, 
        engine_position="Roda Depan", 
        mode="Eco", 
        efficiency_rating="A+"
    )
    
    my_car.add_engine(
    horse_power=100, 
    fuel_type="Listrik Murni", 
    battery_capacity=30, 
    charge_level=30, 
    engine_position="Roda Belakang", 
    mode="Sport Boost", 
    efficiency_rating="S"
    )
    my_car.start_car()