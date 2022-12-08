#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <sstream>
#include <Windows.h>

using namespace std;

int main()
{
 
    ifstream fin("H:\\University NLTU\\OOP_lab2\\task12.txt");
    int n;
    char c;
    cout << "Result: " << endl;
    for (string temp; getline(fin, temp); )
    {
        istringstream iss(temp);

        while (!iss.eof())
        {
            iss >> n;

            if (iss.fail())
            {
                iss.clear();
                iss >> c;
            }
            else if (abs(n) >= 10 && abs(n) <= 99)
                cout << "\t"<< abs(n) << endl;
        }
    }

    system("pause");
    return 0;
}