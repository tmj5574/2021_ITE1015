#include "sorted.h"
#include <algorithm>
#include <functional>
void SortedArray::AddNumber(int num) {
	numbers_.push_back(num);
}

std::vector<int> SortedArray::GetSortedAscending() {
	std::sort(numbers_.begin(), numbers_.end());
	return numbers_;
}

std::vector<int> SortedArray::GetSortedDescending() {
	std::sort(numbers_.begin(), numbers_.end(), std::greater<>());
	return numbers_;
}

int SortedArray::GetMax() {
	std::vector<int>::iterator it;
	it = std::max_element(numbers_.begin(), numbers_.end());
	return *it;
}

int SortedArray::GetMin() {
	std::vector<int>::iterator it;
	it = std::min_element(numbers_.begin(), numbers_.end());
	return *it;
}

SortedArray::SortedArray(){
	
}

SortedArray::~SortedArray() {

}
