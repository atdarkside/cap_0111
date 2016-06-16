#include <stdio.h>
#include <string.h>

int main(){
	int arr[] = {2,10,5,1,4,6,99,21,0,19};
	int loop,loop2,change;

	for(loop = 0; loop < 10; loop++){
		for (int loop2 = 0; loop2 < 10; loop2++){
			if(arr[loop] > arr[loop2]){
				change = arr[loop];
				arr[loop] = arr[loop2];
				arr[loop2] = change;
			}
		}
	}

	for(loop = 0; loop < 10; loop++){
		printf("%d\n", arr[loop]);
	}

	return 0;
}