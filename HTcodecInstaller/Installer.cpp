#include<windows.h>
#include<stdio.h>
#include<direct.h>
#include<stdlib.h>

int main(void)
{
	printf("Ĭ�ϰ�װ·����E:\\HTcodec\n");
	if (_mkdir("E:\\HTcodec"))
	{
		printf("E:����HTcodec�ļ����Ƿ������װ����Y��N��");
		char c;
		c = getchar();
		if (c == 'N' || c == 'n')
			return 0;
	}
	if (!CopyFile(".\\main.exe", "E:\\HTcodec\\main.exe", FALSE))
		printf("��װʧ�ܣ�\n");
//	if (!CopyFile(".\\main.o", "E:\\HTcodec\\main.o", FALSE))
//		printf("��װʧ�ܣ�\n");
	if (!CopyFile(".\\huaji.ico", "E:\\HTcodec\\huaji.ico", FALSE))
		printf("��װʧ�ܣ�\n");
	if (!CopyFile(".\\Install.reg", "E:\\HTcodec\\Install.reg", FALSE))
		printf("��װʧ�ܣ�\n");
	if (!system("E:\\HTcodec\\Install.reg"))
		printf("\n��װ�ɹ���\n\n\n");
	else
		printf("��װʧ�ܣ�");
	system("pause");
	return 0;
}
