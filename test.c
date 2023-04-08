
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

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strcpy( char* str1,const char* str2) {
	assert(str1 != NULL);
	assert(str2 != NULL);
	char ret = str1;
	//拷贝str2指向的字符串到str1指向的空间，包含‘\0’
	while (*str1++ = *str2++) 
	{
		;
	}
	//返回目的空间的起始地址
	return str1;
}

//int main() {
//
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}


char* my_strcat(char *dest,const char *src) {
	assert(dest && src);
	char ret = dest;
	while (*dest) {
		dest++;
	}
		
	while (*dest++ = *src++) {
		;
	}
	
	return ret;
}


//int main() {
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



int my_strcmp(const char* str1,const char* str2) {

	assert(str1 && str2);


	//while ((*str1++ != '\0') && (*str2++ != '\0')) {
	//	if (*str1 > *str2) 
	//		return *str1-*str2;
	//	else if (*str1 < *str2) 
	//		return *str1 - *str2;
	//}
	//return 0;

	while (*str1==*str2) {
		if (*str1 == '\0') 
			return 0;
		str1++;
		str2++;
	}
	//if (*str1 > *str2)
	//	return 1;
	//else
	//	return -1;
	return (*str1 - *str2);

}


//int main() {
//	char* arr1 = "abcede";
//	char* arr2 = "abcedf";
//
//
//
//	//c语言规定，arr1>arr2返回大于零的数，arr1<arr2返回小于零的数 arr1=arr2返回零
//	//在vs环境下，如果arr1>arr2返回1   = 返回0    < 返回-1
//	//在gcc环境下，>返回ascl码值相差的数（正数）   <（负数）    =  0
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret>0) {
//		printf("arr1>arr2\n");
//	}
//	else if (ret < 0) {
//		printf("arr1<arr2\n");
//	}
//	else {
//		printf("arr1=arr2\n");
//	}
//	printf("%d\n", ret);
//
//
//	return 0;
// }


