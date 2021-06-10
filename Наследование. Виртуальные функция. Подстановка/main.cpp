
//Наследование.Виртуальные функции.Полиморфизм.

/*Базовый класс:
МАШИНА
торговая_марка - string 
число_цилиндров - int
мощность - int
Создать производный класс ГРУЗОВИК, добавив в него характеристику грузоподъемности кузова типа int.
*/



#include "Object.h"
#include "Car.h"
#include "Lorry.h"
#include "Vector.h"
#include <iostream>

using namespace std;


int main()
{

    Vector v(5);                //вектор из 5 элементов
    Car a;                 //объект класса Car
    cin>>a;
    Lorry b;              // объект класса Lorry
    cin>>b;
    Object*p=&a;              //ставим указатель на объект класса Car
    v.Add(p);                 //добавляем объект в вектор
    p=&b;                    //ставим указатель на объект класса Lorry
    v.Add(p);                  //добавляем объект в вектор
    cout<<v;                  //вывод вектораVector v(5);//вектор из 5 элементов
    cout << "yes";

    return 0;
}