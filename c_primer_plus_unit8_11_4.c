/*编写一个程序，把输入作为字符流读取，直至遇到EOF(这里是&)。令其报告每一个单词的平均字母数。
不要将空白字符记为单词中的字母。实际上标点符号也不应该计算，但现在不必考虑这一点（
如果您想做得好一些，可以考虑使用ctype.h系列中的ispunct()函数）。*/

int is_wholeword(char);//1--it is the whole word ;0--it is not
int get_distance(char);//return how long is the distance from input character to A or a


int main()
{
	int count = 0;
	int num = 0;
	char ch;
	while ((ch=getchar())!='&')
	{
		if(is_wholeword(ch)==1)
		{
			if (num != 0)
				putchar(count/num+'a');
			else 
				putchar('0');
			count=0;
			num=0;
			putchar('\n');
		}
		else
		{
			count += get_distance(ch);
			num++;
		}
	}
	return 0;
}

int is_wholeword(char ch)
{
	int ans;
	switch(ch)
	{
	case '\n':
	case ' ' :
		ans = 1; //it is the end of one word
		break;
	default:
		ans = 0;
		break;
	}
	return ans;
}

int get_distance(char ch)
{
	int ans;
	if ((ch >= 'a') || (ch <= 'z'))
	{
		ans= ch - 'a';
	}
	else if ((ch >= 'A') || (ch <= 'Z'))
	{
		ans = ch - 'A';
	}
	else
	{
		ans = -1;
	}
	return ans;
}

