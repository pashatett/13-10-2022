#include <Windows.h>
#include <iostream>
using namespace std;
#include "F2.h"
//1
int main(){
    F1 f;
    int M = 2;
    int N = 3;
    int** arr = new int* [M];
    for (int j = 0, k = 0; j < M; j++) {
        arr[j] = new int[N];
    }
    for (int i = 0, k = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = k;
            k++;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    f.f1(arr, M, N);
}
//2
int main() {
    F2 f;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int s1 = 0;
    char** arr = new char* [1];
    int us;
    int uss;
    char* buff = new char[256];
    while (true) {
        system("cls");
        cout << "Выберите опцию:\n\n";
        cout << "1 - ввести новое имя и телефон;\n";
        cout << "2 - поиск по номеру или телефону;\n";
        cout << "3 - показать весь список.\n"; 
        cin >> us;
        switch (us) {
        case 1:
            f.f2_append(arr, s1);
            break;
        case 2:
            system("cls");
            cout << "Осуществить поиск по номеру телефона(1)/имени(2):\n";
            cin >> uss;
            switch (uss) {
            case 1:
                cout << "Введите искомый номер телефона: \n";
                gets_s(buff, 256);
                f.SearchOnNumber(arr, buff, s1);
                break;
            case 2:
                cout << "Введите искомое имя: \n";
                gets_s(buff, 256);
                f.SearchOnName(arr, buff, s1);
            }
            break;
        case 3:
            system("cls");
            f.f2_Show(arr, s1);
        }
    }
}