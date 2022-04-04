#include <iostream>
using namespace std;

int main()
{
    int N;
    int min = 1000000,max = -1000000;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    cout << min << ' ' << max;
    return 0;
}