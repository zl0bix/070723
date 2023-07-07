#include<iostream>
#include<vector>
#include<string>
#include<typeinfo>
#include<type_traits>

class A {
public:

	virtual~A(){}
};
class B :public A {
public:

	~B()override{}
};


int main() {
	int n = 1;
	//std::cout<<sizeof(n)<<'\n';
	int* ptrN = &n;
	*std::_Ptr_cout << ptrN;
	//int *ptrN = &n;
	std::cin.get();
	//std::cout << sizeof(ptrN) << '\n';
	//std::cout<<static_cast<double>(11.1001);
	//virtual_cast<int*>(ptrN);
	//dinamic_cast<int>(11);
	//const_cast<n>
	//reinterpret_cast 
	return{};
	A* p = new B;
	A* p2 = nullptr;
	A* p3 = new A;
	A& ref = *p;
	A& ref2 = *p3;
	//A& ref3 = *p2;
	std::string tmp = typeid(*p).name();
	try {
		tmp = typeid(*p2).name();
	}
	catch (...) {
		std::cerr << "Everything fine, No\n";
	}
	tmp = typeid(*p3).name();
	tmp = typeid(ref).name();
	tmp = typeid(ref2).name();
	
	
	p = nullptr;
	p3 = nullptr;
	

	return{};
}