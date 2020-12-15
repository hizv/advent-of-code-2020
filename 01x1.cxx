#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream fin {"01.in"};

    int k;
    map<int, int> complements;

    while(fin>>k) complements[k] = 2020 - k;

    for (auto p : complements)
    {
        if(complements.count(p.second) > 0)
        {
            cout << p.second * p.first;
            return 0;
        }
    }
    return 0;
}
