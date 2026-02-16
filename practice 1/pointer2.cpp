#include <iostream>
using namespace std;


int main(){
    int arr[3] = {1, 2, 3};
    int &ref = arr[0]; //alias of 1st element arr[0]
    int *ptr = &ref; //assign address of arr[0]
    ptr++; //i think it should throw error as we cant increment address
    *ptr += 5; //change value of address in ptr pointer and which is holding address of ref and ref is shared address of arr[0]
    cout << arr[1] << endl; //2

    return 0;
}