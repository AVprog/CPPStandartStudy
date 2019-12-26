#include <iostream>
#include <vector>
#include <string>

using namespace std;
#include "f.h"

int main()
{
    int r=f1(444);
    cout<<r<<endl;
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;
}