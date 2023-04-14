#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) 
{
    if (n < 2) 
        return false; 
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
            return false;
    }
    return true;
}

int main() 
{
    int arr[] = {0,9,5,3,1,-1,2,4,6,1,0,9,5,4,-7,-9,5,-3,-2,8,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) 
    {
        if (isPrime(arr[i])) 
            cout << arr[i] << " ";
    }
    return 0;
}
