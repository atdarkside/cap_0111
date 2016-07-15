#include <stdio.h>
#include <string.h>

int main(void){
	char arr[5][100] = {"Tom","Mother","Toshiki","Ant","Ye"};
	char change[100];
	int loop,loop2;
	
	for(loop = 0; loop < 5; loop++){
		for (int loop2 = 0; loop2 < 5; loop2++){
			if(strcmp(arr[loop2],arr[loop]) > 0){
				strcpy(change,arr[loop]);
				strcpy(arr[loop],arr[loop2]);
				strcpy(arr[loop2],change);
			}
		}
	}
	
	for(loop = 0; loop < 5; loop++){
		printf("%s\n", arr[loop]);
	}
	return 0;
}

