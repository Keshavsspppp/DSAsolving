// To write a program to print intersectioon of 2 arrays

// To write a program to print intersection of 2 arrays

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = 5, n2 = 5;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; 
            }
        }
    }

    return 0;
}
