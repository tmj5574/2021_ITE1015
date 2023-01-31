#include <iostream>

template <class T>
class Node
{
public:
	T data;
	Node<T>* next;
};


template <class T>
class List {
private:
	Node<T>* head;
public:
	List() : head(NULL) {};
	~List() {};//free resources
	List(T* arr, int n_nodes);//create a list with n_nodes
	void insert_at(int idx, const T& data);
	void remove_at(int idx);
	void pop_back();
	void push_back(const T& val);
	void pop_front();
	void push_front(const T& val);
	template <class U>
	friend std::ostream& operator<<(std::ostream& out, List<U>& rhs);
};

template<class T>
List<T>::List(T* arr, int n_nodes) {

	Node<T>* arrlist = new Node<T>[n_nodes];
	for (int i = 0; i < n_nodes; i++) {
		arrlist[i].data = arr[i];
	}

	for (int i = 0; i < n_nodes - 1; i++) {
		arrlist[i].next = &arrlist[i+1];
	}

	arrlist[n_nodes - 1].next = NULL;


	
	head = arrlist;

}

template<class T>
void List<T>::pop_back() {

	int cnt = 0;
	while (head[cnt].next != NULL) {
		cnt++;
	}
	int size = cnt; // size = 3


	Node<T>* templist = new Node<T>[size];

	for (int i = 0; i < size; i++) {
		templist[i].data = head[i].data;
	}

	for (int i = 0; i < size - 1; i++) {
		templist[i].next = &templist[i + 1];
	}

	templist[size - 1].next = NULL;
	head = templist;

}

template<class T>
void List<T>::push_back(const T& val) {

	int cnt = 0;
	while (head[cnt].next != NULL) {
		cnt++;
	}
	int size = cnt + 2; // size = 5
	
	Node<T>* templist = new Node<T>[size];

	for (int i = 0; i < size; i++) {
		templist[i].data = head[i].data;
		if (i == size - 1) {
			templist[i].data = val;
		}
	}

	for (int i = 0; i < size - 1; i++) {
		templist[i].next = &templist[i + 1];
	}

	templist[size - 1].next = NULL;
	head = templist;
}

template <class T>
void List<T>::pop_front() {
	int cnt = 0;
	while (head[cnt].next != NULL) {
		cnt++;
	}
	int size = cnt; //4
	Node<T>* templist = new Node<T>[size];

	for (int i = 0; i < size; i++) {
		templist[i].data = head[i+1].data;
	}

	for (int i = 0; i < size - 1; i++) {
		templist[i].next = &templist[i + 1];
	}

	templist[size - 1].next = NULL;
	head = templist;

}

template<class T>
void List<T>::push_front(const T& val) {

	int cnt = 0;
	while (head[cnt].next != NULL) {
		cnt++;
	}
	int size = cnt+2;
	Node<T>* templist = new Node<T>[size];

	for (int i = 0; i < size; i++) {
		if (i == 0) {
			templist[i].data = val;
		}
		else {
			templist[i].data = head[i-1].data;
		}
	}

	for (int i = 0; i < size - 1; i++) {
		templist[i].next = &templist[i + 1];
	}

	templist[size - 1].next = NULL;
	head = templist;

}
template<class T>
void List<T>::insert_at(int idx, const T& data) {

	int cnt = 0;
	while (head[cnt].next != NULL) {
		cnt++;
	}
	int size = cnt + 2; 
	Node<T>* templist = new Node<T>[size];

	for (int i = 0; i < size; i++) {

		if (i < idx) {
			templist[i].data = head[i].data;
		}

		else if (i == idx) {
			templist[i].data = data;
		}
		else {
			templist[i].data = head[i-1].data;
		}
	}

	for (int i = 0; i < size - 1; i++) {
		templist[i].next = &templist[i + 1];
	}

	templist[size - 1].next = NULL;
	head = templist;


}

template <class T>
void List<T>::remove_at(int idx) {
	
	int cnt = 0;
	while (head[cnt].next != NULL) {
		cnt++;
	}
	int size = cnt;
	Node<T>* templist = new Node<T>[size];

	for (int i = 0; i < size; i++) {

		if (i < idx) {
			templist[i].data = head[i].data;
		}

		else {
			templist[i].data = head[i+1].data;
		}
	}

	for (int i = 0; i < size - 1; i++) {
		templist[i].next = &templist[i + 1];
	}

	templist[size - 1].next = NULL;
	head = templist;
}

template<class T>
std::ostream& operator<<(std::ostream& out, List<T>& rhs) {

	int cnt = 0;
	while (rhs.head[cnt].next != NULL){
		cnt++;
	}

	for (int i = 0; i < cnt + 1; i++) {
		if (i == cnt) {
			out << rhs.head[i].data;
			continue;
		}
		out << rhs.head[i].data << ",";
	}

	return out;
}
