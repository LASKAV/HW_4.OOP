#pragma once
#include <iostream>
#include "Class_Room.h"
#include "Class_Wallpaper.h"

// ��������(����) ��������: ������ ������.

class Flat  // ����� ��������
{
    Room* rooms;       // ��������� ��������� ������� ��� �������� 
    int roomsNumber;   // ���������� �������
public:
    Flat()
    {
        rooms = nullptr;
        roomsNumber = NULL;
    }
    int Input_flat()
    {
        std::cout << "\nFLAT" << std::endl;
        std::cout << "Enter number of apartments : ";  // ���� ���������� �������
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