#include<iostream.h>
#include<conio.h>
class base
{
public:
virtual void print()
{
cout<<"Base function"<<endl;
}
};
class derived:public base
{
public:
void print()
{
cout<<"Derived function"<<endl;
}
};

int main()
{
clrscr();
derived d1;
base *b= &d1;
b->print();
return 0;
}



