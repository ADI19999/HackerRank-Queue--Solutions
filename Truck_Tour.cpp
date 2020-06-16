#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    long long tank = 0;
    unsigned int pump =    0;
    for (unsigned int i = 0; i < n; ++i)
        {
        unsigned int liters;
        unsigned int kilometers;
        cin >> liters >> kilometers;
        tank +=    (long long) (unsigned long long) liters -
                (long long) (unsigned long long) kilometers;
        if (tank < 0)
            {
            pump = i + 1;
            tank = 0;
            }
        }
    cout << pump << endl;
}
