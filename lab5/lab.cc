#include <iostream>
using namespace std;
extern int add(int a,int  b);
int sum10(){
  int sum = 0;
  for (int i =1; i <=10;i+=2)
    sum += add(i,i+1);
  return sum;
}

int main(){
  cout <<sum10();
}
