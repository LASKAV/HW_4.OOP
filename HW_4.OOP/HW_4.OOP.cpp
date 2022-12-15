#define _CRT_SECURITYCRITICAL_ATTRIBUTE
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

// Периметр комнаты ÷ Ширину рулона обоев = Количество полотнищ обоев.
void wallpaper_Number_strips(Room para, Wallpaper wid)
{
    para.parameters = para.GetRoom_P();
    wid.Width = wid.GetWallpaper_W();
    std::cout << "Number of sheets of wallpaper = " << float(para.parameters / wid.Width) << std::endl;
    // Пример: 18 м (периметр комнаты) ÷ 1,06 м (ширина рулона выбранных обоев) = 16,981.
}

// нужно посчитать, сколько рулонов обоев нужно для оклеивания комнаты
void wallpaper_strips(Wallpaper Len, Room Hei , Wallpaper cos)
{
    Hei.parameters = Hei.GetRoom_P();
    Len.Width = Len.GetWallpaper_W();
    cos.cost = cos.GetWallpaper_C();
    float temp = 0;
    temp = Hei.parameters / Len.Width;
    Len.Length = Len.GetWallpaper_L();
    Hei.Height = Hei.GetRoom_H();
    std::cout << "Rolls of wallpaper are needed = " << float((temp * Hei.Height + 15) / Len.Length) << std::endl;
    float Number_rolls = (temp * Hei.Height + 15) / Len.Length;
    std::cout << "It will cost you = " << Number_rolls * cos.cost << " $" << std::endl;
    // Количество полотнищ × (Высота стен + 15 см) ÷ Длина рулона обоев = Количество рулонов.
}

int main()
{
    Flat Obj_Flat;
    Room Obj_Room;
    Wallpaper Obj_Wallpaper;
    short batton = NULL;
    do
    {
        std::cout << "\n __Wallpaper cost__ " << std::endl
            << "1.Enter number of rooms in the apartment" << std::endl                   // количество комнат в квартире
            << "2.Enter room parameters" << std::endl                                    // параметры комнаты
            << "3.Enter the parameters for each type of wallpaper" << std::endl          // параметры каждого вида обоев
            << "4.Required number of bales of each" << std::endl                         // количество рулонов каждого вида
            << "5.Purchase cost of wallpaper " << std::endl                              // стоимость закупки обоев 
            << "6.All parameters" << std::endl
            << "7.EXIT " << std::endl;
        std::cout << "\n Enter number : "; std::cin >> batton;
        switch (batton)
        {
        case 1:
        {
            system("cls");
            int rooms = NULL;
            std::cout << "Enter number of rooms : "; std::cin >> rooms;
            Obj_Flat.Input_flat(rooms);
            Obj_Flat.OutPut_flat();
        }break;
        case 2:
        {
            system("cls");
            Obj_Room.Input_parameters_room();
            Obj_Room.OutPut_parameters_room();
        }break;
        case 3:
        {
            system("cls");
            Obj_Wallpaper.Input_parameters_wallpaper();
            Obj_Wallpaper.OutPut_parameters_wallpaper();
        }break;
        case 4:
        {
            system("cls");
            wallpaper_Number_strips(Obj_Room, Obj_Wallpaper);            // Количество полотнищ обоев
        }break;
        case 5:
        {
            system("cls");
            wallpaper_strips(Obj_Wallpaper, Obj_Room, Obj_Wallpaper);    // сколько рулонов обоев нужно для оклеивания комнаты + цена
        }break;
        case 6:
        {
            std::cout << "\tFLAT" << std::endl;
            Obj_Flat.OutPut_flat();
            std::cout << "\tROOM" << std::endl;
            Obj_Room.OutPut_parameters_room();
            std::cout << "\tWALLPAPER" << std::endl;
            Obj_Wallpaper.OutPut_parameters_wallpaper();
        }break;
        case 7:
        {
            system("puse");
            return 0;
        }break;
        
        default:
            break;
        }
    } while (batton != 7);

    return 0;

}
