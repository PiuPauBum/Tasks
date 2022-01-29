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
    char buff[50];
    string file1, file2;
    cin >> file1;
    cin >> file2;
    ifstream okr(file1);
    ifstream tch(file2);

    okr.getline(buff, 50); 
    a = buff[0]-48;
    b = buff[2]-48;
    okr.getline(buff, 50);
    r = buff[0] - 48;
    okr.close(); 
    
    while (!tch.eof())
    {
        tch.getline(buff, 50);
        x = buff[0] - 48;
        y = buff[2] - 48;
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
