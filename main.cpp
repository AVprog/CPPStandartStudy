#include <iostream>
#include <string.h>
#include <algorithm>
#include <map>
#include <vector>
 
using namespace std;

class Employee
{
  char name[100];
  int payment;
  public:
  
  Employee(char * name, int payment)
  {
     strcpy(this->name,name);
     this->payment=payment;

  }  

  char* GetName()
  {
    return name;
  }

  void SetName(char* name)
  {
    strcpy(this->name,name);
  }

  int GetPayment()
  {
    return this->payment;
  }

  void SetPayment(int payment)
  {
    this->payment=payment;
  }
};

int main()
{
 
  char buf[]="ivan";
  Employee* emp1=new Employee(buf,1000);
  Employee* emp2=new Employee("Masha",500);
  Employee* emp3=new Employee("Gaga",800);
  vector<Employee*> empVector1{emp1,emp2,emp3};

  for(auto emp:empVector1)
  {
    cout<<emp->GetName()<<" "<<emp->GetPayment()<<endl;
  }

  cout<<endl;

  int res=count_if(empVector1.begin(),empVector1.end(),[](auto empItem){return empItem->GetPayment()>600;});

  cout<<res<<endl<<endl;

    return 0;
}
