#include <iostream>
using namespace std;

void printPFsInPairs(int n)
{
    for (int i = 1; i * i <= n; i++)
        if (n % i == 0)
            cout << i << "*" << n / i << endl;
            
}


int main()
{
    printf("Values: \n--------------------\n");
    int n = 24;
    printPFsInPairs(n);
    return 0;
}
