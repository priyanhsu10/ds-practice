#include <iostream>
using namespace std;

// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
void patern1(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= col; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}
// 4 5
// * * * * *
// *       *
// *       *
// * * * * *
void patern2(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i == 0 || i == row - 1) || (j == 0 || j == col - 1))
            {
                cout << "* ";
            }
            else
            {

                cout << "  ";
            }
        }
        cout << endl;
    }
}
// inverted half pyramid
// n=6
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *
void patern3(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// inverted half pyramid after 180 degree rotation
// n=5
//         *
//       * *
//     * * *
//   * * * *
// * * * * *
void patern4(int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            // printing space
            if (j < ((n - 1) - i))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

// half pyramid usning numbers
// n=5

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
void patern5(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
// FLyd's triangle
// n=5

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void patern6(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
// butterfly pattern
// n=4
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
void patern7(int n)
{
    // upper part
    //  *             *
    //  * *         * *
    //  * * *     * * *
    //  * * * * * * * *
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= 2 * n; j++)
        {

            if (j <= i)
            {
                cout << "* ";
            }
            else if (j <= (2 * n - i))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    // lower part
    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {

            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}
// inverted pattern
// n=5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void patern8(int n)
{

    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << j << " ";
        }
        cout << endl;
    }
}
// 0-1 patern
// n=5
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
void patern9(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {

                cout << "0 ";
            }
        }
        cout << endl;
    }
}

// Rhombus pattern
// 5
//         * * * * *
//       * * * * *
//     * * * * *
//   * * * * *
// * * * * *
void patern10(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// number pattern
// 5
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
void patern11(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int s = n - i; s >= 1; s--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// palindromic pattern
// n=5
//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5
void pattern12(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int s = n - i; s >= 1; s--)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// star patern
// n=4
//       *
//     * * *
//   * * * * *
// * * * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *
void pattern13(int n)
{
    // upper part
    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *
    for (int i = 1; i <= n; i++)
    {
        for (int s = n - i; s >= 1; s--)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower part
    for (int i = n; i >= 1; i--)
    {
        for (int s = n - i; s >= 1; s--)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// zig-Zag pattern
// n= 9
//     *       *
//   *   *   *   *
// *       *       *
void pattern14(int n)
{
    for (int i = 1; i <= 3; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            int r = i + j;

            if (r % 4 == 0 || (i == 2 && (r == 6 || r == 10)))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    // int row;
    // int col;
    // cin >> row >> col;
    // patern1(row, col);
    // patern2(row, col);
    int n;
    cin >> n;
    // patern3(n);
    // patern4(n);
    // patern5(n);
    // patern6(n);
    // patern7(n);
    // patern8(n);
    // patern9(n);
    // patern10(n);
    // patern11(n);
    // pattern12(n);
    // pattern13(n);
    pattern14(n);
    return 0;
}