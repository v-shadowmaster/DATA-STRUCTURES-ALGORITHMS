/*

Sort an array in wave form

Given a sorted array arr[] of integers (in ascending order), rearrange the elements in-place to form a wave-like array.
An array is said to be in wave form if it satisfies the following pattern: arr[0] ≥ arr[1] ≤ arr[2] ≥ arr[3] ≤ arr[4] ≥ ...
In other words, every even-indexed element should be greater than or equal to its adjacent odd-indexed elements (if they exist).

Note: The given array is sorted in ascending order, and modify the given array in-place without returning a new array.

Input: arr[] = [1, 2, 3, 4, 5]
Output: [2, 1, 4, 3, 5]
Explanation: Array elements after sorting it in the waveform are 2, 1, 4, 3, 5.

Input: arr[] = [2, 4, 7, 8, 9, 10]
Output: [4, 2, 8, 7, 10, 9]
Explanation: Array elements after sorting it in the waveform are 4, 2, 8, 7, 10, 9.

*/

#include <iostream>
#include <vector>

using namespace std;

void solution(vector<int> &a)
{
    for (int i = 0; i < a.size(); i += 2)
    {
        if (a[i] < a[i + 1] && i != a.size() - 1)
        {
            swap(a[i], a[i + 1]);
        }
    }

    for (auto element : a)
        cout << element << " ";
    cout << endl;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 4, 7, 8, 9, 10};

    vector<vector<int>> test_cases = {a, b};

    for (auto test_case : test_cases)
    {
        solution(test_case);
    }
}