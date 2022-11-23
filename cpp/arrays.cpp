#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

void minmax()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {

        cout << ar[i] << " ";
    }
    int minNo = INT_MAX;
    int maxNo = 0;
    for (int i = 0; i < n; i++)
    {

        // if (min > ar[i])
        // {
        //     min = ar[i];
        // }
        // if (max < ar[i])
        // {
        //     max = ar[i];
        // }
        minNo = min(minNo, ar[i]);
        maxNo = max(maxNo, ar[i]);
    }
    cout << endl
         << "max :" << maxNo;
    cout << endl
         << "min :" << minNo;
}
int lsearch(int ar[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int learnerSearch()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "enter number want search" << endl;
    int key;
    cin >> key;
    int index = lsearch(ar, n, key);
    if (index > -1)
    {
        cout << "found at index :" << index;
    }
    else
    {
        cout << "not present";
    }
    return index;
}
bool bsearch(int ar[], int min, int max, int key)
{
    if (min > max)
    {
        return false;
    }
    int mid = (min + max) / 2;
    if (ar[mid] == key)
    {
        return true;
    }

    if (ar[mid] > key)
    {
        // search in left side
        return bsearch(ar, min, mid - 1, key);
    }
    else
    {
        // search in right side
        return bsearch(ar, mid + 1, max, key);
    }
    return false;
}
bool binarySearch(int ar[], int n, int key)
{

    int min = 0;
    int max = n;
    while (min < max)
    {
        int mid = (min + max) / 2;
        if (ar[mid] == key)
        {
            return true;
        }
        if (ar[mid] > key)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    return false;
}
void performBSearch()
{
    int ar[] = {1,
                2,
                4,
                6,
                7,
                30,
                45,
                235,
                623,
                1000};
    int n = 10;
    cout << "given array";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl
         << "search key:";
    int key;
    cin >> key;
    // if (binarySearch(ar, 10, key))
    if (bsearch(ar, 0, 10, key))
    {
        cout << "present";
    }
    else
    {
        cout << "not present";
    }
}
void bublesort(int ar[], int n)
{

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (ar[j] > ar[j + 1])
            {

                // swap
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}
void insertionSort(int ar[], int n)
{
    cout << "insertion sort" << endl;
    for (int i = 1; i < n; i++)
    {

        int j = i;
        while (j > 0 && ar[j] < ar[j - 1])
        {

            // swap a[j] and a[j-1]
            int temp = ar[j];
            ar[j] = ar[j - 1];
            ar[j - 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}
void selectionSort(int ar[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        /* cintode */

        for (int j = i + 1; j < n; j++)
        {
            /* code */
            if (ar[j] < ar[i])
            {
                // swap
                int temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}
void performSort()
{
    int ar[] = {
        6,
        4,
        235,
        623,
        1000,
        7,
        30,
        1,
        2,
        45,
    };
    cout << "given array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    // selectionSort(ar, 10);
    // bublesort(ar, 10);
    insertionSort(ar, 10);
}

int main()
{
    // minmax();
    // learnerSearch();
    // performBSearch();
    performSort();
    return 0;
}