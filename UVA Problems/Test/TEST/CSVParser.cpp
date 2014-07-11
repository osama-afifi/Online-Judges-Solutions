#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_reverse1(char *string)
{  
	if (!(*string))return;
	char *startPtr = string;
	char *endPtr = startPtr + strlen(string) - 1;
	char temp;
	while (endPtr > startPtr)
	{
		temp = *startPtr;
		*startPtr = *endPtr;
		*endPtr = temp;
		++startPtr;
		--endPtr;
	}
}

char *string_reverse2(const char *string)
{
	size_t len = strlen(string);
	char *retStr = (char *)calloc(len+1, sizeof(char));
	int left = 0;
	int right = len-1;
	while(left <= right)
	{
		retStr[left] = string[right];
		retStr[right] = string[left];
		left++;
		right--;
	}
	return retStr;
}


int main() {

	// Testing 1st Reverse Method (Inplace Reverse Method)
	char str1 [] = "Hello1";
	string_reverse1(str1);
	printf("%s\n" , str1);

	// Testing 2nd Reverse Method (Copy Reverse Method)
	char str2 [] = "Hello2";
	char * res = string_reverse2(str2);
	printf("%s\n" , res);
	return 0;
}
