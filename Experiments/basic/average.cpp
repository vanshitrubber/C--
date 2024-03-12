#include <iostream>

using namespace std;

int main() {
  int subjects, i;
  float marks, total = 0.0f, averageMarks, percentage;

  cout << "Enter number of subjects\n";
  cin >> subjects;

  cout << "Enter marks of subjects\n";
  for (i = 0; i < subjects; i++) {
    cin >> marks;
    total += marks;
  }
  
  averageMarks = total / subjects;
  cout << "Total Marks = " << total;
  cout << "\nAverage Marks = " << averageMarks;
  return 0;
}