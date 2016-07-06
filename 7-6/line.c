#include <stdio.h>

int main() {
	FILE *fp;
	char moji;
	char file[100];
	int line = 0;

	printf("Filename: ");
	scanf("%s",file);
	fp = fopen(file,"r");
	if(fp) {
		moji = getc(fp);
		while(moji != EOF) {
			if(moji == '\n') line++;
			moji = getc(fp);
		}
	}
	fclose(fp);
	
	printf("行数　: %d\n",line);
	return 0;
}

