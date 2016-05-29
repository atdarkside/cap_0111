#include <stdio.h>
#include <string.h>
#define MAXSTRLEN 32


int main(void)
{
	char str[MAXSTRLEN];
	int n, i,Big,Small;

	printf("文字列? ");
    scanf("%s", str);

    printf("整数? ");
    scanf("%d", &n);



    if(n < 26){

    	for( i = 0; str[i] != '\0'; ++i ){

    		if(str[i] >= 65 && str[i] <= 90)Big = 1;
    		if(str[i] >= 97 && str[i] <= 122)Small = 1;

			str[i] = str[i] + n;

			if(Big == 1 && str[i] > 90)str[i] -= 26;
			if(Small == 1 && str[i] > 122)str[i] -= 26;

		}

	}

	printf("%s\n", str);

    return 0;
}

