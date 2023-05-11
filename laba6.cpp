#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int arr[SIZE][SIZE] = {{-23, -47, -12}, // неплохая матрица, могло быть лучше
                          {-34, -23, -56},
                          {-72, -43, -67}};
    cout << "Задача 2: ";
    int sum = arr[SIZE-1][SIZE-1];
    int b = 0; // объявил с новой строки
    
    for(int a = 1; a < SIZE; a++){
        for(int k = 0; k < SIZE-a; k++) b += arr[k][a+k];
        if(b > sum) sum = b;
        b = 0;
    }
    
    for(int a = 1; a < SIZE; a++){
        for(int k = 0; k < SIZE-a; k++) b += arr[a+k][k];
        if(b > sum) sum = b;
        b = 0;
    }
    cout << sum;

    return 0;
}