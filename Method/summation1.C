/*
summation()
*/
#include<iostream>
using namespace std ;

void summation()
{
 int array[5] = {3, 6, 9, -8, 1};

 int sum = 0;
 for (int i=0; i<5; i++)
  sum += array[i];

 cout << "總和是" << sum;
}
int main(){
 summation();

}
