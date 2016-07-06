#include <stdio.h>

int main() {
	FILE *fp;
	char moji;
	char file[100];
	int word = 0;
	int line = 0;
	int wc = 0;
	int prevcheck = 0;

	printf("Filename: ");
	scanf("%s",file);
	fp = fopen(file,"r");
	if(fp) {
		moji = getc(fp);
		while(moji != EOF) {
			if(moji == '\n' || moji == ' '){
				if(prevcheck == 0){
					word++;
				}
				prevcheck = 1;
			} else {
				prevcheck = 0;
			}
			if(moji == '\n') line++;
			wc++;
			moji = getc(fp);
		}
	}
	fclose(fp);
	
	printf("行数　: %d\n",line);
	printf("単語数: %d\n",word);
	printf("文字数: %d\n",wc);
	return 0;
}

