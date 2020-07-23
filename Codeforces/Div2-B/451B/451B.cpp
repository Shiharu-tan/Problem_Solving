#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], sorted[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    if (is_sorted(arr, arr + n))
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    sort(sorted, sorted + n);

    int front, back;
    for (front = 0; front < n; front++)
    {
        if (arr[front] != sorted[front])
            break;
    }
    for (back = n - 1; back >= 0; back--)
    {
        if (arr[back] != sorted[back])
            break;
    }
    int rev[back - front + 1];
    for (int i = front, j = 0; i <= back; i++, j++)
    {
        rev[j] = arr[i];
    }
    for (int i = front, j = back - front; i <= back; i++, j--)
    {
        arr[i] = rev[j];
    }
    if (is_sorted(arr, arr + n))
    {
        cout << "yes" << endl;
        cout << front + 1 << " " << back + 1 << endl;
    }
    else
        cout << "no";
    return 0;
}