#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define AS_KV(x) #x << " = " << x

int main() {
  int i = 4;
  string s = "line";

  cerr << AS_KV(i) << endl;
  cerr << AS_KV(s) << endl;

  return 0;
}