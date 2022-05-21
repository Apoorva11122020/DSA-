//linear search for unsorted array
//binary search for sorted array

#include <iostream>
using namespace std;
int linearsearch(int arr1[], int size1, int element1)
{
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] == element1)
        {
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr2[], int size2, int element2)
{
    int mid, low = 0;
    int high=size2-1;
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (arr2[mid] == element2)
        {
            return mid;
        }
        if (arr2[mid] < element2)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr1[] = {232, 33, 432, 45, 4565, 32, 554, 545, 56};
    int arr2[] = {1, 2, 3, 5, 6, 7, 8, 9};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    int element1 = 432;
    int element2 = 1;

    cout << "the element is " << element1 << " at index " << linearsearch(arr1, size1, element1) << endl;

    cout << "the element is " << element2 << " at index " << binarysearch(arr2, size2, element2) << endl;
    return 0;
}
