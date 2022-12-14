#include <iostream>
#include "Class_Room.h"
#include "Class_Wallpaper.h"
#include "Class_Flat.h"

/*
1) Написать программу «Стоимость обоев». Программа запрашивает: 
▷ количество комнат в квартире, в которых планируется клеить обои, 
▷ параметры каждой комнаты, 
▷ параметры каждого вида обоев, которые планируется использовать. 
В результате расчета программа выдает: необходимое 
количество рулонов каждого вида, общую стоимость закупки обоев.
Разработать и  использовать в  программе классы: 
«Квартира», «Комната», «Рулон обоев».
Атрибуты (поля) квартиры: список комнат.
Атрибуты комнаты: название, размеры, клеить потолок или нет.
Атрибуты рулона: название, размеры, цена.
Динамически выделять память для названия комнаты и рулона.
В классах "Комната" и "Рулон обоев" создать конструкторы копирования.
Создать ситуации, когда используется конструктор копирования.
*/

float wallpaper_strips(Wallpaper Len, Room Hei)
{
    std::cout << "Enter length wallpaper : ";
    std::cin >> Len.Length;
    std::cout << "Enter Height room : ";
    std::cin >> Hei.Height;
    float temp = Len.getWallpaper_L() / Hei.getRoom_H();
    std::cout << "Whole chunks came out  = " << temp;
    return temp;
}

float wallpaper_Number_strips(Room paramet, Wallpaper width)
{
    std::cout << "Enter paramet Room : ";
    std::cin >> paramet.parameters;
    std::cout << "Enter Height wallpaper : ";
    std::cin >> width.Width;
    float temp = paramet.parameters / width.Width;
    std::cout << "Number of strips you need   = " << temp;
    return temp;
}

int main()
{
    Flat Obj_Flat;
    Obj_Flat.Input_flat();
    Obj_Flat.OutPut_flat();

    Room Obj_Room;
    Obj_Room.Input_parameters_room();
    Obj_Room.OutPut_parameters_room();
    Obj_Room.getRoom_H();
    Obj_Room.getRoom_P();

    Wallpaper Obj_Wallpaper;
    Obj_Wallpaper.Input_parameters_wallpaper();
    Obj_Wallpaper.OutPut_parameters_wallpaper();
    Obj_Wallpaper.getWallpaper_L();
    Obj_Wallpaper.getWallpaper_H();

    wallpaper_strips(Obj_Wallpaper, Obj_Room);
    std::cout << std::endl;
    wallpaper_Number_strips(Obj_Room, Obj_Wallpaper);
}

