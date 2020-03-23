#include "帳號註冊.h" 
int B=0,t1;

void user_login(int A){
	int frequency=0;
	TOTAL();
	while(1){
		printf("請輸入帳號:");
		scanf("%s",account_number);
		if(account_number_judgment(A)==1)
			break;
		else
			printf("無此帳號，請重新輸入\n");
	}
	while(1){
		printf("請輸入密碼:");
		scanf("%s",password);
		if(strcmp(password,password2)==0)
			break;
		else
		{
			printf("密碼輸入錯誤，請重新輸入\n");
			frequency++;
		}
		if(frequency==5)
		{
			printf("密碼錯誤次數過多\n");
			t1=GetTickCount();
			return;
		}
	}
	B=1; 
	printf("登入成功\");
} 
