#include "�b�����U.h" 
int B=0,t1;

void user_login(int A){
	int frequency=0;
	TOTAL();
	while(1){
		printf("�п�J�b��:");
		scanf("%s",account_number);
		if(account_number_judgment(A)==1)
			break;
		else
			printf("�L���b���A�Э��s��J\n");
	}
	while(1){
		printf("�п�J�K�X:");
		scanf("%s",password);
		if(strcmp(password,password2)==0)
			break;
		else
		{
			printf("�K�X��J���~�A�Э��s��J\n");
			frequency++;
		}
		if(frequency==5)
		{
			printf("�K�X���~���ƹL�h\n");
			t1=GetTickCount();
			return;
		}
	}
	B=1; 
	printf("�n�J���\\");
} 
