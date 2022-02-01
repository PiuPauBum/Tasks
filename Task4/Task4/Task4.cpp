#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

class Minimum
{
public:
    string Filee()
    {
        string res;
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
        return res;
    }

    int SredZn(string res)
    {
        double s = 0.0, sz;
        for (int i = 0; i < res.size(); i++) 
        {
            s += res[i];
        }
        sz = s / res.size();
        return sz;
    }
    int Znach(string res, int sz)
    {
        int q;
        double max = 1000.0;
        for (int i = 0; i < res.size(); i++)
        {
            if (abs(res[i] - sz) < max)
            {
                max = abs(res[i] - sz);
                q = i;
            }
        }
        return q;
    }
    int Result(string res, int q)
    {
        int col = 0;

        for (int i = 0; i < res.size(); i++)
        {
            if (res[i] != res[q])
            {
                col += abs(res[i] - res[q]);
            }
        }
        return col;
    }
};

int main()
{
    Minimum min;
    setlocale(LC_ALL, "Russian");
    double sz, max = 1000.0;
    int q, col;
    string res;
   
    res = min.Filee();
    sz = min.SredZn(res);
    q = min.Znach(res, sz);

    cout << min.Result(res, q);
}
