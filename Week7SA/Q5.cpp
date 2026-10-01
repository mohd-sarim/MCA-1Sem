#include<iostream>
using namespace std;

class Greatest
{
	int num1, num2;
	
	public:
		void set_data(int a, int b){
			this->num1 = a;
			this->num2 = b;
		}
		int greatest()
		{
			if(this->num1 > this->num2)
			this->num1;
			else
			this->num2;
		}
};
int main()
{
	Greatest obj1;
	int a, b;
	cout<<"enter two number: "<<endl;
	cin>>a>>b;
	
	obj1.set_data(a,b);
	
	cout<<"greatest number is: "<<obj1.greatest()<<endl;
	
	return 0;
	
}
//#include <iostream>
//using namespace std;
//
//class Greatest
//{
//    int num1, num2;
//
//public:
//    void setData(int a, int b)
//    {
//        this->num1 = a;
//        this->num2 = b;
//    }
//
//    int greatest()
//    {
//        if (this->num1 > this->num2)
//            return this->num1;
//        else
//            return this->num2;
//    }
//};
//
//int main()
//{
//    Greatest obj;
//    int a, b;
//
//    cout << "Enter two numbers: ";
//    cin >> a >> b;
//
//    obj.setData(a, b);
//
//    cout << "Greatest number = " << obj.greatest();
//
//    return 0;
//}

