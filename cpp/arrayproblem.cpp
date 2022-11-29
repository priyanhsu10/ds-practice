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
// max sum cadence algorithm
void maxsumSubArrayUsingCadenceAlgo(int ar[], int n)
{

    cout << "cadence algo" << endl;
    int sm = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sm += ar[i];

        if (sm < 0)
        {
            sm = 0;
        }
        mx = max(mx, sm);
    }
    cout << mx << endl
         << sm;
}
void maxSumOfSubarray(int ar[], int n)
{
    int mx = -1;

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            int sm = 0;
            for (int k = i; k <= j; k++)
            {

                sm += ar[k];
                cout << ar[k] << " ";
            }
            cout << endl;
            mx = max(sm, mx);
        }
    }
    cout << endl
         << "max:" << mx;
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

// problem 3 first repeating element

void firstRepeatingElement(int ar[], int n)
{

    int minindex = INT_MAX;

    int indar[n];
    for (int i = 0; i < n; i++)
    {
        indar[i] = -1;
    };
    for (int i = 0; i < n; i++)
    {

        if (indar[ar[i]] > -1)
        {

            minindex = min(indar[ar[i]], minindex);
        }
        else
        {
            //  if (indar[ar[i]] == -1)
            indar[ar[i]] = i;
        }
        if (minindex == INT_MAX)
        {
            cout << "elements are uniq";
        }
    }
    cout << minindex;
}
// problem -4
// subarray with given sum

void subarWithGivenSum(int ar[], int l, int s)
{

    int st = -1, end = -1;
    int currentsum = ar[0];
    while (currentsum != s && st < l)
    {
        currentsum += ar[end];
        if (currentsum < s && end < l)
        {
            end++;
        }
        else if (s < currentsum)
        {
            st++;
            end = st + 1;
            currentsum = ar[st];
        }
        else if (currentsum == s)
        {
            break;
        }
    }
    cout << st << " " << end;
}
// problem -5
// smallest positve missing number

void smallestMissing(int ar[], int l)
{

    bool check[l];
    for (int i = 0; i < l; i++)
    {
        if (ar[i] >= 0)
        {
            check[ar[i]] = true;
        }
    }
    for (int i = 0; i < l; i++)
    {
        if (check[i] == false)
        {
            cout << i;
            break;
        }
    }
}
//  subsequence
//  number of subquence of an array with n element =2^n

// note: Every subarray is subsequence but every subsequence is not a subarray
int main()
{
    // int a[] = {0, -9, 1, 3, -4, 5};
    // maxTillI(a, (int)(sizeof(a) / sizeof(int)));
    // int a[] = {1, 2, 0, 7, 2};
    // sumOfSubarray(a, (int)(sizeof(a) / sizeof(int)));
    // int a[] = {10, 7, 4, 6, 8, 10, 11};
    // arithmaticArray(a, (int)(sizeof(a) / sizeof(int)));
    // int a[] = {1, 2, 0, 7, 2, 0, 2, 2};
    // recordBreaker(a, (int)(sizeof(a) / sizeof(int)));

    // int a[] = {1, 5, 3, 4, 3, 5, 6};
    // firstRepeatingElement(a, (int)(sizeof(a) / sizeof(int)));
    // int a[] = {1, 2, 3, 8};
    // subarWithGivenSum(a, (int)(sizeof(a) / sizeof(int)), 16);
    // int a[] = {0, -9, 1, 3, -4, 5};
    // smallestMissing(a, (int)(sizeof(a) / sizeof(int)));

    int a[] = {1, -4, 2, 1};
    int l = (int)(sizeof(a) / sizeof(int));
    maxSumOfSubarray(a, l);
    sumOfSubarray(a, l);
    maxsumSubArrayUsingCadenceAlgo(a, l);
    return 0;
}
