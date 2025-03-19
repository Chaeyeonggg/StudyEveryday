#include <stdio.h>
int main()
{
	int A;
	int B;
	int C;
	scanf("%d %d %d\n",&A,&B,&C );
	printf("%d\n%d\n%d\n%d\n", ((A + B) % C), (((A % C) + (B % C)) % C), ((A * B) % C), (((A % C) * (B % C)) % C));
	return 0;
}