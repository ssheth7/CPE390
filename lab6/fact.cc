# include <iostream>
#include <array>
using namespace std;

double fact(double x){
  int prod = 1;
  for(int i = 1; i <= x; i++)
    prod *=i;
  return prod;
}

void maxn(int a[]){
  int max = a[0];
  for(int i = 0; i <5;i++)
    if(a[i] > max)
      max = a[i];
  cout << max;
}
int main(){
  cout << fact(5)<< '\n';
  int arr[] = {2, 5, 7, 9, 1};
  maxn(arr);
}
