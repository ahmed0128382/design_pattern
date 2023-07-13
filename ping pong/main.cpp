#include <iostream>
#include "calc.hpp"
#include <string.h>
#include "singleton_pattern.hpp"
using namespace std;

int main()
{
    
    counter* c1
      = counter ::GetInstance();
    counter* c2
      = counter ::GetInstance();
    cout<<sum(3,6)<<endl;
    c1->addOne();
    c2->addOne();
    cout<<"the count is: "<<c2->count<<endl;
    c1->addOne();
    cout<<"the count is: "<<c1->count<<endl; 
    cout<<"the count is: "<<c2->count<<endl;


    return 0;
}