/**
========================================================
        C++ ARRAYS
========================================================

1. Array Declaration
2. Array Initialization
3. Inputting values from user
4. Traversing arrays
5. Displaying arrays using loops
6. Passing arrays to functions
7. Using sizeof() to find array size
8. Using functions to find SUM and AVERAGE
9. Using functions to find SMALLEST and LARGEST value
10. Row-wise and Column-wise additions in 2D arrays

========================================================
*/

#include <iostream>
using namespace std;

int calculateSum(int arr[], int size_array);
double calculateAverage(int arr[], int size_array);
int findLargest(int arr[], int size_array);
int findSmallest(int arr[], int size_array);
void displayArray(int arr[], int size_array);


int main()
{

/*
========================================================
1. ARRAY DECLARATION
--------------------------------------------------------
Syntax:
datatype arrayName[size];
========================================================
*/

    int numbers[5];


/*
========================================================
2. ARRAY INITIALIZATION
--------------------------------------------------------
Values are assigned during declaration
========================================================
*/

    int marks[5] = {80, 70, 90, 85, 75};


/*
========================================================
3. USING sizeof() TO FIND ARRAY SIZE
--------------------------------------------------------
sizeof(array) / sizeof(array[0])
========================================================
*/

    int size_array = sizeof(marks) / sizeof(marks[0]);

    cout << "Array size using sizeof(): " << size_array << endl;


/*
========================================================
4. DISPLAYING ARRAY USING LOOP
========================================================
*/

    cout << "Initialized array values: ";

    for(int i = 0; i < size_array; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;


/*
========================================================
5. INPUTTING VALUES FROM USER
========================================================
*/

    cout << "\nEnter 5 numbers:\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }


/*
========================================================
6. TRAVERSING ARRAY
--------------------------------------------------------
Traversing means visiting every element in the array.
========================================================
*/

    cout << "\nArray elements entered by user:\n";
    displayArray(numbers, 5);


/*
========================================================
7. FIND SUM AND AVERAGE USING FUNCTIONS
========================================================
*/

    int sum = calculateSum(numbers, 5);
    double average = calculateAverage(numbers, 5);

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;


/*
========================================================
8. FIND SMALLEST AND LARGEST VALUE
========================================================
*/

    cout << "Largest value = " << findLargest(numbers, 5) << endl;
    cout << "Smallest value = " << findSmallest(numbers, 5) << endl;


/*
========================================================
9. TWO DIMENSIONAL ARRAY (2D ARRAY / MATRIX)

Example: 3 rows and 3 columns
========================================================
*/

    int matrix[3][3];

    cout << "\nEnter elements of a 3x3 matrix:\n";

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }


/*
========================================================
Displaying 2D array
========================================================
*/

    cout << "\nDisplaying the 2D array:\n";

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }


/*
========================================================
ROW-WISE ADDITION
========================================================
*/

    cout << "\nRow-wise sums:\n";

    for(int i = 0; i < 3; i++)
    {
        int rowSum = 0;

        for(int j = 0; j < 3; j++)
        {
            rowSum += matrix[i][j];
        }

        cout << "Row " << i+1 << " Sum = " << rowSum << endl;
    }


/*
========================================================
COLUMN-WISE ADDITION
========================================================
*/

    cout << "\nColumn-wise sums:\n";

    for(int j = 0; j < 3; j++)
    {
        int colSum = 0;

        for(int i = 0; i < 3; i++)
        {
            colSum += matrix[i][j];
        }

        cout << "Column " << j+1 << " Sum = " << colSum << endl;
    }

    return 0;
}

/*
--------------------------------------------------------
FUNCTION: calculateSum
--------------------------------------------------------
*/
int calculateSum(int arr[], int size_array)
{
    int sum = 0;

    for(int i = 0; i < size_array; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

/*
--------------------------------------------------------
FUNCTION: calculateAverage
--------------------------------------------------------
*/
double calculateAverage(int arr[], int size_array)
{
    int sum = calculateSum(arr, size_array);
    return (double)sum / size_array;
}

/*
--------------------------------------------------------
FUNCTION: findLargest
--------------------------------------------------------
*/
int findLargest(int arr[], int size_array)
{
    int largest = arr[0];

    for(int i = 1; i < size_array; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

/*
--------------------------------------------------------
FUNCTION: findSmallest
--------------------------------------------------------
*/
int findSmallest(int arr[], int size_array)
{
    int smallest = arr[0];

    for(int i = 1; i < size_array; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

/*
--------------------------------------------------------
FUNCTION: displayArray
--------------------------------------------------------
*/
void displayArray(int arr[], int size_array)
{
    for(int i = 0; i < size_array; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
