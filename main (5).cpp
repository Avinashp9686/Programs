	#include<iostream>
	using namespace std;
	int main()
	{
	    int t;
	cin>>t;
	for(int i=0; i < t; i++){
	    int x, y;
	    cin>>x>>y;
	    if((x>y) || (x==y)){
	        cout << (x-y) << endl;
	    }
	    else{
	        cout << (y-x) << endl;
	    }
	    
	}
	return 0;
}