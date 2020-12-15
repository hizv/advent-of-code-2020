#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main()
{
    ifstream fin {"01.in"};

    int k;
    set <int> inputs;

    while(fin >> k) inputs.insert(k);

    for (auto a : inputs)
    {
        for(auto b: inputs){
            int c = 2020 - a - b;
            if (inputs.count(c) > 0){
                cout << a*b*c;
                return 0;
            }
        }
    }
    return 0;
}
