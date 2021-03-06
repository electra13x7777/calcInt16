// File: calcInt32.c
//
// Original Author: Alex Barney
// Description: A lightweight terminal based calculator

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Bitwise Operaton Macros
#define COM(X) (~(X))
#define ALS(X, Y) ((X) << (Y))
#define ARS(X, Y) ((X) >> (Y))
#define AND(X, Y) ((X) & (Y))
#define OR(X, Y) ((X) | (Y))
#define XOR(X, Y) ((X) ^ (Y))

int bin;

void dec_to_bin(int a)
{
	char fourbyteArr[9];
   	char threebyteArr[9];
    memset(&fourbyteArr, 9, 0);
    memset(&threebyteArr, 9, 0);

   	//2^31
    if(((uint32_t) (a)) - 2147483648 >= 0)
    {
        fourbyteArr[0] = '1';
        a-=2147483648;
    }
    else
    {
        fourbyteArr[0] = '0';
    }

    //2^30
    if(a - 1073741824 >= 0)
    {
        fourbyteArr[1] = '1';
        a-=1073741824;
    }
    else
    {
        fourbyteArr[1] = '0';
    }

    //2^29
    if(a - 536870912 >= 0)
    {
        fourbyteArr[2] = '1';
        a-=536870912;
    }
    else
    {
        fourbyteArr[2] = '0';
    }

    //2^28
    if(a - 268435456 >= 0)
    {
        fourbyteArr[3] = '1';
        a-=268435456;
    }
    else
    {
        fourbyteArr[3] = '0';
    }

    //2^27
    if(a - 134217728 >= 0)
    {
        fourbyteArr[4] = '1';
        a-=134217728;
    }
    else
    {
        fourbyteArr[4] = '0';
    }

    //2^26
    if(a - 67108864 >= 0)
    {
        fourbyteArr[5] = '1';
        a-=67108864;
    }
    else
    {
        fourbyteArr[5] = '0';
    }

    //2^25
    if(a - 33554432 >= 0)
    {
        fourbyteArr[6] = '1';
        a-=33554432;
    }
    else
    {
        fourbyteArr[6] = '0';
    }


    //2^24
    if(a - 16777216 >= 0)
    {
        fourbyteArr[7] = '1';
        a-=16777216;
    }
    else
    {
        fourbyteArr[7] = '0';
    }

	printf( "%s", fourbyteArr);
    memset(&fourbyteArr, 9, 0);

	/*-------24BIT-------*/
    //2^23
    if(a - 8388608 >= 0)
    {
        threebyteArr[0] = '1';
        a-=8388608;
    }
    else
    {
        threebyteArr[0] = '0';
    }

    //2^22
    if(a - 4194304 >= 0)
    {
        threebyteArr[1] = '1';
        a-=4194304;
    }
    else
    {
        threebyteArr[1] = '0';
    }

    //2^21
    if(a - 2097152 >= 0)
    {
        threebyteArr[2] = '1';
        a-=2097152;
    }
    else
    {
        threebyteArr[2] = '0';
    }

    //2^20
    if(a - 1048576 >= 0)
    {
        threebyteArr[3] = '1';
        a-=1048576;
    }
    else
    {
        threebyteArr[3] = '0';
    }

    //2^19
    if(a - 524288 >= 0)
    {
        threebyteArr[4] = '1';
        a-=524288;
    }
    else
    {
        threebyteArr[4] = '0';
    }

    //2^18
    if(a - 262144 >= 0)
    {
        threebyteArr[5] = '1';
        a-=262144;
    }
    else
    {
        threebyteArr[5] = '0';
    }

    //2^17
    if(a - 131072 >= 0)
    {
        threebyteArr[6] = '1';
        a-=131072;
    }
    else
    {
        threebyteArr[6] = '0';
    }
	 //2^16
    if(a - 65536 >= 0)
    {
        threebyteArr[7] = '1';
        a-=65536;
    }
    else
    {
        threebyteArr[7] = '0';
    }

    printf("%s", threebyteArr);
    memset(&threebyteArr, 9, 0);
	bin = a;
}

