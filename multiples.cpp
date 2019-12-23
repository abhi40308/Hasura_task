#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <stack>
#include <map>
#include <string>
#include <cmath> 
#include <cstring>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define spd ios_base::sync_with_stdio(false)

int main()
{   spd;
	int n,m;
	// map <int,string> subs;
	cin>>n>>m;	
	vector<string> ans(n+1, "0");
	for (int i = 0; i < m; ++i)
	{
		int num;
		string s;
		cin>>num>>s;
		for (int i = num; i <= n; i+=num)
		{
			if(ans[i]=="0")
				ans[i] = s;
			else
				ans[i] = ans[i]+s;
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		if(ans[i] == "0")	cout<<i<<endl;
		else	cout<<ans[i]<<endl;
	}
	return 0;
}