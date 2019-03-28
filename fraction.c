#include<stdio.h>
 typedef struct {
	long long n,d;
}fraction;

fraction add(fraction x, fraction y)
{
	 fraction f;
	if(x.d>y.d)
	{
		f.d=(x.d * y.d)/y.d ;
		
	}
	else {
	
		f.d=(x.d * y.d) /x.d ;
	}
	f.n=((f.d/x.d)*x.n) + ((f.d/y.d)*y.n);
	return f;
}
int main()
{
	 fraction x, y, z ;
	
	scanf("%llu %llu %llu %llu",&x.n,&x.d,&y.n,&y.d);
	z=add(x,y);
	printf("%llu %llu",z.n,z.d);
	return 0;
}
