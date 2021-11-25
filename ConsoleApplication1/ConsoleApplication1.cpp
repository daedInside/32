#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
    int N;
    cout << "N="; cin >> N;
    int* arr = new int[N];
    cout << "ВВедите числа" << (N) << ":\n";
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    int   k , a = N / 2;
    if (N%2) k = a + 1;
    else       k = a;
    
    
    

}
