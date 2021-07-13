#include "bits/stdc++.h"
#define ll long long int
using namespace std;

void insertionsort(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int curr = v[i];
        int j = i - 1;
        while (v[j] > curr && j >= 0)
        {
            v[j + 1] = v[j];
            j--;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
                cout << endl;
            }
        }
        v[j + 1] = curr;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout << endl;
    }
}

int main()
{
    int size;
    cin >> size;

    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    insertionsort(v);
    return 0;
}