/*编写一个程序吧输入作为字符流读取，直到遇到"EOF"（ 此处用& 表示EOF） 令该程序打印每个输入字符及其
ASCII编码的十进制值，注意在ASCII序列中空格字符前面的字符是非打印字符。如果非打印字符是换行符或
制表符则分别打印\n或\t否则使用控制字符符号要特殊处理这些字符。例如ASCII的1是Ctrl+A,可以显示为^A。
注意A的ASCII值是Ctrl+A的值加64.对其他非打印字符也保持相似的关系。出去每次遇到一个换行符时就开始
一个新行之外，每行打印10对值。*/
  
  #include <stdio.h>
  
  #define SIZE 50
  #define SPACE ' '
  
  void sendBackASCII( char ,int,int *);
  void outputASCII(int *,int);
  
  int main()
  {
    char ch;
    int ASCII[SIZE];
    int count_in=0;
    
    while((ch=getchar())!='&')
    {
      count_in++;
      sendBackASCII(ch,count_in,ASCII);
    }
    outputASCII(ASCII,count_in);
    return 0;
  }
  
  void sendBackASCII(char ch_in, int count,int *p)
  {
    if(count<=SIZE)
    {
      *(p+count-1)=(int)ch_in;
    }
  }
  
  void outputASCII(int *p,int count)
  {
    for(int i=0;i<count;i++)
    {
      if(((i%10)==0)&&(i!=0))
      {
        printf("\n");
      }
      switch(*(p+i))
      {
        case '\n':
          printf("\\n ");
          break;
        case '\t':
          printf("\\t ");
          break;
        default:
          printf("%x ",*(p+i));
          break;
      }
    }
    printf("\nthere is the ASCII value of what you input\n");
    if(count>SIZE)
    {
      printf("there are some lose which can't be save in the array.please enlarge SIZE or input less characters.\n");
    }
  }