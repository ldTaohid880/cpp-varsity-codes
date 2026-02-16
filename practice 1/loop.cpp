#include<iostream>
using namespace std;

int main(){
    int i = 1,j;
    //do while
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=5);

    //while
    // while(i<=5){
    //     cout<<i<<endl;
    //     i++;
    // };

    //for
    // for(i;i<=5;i++){
    //     cout<<i<<endl;
    // }

    //for - double initialization
    // for(i,j=4;i<=5;i++,j--){
    //     cout<<i<<" "<<j<<endl;
    // }

    //pyramid
    //*****
    //****
    //***
    //**
    //*
    for(int j=1;j<=5;j++){
        for(int k=5;k>=j;k--){
            cout<<j;
        }
        cout<<"\n"<<endl;
    }
    
    return 0;
}