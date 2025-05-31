﻿#include <iostream>
#include "house.h"
#include "property_loader.h"

int main()
{

    //lol   main
    RentalSys system;
    loadSampleProperties(system);

    int choice;
    while (true) 
    {
        std::cout << "1. Show available\n2. Rent\n3. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1)
        {
            std::cout << "Available houses: " << "\n"<<std::endl;
            system.displayAvailable();
        }
        else if (choice == 2)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::string _address;
            std::cout << "Enter address: ";
            std::getline(std::cin, _address);

            if (system.rentHouse(_address)) { std::cout << "Rented succesfully!\n"; }
            else { std::cout << "Rental failed!\n"; }
        }
        else break;
    }
    
    
    
    return 0;
 }