void dec_to_bin16()
{
	int a = bin;
	char twobyteArr[9];
   	char byteArr[9];
    memset(&byteArr, 9, 0);


    /*-------16BIT-------*/
    //2^15
    if(a - 32768 >= 0)
    {
        twobyteArr[0] = '1';
        a-=32768;
    }
    else
    {
        twobyteArr[0] = '0';
    }
    //2^14
    if(a - 16384 >= 0)
    {
        twobyteArr[1] = '1';
        a-=16384;
    }
    else
    {
        twobyteArr[1] = '0';
    }

    //2^13
    if(a - 8192 >= 0)
    {
        twobyteArr[2] = '1';
        a-=8192;
    }
    else
    {
        twobyteArr[2] = '0';
    }

    //2^12
    if(a - 4096 >= 0)
    {
        twobyteArr[3] = '1';
        a-=4096;
    }
    else
    {
        twobyteArr[3] = '0';
    }

    //2^11
    if(a - 2048 >= 0)
    {
        twobyteArr[4] = '1';
        a-=2048;
    }
    else
    {
        twobyteArr[4] = '0';
    }

    //2^10
    if(a - 1024 >= 0)
    {
        twobyteArr[5] = '1';
        a-=1024;
    }
    else
    {
        twobyteArr[5] = '0';
    }

    //2^9
    if(a - 512 >= 0)
    {
        twobyteArr[6] = '1';
        a-=512;
    }
    else
    {
        twobyteArr[6] = '0';
    }

    //2^8
    if(a - 256 >= 0)
    {
        twobyteArr[7] = '1';
        a-=256;
    }
    else
    {
        twobyteArr[7] = '0';
    }

    printf("%s", twobyteArr);
    memset(&twobyteArr, 9, 0);

	/*-------8BIT-------*/
    // 2^7
    if(a - 128 >= 0)
    {
        byteArr[0] = '1';
        a-=128;
    }
    else
    {
        byteArr[0] = '0';
    }

    // 2^6
    if(a - 64 >= 0)
    {
        byteArr[1] = '1';
        a-=64;
    }
    else
    {
        byteArr[1] = '0';
    }

    // 2^5
    if(a - 32 >= 0)
    {
        byteArr[2] = '1';
        a-=32;
    }
    else
    {
        byteArr[2] = '0';
    }

    // 2^4
    if(a - 16 >= 0)
    {
        byteArr[3] = '1';
        a-=16;
    }
    else
    {
        byteArr[3] = '0';
    }

    // 2^3
    if(a - 8 >= 0)
    {
        byteArr[4] = '1';
        a-=8;
    }
    else
    {
        byteArr[4] = '0';
    }

    // 2^2
    if(a - 4 >= 0)
    {
        byteArr[5] = '1';
        a-=4;
    }
    else
    {
        byteArr[5] = '0';
    }

    // 2^1
    if(a - 2 >= 0)
    {
        byteArr[6] = '1';
        a-=2;
    }
    else
    {
        byteArr[6] = '0';
    }

    // 2^0
    if(a - 1 >= 0)
    {
        byteArr[7] = '1';
        a-=1;
    }
    else
    {
        byteArr[7] = '0';
    }

	printf("%s", byteArr);
	memset(&bin, 0, 0);
}

void printHelp()
{
	printf("┏━━━━━━━━━━━━━━━┓\n");
	printf("┃ h - Help Menu ┃\n");
	printf("┃ q - Quit Calc ┃\n");
	printf("┃ c - Credits   ┃\n");
	printf("┃               ┃\n");
	printf("┃    OP LIST    ┃\n");
	printf("┃ ~ == ~  :: COM┃\n");
	printf("┃ + == +  :: ADD┃\n");
	printf("┃ - == -  :: SUB┃\n");
	printf("┃ * == *  :: MUL┃\n");
	printf("┃ / == /  :: DIV┃\n");
	printf("┃ < == << :: ALS┃\n");
	printf("┃ > == >> :: ARS┃\n");
	printf("┃ & == &  :: AND┃\n");
	printf("┃ | == |  :: OR ┃\n");
	printf("┃ ^ == ^  :: XOR┃\n");
	printf("┗━━━━━━━━━━━━━━━┛\n");
}

void printCredits()
{
	printf("Program: calcInt32\n");
	printf("Description: A lightweight terminal based calculator\n");
	printf("License: WTFPL\n");
	printf("Author: Alex Barney\n");
	printf("Website: http://www.alexbarney.xyz\n");
	printf("Upstream URL: https://github.com/electra13x7777/calcInt\n");
}

