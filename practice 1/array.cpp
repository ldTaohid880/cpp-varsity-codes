#include <iostream>

using namespace std;

int main()
{

    int size;
    cout << "Enter the size :" << endl;
    cin >> size;

    int *arr = new int[size];

    cout << "Insert " << size << " element." << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> arr[x];
    }

    int current, min, max, total;
    min = max = total = arr[0];
    double avg = arr[0];

    for (int y = 0; y < size; y++)
    {
        current = arr[y];
        if (current < min)
        {
            min = current;
        }
        if (current > max)
        {
            max = current;
        }
        total += current;
    }

    avg = total / size;

    cout << "Min : " << min << "\nMax : " << max << "\nTotal : " << total << "\nAvg : " << endl;

    delete[] arr;
    return 0;
}