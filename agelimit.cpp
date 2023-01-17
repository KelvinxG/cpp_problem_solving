#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,a,i;
	int t=0;

    cin>>t;
    for(i=0;i<t;i++)
    {
        
        cin>>x>>y>>a;
        
        if (x<=a && y>a)
        {
            cout<<"YES"<<endl;
        }
        else 
            
            cout<<"NO"<<endl;
    }
	
	return 0;
}

