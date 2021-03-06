// StartWithParametrs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std; 

int main(int argc, char* argv[])
{
    string failname = "1.html"; 
    string str = "#000000"; // черный цвет по умолчанию

    string HTMLTemplate ="<html><head><title>New file!!!</title></head><body bgcolor=></body></html>"; 
    string HTMLsuffix = "></body></html>"; 
        
    FILE* f; // open fail on перезапись
    
    fopen_s(&f, failname.c_str(), "w+"); 
    //анализ параметров
    if (argc == 2) {
        str = argv[1]; 
    }
    //полное содержимое HTML файла
    string HTMLContent = HTMLTemplate + str + HTMLsuffix; 
    fputs(HTMLContent.c_str(), f); 
    fclose(f); 
    cout << "Ok..." << endl; 

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
