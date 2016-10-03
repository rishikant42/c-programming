#include<iostream>
using namespace std;
int add(int x, int y);
int main()
{
  int a,b,result;
  cout<<"Enter two value\n";
  result = add(a, b);
  cout<<"sum of given two no is "<<result<<"\n";
  return 0;
}

int add(int p, int q)
{
  int z;
  z = p+q;
  return z;
}



