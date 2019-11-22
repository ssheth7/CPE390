#include <iostream>
using namespace std;

int dot(int a[], int b[]){
        int sum = 0;
        for(int i = 0; i < 4; i++)
        sum+= b[i] * a[i];
    return sum;
}
int main(){
    double arr[8] = {3.1, 5.6, 6.0, 7.8, 0.2, 9.5, 4.0, 8.0};
    double  max = arr[0];
    double min = arr[0];
    double sum=0;
    for(int i = 0; i < 8; i++){
        if(arr[i]> max)
            max = arr[i];
        if(arr[i] < min)
        min = arr[i];
        sum+= arr[i];
    }
    cout <<"Min: " << min << " Max: " << max << " Average: " << sum/8<< '\n';
    int A[4] = {3,4,8,2};
    int B[4] = {1,3,2,4};
    cout << dot(A,B) << '\n';

}
//        1 11111111 11111110
// 00000001 FFFFFFFF FFFFFFFF
// 00000001 00000001 00000001
//+===========================
// 00000003 00000001 00000000         
