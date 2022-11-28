#include <iostream>
#include <cmath>
using namespace std;
// max till i
void maxTillI(int ar[], int len)
{
    int l = INT16_MIN;
    for (int i = 0; i < len; i++)
    {

        l = max(l, ar[i]);
        cout << l << " ";
    }
}
// subarray
// notes :
// number of subarray of array with n element then nC2+n=n(n+1)/2

// problem -1 sum of all subarray

void sumOfSubarray(int ar[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int sm = 0;
        for (int j = i; j < n; j++)
        {
            sm += ar[j];
            cout << endl
                 << sm << " ";
        }
    }
}

// problem -2
void arithmaticArray(int ar[], int n)
{

    int ans = 2;
    int pd = ar[1] - ar[0];
    int curr = 2;
    int j = 1;
    while (j < n)
    {
        if (pd == (ar[j] - ar[j - 1]))
        {
            curr++;
            ans = max(ans, curr);
        }
        else
        {
            curr = 2;
            pd = ar[j] - ar[j - 1];
        }

        j++;
    }
    cout << ans;
}

// problem -3 record breadker

void recordBreaker(int ar[], int n)
{

    int mx = ar[0];
    for (int i = 1; i < n - 1; i++)
    {

        // record breacking condition
        if (mx < ar[i] && ar[i] > ar[i + 1])
        {
            cout << ar[i] << " ";
        }
        mx = max(mx, ar[i]);
    }
}

// subsequence
// number of subquence of an array with n element =2^n

// note: Every subarray is subsequence but every subsequence is not a subarray
int main()
{
    // int a[] = {0, -9, 1, 3, -4, 5};
    // maxTillI(a, (int)(sizeof(a) / sizeof(int)));
    // int a[] = {1, 2, 0, 7, 2};
    // sumOfSubarray(a, (int)(sizeof(a) / sizeof(int)));
    // int a[] = {10, 7, 4, 6, 8, 10, 11};
    // arithmaticArray(a, (int)(sizeof(a) / sizeof(int)));
    int a[] = {1, 2, 0, 7, 2, 0, 2, 2};
    recordBreaker(a, (int)(sizeof(a) / sizeof(int)));
    return 0;
}
