#include <iostream>
using namespace std;
float multiply(float x, float y);
int main()
{
        float number_1;
        float number_2;
        float product_of_numbers;
        cout<<"Enter the first number"<<endl;
        cin>>number_1;
        cout<<"Enter the second number"<<endl;
	cin>>number_2;
        product_of_numbers=multiply(number_1, number_2);
        cout<<"Product of two numbers"<<product_of_numbers;<<endl;
        return 0;
}
float multiply(float x, float y)
{
        return(x*y);
}



