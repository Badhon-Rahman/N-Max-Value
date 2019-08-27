#include <iostream>

using namespace std;

int FindLargestKElement(int arr[], int arrSize, int largestN, int j){
    int maxValue = arr[0];
    int x = 0;
    int tempArr[arrSize - 1];

    for(int i = 1; i < arrSize; i++){
        maxValue = max(maxValue, arr[i]);
    }
    for(int i = 0; i < arrSize; i++){
        if(arr[i] != maxValue){
            tempArr[x] = arr[i];
            x++;
        }
    }
    if(j == largestN){
        return 0;
    }
    else{
        cout << maxValue << " ";
        return FindLargestKElement(tempArr, arrSize - 1, largestN , j+1);
    }

}


int main()
{
    int arrSize;
    cout << "Enter Array size: ";
    cin >> arrSize;

    int arr[arrSize], largestN;
    cout << "Enter Array Elements: ";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }
    cout << "Enter wanted Largest elements Number: ";
    cin >> largestN;

    FindLargestKElement(arr, arrSize, largestN, 0);

    return 0;
}
