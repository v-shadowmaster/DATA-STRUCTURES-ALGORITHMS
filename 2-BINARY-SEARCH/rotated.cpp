#include <iostream>
#include <vector>

using namespace std;

int rotated(vector<int> &a, int s, int e, int t)
{

    while (s <= e)
    {
        int m = s + (e - s) / 2;

        if (a[m] == t)
        {
            return m;
        }
        if (a[s] <= a[m])
        {
            if (a[s] <= t && t <= a[m])
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
        }
        else
        {

            if (a[m] <= t && t <= a[e])
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
        }
    }

    return -1;
}