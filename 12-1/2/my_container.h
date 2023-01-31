#pragma once
#include <iostream>
template <class T>
class MyContainer
{
public:
	MyContainer(int size)
	{
		T* arr = new T[size];
		obj_arr = arr;
		n_elements = size;
	}

	~MyContainer()
	{
		// Implement here
		clear();
	}

	void clear()
	{
		delete[] obj_arr;
		
		
	}
	int size()
	{
		// Implement here
		return n_elements;
	}

	template <class U>
	friend std::istream& operator>> (std::istream& in, MyContainer<U>& b);
	template <class U>
	friend std::ostream& operator<< (std::ostream& out, MyContainer<U>
		& b);
protected:
	T* obj_arr = NULL;
	int n_elements;
};
template<class T>
std::istream& operator>> (std::istream& in, MyContainer<T>& b)
{
	// Implement here
	for (int i = 0; i <  b.n_elements; i++) {
		in >> *(b.obj_arr + i);
	}

	return in;
}

template<class T>
std::ostream& operator<< (std::ostream& out, MyContainer<T>& b)
{
	// Implement here
	
	for (int i = 0; i < b.n_elements; i++) {
		out << *(b.obj_arr + i) << " ";
	}
	std::cout << std::endl;
	return out;
}
