#include <stdio.h>
#include <string.h>
#define MAXSTRLEN 32


void str_copy(const char s[], char t[]);

int main(void)
{
	char str1[MAXSTRLEN], str2[MAXSTRLEN];
	printf("文字列? ");
    scanf("%s", str1);

    str_copy(str1, str2);    
    printf("str2: %s\n", str2);
    

    return 0;
}


void str_copy(const char s[], char t[])
{
	int i;


	for( i = 0; s[i] != '\0'; ++i ){
		t[i] = s[i];
	}
	t[i] = '\0';


}