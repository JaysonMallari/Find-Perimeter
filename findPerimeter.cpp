/*findPerimeter.cpp
Mar 2, 2017
Jayson Mallari
*/

#include <iostream>
using namespace std;

int findPerimeter(int length = 20, int width = 30){
	return 2 * length + 2 * width;
}

int main(){
	//call function w/out argument
	int p = findPerimeter();
	cout<<"Perimeter for findPerimeter() is : "<<p<<endl;

	p = findPerimeter(5,10);
	cout<<"Perimeter for findPerimeter(5,10) is : "<<p<<endl;


	p = findPerimeter(10);
	cout<<"Perimeter for findPerimeter(10) is : "<<p<<endl;
}
