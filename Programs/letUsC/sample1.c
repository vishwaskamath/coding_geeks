// profit loss //
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int cp,sp,profit = 0,loss = 0;
	cin>>cp>>sp;
	if(sp>=cp)
	{
	    profit = sp - cp;
	    cout <<"Profit made " << profit<<endl;
	}
	else
	{
	    loss = cp - sp;
	    cout<<"Loss "<< loss<<endl;
	}
	
	
	return 0;
}

