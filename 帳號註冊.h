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
	FILE *fp2=fopen("�Τ���.txt","r");
	do{
		total++;
	}while(fgets(temp,50,fp2)!=NULL);
	total=total/2;
	fclose(fp2);
}

int account_number_judgment(int A) {
	FILE *fp1=fopen("�Τ���.txt","r");
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
	fp=fopen("�Τ���.txt","a");
	if(total==0){
		printf("�п�J�b��:");
		scanf("%s",account_number);
		fputs("1 ",fp);  fputs(account_number,fp);
	}
	else{
		while(1){
			printf("�п�J�b��:");
			scanf("%s",account_number);
			if(account_number_judgment(A)==1)
				printf("�b���w�Q�ϥΡA�Э��s��J\n");
			else{
				fputs("1 ",fp);  fputs(account_number,fp);
				break;
			}		
		}
	}
	printf("�п�J�K�X:");
	scanf("%s",password);
	fputs(" 2 ",fp);  fputs(password,fp);
	printf("�п�J�ϥΪ̦W��:");
	scanf("%s",name);
	fputs(" 3 ",fp);  fputs(name,fp);
	printf("�п�J�q��:");
	scanf("%s",phone_number);
	fputs(" 4 ",fp);  fputs(phone_number,fp);
	printf("�п�J�H�c:");
	scanf("%s",mail);
	fputs(" 5 ",fp);  fputs(mail,fp); fputs(" ;\n\n",fp);
	fclose(fp);
	printf("���U���\\\n");
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
		printf("���n�]�w\n");
		printf("�п�J�߷R����������:");
		scanf("%s",favorite_food);
		printf("�C\�\\�j����h��:");
		scanf("%d",&meal_spend);
		printf("��\�\\�U�h�֤����౵��:");
		scanf("%f",&receive_distance);
		fp3=fopen(account_number2,"w");
		fprintf(fp3,"meal_spend %d receive_distance %f\nfavorite_food\n%s",meal_spend,receive_distance,favorite_food);
		fclose(fp3);
		printf("�]�w����\n");
		sleep(2);
		system("CLS");
	}
}
