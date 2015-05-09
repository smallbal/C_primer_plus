/*编写一个程序，把输入作为字符流读取，直至遇到EOF(这里是&)。令其报告输入中的大写字母个数和小写字母个数。
假设小写字母的数值是连续的，大写字母也是如此。或者你可以使用ctype.h库中的合适的函数来区分大小写*/

#include <stdio.h>

int main()
{
	char ch;
	int count_upper = 0;
	int count_lower = 0;
	while((ch=getchar())!='&')
	{
		if(((ch-'a')<=25)&&((ch-'a')>=0))
		{
			count_lower++;
		}
		if (((ch - 'A') <= 25)&&((ch - 'A') >= 0))
		{
			count_upper++;
		}
	}
	printf("number of upper characters is %d\nnumber of lower characters is %d\n",count_upper,count_lower);
	return 0;
}