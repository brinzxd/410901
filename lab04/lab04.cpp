#include <iostream>
using namespace std;
int main()
{
    int n, c, f=0;
    cin >> n >> c;
    int *array = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int j = 0; j < n; j++) {
        if (array[j] < c) {
            f++;
        }
    }
    cout << f;
}
