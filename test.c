
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i_cmp(const void* str1,const void* str2) {
	return *((int*)str1) - *((int*)str2);
}


//int main() {
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),i_cmp);
//	int i = 0;
//	for (i = 0; i < sz;i++) {
//		printf("%d ",arr[i]);
//	}
//
//
//	return 0;
//
//}

int my_strlen(const char* str) {
	if (*str != '\0') {
		return 1 + my_strlen(str + 1);
	}
	else return 0;
}


int main() {
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);

	if ( strlen("abc") - strlen("abcdef") > 0) {
		printf("hehe\n");
	}
	else {
		printf("haha\n");
	}
	return 0;
}
