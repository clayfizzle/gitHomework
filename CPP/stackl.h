#include "stack.h"
#include "list.h"

using namespace std;

/*
 * Simple as possible stack, did not implement the big-3
 * using the linked list as given in chapter 3.
 */

template <typename Object>
class stackl : public stack<Object> {
public:
	bool isEmpty() const {
		return l.empty();
	}

	stackl & pop() {
		l.pop_front();
		return *this;
	}

	Object & top() {
		return l.front();
	}

	stackl & push(const Object & h) {
		l.push_front(h);
	}

private:
	List<Object> l;
};