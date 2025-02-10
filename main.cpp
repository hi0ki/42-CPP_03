#include <iostream>

class a {
	private:
		int a;
	public:
		void printa() {
			std::cout << a << std::endl;
		}
};

class b :  public a{
	public:
		void printvar() {
			// std::cout << a << std::endl;
			printa();
		}
};

// class d : public b {
// 	public:
// 		void printd() {
// 			std::cout << a << std::endl;
// 			printa();
// 		}
// };

int main() {
	b obj;

	// obj.a;
	// obj.printa();
	return 0;
}