#include<iostream>
int main()
{
	//question 4
	int numa = 30;
	int numb = 45;
	int unum = 0;
	
	unum = numa;
	//unum is now 30
	numa = numb;
	//numa is now 45
	numb = unum;
	//numb is now 30
	printf("a: %i",numa);
	printf("b: %i", numb);



	
		int i = 0;
		float f = 0;
		char ch = 'a';
		std::cin >> i >> ch >> f;
		std::cout << "i:  " << i << "\nchL:  " << ch << "\nf:  " << f << std::endl;



		system("pause");
}