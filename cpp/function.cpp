#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

bool isPrimeNumber(int n)
{
    int sqr = (int)sqrt(n);
    for (int i = 2; i <= sqr; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
// reserse the given number
bool checkPythagorianTriplate()
{
    int a, b, c;
    cin >> a >> b >> c;
    int y, z;
    int x = max(a, max(b, c));
    if (a == x)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;

        z = b;
    }
    return pow(x, 2) == pow(y, 2) + pow(z, 2);
}
int reverse(int n)
{
    // 1234
    int result = 0;
    while (n > 0)
    {
        int r = n % 10;
        result = result * 10 + r;
        n = n / 10;
    }
    return result;
}
// check if given number is armstrong number
bool armstrong(int n)
{

    int original = n;
    int arm = 0;
    while (n > 0)
    {
        int r = n % 10;
        arm += pow(r, 3);

        n /= 10;
    }
    if (arm == original)
    {
        return true;
    }
    return false;
}
// sumb of n natural number

int sumOfNaturalnumber(int n)
{
    return n * (n + 1) / 2;
}
int binaryToDecimal(long int n)
{
    int result = 0;
    int x = 1;
    while (n > 0)
    {
        int r = n % 10;
        result += r * x;
        n /= 10;
        x *= 2;
    }
    return result;
}
int octalToDecimal(int n)
{
    int result = 0;
    int x = 1;
    while (n > 0)
    {
        int r = n % 10;
        result += r * x;
        x *= 8;
        n /= 10;
    }
    return result;
}
int hexaToDecimal(string n)
{
    int result = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {

        if (n[i] >= '0' && n[i] <= '9')
        {

            result += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' and n[i] <= 'F')
        {
            result += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return result;
}
int main()
{
    // int n;
    // cin >> n;
    // if (isPrimeNumber(n))
    // {
    //     cout << "true";
    // }
    // else
    // {
    //     cout << "false";
    // }
    // cout << reverse(n);
    // if (armstrong(n))
    // {
    //     cout << "true";
    // }
    // else
    // {
    //     cout << "false";
    // }
    // cout << sumOfNaturalnumber(n)<<endl;
    // if (checkPythagorianTriplate())
    // {
    //     cout << "yes";
    // }
    // else
    // {
    //     cout << "no";
    // }
    // cout << binaryToDecimal(n) << endl;
    // cout << octalToDecimal(n) << endl;
    string s;
    cin >> s;
    cout << hexaToDecimal(s) << endl;
    return 0;
}