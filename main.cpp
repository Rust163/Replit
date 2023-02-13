#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int size_1 = 15;
    int size_2 = 15;
    int arr1[size_1] {
        0
    };
    int arr2[size_2] {
        0
    };
    for(int i = 0; i <= size_1; i++) {
        arr1[i] = rand() % 100;
        cout << "arr1[" << i << "] " << arr1[i] << endl;
    }
    cout << endl;
    for(int j = 0; j < size_2; j++) {
        arr2[j] = rand() % 100;
        cout << "arr2[" << j << "] " << arr2[j] << endl;
    }
}