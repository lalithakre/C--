#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *b=&a;
    cout<<a<<"\nAddress:"<<b<<endl;
    cout<<*b;
}