#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Krug
{
public: 
    string Tochka(int a, int b, int r)
    {
        char buff[50];
        int x,y,z;
        string file;
        cin >> file;
        ifstream tch(file);
        string str;
        while (!tch.eof())
        {
            tch >> buff;
            x = atoi(buff);
            tch >> buff;
            y = atoi(buff);           
            z = pow(x - a, 2) + pow(y - b, 2);
            if (z == pow(r, 2))
                str += '0';
            else if (z < pow(r, 2))
                str += '1';
            else if (z > pow(r, 2))
                str += '2';
        }
        tch.close();
        return (str);
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, r;
    vector <int> res2;
    char buff[50];
    string file1, res;
    cin >> file1;
    ifstream okr(file1);
    Krug objTochka;

    while (!okr.eof())
    {
        okr >> buff;
        res2.push_back(atoi(buff));
    }
    okr.close();
    a = res2[0];
    b = res2[1];
    r = res2[2];

    res = objTochka.Tochka(a, b, r);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }

}
