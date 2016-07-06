#include <stdio.h>

int main() {
	FILE *fp;
	char moji;
	char file[100];
	int wc = 0;

	printf("Filename: ");
	scanf("%s",file);
	fp = fopen(file,"r");
	if(fp) {
		moji = getc(fp);
		while(moji != EOF) {
			if(moji == '\n' || moji == ' ') word++;
			moji = getc(fp);
		}
	}
	fclose(fp);
	
	printf("単語数: %d\n",word);
	return 0;
}

