#pragma once
#include <iostream>
#include "Class_Room.h"
#include "Class_Wallpaper.h"
#include "Class_Flat.h"

// �������� ������: ��������, �������, ����.

class Wallpaper  // ����� ���� 
{
    char* name;
    float parameters;
    float cost;
    float Length;   // �����
    float Width;    // ������
public:
    Wallpaper()  // ����������� �� ���������
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
        std::cout << "\nWALLPAPER" << std::endl;  // ����� / ������
        std::cout << "Enter name : "; 
        std::cin.ignore();
        std::cin.getline(name_wallpaper,40);
        name = new char[strlen(name_wallpaper) + 1];
        strcpy_s(name, strlen(name_wallpaper) + 1, name_wallpaper);
        std::cout << "\nEnter Length : "; std::cin >> Length;
        std::cout << "Enter Width : "; std::cin >> Width;
        std::cout << "Enter cost : "; std::cin >> cost;
        parameters = Length / Width;
    }
    void OutPut_parameters_wallpaper()
    {
        std::cout << "Name Wallpaper = " << name << std::endl;
        std::cout << "Parameters Wallpaper = " << float(parameters) << std::endl;
        std::cout << "Const Wallpaper = " << cost << " $" << std::endl;
    }
    ~Wallpaper()
    {
        delete[] name;
    }
    friend float wallpaper_strips(Wallpaper Len, Room Hei);
};