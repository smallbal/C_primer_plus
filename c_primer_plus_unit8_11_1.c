//设计一个程序，统计从输入到文件结尾为止的字符数
#include <stdio.h>
#define SPACE ' '
 int main()
 {
	 int count=0;
	 int spaceNumber=0;
	 char ch;
	 printf("enter characters you want and end with &:");
	 while((ch=getchar())!='&')
	 {
		 if(ch!='\n')
		 {
			 count++;
		 }
		 else
		 {
			 printf("the number you input is %d and there are %d ' ' including them\n\n",count,spaceNumber);
			 printf("enter another line of characters and quit with &:");
			 count=spaceNumber=0;
		 }
		 if(ch==SPACE)
		 {
			 spaceNumber++;
		 }
		 
	 }
	 printf("this is the end\n");
	
	return 0; 
 }