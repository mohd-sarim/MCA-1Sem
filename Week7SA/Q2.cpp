#include <iostream>
#include <string>
using namespace std;

int main() {
	   string str;
	   int length = 0;
	   
	   cout<<"enter string: "<<endl;
	   getline(cin,str);
	   
	   char *ptr = &str[0];
	   
	   while(*ptr != '\0' )
	   {
	   	length++;
	   	ptr++;
	   }
	   
	   cout<<"Length of string is: "<<length<<endl;
	   return 0;

}

