#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,m,k,res,bet,max,final;
	int track;
	string s;
	cin>>t;
	while(t--){
		cin>>m>>k;
		cin>>s;
		max=0;
		for (int i = 0; i < m; ++i)
		{
			/* code */
			track=i;
			res = 0;
			for(int j=0;j<m;j++)
			{
				if(j!=track)
				{
					bet = int(s[j]) - 48;
					res = (res * 10) + bet;
				}
			}
			final = res % k;
			if(final>max){
				max=final;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}