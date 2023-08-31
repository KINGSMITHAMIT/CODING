// Rushitote went to a programming contest to distribute apples and oranges to the contestants.
// He has N apples and M oranges, which need to be divided equally amongst the contestants. Find the maximum possible number of contestants such that:
// Every contestant gets an equal number of apples; and
// Every contestant gets an equal number of oranges.
// Note that every fruit with Rushitote must be distributed, there cannot be any left over.
// For example, 
// 2 apples and 4 oranges can be distributed equally to two contestants, where each one receives 1 apple and 2 oranges.
// However, 
// 2 apples and 5 oranges can only be distributed equally to one contestant.
// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases.
// The first and only line of each test case contains two space-separated integers N and M — the number of apples and oranges, respectively.

// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	int N,M,ans;
	cin>>N>>M;
	
	ans=__gcd(N,M);
	
	cout<<ans<<endl;
	}
	return 0;
}
