#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, r, x, y, z;
    vector <int> res;
    vector <int> res2;
    char buff[50];
    string file1, file2;
    cin >> file1;
    cin >> file2;
    ifstream okr(file1);
    ifstream tch(file2);

    while (!okr.eof())
    {
        okr >> buff;
        res2.push_back(atoi(buff));
    }
    okr.close();
    a = res2[0];
    b = res2[1];
    r = res2[2];

    while (!tch.eof())
    {
        tch.getline(buff, 50);
        x = buff[0] - '0';
        y = buff[2] - '0';
        z = pow(x - a, 2) + pow(y - b, 2);

        if (z == pow(r, 2))
            res.push_back(0);
        else if (z < pow(r, 2))
            res.push_back(1);
        else if (z > pow(r, 2))
            res.push_back(2);
    }
    tch.close();

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }

}

