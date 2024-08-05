#include <math.h>
#include <iostream>
#include <vector>
#include <limits>
using namespace std;


void pr(const vector<string>&v) {
for (string num : v) {
cout << num << endl;
}
cout << endl;
}

vector <string> func1(vector<string>& v){
vector<string> v2(v.size());
  int n = v.size();
  for (int i = 0; i < n; ++i) {
    v2[i] = v[n-1-i];
  }
  pr(v2);
  return v2;
}

void reverse2(vector<string>& v) {
  int n = v.size();
  for (int i = 0; i < n/2; ++i) {
    swap(v[i], v[n-1-i]);
  }
  pr(v);
}



int main() {
  vector<string> f = {"s", "r", "f", "ggd", "ewrw", "gh"};
  func1(f);
  pr(f);
  reverse2(f);

}