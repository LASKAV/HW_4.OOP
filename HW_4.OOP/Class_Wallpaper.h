#pragma once
#include <iostream>
#include "Class_Wallpaper.h"
#include "Class_Flat.h"

// Атрибуты рулона: название, размеры, цена.
class Room;
class Wallpaper  // Класс Обои 
{
    char* name;
    float parameters;
    float cost;
    float Length;   // Длина
    float Width;    // Ширина
public:
    Wallpaper()  // Конструктор по умолчанию
    {
        name = nullptr;
        parameters = NULL;
        cost = NULL;
        Length = NULL;
        Width = NULL;
    }
    void Input_parameters_wallpaper()
    {
        char name_wallpaper[40];
        std::cout << "\nWALLPAPER" << std::endl;  // Длина / Ширина
        std::cout << "Enter name : "; 
        std::cin.ignore();
        std::cin.getline(name_wallpaper,40);
        name = new char[strlen(name_wallpaper) + 1];
        strcpy_s(name, strlen(name_wallpaper) + 1, name_wallpaper);
        std::cout << "Enter Length : "; std::cin >> Length;
        std::cout << "Enter Width : "; std::cin >> Width;
        std::cout << "Enter cost : "; std::cin >> cost;
        parameters = Length / Width;
    }
    void OutPut_parameters_wallpaper()
    {
        std::cout << "Name Wallpaper = " << name << std::endl;
        std::cout << "Length : " << Length << std::endl;
        std::cout << "Width : " << Width << std::endl;
        std::cout << "Parameters Wallpaper = " << float(parameters) << std::endl;
        std::cout << "Const Wallpaper = " << cost << " $" << std::endl; 
    }
    float GetWallpaper_L() { return Length; }
    float GetWallpaper_W() { return Width; }
    float GetWallpaper_C() { return cost; }
    float GetWallpaper_P() { return parameters; }
  
    ~Wallpaper()
    {
        delete[] name;
    }
    friend void wallpaper_Number_strips(Room paramet, Wallpaper width);
    friend void wallpaper_strips(Wallpaper Len, Room Hei, Wallpaper cos);
   
};
