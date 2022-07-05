#include<iostream.h>
#include<conio.h>
class base
{
public:
int a;
base()
{
a=0;
cout<<"a is:"<<a;
}
base (float b)
{
b=3.14;
cout<<"\nb is"<<b;
}
};
/*base func(int x,int y)
{
area=a*b;
cout<<"nothing";
}*/
int main()
{
base obj1;
base obj2(1.34);
getch();
return 0;
}
