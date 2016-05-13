#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int statistic();
int main() {
  statistic();
  return 0;
}
int statistic() {
char* nums_digit[] = {"one", "two", "three", "four", "five", "six", "seven",
  "eight","nine"};

char* nums_ten[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen",
  "sixteen","seventeen","eighteen","nineteen"}; 

char* nums_tens[] = {"twenty","thirty","forty","fifty","sixty","seventy",
  "eighty","ninety"};

char* hundred = "hundred";
char* and_ = "and";
char* thousand = "onethousand";
int count_digit = 0;
// count the digit repeat times and number of character
count_digit = sizeof(nums_digit)/sizeof(nums_digit[0]);
int count = 0;
for (int i = 0; i < count_digit; i++) {
  count += strlen(nums_digit[i]);
}
count *= 290; 
cout << count << endl;
// count the tens times and character
int c_ten = 0;
int count_ten = sizeof(nums_ten)/sizeof(nums_ten[0]);
for (int i = 0; i < count_ten; i++) {
  c_ten += strlen(nums_ten[i]);
}
c_ten *= 10; 
count += c_ten;
cout << count << endl;
c_ten = 0;
for (int i = 0; i < 8; i++ ) {
  c_ten += nums_tens[i];
}
c_ten *= 100;
count += c_ten;
cout << count << endl;
// Not resolved yet ,but this problem is not interesting , so stop here

}

