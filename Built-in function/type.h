# issupper islower toupper tolower isalpha isdigit


#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%d\n",isupper('a'));
	printf("%d\n",islower('a'));
//C中的0表示假而非0表示真
	printf ("%d\n",isdigit(9));
	printf ("%d\n",isdigit('9'));
//判断的是字符，上面的是假，下面的是真
  printf("%d"\n,tolower('ASFD'))
//最后输出的值是小写的字母 同理toupper一样，输出的就是大写的字母

//上面的字母符号之类的都是根据ASCII码就行的判断的
return 0;

}
