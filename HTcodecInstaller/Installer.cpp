#include<windows.h>
#include<stdio.h>
#include<direct.h>
#include<stdlib.h>

int main(void)
{
	printf("Ĭ�ϰ�װ·����D:\\HTcodec\n");
	if (_mkdir("D:\\HTcodec"))
	{
		printf("D:����HTcodec�ļ����Ƿ������װ����Y��N��");
		char c;
		c = getchar();
		if (c == 'N' || c == 'n')
			return 0;
	}
	if (!CopyFile(".\\main.exe", "D:\\HTcodec\\main.exe", FALSE))
		printf("��װʧ�ܣ�\n");
//	if (!CopyFile(".\\main.o", "D:\\HTcodec\\main.o", FALSE))
//		printf("��װʧ�ܣ�\n");
	if (!CopyFile(".\\huaji.ico", "D:\\HTcodec\\huaji.ico", FALSE))
		printf("��װʧ�ܣ�\n");
	if (!CopyFile(".\\Install.reg", "D:\\HTcodec\\Install.reg", FALSE))
		printf("��װʧ�ܣ�\n");
	if (!system("D:\\HTcodec\\Install.reg"))
		printf("\n��װ�ɹ���\n\n\n");
	else
		printf("��װʧ�ܣ�");
	system("pause");
	return 0;
}
