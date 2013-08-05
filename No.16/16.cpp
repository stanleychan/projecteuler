#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//huge data, using array to save data
void getpower(int (&result)[1000], int num) {
  int bitAdd = 0;
  for (int x = 0; x < 1000 ; x++) {
    for (int i = 0; i < 1000; i++) {
      int a = result[i];
      int sum = a*num + bitAdd;
      bitAdd = sum/10;
      result[i] = sum%10;
    }
  }
 int bitsum = 0;
 for (int m = 0; m < 1000; m++) {
  bitsum += result[m];
 }
 cout << bitsum << endl;
}

int main() {
 int result[1000];
 for (int i = 0; i < 1000; i++) {
  result[i] = 0;
 }
 result[0] = 1;
 getpower(result, 2);
   
return 0;
}
