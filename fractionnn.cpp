#include<iostream>

using namespace std;

struct fraction{
	int num;
	int den;
	
};

//to calculate the sum of n numbers of fractions
fraction add(int n , struct fraction arr[])
{
	int i;
	fraction x;
	x.den=1, x.num=0;
	//calculation of denominator
	for(i=0;i<n;i++)
	{
		x.den=x.den * arr[i].den ;
	}
	//calculation of numerator
	for(i=0;i<n;i++)
	{
		x.num+=((x.den/arr[i].den) * arr[i].num );
	}
	
	return x;
}
int main()
{
	struct fraction arr[100],z;
	int n, i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i].num>>arr[i].den;
	}

	z=add(n,arr);
	cout<<z.num<<"/"<<z.den;
	return 0;
}
