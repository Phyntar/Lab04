//VectorDriver.cpp
//Brandon Endsley

#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  //adds 10 random numbers
  add_numbers(sample_vector);

  //prints entire vector
  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  //prints items on even index
  cout << "Even index: ";
  print_even(sample_vector);
  cout << endl;

  //sorts vector from least to greatest than prints
  cout << "Sorted List: ";
  vector_sort(sample_vector);
  print(sample_vector);
  cout << endl;

  //tests if 0 is present which should always be 1 then tests if 11 is present which should always be 0
  cout<<endl<<"is 0 present: "<<is_present(sample_vector,0);
  cout << endl;
  cout << endl << "is 11 present: " << is_present(sample_vector, 11);
  cout << endl;
  
  //prints a sum of all values in vector
  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  system("pause");
  return 0;
}
