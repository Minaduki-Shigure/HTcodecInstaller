#include<windows.h>
#include<stdio.h>
#include<direct.h>
#include<stdlib.h>

int main(void)
{
	printf("默认安装路径是D:\\HTcodec\n");
	if (_mkdir("D:\\HTcodec"))
	{
		printf("D:存在HTcodec文件夹是否继续安装？（Y、N）");
		char c;
		c = getchar();
		if (c == 'N' || c == 'n')
			return 0;
	}
	if (!CopyFile(".\\main.exe", "D:\\HTcodec\\main.exe", FALSE))
		printf("安装失败！\n");
//	if (!CopyFile(".\\main.o", "D:\\HTcodec\\main.o", FALSE))
//		printf("安装失败！\n");
	if (!CopyFile(".\\huaji.ico", "D:\\HTcodec\\huaji.ico", FALSE))
		printf("安装失败！\n");
	if (!CopyFile(".\\Install.reg", "D:\\HTcodec\\Install.reg", FALSE))
		printf("安装失败！\n");
	if (!system("D:\\HTcodec\\Install.reg"))
		printf("\n安装成功！\n\n\n");
	else
		printf("安装失败！");
	system("pause");
	return 0;
}
