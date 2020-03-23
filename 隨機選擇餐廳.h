struct restaurant{ 
	char restaurant_name[50];
	int past_preference;
	bool today_preference;
	struct restaurant *last;
	struct restaurant *next;
}*head=NULL,*tail=NULL,*ptr4=NULL;
//�s�W�@�� restaurant
struct restaurant* createnode(){
	struct restaurant *newnode=(struct restaurant*)malloc(sizeof(struct restaurant));
	newnode->past_preference=0;
	newnode->today_preference=false;
	newnode->last=NULL;
	newnode->next=NULL;
	return newnode;
}
//�ƦC�\�U 
void sort(int total){
	int i,j;
	struct restaurant *ptr=NULL;
	struct restaurant *ptr2=NULL;
	struct restaurant *temp=NULL;
	for(i=total;i>1;i--){
		ptr=head;
		ptr2=head->next;
		for(j=1;j<i;j++){
			if(ptr->today_preference==false&&ptr2->today_preference==true||ptr->today_preference==ptr2->today_preference&&ptr->past_preference<ptr2->past_preference){
				ptr->next=ptr2->next;
				ptr2->last=ptr->last;
				ptr->last->next=ptr2;
				ptr2->next->last=ptr;
				ptr2->next=ptr;
				ptr->last=ptr2;
				if(ptr==head)
					head=ptr2;
				if(ptr2==tail)
					tail=ptr;
				temp=ptr;
				ptr=ptr2;
				ptr2=temp;
			}
			ptr=ptr->next;
			ptr2=ptr2->next;
		}
	}
}

void random_selection(int A,char account_number[]){
	FILE *fp1;
	int number=0,n=0,total=0;
	char b,temp[50],temp2[100],food_type[10];
	head=NULL,tail=NULL; 
	strcpy(temp,account_number);
	strcat(temp,".txt");
	//��ϥΪ̹L�h�ߦn���ƶq 
	fp1=fopen(temp,"r");
	fgets(temp2,50,fp1); fgets(temp2,50,fp1);
	while(fgets(temp2,50,fp1)!=NULL){
		n++;
	}
	fclose(fp1);
	
	while(1){
		int i=0;
		system("CLS"); 
		if(number!=11){
			//��J��ѳߦn 
			if(A==1||number==12){
				printf("�п�J��������:");
				scanf("%s",food_type);
				//�˴��ϥΪ̪��L�h�ߦn�O�_����ѳߦn 
				fp1=fopen(temp,"r");
				fgets(temp2,50,fp1); fgets(temp2,50,fp1);
				do{
					fscanf(fp1,"%s",temp2);
					i++;
				}while(strcmp(temp2,food_type)!=0&&i!=n);
				i=0;
				fclose(fp1);
				//���ѳߦn�[��ϥΪ̪��L�h�ߦn 
				if(strcmp(temp2,food_type)!=0){
					fp1=fopen(temp,"a");
					fputs("\n",fp1); fputs(food_type,fp1);
					fclose(fp1);
					n++;
				}
				system("CLS");
			}
			//���o�ϥΪ̹L�h�ߦn 
			char temp3[n][10];
			fp1=fopen(temp,"r");
			fgets(temp2,100,fp1); fgets(temp2,100,fp1);
			while(i!=n){
				if(A==1&&i==0||number==12&&i==0){
					strcpy(temp3[i],food_type);
					i++;
				}
				else{
					fscanf(fp1,"%s",temp2);
					if(A==1&&strcmp(temp2,food_type)!=0||number==12&&strcmp(temp2,food_type)!=0){
						strcpy(temp3[i],temp2);
						i++;
					}
					else if(A==2&&number!=12){
						strcpy(temp3[i],temp2);
						i++;
					}
				}		
			}
			i=0; 
			fclose(fp1);
			//�Ы� restaurant �M�� 
			fp1=fopen("restaurant_food_kind.txt","r");
			while(1){
				fscanf(fp1,"%s",temp2);
				if(strcmp(temp2,".")==0)
					break;
				struct restaurant *newnode=createnode();
				strcpy(newnode->restaurant_name,temp2);
				while(strcmp(temp2,";")!=0){
					fscanf(fp1,"%s",temp2);
					for(i=0;i<n;i++){
						if(strcmp(temp3[i],temp2)==0){
							if(A==1&&i==0||number==12&&i==0)
								newnode->today_preference=true;
							newnode->past_preference++;
							break;
						}
					}	
				}
				if(head==NULL){
					head=newnode;
					tail=head;
					total++;
				}
				else{
					tail->next=newnode;
					newnode->last=tail;
					tail=newnode;
					tail->next=head;
					head->last=tail;
					total++;
				}
			}
			fclose(fp1);
			sort(total);
			ptr4=head;
		}
		//�L�X�\�U�W�r 
		for(i=1;i<=10;i++){
			printf("%d.%s\n\n",i,ptr4->restaurant_name);
			ptr4=ptr4->next;
		}
		printf("11.����\n\n12.���s��ܯS�w��������\n");
		printf("�п�J�s��:");
		number=0;
		while(1){
			fflush(stdin);
			scanf("%d",&number);
			if(((char)(number+48))>=49&&((char)(number+48))<=60)
				break;
			else{
				printf("��J���~�A�Э��s��J\n");
				printf("�п�J�s��:");
			}		
		}
		//�⤧�e�ҳЪ� restaurant �M��Ҧ����O����M��
		if(number==12){
			for(i=0;i<total;i++){
				ptr4=head;
				head=ptr4->next;
				free(ptr4);
			}
			total=0;
			head=NULL;
			tail=NULL;
		}
		//��ϥΪ̩ҿ諸�\�U��T�L�X 
		else if(number>=1&&number<=10){
			system("CLS");
			for(i=1;i<=11-number;i++)
				ptr4=ptr4->last;
			char temp4[50]=".\\restaurant\\";
			strcat(temp4,ptr4->restaurant_name);
			strcat(temp4,".txt");
			fp=fopen(temp4,"r");
			while(fgets(temp2,100,fp)!=NULL){
				printf("%s",temp2);
			}
			fclose(fp);
			while(1){
				printf("\n\n�n�q��п��1 ���^���e�ҦC\�\\�U�п��2\n\n");
				printf("�п�J�ʧ@:");
				fflush(stdin);
				scanf("%c",&b);
				if(b=='1'||b=='2')
					break;
				else
					printf("��J���~�A�Э��s��J\n");
			}
			if(b=='1')
				break;
			//��ptr4���s���V���e�ҦC�\�U���Ĥ@�� 
			else if(b=='2'){
				for(i=1;i<=number-1;i++)
					ptr4=ptr4->last;
				number=11; 
			}
		}
	} 
}
