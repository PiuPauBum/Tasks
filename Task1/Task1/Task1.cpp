#include <iostream>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, m, j = 0;

    cout << "Введите N и M:\n";
    cin >> n >> m;
    
    int *ch = new int[n];
    vector <int> res;

    for (int i = 0; i < n; i++)//задание массива
    {
        ch[i] = i + 1;
    }

    while (ch[j]!=n-m+2)
    {
        res.push_back(ch[j]);
        j += m - 1;
        if (j >= n)
        {
            j -= n;
        }
    }
    res.push_back(ch[j]);

    for (int i = 0; i < res.size(); i++)//вывод
    {
        cout << res[i];
    }
    
}

