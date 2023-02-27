#pragma once
#include <iostream>
using namespace std;

class F1 {
public:
    void f1(int* arr[], int M, int N) {
        int** newArr = new int* [N];
        for (int i = 0; i < N; i++) {
            newArr[i] = new int[M];
            for (int j = 0; j < M; j++)
                newArr[i][j] = arr[j][i];
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++)
                cout << newArr[i][j] << " ";
            cout << endl;
        }
    }
};

class F2 {
public:
    void f2_append(char** arr, int& s1) {
        s1++;
        arr[s1 - 1] = new char[256];
        system("cls");
        char* buff = new char[256];
        char* number = new char[255];
        cout << "Write name: ";
        arr[s1 - 1] = buff;
        s1++;
        arr[s1 - 1] = new char[256];
        cout << "Write phone number: ";
        gets_s(number, 255);
        arr[s1 - 1] = number;
    }
    void SearchOnName(char** arr, char* name, int s1) {
        system("cls");
        char a;
        for (int i = 0; i < s1; i++) {
            cout << arr[i] << " " << name;
            if (strcmp(arr[i], name) == 0) {
                cout << arr[i] << endl;
                cout << arr[i + 1] << endl;
            }
        }
        cout << "Продолжить? - ";cin >> a;
    }
    void SearchOnNumber(char** arr, char* number, int s1) {
        system("cls");
        char a;
        for (int i = 1; i < s1; i++) {
            if (strcmp(arr[i], number) == 0) {
                cout << arr[i - 1] << endl;
                cout << arr[i] << endl;
            }
        }
        cout << "Продолжить? - ";cin >> a;
    }
    void f2_Show(char** arr, int s1) {
        char a;
        for (int j = 1; j < s1 + 1; j++) {
            cout << arr[j - 1] << " \n";
            if (j % 2 == 0)
                cout << endl;
        }
        cout << "Продолжить? - "; cin >> a;
    }
};