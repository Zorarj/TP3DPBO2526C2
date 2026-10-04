# Hybrid Car Simulation System

Proyek ini merupakan simulasi sistem mobil hybrid berbasis Object-Oriented Programming (OOP) yang diimplementasikan dalam dua bahasa pemrograman: Python dan C++. Proyek ini memperagakan bagaimana beberapa komponen mesin dan baterai digabungkan menjadi satu sistem kendaraan hybrid.

## Konsep OOP yang Diterapkan

1. Multiple Inheritance (Pewarisan Berganda)
   Kelas HybridEngine mewarisi properti dan metode dari dua kelas induk sekaligus:
   - Engine: Mengelola informasi horsepower dan jenis bahan bakar.
   - ElectricBattery: Mengelola kapasitas dan status daya baterai.

2. Composition (Komposisi)
   Kelas Car menyimpan sekumpulan objek HybridEngine di dalam daftar/vektor (Array of Objects), menandakan hubungan has-a antara mobil dan mesin-mesinnya.

3. Encapsulation (Enkapsulasi)
   Atribut dan metode internal dibungkus di dalam kelas masing-masing untuk menjaga integritas data.

## Struktur Berkas

```text
.
├── Python Version
│   ├── Engine.py           # Kelas dasar Mesin Bensin/Konvensional
│   ├── ElectricBattery.py  # Kelas dasar Baterai Listrik
│   ├── HybridEngine.py     # Subclass turunan dari Engine & ElectricBattery
│   ├── Car.py              # Kelas Car pembawa daftar HybridEngine
│   └── main.py             # File utama untuk menjalankan program Python
│
└── C++ Version
    ├── Engine.cpp          # Definisi kelas Engine
    ├── ElectricBattery.cpp # Definisi kelas ElectricBattery
    ├── HybridEngine.cpp    # Definisi kelas HybridEngine
    ├── Car.cpp             # Definisi kelas Car
    └── main.cpp            # File utama untuk menjalankan program C++
```

## Cara Menjalankan Program

### 1. Versi Python

Pastikan Anda memiliki Python 3.x yang sudah terinstal di sistem Anda.

Jalankan perintah berikut pada terminal/command prompt:
```bash
python main.py
```

### 2. Versi C++

Pastikan Anda memiliki compiler C++ (seperti g++) yang terinstal.

1. Kompilasi kode:
   ```bash
   g++ main.cpp -o hybrid_car
   ```

2. Jalankan executable:
   - Linux / macOS:
     ```bash
     ./hybrid_car
     ```
   - Windows (CMD/PowerShell):
     ```cmd
     hybrid_car.exe
     ```

## Contoh Output

Ketika dijalankan, program akan menghasilkan output seperti berikut:

```text
+ Mesin Hybrid baru [Roda Depan] berhasil ditambahkan ke mobil Toyota Prius AWD.
+ Mesin Hybrid baru [Roda Belakang] berhasil ditambahkan ke mobil Toyota Prius AWD.

=== Menyalakan Mobil Toyota Prius AWD ===
Mendeteksi 2 sistem motor hybrid...

--- Mengaktifkan Motor Hybrid [Roda Depan] (Mode: Eco) ---
Mesin Bensin (150 HP | Bahan bakar: Pertamax) dinyalakan... Vroom!
Status Baterai Listrik: 45/50 kWh
Efisiensi Mesin: A+

--- Mengaktifkan Motor Hybrid [Roda Belakang] (Mode: Sport Boost) ---
Mesin Bensin (100 HP | Bahan bakar: Listrik Murni) dinyalakan... Vroom!
Status Baterai Listrik: 30/30 kWh
Efisiensi Mesin: S

```
# Dokumentasi c++
![alt](<c++/dokumentasiC++/Screenshot 2026-10-04 121538.png>)
![alt](<c++/dokumentasiC++/Screenshot 2026-10-03 161233.png>)
![alt](<c++/dokumentasiC++/Screenshot 2026-10-03 232548.png>)
![alt](<c++/dokumentasiC++/Screenshot 2026-10-03 161515.png>)

# Dokumentasi python
![alt](<python/dokumentasiPython/Screenshot 2026-10-03 161259.png>)
![alt](<c++/dokumentasiC++/Screenshot 2026-10-03 161233.png>)
![alt](<python/dokumentasiPython/Screenshot 2026-10-03 161451.png>)
![alt](<c++/dokumentasiC++/Screenshot 2026-10-03 161515.png>)

# Diagram
![alt](<diagram.png.png>)