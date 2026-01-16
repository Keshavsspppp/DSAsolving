// to write a program to print all the unique values in an array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int size = 9;

    for(int i = 0; i < size; i++) {
        bool isUnique = true;

        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if(isUnique) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
