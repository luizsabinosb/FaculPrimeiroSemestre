#include <iostream>

using namespace std;

int main()
{
    int n[20],i,j=0;

    for(i=0;i<20;i++)
    {
        cin>>n[i];
    }
    for(i=19,j=0;i>=0,j<20;i--,j++)
    {
    	cout<<"N["<<j<<"] = "<<n[i]<<endl;
	}
}
