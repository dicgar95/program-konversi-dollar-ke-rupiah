#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int rp,d;
  std::cout << "konversi dollar ke rupiah" << '\n';
  std::cout << "masukan nilai dollar :";
  std::cin >> d;
  rp=d*15000;
  std::cout << "nilai rupiahnya adalah :"<<rp << '\n';
  return 0;
}
