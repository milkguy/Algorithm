//
// Created by 喝牛奶的小凯的MacBook on 2021/1/18.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[10]={1,4,2,3,5,9,8,7,0,6};
    sort(a,a+10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}