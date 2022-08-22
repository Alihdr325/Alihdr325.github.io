
#include <iostream>
using namespace std;

int GetArrInput(int arr[])
{
    int n = 0;
    do
    {
        cin >> arr[n];
    } while (arr[n - 1] >= 0);

    return n - 1;
}

void ShowArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int* arr, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void PrintArrDesc(int arr[], int n) {
    sort(arr, n);
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n = GetArrInput(arr);
    PrintArrDesc(arr, n);
    return 0;
}//alireza heidari
