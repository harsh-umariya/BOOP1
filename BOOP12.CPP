#include<iostream.h>
#include<conio.h>
class parent1
{
public:
parent1()
{
cout<<"the value of parent1 is 10"<<endl;
}
};

class parent2
{
public:
parent2()
{
cout<<"the value of parent2 is 20"<<endl;
}
};

class child:public parent1,public parent2
{
public:
child()
{
cout<<"the value of parent3 is 30"<<endl;
}
};

int main()
{
clrscr();
child obj;
getch();
return 0;
}
