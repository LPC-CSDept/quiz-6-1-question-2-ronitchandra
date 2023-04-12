#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &n1, int &n2, int &n3)
{
    cin >> n1 >> n2 >> n3;
}
int findMin(int n1, int n2, int n3)
{
    int min;
    if ((n1 < n2) && (n1 < n3))
        min = n1;
    if ((n2 < n1) && (n2 < n3))
        min = n2;
    if ((n3 < n1) && (n3 < n2))
        min = n3;
    return min;
}
void printResult(int n1, int n2, int n3, int min)
{
    cout << n1 << "\t" << n2 << "\t" << n3 << "\t" << min << endl;
}
