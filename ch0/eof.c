#include <stdio.h>
#include <limits.h>

void bit_print(int);

int main(){
	// Won't work
	// unsigned char c;

	// Will work. signed char, char will do too.
	char c;
	int i;
	bit_print(EOF);
	// To find out if char is signed or unsigned by default
	printf ("CHAR_MIN=%d\n", CHAR_MIN);

	printf("sizeof(EOF) = %ld\n", sizeof(EOF));

	do{
		c = getchar();
		i = c;
		bit_print(i);
	}while (c!=EOF);

	return 0;
}

void bit_print(int a){
	int i;
	int n = sizeof(int) * CHAR_BIT;
	int mask = 1 << (n-1); // mask = 100...0
	
	for (i=1; i<=n; i++){
		putchar(((a & mask) == 0)? '0' : '1');
		a <<= 1;
		if (i % CHAR_BIT == 0 && i < n)
			putchar(' ');
	}
	putchar('\n');
}

