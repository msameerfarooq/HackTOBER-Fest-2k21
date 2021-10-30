#include <iostream>
using namespace std;
int main()
{
    int a[5]={2,3,4,5,6,};
    int sum=0;
    for (int i=0;i<=5;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum of all element"<<sum;
    return 0;

}

