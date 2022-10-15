#include <iostream>
#include <time.h>
using namespace std;
int array(int a[], int n, int key)
{
    int mid;
    int low = 0;
    int high = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            cout << " the element is on " << endl;
            return mid + 1;
        }
        if (key < a[mid] )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "the value not found" << endl;
    return 0;
}

int main()
{
    double time_taken;
    clock_t st, et;
    et = clock();
    st = clock();
    
    int n;
    cout << " enter the size of the array" << endl;
    cin >> n;
    int a[n];
    cout << " enter the elements of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << " enter the key element to be searched " << endl;
    cin >> key;
    cout << array(a, n, key) << endl;
    time_taken = ((et - st) / (CLOCKS_PER_SEC * 100));
    cout << " time taken " << time_taken << endl;
    return 0;
}