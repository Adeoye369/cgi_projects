#include <iostream>
#include <vector>
#include <string>

using namespace std;

int addInt(int a, int b)
{
    int o = a + b;
    return o;
}

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    cout << addInt(23, 43) << "\n";
}
