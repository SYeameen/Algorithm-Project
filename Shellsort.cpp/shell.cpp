#include <iostream>
using namespace std;

void ShellSort(int arr[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int j = gap; j < n; j += 1)
        {
            int temp = arr[j];
            int i = 0;

            for (i = j; (i >= gap) && (arr[i - gap] > temp); i -= gap)
            {
                arr[i] = arr[i - gap];
            }
            arr[i] = temp;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ShellSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}