int main()
{
	size_t buf = 256;
	char* s = (char*)malloc(buf);
	char* tok;
	char* a;
	char* b;
	char* c;
    int32_t x, y, z;
    printf("\033[1;39m┏━━━━━━━━━━━━━━━┓\n");
    printf("\033[1;39m\033[1;32m3\033[1;31m2 \033[1;36mB\033[1;33mi\033[1;34mt \033[1;35mCalculator\033[1;39m\n");
    printf("┗━━━━━━━━━━━━━━━┛");

	while(1)
	{
		printf("\n$ ");
		fgets(s, sizeof(s), stdin);
		char* rest = s;
		int count = 0;
		while((tok = strtok_r(rest, " ", &rest)))
		{
			count++;
			if(count == 1)
			{
				a = (char*)malloc(sizeof(tok));
				strcpy(a, tok);
			}
			if(count == 2)
			{
				b = (char*)malloc(sizeof(tok));
				b = tok;
			}
			if(count == 3)
			{
				c = (char*)malloc(sizeof(tok));
				c = tok;
			}
		}

		if(count == 1)
		{
			if(a[0] == 'h')
			{
				printHelp();
			}
			if(a[0] == 'q')
			{
				exit(0);
			}
			if(a[0] == 'c')
			{
				printCredits();
			}
		}

		if(count == 2)
		{
			if(strcmp(b, "ans"))
			{
				x = z;
			}
			else
			{
				x = atol(b);
			}
			switch(a[0])
			{
				case('~'):
					z = COM(x);
					printf("~%llu = %llu\n\n   ", x, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" : : %llu\n ~ ", x);
					printf("                                 : :");
					printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  COM\n   ");
					dec_to_bin(z);
					dec_to_bin16();
					printf(" : : %llu\n", z);
					break;
			}
		}

		if(count == 3)
		{
			x = atol(a);
			y = atol(c);
			switch(b[0])
			{
				case('<'):
					z = ALS(x, y);
					printf("%llu << %llu = %llu\n\n   ", x, y, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" :: %llu\n<< ", x);
					dec_to_bin(y);
					dec_to_bin16();
					printf(" :: %llu\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  <<\n   ", y);
					dec_to_bin(z);
					dec_to_bin16();
					printf(" :: %llu\n", z);
					break;
				case('>'):
					z = ARS(x, y);
					printf("%llu >> %llu = %llu\n\n   ", x, y, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" :: %llu\n>> ", x);
					dec_to_bin(y);
					dec_to_bin16();
					printf(" :: %llu\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  >>\n   ", y);
					dec_to_bin(z);
					dec_to_bin16();
					printf(" :: %llu\n", z);
					break;
				case('&'):
					z = AND(x, y);
					printf("%llu & %llu = %llu\n\n   ", x, y, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" : : %llu\n & ", x);
					dec_to_bin(y);
					dec_to_bin16();
					printf(" : : %llu\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  AND\n   ", y);
					dec_to_bin(z);
					dec_to_bin16();
					printf(" : : %llu\n", z);
					break;
				case('|'):
					z = OR(x, y);
					printf("%llu | %llu = %llu\n\n   ", x, y, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" :: %llu\n | ", x);
					dec_to_bin(y);
					dec_to_bin16();
					printf(" :: %llu\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  OR\n   ", y);
					dec_to_bin(z);
					dec_to_bin16();
					printf(" :: %llu\n", z);
					break;
				case('^'):
					z = XOR(x, y);
					printf("%llu ^ %llu = %llu\n\n   ", x, y, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" : : %llu\n ^ ", x);
					dec_to_bin(y);
					dec_to_bin16();
					printf(" : : %llu\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  XOR\n   ", y);
					dec_to_bin(z);
					dec_to_bin16();
					printf(" : : %llu\n", z);
					break;
				case('+'):
					z = x + y;
					printf("%llu + %llu = %llu\n\n   ", x, y, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" : : %llu\n + ", x);
					dec_to_bin(y);
					dec_to_bin16();
					printf(" : : %llu\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  ADD\n   ", y);
					dec_to_bin(z);
					dec_to_bin16();
					printf(" : : %llu\n", z);
					break;
				case('-'):
					z = x - y;
					printf("%llu - %llu = %llu\n\n   ", x, y, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" : : %llu\n - ", x);
					dec_to_bin(y);
					dec_to_bin16();
					printf(" : : %llu\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  SUB\n   ", y);
					dec_to_bin(z);
					dec_to_bin16();
					printf(" : : %llu\n", z);
					break;
				case('*'):
					z = x * y;
					printf("%llu * %llu = %llu\n\n   ", x, y, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" : : %llu\n * ", x);
					dec_to_bin(y);
					dec_to_bin16();
					printf(" : : %llu\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  MUL\n   ", y);
					dec_to_bin(z);
					dec_to_bin16();
					printf(" : : %llu\n", z);
					break;
				case('/'):
					z = x / y;
					printf("%llu / %llu = %llu\n\n   ", x, y, z);
					dec_to_bin(x);
					dec_to_bin16();
					printf(" : : %llu\n / ", x);
					dec_to_bin(y);
					dec_to_bin16();
					printf(" : : %llu\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  DIV\n   ", y);
					dec_to_bin(z);
					dec_to_bin16();
					printf(" : : %llu\n", z);
					break;
			}
		}
	}
}
