#include <iostream>


int main()
{
	float area;
	float width, length;

	std::cout<<“Enter width:";
	std::cin>>width;
	std::cout<<"\nEnter length: ";               
  std::cin>>length;
	
	area = width * length;
	std::cout<<“The area is "<<area;
	//another way to print it
	std::cout<<“The area is “<< width * length;
}
