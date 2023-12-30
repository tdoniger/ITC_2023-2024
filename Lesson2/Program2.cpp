#include <iostream>


int main()
{
	int area;
	int x,y;

	std::cout<<"Enter width:";
	std::cin>>x;
	std::cout<<"\nEnter length: ";	
  std::cin>>y;
	
	area = x * y;
	std::cout<<"The area is "<<area;
}
