#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int i,t;
	int x,y;
	
	//x = coin 
	//y = amout of weeks
	cin>>t;
    
	for(i=0;i<t;i++)
	{
	    cin>>x>>y;
	    
	    int result=x*y;
	    cout<<result<<endl;
	    
	}
	
	
	
	return 0;
}
