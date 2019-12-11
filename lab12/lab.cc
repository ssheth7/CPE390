#include <iostream>
using namespace std;
extern int mult(int x, int y);//multiplies x and y using logical shifts
int main(){
  cout << mult(8, 7) << '\n';
}
