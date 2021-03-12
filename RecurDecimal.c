/* 1/6=0.1(6) */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define max(x,y) ((x>y)?x:y)

int gcd(int a, int b)
{
	if (b>a) return gcd(b,a);
	if (b==0) return a;
	return gcd(a%b,b);
}

void main()
{
int i,p,q,v,two,five,a;
	do {
		printf("numerator : ");
		scanf("%d",&p);
		printf("denominator : ");
		scanf("%d",&q);
	} while (q<=0||p<0);

	v=p/q;
	printf("%d/%d = %d",p,q,v);
	p%=q;
	if (p==0) return;

	v=gcd(p,q);
	if (v>1) {
		p/=v;
		q/=v;
	}

	v=q;	
	for (two=0;v%2==0;two++) v/=2;
	v=q;
	for (five=0;v%5==0;five++) v/=5;

	printf(".");
	for (i=0;i<max(two,five);i++) {
		p*=10;
		v=p/q;
		p%=q;
		printf("%d",v);
	}
	if (p==0) return;

	a=0;
	printf("(");
	while(a!=p) {
		if (a==0) a=p;
		p*=10;
		v=p/q;
		p%=q;
		printf("%d",v);
	}
	printf(")");
}
