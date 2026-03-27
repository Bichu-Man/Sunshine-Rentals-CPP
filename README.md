SUNSHINE RENTALS: sha256:9aa8a3fcdf602ddd31c1eab38af23d2db4632fc339ace40d66d6c715aaf85687
A first-semester terminal-based car rental management system. This project was developed over a 16-day cycle and focuses on the implementation of logic and data persistence using standard C++ libraries.

Technical Implementation
Data Persistence: Uses the fstream library to manage flat-file storage for rentals.txt and customers_2.txt.

Input Guarding: Implements the limits library to clear the input buffer and prevent infinite error loops during menu selection.

Console Control: Utilizes system("cls") for screen management and conio.h for non-blocking keyboard input via getch().

Core Logic
Inventory Tracking: Manages distinct arrays for Hatchbacks, Sedans, SUVs, and Luxury vehicles.

Availability State: Uses boolean arrays (e.g., hatchbacksAvail) to track the real-time rental status of each vehicle in the inventory.

History Module: Capable of reading and displaying the cumulative rental log directly from the text-based database.

File Structure
├── Sunshine Rentals.cpp  # Updated logic core
├── Sunshine Rentals.exe  # Compiled Windows binary for instant testing
├── rentals.txt           # Rental transaction history
└── customers_2.txt       # Registered user database

Direct Run: Launch Sunshine Rentals.exe to test the system immediately on Windows.
From Source: Compile Sunshine Rentals.cpp using any standard C++ compiler (G++, MinGW, etc.).
