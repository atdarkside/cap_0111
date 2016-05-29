#include <stdio.h>
#include <string.h>
#define MAXSTRLEN 32


int main(void)
{
	char str[MAXSTRLEN];
	int n, i;

	printf("文字列? ");
    scanf("%s", str);

    printf("整数? ");
    scanf("%d", &n);



    if(n < 26){

    	for( i = 0; str[i] != '\0'; ++i ){

    		if(str[i] >= 65 && str[i] <= 90 && str[i] + n > 90)str[i] -= 26;
    		if(str[i] >= 97 && str[i] <= 122 && str[i] + n > 122)str[i] -= 26;

			str[i] = str[i] + n;


		}
		str[i] = '\0';

	}

	printf("%s\n", str);

    return 0;
}

