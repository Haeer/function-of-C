#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
/*system函数   相当于计算机的cmd命令
例如   system("color 8e")//前面的背色  后面的前景
      system("pause")//暂停   显示按任意键继续
	  system("cls")//清屏
	  system("shutdown \r\t 180")//180毫秒后关机
	  system("shutdown \a")//停止

	srand(time(NULL));
	int num = rand ();
	printf("%d\n",num);
//这里的函数是随机函数    一般是先设置随机种子srand和时间联系在一起   然后再赋值随机数rand   
//这里的随机种子的值和函数括号里的值有关
	exit(0);
//正常退出并相应返回值
	
}
