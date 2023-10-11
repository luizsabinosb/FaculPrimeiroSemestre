#include <iostream>

using namespace std;

int main()
{
    int i,j;
    char letra[4][4];

    cout<<"DIGITA AI\n";
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>letra[i][j];
        }
    }

	cout<<endl;
	
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<letra[i][j]<<" ";
        }
        cout<<endl;
    }
}

