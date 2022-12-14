#pragma once
#include <iostream>
#include "Class_Wallpaper.h"
#include "Class_Flat.h"

// Атрибуты комнаты: название, размеры, клеить потолок или нет.

class Room  // Класс Комната
{
    char* name;
    float parameters;  // Параметры
    bool ceiling;      // потолок , клеить потолок или нет
    float Length;      // Длина 
    float Width;       // Ширина
    float Height;      // Высота

public:
    Room()  // Конструктор по умолчанию
    {
        name = nullptr;
        parameters = NULL;
        ceiling = NULL;
        Length = NULL;
        Width = NULL;
        Height = NULL;
    }
    void Input_parameters_room()
    {
        short temp = 0;
        char name_room[40];
        std::cout << "\nROOM" << std::endl;
        std::cout << "Enter name room : ";
        std::cin.ignore();
        std::cin.getline(name_room, 40);
        name = new char[strlen(name_room) + 1];
        strcpy_s(name, strlen(name_room) + 1, name_room);
        std::cout << "Enter Length : "; std::cin >> Length;
        std::cout << "Enter Width : ";  std::cin >> Width;
        std::cout << "Enter Height : "; std::cin >> Height;
        std::cout << "\nCeiling , glue ceiling ? " << std::endl
            << "1. YES " << std::endl
            << "2. NO "  << std::endl;
        std::cin >> temp;
        if (temp == 1)
        {
            std::cout << "Ceiling gluing !" << std::endl;
            ceiling = true;
        }
        else if (temp == 2)
        {
            std::cout << "We don't glue the ceiling  !" << std::endl;
            ceiling = false;
        }

        parameters = Length * Width;
    }

    void OutPut_parameters_room()
    {
        std::cout << "Name room = " << name << std::endl;
        std::cout << "Parameters room = " << float(parameters) << std::endl;
    }
    ~Room()
    {
        delete[] name;
    }
    friend float wallpaper_strips(Wallpaper Len, Room Hei);
};

