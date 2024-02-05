#include <iostream>
using namespace std;

int taskOne() {
    //��������� ����
    int arrA[9999]{}, arrB[9999]{};
    int n, i, j;
    j = 0;

    //������� ����� ������
    cout << "Input size of array:" << endl;
    cin >> n;

    //������� �������� ������ �
    cout << "Input elements for array A:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arrA[i];
    }

    //�������� �������� ������ �
    cout << "Array A:" << endl;
    for (i = 0; i < n; i++) {
        cout << arrA[i] << endl;
    }

    //���������� ����� �
    for (i = 1; i < n; i++) {
        if (i < 10 || i % 10 != 0) {
            arrB[j] = arrA[i];
            j++;
        }
    }

    //�������� ����� �
    cout << "Array B:" << endl;
    for (i = 0; i < j; i++) {
        cout << arrB[i] << endl;
    }
    return 0;
}

int taskTwo(){
    //��������� ����
    int arr[9999]{};
    int x, i, n, j=0, k=0, maxone=-9999, maxtwo=-9999;

    //��������� ����� ������
    cout << "Input size of array:" << endl;
    cin >> n;

    //������� �������� ������
    cout << "Input elements of array:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //������� ����� �
    cout << "Input number X:" << endl;
    cin >> x;

    //��������� ����� ����� ����� �� ��������� ����� �
    for (i = 0; i < n; i++) {
        if (arr[i]<0 && arr[i]<x && arr[i]>maxone) {
            maxone = arr[i];
            j = i;
            break;
        }
    }

    //�������� ����� ����� �� ����� � �� ���� �������
    cout << "First value smaller than X and his position:" << endl;
    cout << maxone << "," << j << endl;

    //��������� �������� ����� ����� �� ����� ����� ����� 
    for (i = 0; i < n; i++) {
        if(arr[i] > maxtwo && arr[i] < maxone){
            maxtwo = arr[i];
            k = i;
        }
    }

    //�������� ����� �� ���� �������
    cout << "Max value smaller then first value smaller than X and his position:" << endl;
    cout << maxtwo << "," << k << endl;
    return 0;
}

int main()
{
    //��������� ���� �� ��������� ��������
    int task;
    cout << "First task: From one-dimensional array A of size N, construct array B without zero elements." << endl;
    cout << endl;
    cout << "Second task: Find the maximum value among the negative elements located to the first element, smaller than the given number X." << endl;
    cout << endl;

    //���� ��������
    cout << "Select a task(1 or 2):" << endl;
    cin >> task;

    //������ �������
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