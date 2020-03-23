//消費者會進入的評價系統
void evaluate_consumer(char path2[],char user_name[]){ 
	FILE *fp,*fp2;
	char grade[4][2];//各種類的評價分數 
	char message[100];//留言 
	char ch[100];
	printf("進入評價系統!\n");
	if(whether_the_evaluation(path2,user_name)==1)
		printf("已評價過\n");
	else if(whether_the_evaluation(path2,user_name)==2){
		printf("請補上給賣家的分數\n");
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
				fputs("食物分數:",fp2); 	      fputs(grade[0],fp2);     fputs("\n\n",fp2);
				fputs("服務分數:",fp2); 		  fputs(grade[1],fp2);     fputs("\n\n",fp2);
				fputs("價格分數:",fp2);  	   	  fputs(grade[2],fp2);     fputs("\n\n",fp2);
				fputs("食物的味道分數:",fp2); 	  fputs(grade[3],fp2);     fputs("\n\n",fp2);
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
		char grade[4][2];//各種類的評價分數 
		char message[100];//留言 
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
		fputs("食物分數:",fp); 	      fputs(grade[0],fp);     fputs("\n\n",fp);
		fputs("服務分數:",fp); 		  fputs(grade[1],fp);     fputs("\n\n",fp);
		fputs("價格分數:",fp);  	  fputs(grade[2],fp);     fputs("\n\n",fp);
		fputs("食物的味道分數:",fp);  fputs(grade[3],fp);     fputs("\n\n",fp);
		fputs("留言:\n\n",fp);        fputs(message,fp);      fputs("。",fp);
		fclose(fp);
	}
}
//檢測使用者是否評價過 
int whether_the_evaluation(char path2[],char user_name[]){
	FILE *fp;
	char ch[100];
	fp=fopen(path2,"r");
	while(1){
		fscanf(fp,"%s",ch);
		if(strcmp(ch,user_name)==0){
			fscanf(fp,"%s",ch);
			if(strcmp(ch,"留言:")!=0)
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
	fp=fopen("用戶資料.txt","r");
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
		printf("進入評價系統(消費者)請輸入1   跳過評價系統請輸入2\n");
		while(1){
			printf("請選擇動作:");
			fflush(stdin);
			scanf("%c",&input);
			if(input=='1'||input=='2')
				break;
			else
				printf("輸入錯誤，請重新輸入\n");		
		}
		system("CLS");
		if(input=='1'){
			evaluate_consumer(path2,user_name);
			break;
		}
		if(input=='2'){
			if(whether_the_evaluation(path2,user_name)==1){
				printf("已評價過\n");
				break;
			}
			else if(whether_the_evaluation(path2,user_name)==2){
				FILE *fp2;
				char ch[100],grade[4][2];
				printf("請補上給賣家的分數\n");
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
						fputs("食物分數:",fp2); 	      fputs(grade[0],fp2);     fputs("\n\n",fp2);
						fputs("服務分數:",fp2); 		  fputs(grade[1],fp2);     fputs("\n\n",fp2);
						fputs("價格分數:",fp2);  	   	  fputs(grade[2],fp2);     fputs("\n\n",fp2);
						fputs("食物的味道分數:",fp2); 	  fputs(grade[3],fp2);     fputs("\n\n",fp2);
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
				printf("您已經一天沒有評價了，請盡快評價\n\n");
				printf("您已經兩天沒有評價了，請盡快評價\n\n");
				printf("您已經三天沒有評價了 ,系統自動評價\n");
				printf("這是間美味的店\n\n");
				fp=fopen(path2,"a");
				fputs("\n\n",fp);
				fputs(user_name,fp);   
				fputs("\n\n",fp);
				fputs("留言:\n\n這是間美味的店。",fp);
				fclose(fp);
				break;
			}	
		} 
	}
}
