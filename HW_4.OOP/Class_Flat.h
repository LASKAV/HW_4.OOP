#pragma once
#include <iostream>
#include "Class_Room.h"
#include "Class_Wallpaper.h"

// Атрибуты(поля) квартиры: список комнат.

class Flat  // Класс квартира
{
    Room* rooms;       // Наследуем параметры комнаты для квартиры 
    int roomsNumber;   // Количество квартир
public:
    Flat()
    {
        rooms = nullptr;
        roomsNumber = NULL;
    }
    int Input_flat()
    {
        std::cout << "\nFLAT" << std::endl;
        std::cout << "Enter number of apartments : ";  // ввод количество квартир
        // std::cout << "Enter number of rooms : "; std::cin >> rooms[0];
        std::cin >> roomsNumber;
        rooms = new Room[roomsNumber];
        return roomsNumber;
    }
    void OutPut_flat()
    {
        std::cout << "Number of apartments = " << roomsNumber << std::endl;
    }
    ~Flat()
    {
        delete[] rooms;
    }
};