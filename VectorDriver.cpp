//VectorDriver.cpp
//Brandon Endsley

#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  add_numbers(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "Even index: ";
  print_even(sample_vector);
  cout << endl;

  cout << "Sorted List: ";
  vector_sort(sample_vector);
  print(sample_vector);
  cout << endl;

  cout<<endl<<"is 0 present: "<<is_present(sample_vector,0);
  cout << endl;
  cout << endl << "is 11 present: " << is_present(sample_vector, 11);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  system("pause");
  return 0;
}
