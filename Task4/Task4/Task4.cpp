#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double s=0.0 , sz, max = 1000.0;
    int q, col=0;
    vector <int> res;
    char buff[5];
    string file;
    cin >> file;
    ifstream znch(file);
    
    while (!znch.eof())
    {

        znch.getline(buff, 5);
        res.push_back(atoi(buff));
   
    }
    znch.close();

    for (int i = 0; i < res.size(); i++) //находим среднее значение
    {
        s += res[i];
    }
    sz = s / res.size();

    for (int i = 0; i < res.size(); i++)//поиск значения к которому пойдем
    {
        if (abs(res[i] - sz) < max)
        {
            max = abs(res[i] - sz);
            q = i;
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] != res[q])
        {
            col += abs(res[i] - res[q]);
        }
    }

    cout <<"Минимальное количество ходов: " << col;
   
}
