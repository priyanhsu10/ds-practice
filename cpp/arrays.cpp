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
int main()
{
    // minmax();
    // learnerSearch();
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
    return 0;
}