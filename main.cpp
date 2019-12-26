#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
#include "f.h"

int main()
{
  vector<int> v{3,4,52,22,22,32,33,11};
   int const target=3;
  int c=count(v.begin(),v.end(),target);
  std::cout<<c<<endl;
  int odd;
  odd=count_if(v.begin(),v.end(),[](auto x){return x%2!=0;});
  cout<<"odd:"<<odd<<endl;
  for(auto item:v)
  {
     cout<<item<<" ";
  }
}