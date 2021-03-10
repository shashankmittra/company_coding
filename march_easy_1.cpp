#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,count;
	cin>>t;
	while(t--){
		cin>>n;
		count=0;
		int var1,var2,var3,res;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				var1 = (arr[i] | arr[j]);
				var2 = (arr[i] & arr[j]);
				var3 = (arr[i] - arr[j]);
				if((var1-var2) == var3){
					//cout<<"pairs - "<<"( "<<i<<" "<<j<<" )"<<endl;
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}