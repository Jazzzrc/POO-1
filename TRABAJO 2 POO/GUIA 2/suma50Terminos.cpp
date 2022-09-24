#include <iostream>
using namespace std;
int main()
{
    int final=50,
        suma=-1;

    for(int i=3; i<final; i+=4)
    {
      suma+=3;
      cout<<suma<<"   "<<i<<endl;
    }
}
