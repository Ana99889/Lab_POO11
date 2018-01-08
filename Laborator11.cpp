#include<iostream>
#include<vector>

using namespace std;
template <typename T>

class Stack{
public:
	int size() const;
	bool isEmpty() const;
	const T& top() const
	{
		if (isEmpty())
            cout<<"Stiva goala\n";
		return v.back();
	}
	void push(const T& chestie);
	void pop();

	vector <T> v;
};

template <typename T> bool Stack<T>::isEmpty() const
{
    return v.empty();
}

template <typename T> void Stack<T>::push(const T& elem)
{
    v.push_back(elem);
}

template <typename T> void Stack<T>::pop()
{
    if(isEmpty())
        cout<<"Stiva este goala! \n";
    else
        v.pop_back();
}

int main()
{
    Stack <int> vect;
    vect.push(1);
    vect.push(2);
    vect.push(5);
    vect.push(9);
	//vect.push(78);
    cout<<"Stiva cu elemente int: \n";
       while (!vect.isEmpty())
        {
        cout << vect.top() << "\n";
        vect.pop();
		}
    cout << "\n";
    cout<<"Stiva cu elemente char: \n";
    Stack <char> sir;
    sir.push('a');
    sir.push('b');
    sir.push('c');
    sir.push('d');
     while (!sir.isEmpty())
        {
        cout << sir.top() << "\n";
        sir.pop();
		}
}
