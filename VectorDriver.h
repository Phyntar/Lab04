/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::cin;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// TODO: implement add_numbers
void add_numbers(vector<short> &data)
{
	for (int i = 0; i <= 9; i++)
	{
		data.push_back(rand() % 11);
	}
}

// TODO: implement print_even
// print_even prints items at an even index value such as 0,2,4

void print_even(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i < data.size(); i+=2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}
// TODO: implement is_present
// is_present tests if a value is in the vector

bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();

	while (iter != data.end()) {
		if (*iter == value)
		{
			return true;
		}
		iter++;
	}

	return false;
}
// TODO: implement std::sort function

void vector_sort(vector<short> &data)
{
	std::vector<short>::iterator iter_begin = data.begin();
	std::vector<short>::iterator iter_end = data.begin();

	while (iter_end != data.end())
	{
		iter_end++;
	}
	
	std::sort(iter_begin, iter_end);

}
