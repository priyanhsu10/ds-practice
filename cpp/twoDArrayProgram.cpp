#include <iostream>
#include <cmath>

using namespace std;

// matrix programs
// 1read
// 2print
void readMatrix()
{

    int r, c;
    cin >> r >> c;
    int m[r][c];
    // reading matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cin >> m[i][j];
        }
        cout << endl;
    }
    // printing matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

// 3add
void addTwoMatrix()
{

    int r, c;
    cout << "enter row and col " << endl;
    cin >> r >> c;
    int m1[r][c], m2[r][c], m3[r][c];

    // read matrix 1;
    cout << "enter matrix 1" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m1[i][j];
        }
    }

    // read matrix 2;
    cout << "enter matrix 2" << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> m2[i][j];
        }
    }

    // add matrix 1 and 2

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // print matrix 3
    cout << "m1+m2 =" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
}
// 4 multiply 2 matrax
void multipleyMatrix()
{

    int r = 2, c = 3, n = 2;
    int m1[2][3] = {{1, 2, 3}, {4, 5, 6}}, m2[3][2] = {{10, 11}, {20, 21}, {30, 31}}, m3[2][2];

    // cin >> r >> c >> n;
    // cout << endl
    //      << "enter first matrx r= " << r << " c =" << c << endl;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cin >> m1[i][j];
    //     }
    // }

    // cout << endl
    //      << "enter second matrx r= " << c << " c =" << n << endl;
    // for (int i = 0; i < c; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> m2[i][j];
    //     }
    // }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m3[i][j] = 0;
        }
    }
    int sm = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < c; k++)
            {
                sm += m1[i][k] * m2[k][j];
            }
            m3[i][j] = sm;
            sm = 0;
        }
    }

    // print matrix 3
    cout << endl
         << "m1*m2 =" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
}
// 5. spriral read

// 6.transpose of matrax

// 7. find element in sorted matrix

int main()
{
    // readMatrix();
    // addTwoMatrix();
    multipleyMatrix();
    return 0;
}
