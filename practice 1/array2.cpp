#include<iostream>
using namespace std;

void fillArray(int*,int);
int findMin(int*,int);
int findMax(int*,int);
int total(int*,int);
int avg(int*,int);

int main(){
    int size;
    cout<<"enter size of the array : "<<endl;
    cin>>size;

    int *arr = new int[size];

    fillArray(arr,size);

    cout<<"Min : "<<findMin(arr,size)
    <<"\nMax : "<<findMax(arr,size)
    <<"\nTotal : "<<total(arr,size)
    <<"\nAvg : "<<avg(arr,size)
    <<endl;

    delete[] arr;

    return 0;
};

void fillArray(int *arr,int size){
    for(int idx = 0;idx<size;idx++){
        cin>>arr[idx];
    }
}

int findMin(int*arr,int size){
    int min = arr[0];
    for(int idx=0;idx<size;idx++){
        if(arr[idx]<min){
            min=arr[idx];
        }
    };
    return min;
}

int findMax(int *arr,int size){
    int max = arr[0];
    for(int idx=0;idx<size;idx++){
        if(arr[idx]>max){
            max = arr[idx];
        }
    };
    return max;
}

int total(int*arr,int size){
    int sum = 0;
    for(int idx=0;idx<size;idx++){
        sum+=arr[idx];
    };
    return sum;
}

int avg(int*arr,int size){
    int avg = 0;
    int sum = 0;
    for(int idx = 0;idx<size;idx++){
        sum+=arr[idx];
    };
    avg = sum/size;
    return avg;
}