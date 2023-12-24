#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");


    // Одномерные массивы

    // задание № 1
    int mass[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Массив: [";
    for(int a = 0; a < 10; a++)
    {



        cout << mass[a] << " ";
    }

    cout << "]";



    // задание № 2
    int mass[10];

    srand(time(0));
    for (int a = 0; a < 10; a++) {

        mass[i] = rand() % 21 - 10;
    }


    cout << "Элементы массива: ";

    for (int a = 0; a < 10; a++) {
        cout << mass[a] << " ";
    }



  // задание № 3
    int mass[5];

    for (int a = 0; a < 5; a++)
    {
        cout << "Введите элемент массива " << a+1 << ": ";
        cin >> mass[a];
    }

    cout << "Массив: [ ";
    for (int a = 0; a < 5; i++)
        cout << mass[a] << " ";
    cout << "]" << endl;



   // задание № 4
    int mass[10];

   srand(time(0));
    for (int a = 0; a < 10; a++) {
        mass[a] = rand() % 21 - 10;
    }


    cout << "Исходный массив: [";
    for (int a = 0; a < 10; a++) {
        cout << mass[a] << " ";
    }

    cout << "]" << endl;


    for (int a = 0; a < 10; a++)
    {
        if (mass[a]%2 == 0)

            mass[a] *= 3;
        else

            mass[a] *= 5;
    }


    cout << "Преобразованный массив: [";
    for (int i = 0; i < 10; i++)
        cout << mass[i] << " ";
    cout << "]" << endl;
    */


    // двумерный массив

    // задание № 1
    int mass[5][5];

    srand(time(0));

    for (int b = 0; b < 5; b++)
    {
        for (int a = 0; a < 5; a++)
        {
            mass[b][a] = rand()%21 - 10;
        }
    }

     for (int b = 0; b < 5; b++)
    {
        for (int a = 0; a < 5; a++)
        {
            cout << mass[a][a] << "\t";
        }
        cout << endl;
    }



    // задание № 2
    int mass[5][5];

    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mass[i][j] = rand()%21 - 10;
        }
    }

     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mass[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Сумма элементов в каждой строке:" << endl;
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += mass[i][j];
        }
        cout << "Строка " << i + 1 << ": " << sum << endl;
    }



    // задание № 3
    int mass[5][5];

    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mass[i][j] = rand()%21 - 10;
        }
    }

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mass[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(mass[i][j] < 0)
                mass[i][j] = 0;
        }
    }

    cout << endl;

    cout << "Преобразованный массив:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << mass[i][j] << "\t";
        }
        cout << endl;
    }
    */

    return 0;
}

