#pragma once
#include <iostream>
#include "Class_Room.h"
#include "Class_Wallpaper.h"

// Атрибуты(поля) квартиры: список комнат.
class Room;
class Flat  // Класс квартира
{
    Room *rooms;       // Наследуем параметры комнаты для квартиры 
    int roomsNumber;   
public:
    Flat()
    {
        rooms = nullptr;
        roomsNumber = NULL;
    }
    void Input_flat(int rooms_M)
    {
        std::cout << "FLAT" << std::endl;
        // rooms = new Room[rooms_M];
        roomsNumber = rooms_M;
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
