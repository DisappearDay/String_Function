
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


//int main() {
//	//strncmp 字符串比较
//	const char* arr1 = "abcdef";
//	char* arr2 = "qwertyu";
//	int ret=strncmp(arr1,arr2,3);
//	printf("%d\n",ret);
//	return 0;
//}



char* my_strstr(const char* str1,const char* str2) {
	assert(str1 && str2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* now = (char*)str1;
	if (*str2=='\0') //if(!*str2)  str2为0时是假，加个！表示为真
		return (char*)str1;

	while (*now) {
		s1 = now;
		s2 = (char*)str2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) 
		{
			s1++;
			s2++;
		}
		if (*s2=='\0') {
			return now;//找到字串
		}
		if (*s1 == '\0') {
			return NULL;//找不到字串
		}
		now++;
	}
	return NULL; //找不到字串
}

int main() {
	char* p1 = "addedef";
	char* p2 = "def";
	char* ret = my_strstr(p1, p2);//返回的是defabcdef ，返回的是在p1中首次出现的字符串地址，打印p1后面的所有元素
	if (ret==NULL) {
		printf("查不到该字串");
	}
	else {
		printf("%s\n",ret);
	}


	return 0;
}

//int main() {
//	char arr[] = "hello.world!and";
//	char* p = ".!";
//	//char arr2[] = "2981062773@qq@com";
//	//char* p2 = "@.";
//
//	//hello.world!and
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p)) {
//		printf("%s\n",ret);
//	}
//
//	//char* ret=strtok(arr, p);
//	//printf("%s\n", ret);
//
//	////char* ret1 = strtok(arr2, p2);
//	////printf("%s\n", ret1);
//
//	//ret=strtok(NULL, p);
//	//printf("%s\n",ret);
//
//	//ret=strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}

//
//int main() {
//	//错误码   错误信息
//	//0 -      No error
//	//1 -      Operation not permitted
//	//2 -      No such file or directory
//	//...      ...
//
//	//全局的错误变量/错误码的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码赋值到errno中
//	/*char* arr = strerror(errno);
//	printf("%s\n", arr);*/
//
//	FILE* pf=fopen("text.txt","r");
//	if (pf==NULL) 
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success");
//	}
//
//	return 0;
//
//}


int main() {

	//char ch = 'w';
	////如果是小写字母返回非零值，如果不是小写字符返回0；
	//int ret = islower(ch);
	////十进制数字0-9
	//int ret1 = isdigit(ch);
	////空白字符“空格” 换页"\f" 换行"\n"  回车"\r" 制表符"\t" 垂直制表符"\v"
	//int ret1 = isspace(ch);
	////十六进制包括a-f A-F
	//int ret1 = isxdigit(ch);
	////任何控制字符
	//int ret1 = iscntrl(ch);
	////大写字母A-Z
	//int ret1 = isupper(ch);
	////字母a-z，字母A-Z
	//int ret1 = isalpha(ch);
	////字母或者数字 a-z，字母A-Z  数字0-9
	//int ret1 = isalnum(ch);
	////标点符号，任何不属于数字或者字母的图形字符
	//int ret1 = ispunct(ch);
	////任何图形字符
	//int ret1 = isgraph(ch);
	////任何可打印字符包括图形字符和空白字符
	//int ret1 = isprint(ch);
	//int ret1 = printf("%d\n", ret);

	////字符转换
	////tolower--转小写字母
	////toupper--转大写字母
	//
	////如果是小写不动，大写转化为小写
	//char ch = tolower('Q');
	////printf("%c\n",ch);
	//putchar(ch);

	char arr[] = "I Am A Studen";
	int i = 0;
	while (arr[i]) {
		if (isupper(arr[i])) {
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);


	return 0;
}
