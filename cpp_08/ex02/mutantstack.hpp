#include <iostream>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
	/* data */
public:
	MutantStack() {};
	MutantStack(MutantStack&) {};
	MutantStack &operator=(const MutantStack&){
		std::stack<T>::operator=(obj);
		return *this;
	};
	~MutantStack();
	class iterator : public std::iterator<std::bidirectional_iterator_tag, T> {
	private:
		T	*ptr;
	public:
		iterator(T *ptr) { this->ptr = ptr;}
		bool operator!=(const iterator& obj){return this->ptr != obj.ptr;};
		bool operator==(const iterator& obj){return this->ptr == obj.ptr;};
		T operator*(){return *this->ptr;};
		iterator operator++(){
			this->ptr--;
			return *this;
		};//preffix
		iterator operator++(int n){
			iterator old = *this;
			this->ptr--;
			return old;
		};//postfix
		iterator operator--(){
			this->ptr++;
			return *this;
		};//preffix
		iterator operator--(int n){
			iterator old = *this;
			this->ptr++;
			return old;
		};//postfix
	};
	iterator begin() {return iterator(&this->top());}
	iterator end() {return iterator(&this->top() - this->size() - 1);}
};
