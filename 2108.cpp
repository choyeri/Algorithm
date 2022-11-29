#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<int> arr;

int main() {
    int N, tmp, range, middle = 0, most_val, mean = 0;
    int most = -9999;
    int numarr[8001] = { 0, };
    bool flag = false;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
        mean += tmp;
        numarr[tmp + 4000]++;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < 8001; i++)
    {
        if (numarr[i] == 0)
            continue;
        if (numarr[i] == most)
        {
            if (flag)
            {
                most_val = i - 4000;
                flag = false;
            }
        }
        if (numarr[i] > most)
        {
            most = numarr[i];
            most_val = i - 4000;
            flag = true;
        }
    }
    middle = arr[arr.size() / 2];
    mean = round((float)mean / N);
    range = arr.back() - arr.front();
    cout << mean << '\n' << middle << '\n' << most_val << '\n' << range;
}