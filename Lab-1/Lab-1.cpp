#include <iostream>
using namespace std;

int taskOne() {
    //Створюємо змінні
    int arrA[9999]{}, arrB[9999]{};
    int n, i, j;
    j = 0;

    //Вводимо розмір масиву
    cout << "Input size of array:" << endl;
    cin >> n;

    //Вводимо елементи масиву А
    cout << "Input elements for array A:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arrA[i];
    }

    //Виводимо елементи масиву А
    cout << "Array A:" << endl;
    for (i = 0; i < n; i++) {
        cout << arrA[i] << endl;
    }

    //Заповнюємо масив В
    for (i = 1; i < n; i++) {
        if (i < 10 || i % 10 != 0) {
            arrB[j] = arrA[i];
            j++;
        }
    }

    //Виводимо масив В
    cout << "Array B:" << endl;
    for (i = 0; i < j; i++) {
        cout << arrB[i] << endl;
    }
    return 0;
}

int taskTwo(){
    //Створюємо змінні
    int arr[9999]{};
    int x, i, n, j=0, k=0, maxone=-9999, maxtwo=-9999;

    //Визначаємо розмір масиву
    cout << "Input size of array:" << endl;
    cin >> n;

    //Вводимо елементи масиву
    cout << "Input elements of array:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Вводимо число Х
    cout << "Input number X:" << endl;
    cin >> x;

    //Визначаємо перше число менше за визначене число Х
    for (i = 0; i < n; i++) {
        if (arr[i]<0 && arr[i]<x && arr[i]>maxone) {
            maxone = arr[i];
            j = i;
            break;
        }
    }

    //Виводимо число менше за число Х та його позицію
    cout << "First value smaller than X and his position:" << endl;
    cout << maxone << "," << j << endl;

    //Визначаємо найбільше число менше зе перше менше число 
    for (i = 0; i < n; i++) {
        if(arr[i] > maxtwo && arr[i] < maxone){
            maxtwo = arr[i];
            k = i;
        }
    }

    //Виводимо число та його позицію
    cout << "Max value smaller then first value smaller than X and his position:" << endl;
    cout << maxtwo << "," << k << endl;
    return 0;
}

int main()
{
    //Створюємо змінні та пояснюємо завдання
    int task;
    cout << "First task: From one-dimensional array A of size N, construct array B without zero elements." << endl;
    cout << endl;
    cout << "Second task: Find the maximum value among the negative elements located to the first element, smaller than the given number X." << endl;
    cout << endl;

    //Вибір завдання
    cout << "Select a task(1 or 2):" << endl;
    cin >> task;

    //Виклик функції
    if (task == 1) {
        cout << "You have chosen the first task" << endl;
        taskOne();
    }
    else if (task == 2) {
        cout << "You have chosen the second task" << endl;
        taskTwo();
    }
    else {
        cout << "Choose 1 or 2!" << endl;
    }
    return 0;
}