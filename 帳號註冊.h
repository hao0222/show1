int i;
FILE *fp;
int total=-1;
char name[50];
char account_number[50];
char account_number2[50];
char password[50];
char password2[50];
char phone_number[20];
char mail[50];
char favorite_food[10];
int meal_spend;
float receive_distance;

void TOTAL(){
	char temp[50];
	total=-1;
	FILE *fp2=fopen("用戶資料.txt","r");
	do{
		total++;
	}while(fgets(temp,50,fp2)!=NULL);
	total=total/2;
	fclose(fp2);
}

int account_number_judgment(int A) {
	FILE *fp1=fopen("用戶資料.txt","r");
	for(i=1;i<=total;i++){
		fscanf(fp1,"%s",account_number2);
		fscanf(fp1,"%s",account_number2);
		if(strcmp(account_number,account_number2)==0){
			if(A==2)
			{
				fscanf(fp1,"%s",account_number2);
				fscanf(fp1,"%s",account_number2);
				strcpy(password2,account_number2);
			}
			fclose(fp1);
			return 1;
		}
		else{
			while(strcmp(account_number2,";")!=0){
				fscanf(fp1,"%s",account_number2);
			}
		}
	}
	fclose(fp1);
	return 0;
} 

void user_registration(int A){
	TOTAL();
	fp=fopen("用戶資料.txt","a");
	if(total==0){
		printf("請輸入帳號:");
		scanf("%s",account_number);
		fputs("1 ",fp);  fputs(account_number,fp);
	}
	else{
		while(1){
			printf("請輸入帳號:");
			scanf("%s",account_number);
			if(account_number_judgment(A)==1)
				printf("帳號已被使用，請重新輸入\n");
			else{
				fputs("1 ",fp);  fputs(account_number,fp);
				break;
			}		
		}
	}
	printf("請輸入密碼:");
	scanf("%s",password);
	fputs(" 2 ",fp);  fputs(password,fp);
	printf("請輸入使用者名稱:");
	scanf("%s",name);
	fputs(" 3 ",fp);  fputs(name,fp);
	printf("請輸入電話:");
	scanf("%s",phone_number);
	fputs(" 4 ",fp);  fputs(phone_number,fp);
	printf("請輸入信箱:");
	scanf("%s",mail);
	fputs(" 5 ",fp);  fputs(mail,fp); fputs(" ;\n\n",fp);
	fclose(fp);
	printf("註冊成功\\n");
}

void preference(){
	strcpy(account_number2,account_number);
	strcat(account_number2,".txt");
	FILE *fp3;
	fp3=fopen(account_number2,"r");
	if(fp3){
		fclose(fp3);
		return;
	}
	else{
		printf("偏好設定\n");
		printf("請輸入喜愛食物的類型:");
		scanf("%s",favorite_food);
		printf("每\餐\大約花多少:");
		scanf("%d",&meal_spend);
		printf("離\餐\廳多少公里能接受:");
		scanf("%f",&receive_distance);
		fp3=fopen(account_number2,"w");
		fprintf(fp3,"meal_spend %d receive_distance %f\nfavorite_food\n%s",meal_spend,receive_distance,favorite_food);
		fclose(fp3);
		printf("設定完成\n");
		sleep(2);
		system("CLS");
	}
}
