#include <iostream>
using namespace std; 

int main() {
  int length;
  cout << "length: ";
  cin >> length;

  int width;
  cout << "width: ";
  cin >> width;

  double area = length * width;
  double perimeter = length * 2 + width * 2;

  cout << "area is: " << area;
  cout << "\nperimeter is: " << perimeter;
  
  return 0;
}

/*
length: 143
width: 82
area is: 11726
perimeter is: 450
*/