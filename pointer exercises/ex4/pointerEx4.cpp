#include <iostream>
using namespace std;
void find_g(int* ptrA,int* ptrB ,int* ptrC ){
    int max = 0;
    if (*ptrA > *ptrB && *ptrA > *ptrC)
    {
        max = *ptrA;
    } 
    if (*ptrB > *ptrA && *ptrB > *ptrC)
    {
        max = *ptrB;
    }
    if (*ptrC > *ptrB && *ptrC > *ptrA)
    {
        max = *ptrC;
    }
    cout << max << "\n" ;
}
void find_s(int* ptrA,int* ptrB ,int* ptrC ){
    int min = 0;
    if (*ptrA < *ptrB && *ptrA < *ptrC)
    {
        min = *ptrA;
    } 
    if (*ptrB < *ptrA && *ptrB < *ptrC)
    {
        min = *ptrB;
    }
    if (*ptrC < *ptrB && *ptrC < *ptrA)
    {
        min = *ptrC;
    }
    cout << min << "\n";
}
int main()
{
    int a, b, c;
    int* ptrA;
    int* ptrB;
    int* ptrC;
    cin >> a >> b >> c;
    ptrA = &a;
    ptrB = &b;
    ptrC = &c;
    find_g(ptrA, ptrB, ptrC);
    find_s(ptrA, ptrB, ptrC);
    return 0;
}