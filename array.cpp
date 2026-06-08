#include<iostream>


int findNumberIndex(int searchingNum,int arr[],int arrlength)
{

    for(int i=0; i<arrlength; i++)
    {
        if(arr[i]==searchingNum)
        {
            return i;
        }
    }
    return -1;
}

int deleteIndex(int searchIndex,int arr[],int arrLength)
{

    for(int i=searchIndex; i<arrLength; i++)
    {
        arr[i]=arr[i+1];
    }
}

int main()
{
    int arr[100];

    int n;

    std::cout<<"Input the insertion count: "<<std::endl;
    std::cin>>n;

    std::cout<<"Input array items ..."<<std::endl;
    for(int x = 0; x<n; x++)
    {
        std::cin>>arr[x];
    }

    std::cout<<"view items : forward dir. - "<<std::endl;

    for(int y=0; y<n; y++)
    {
        std::cout<<arr[y]<<std::endl;
    }

    std::cout<<"view items : backward dir. - "<<std::endl;

    for(int y=n-1; y>=0; y--)
    {
        std::cout<<arr[y]<<std::endl;
    }

    std::cout<<"view items : odd nums - "<<std::endl;

    for(int y=0; y<n; y++)
    {
        if(arr[y]%2==1)
        {
            std::cout<<arr[y]<<std::endl;
        }
    }

    std::cout<<"Enter the number to search:"<<std::endl;
    int searchNum;

    std::cin>>searchNum;

    std::cout<<"Index of the number : "<<findNumberIndex(searchNum,arr,n)<<std::endl;

    std::cout<<"Enter the index number to delete:"<<std::endl;
    int searchIdx;

    std::cin>>searchIdx;

    deleteIndex(searchIdx,arr,n);

    std::cout<<"view items after delete - "<<std::endl;

    for(int y=0; y<n-1; y++)
    {
        std::cout<<arr[y]<<std::endl;
    }


    return 0;
}
