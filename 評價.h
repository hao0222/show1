//���O�̷|�i�J�������t��
void evaluate_consumer(char path2[],char user_name[]){ 
	FILE *fp,*fp2;
	char grade[4][2];//�U�������������� 
	char message[100];//�d�� 
	char ch[100];
	printf("�i�J�����t��!\n");
	if(whether_the_evaluation(path2,user_name)==1)
		printf("�w�����L\n");
	else if(whether_the_evaluation(path2,user_name)==2){
		printf("�иɤW����a������\n");
		printf("Meals:");
		scanf("%s",grade[0]);
		printf("Service quality:");
		scanf("%s",grade[1]);
		printf("Price:");
		scanf("%s",grade[2]);
		printf("The speed of the meal:");
		scanf("%s",grade[3]);
		fp=fopen(path2,"r");
		fp2=fopen("temp.txt","w");
		while(1){
			fscanf(fp,"%s",ch);
			fputs(ch,fp2);  
			if(feof(fp))
				break;
			else 
				fputs("\n\n",fp2);
			if(strcmp(user_name,ch)==0){
				fputs("��������:",fp2); 	      fputs(grade[0],fp2);     fputs("\n\n",fp2);
				fputs("�A�Ȥ���:",fp2); 		  fputs(grade[1],fp2);     fputs("\n\n",fp2);
				fputs("�������:",fp2);  	   	  fputs(grade[2],fp2);     fputs("\n\n",fp2);
				fputs("���������D����:",fp2); 	  fputs(grade[3],fp2);     fputs("\n\n",fp2);
			}
		}
		fclose(fp);
		fclose(fp2);
		fp=fopen(path2,"w");
		fp2=fopen("temp.txt","r");
		while(fgets(ch,100,fp2)!=NULL){
			fputs(ch,fp);
		}
		fclose(fp);
		fclose(fp2);
		remove("temp.txt");
	} 
	else{
		FILE *fp;
		char grade[4][2];//�U�������������� 
		char message[100];//�d�� 
		printf("Meals:");
		scanf("%s",grade[0]);
		printf("Service quality:");
		scanf("%s",grade[1]);
		printf("Price:");
		scanf("%s",grade[2]);
		printf("The speed of the meal:");
		scanf("%s",grade[3]);
		printf("Leave your opinion or idea:");
		fflush(stdin);
		scanf("%s",message);
		fp=fopen(path2,"a");
		fputs("\n\n",fp);			  fputs(user_name,fp);    fputs("\n\n",fp);
		fputs("��������:",fp); 	      fputs(grade[0],fp);     fputs("\n\n",fp);
		fputs("�A�Ȥ���:",fp); 		  fputs(grade[1],fp);     fputs("\n\n",fp);
		fputs("�������:",fp);  	  fputs(grade[2],fp);     fputs("\n\n",fp);
		fputs("���������D����:",fp);  fputs(grade[3],fp);     fputs("\n\n",fp);
		fputs("�d��:\n\n",fp);        fputs(message,fp);      fputs("�C",fp);
		fclose(fp);
	}
}
//�˴��ϥΪ̬O�_�����L 
int whether_the_evaluation(char path2[],char user_name[]){
	FILE *fp;
	char ch[100];
	fp=fopen(path2,"r");
	while(1){
		fscanf(fp,"%s",ch);
		if(strcmp(ch,user_name)==0){
			fscanf(fp,"%s",ch);
			if(strcmp(ch,"�d��:")!=0)
				return 1;
			else
				return 2;
		}
		else if(feof(fp)) 
			return 0;
	}
}

void evaluation(char account_number[],char restaurant_name[]){
	system("CLS");
	FILE *fp;
	int i;
	char path2[50]=".\\restaurant\\",user_name[50],n[2],input;
	strcat(path2,restaurant_name);strcat(path2,".txt");
	fp=fopen("�Τ���.txt","r");
	while(1){
		fscanf(fp,"%s",user_name);
		if(strcmp(account_number,user_name)==0){
			for(i=1;i<=4;i++)
				fscanf(fp,"%s",user_name);
			break;
		}
	}
	fclose(fp);
	while(1){
		printf("�i�J�����t��(���O��)�п�J1   ���L�����t�νп�J2\n");
		while(1){
			printf("�п�ܰʧ@:");
			fflush(stdin);
			scanf("%c",&input);
			if(input=='1'||input=='2')
				break;
			else
				printf("��J���~�A�Э��s��J\n");		
		}
		system("CLS");
		if(input=='1'){
			evaluate_consumer(path2,user_name);
			break;
		}
		if(input=='2'){
			if(whether_the_evaluation(path2,user_name)==1){
				printf("�w�����L\n");
				break;
			}
			else if(whether_the_evaluation(path2,user_name)==2){
				FILE *fp2;
				char ch[100],grade[4][2];
				printf("�иɤW����a������\n");
				printf("Meals:");
				scanf("%s",grade[0]);
				printf("Service quality:");
				scanf("%s",grade[1]);
				printf("Price:");
				scanf("%s",grade[2]);
				printf("The speed of the meal:");
				scanf("%s",grade[3]);
				fp=fopen(path2,"r");
				fp2=fopen("temp.txt","w");
				while(1){
					fscanf(fp,"%s",ch);
					fputs(ch,fp2);  
					if(feof(fp))
						break;
					else 
						fputs("\n\n",fp2);
					if(strcmp(user_name,ch)==0){
						fputs("��������:",fp2); 	      fputs(grade[0],fp2);     fputs("\n\n",fp2);
						fputs("�A�Ȥ���:",fp2); 		  fputs(grade[1],fp2);     fputs("\n\n",fp2);
						fputs("�������:",fp2);  	   	  fputs(grade[2],fp2);     fputs("\n\n",fp2);
						fputs("���������D����:",fp2); 	  fputs(grade[3],fp2);     fputs("\n\n",fp2);
					}
				}
				fclose(fp);
				fclose(fp2);
				fp=fopen(path2,"w");
				fp2=fopen("temp.txt","r");
				while(fgets(ch,100,fp2)!=NULL){
					fputs(ch,fp);
				}
				fclose(fp);
				fclose(fp2);
				break;	
			}
			else{
				printf("�z�w�g�@�ѨS�������F�A�кɧֵ���\n\n");
				printf("�z�w�g��ѨS�������F�A�кɧֵ���\n\n");
				printf("�z�w�g�T�ѨS�������F ,�t�Φ۰ʵ���\n");
				printf("�o�O����������\n\n");
				fp=fopen(path2,"a");
				fputs("\n\n",fp);
				fputs(user_name,fp);   
				fputs("\n\n",fp);
				fputs("�d��:\n\n�o�O�����������C",fp);
				fclose(fp);
				break;
			}	
		} 
	}
}
