#include <iostream>
#include <time.h>
using namespace std;
// This is recursive
int route(int i, int j) {
    if (i == 0 || j == 0) return 1;
return route(i-1,j) + route(i,j-1);
}


// This is DP solution
bool bn[21][21];
long m[21][21];
long route2(int i, int j) {
    if (!bn[i][j]) {
        if (i == 0 || j == 0) {
            m[i][j] = 1;
        } else {
            m[i][j] = route2(i-1,j) + route2(i,j-1);
        }
        bn[i][j] = true;
    }
    
    return m[i][j];
}
int main() {
//    time_t now;
//    now = time(NULL);
//    cout << ctime(&now);
//    int i = 0;
//    i = route(20,20);
//    cout << i << endl;
//    cout << ctime(&now);
      time_t now;
      now = time(NULL);
      cout << ctime(&now);
      for (int i = 0; i <= 20; i++) {
          for (int j = 0; j <= 20; j++) {
            bn[i][j] = false;
          }
      }
      cout << route2(20,20) <<endl;
      cout << ctime(&now);
}
