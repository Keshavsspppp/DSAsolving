#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;

    int small = INT_MAX;
    int large = INT_MIN;
    int minIdx = -1;
    int maxIdx = -1;

    for(int i = 0; i < size; i++) {
        if(arr[i] < small) {
            small = arr[i];
            minIdx = i;
        }

        if(arr[i] > large) {
            large = arr[i];
            maxIdx = i;
        }
    }

    cout << minIdx << " " << maxIdx << endl;
    return 0;
}
