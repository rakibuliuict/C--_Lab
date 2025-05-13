#include<iostream>
using namespace std;

int add(int n);

int main()
{
    int num;
    cout<<"Enter the End Number: ";
    cin >> num;
    cout<<"The Total SUM= "<< add(num);
    return 0;
}

int add(int n)
{
    int sum=0;
    if(n!=0)
    {
        sum=n+add(n-1);
    }
    return sum;

}