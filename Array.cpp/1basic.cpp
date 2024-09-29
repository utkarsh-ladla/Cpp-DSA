#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    //print array usiong function
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done "<<  endl;

}

int main()
{
    // declare
    int number[15];

    // accessing an array
    cout << "value at 15 index" << number[14] << endl;
    cout << endl
         << "Everything is fine " << endl;

    // initialising an array
    int second[3] = {3, 7, 11};
    cout << "Value of second array is " << second[2] << endl;

    int third[15] = {2, 7};
    cout << "all values in third array " << endl;

    // print array using loops
    int n = 15;
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;

    // initialising hole array with 0
    int fourth[10] = {0};
    n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << fourth[i] << " ";
    }
    cout << endl;


    //printing array using function
    int fifth[10] = {1,2,3,4,5,6,7,8,9,10};
    printArr(fifth,10);

    //printing siz of an array.....
    //using above array

    int sizeofArray = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth array is "<< sizeofArray;

    // return 0;
}