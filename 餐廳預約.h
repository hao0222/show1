bool book=false;
bool cancel_reservation=false;

struct Restaurant{
	char time[10];
	char detail[50];
}*store=NULL;
//�^�ǩ��a(�q��
void toShopKeeper(char path[],char User_Name[]) {
	FILE *fp=fopen(path,"w");
    fputs("toShopKeeper\n",fp);
    fputs("�A���s���w�q�I\n",fp);
	fputs("�q���: ",fp);			fputs(User_Name,fp);		fputs("\n",fp);
	fputs("�q��ɶ�: ",fp);			fputs(store->time,fp); 		fputs("\n",fp);
	fputs("�w�p�n�Y: ",fp);			fputs(store->detail,fp);                             
   	fclose(fp);
};
//�^�ǩ��a(�ק�
void toShopKeeper2(char path[],char User_Name[]) {
	FILE *fp=fopen(path,"w");
    fputs("toShopKeeper2\n",fp);
    fputs("�A���ק�ШD�I\n",fp);
	fputs("�q���: ",fp);			fputs(User_Name,fp);		fputs("\n",fp);
	fputs("�q��ɶ�: ",fp);			fputs(store->time,fp); 		fputs("\n",fp);
	fputs("�w�p�n�Y: ",fp);			fputs(store->detail,fp);                             
   	fclose(fp);
};
//�^�ǩ��a(����
void toShopKeeper3(char path[],char User_Name[]) {
	FILE *fp=fopen(path,"w");
    fputs("toShopKeeper3\n",fp);
    fputs("�A�������ШD�I",fp);		fputs("\n",fp); 
	fputs("������: ",fp);			fputs(User_Name,fp);
	fclose(fp);
};
//�ˬd�q��ɶ�
int censor_time(){ 
	time_t now;
	char Time[30];
	int hour1,hour2,min1,min2,time_difference;
	time(&now);
	strcpy(Time,ctime(&now));
	hour1=(Time[11]-48)*10+(Time[12]-48);
	hour2=(store->time[0]-48)*10+(store->time[1]-48);
	min1=(Time[14]-48)*10+(Time[15]-48);
	min2=(store->time[3]-48)*10+(store->time[4]-48);
	if(hour2<hour1||hour2==hour1&&min2<min1)
		return 0; 
	if(min2<min1){
		hour2--;
		time_difference=(hour2-hour1)*60+(min2+60-min1);
	}
	else
		time_difference=(hour2-hour1)*60+(min2-min1);
	if(time_difference>=30&&time_difference<=180)
		return 1;
	else 
		return 0;
}

void restaurant_reservation(int b,char account_number[]){
	system("CLS");
	int choice;//�ﶵ
    char cancel[20];//�����T�{
    bool run=1;
    FILE *fp;
    char path[40]=".\\restaurant_program\\return.txt",temp[50],Password[50],User_Name[50];
    store=(struct Restaurant*)malloc(sizeof(struct Restaurant));
    fp=fopen("�Τ���.txt","r");
   	while(1){
    	fscanf(fp,"%s",User_Name);
    	if(strcmp(User_Name,"1")==0){
    		fscanf(fp,"%s",User_Name);
    		if(strcmp(User_Name,account_number)==0){
    			fscanf(fp,"%s",User_Name);
    			fscanf(fp,"%s",User_Name);
    			fscanf(fp,"%s",User_Name);
    			fscanf(fp,"%s",User_Name);
    			break;
			}
		}
	}
	fclose(fp);
	//�q�� 
    if(b==1){
    	bool exceed_five_minute=false;
		//���o�K�X												 
    	fp=fopen("�Τ���.txt","r");
    	while(1){ 
    		fscanf(fp,"%s",temp);
    		if(strcmp(temp,"1")==0){
    			fscanf(fp,"%s",temp);
    			if(strcmp(temp,account_number)==0){
    				fscanf(fp,"%s",temp);
    				fscanf(fp,"%s",temp);
    				break;											
				}
			}
		}
		fclose(fp);
		//��J�q���T 
    	printf("�i�J\�\\�U�w�q�t��\n\n");		
    	while(1){
    		printf("�п�J�q��ɶ�,�̤֥b�p�ɡA�̱�3�p��(xx:xx):");
			scanf("%s",store->time);
			if(censor_time())
				break;
			else
				printf("�q��ɶ��̦h�u��b3�Ӥp�ɫe�A�̤֭n�b�p�ɫe�A�Э��s��J\n");
		}
       	printf("�п�J�w�p�n�Y����:");
       	scanf("%s",store->detail);
       	while(1){
       		printf("�п�J�K�X:");
       		scanf("%s",Password);
       		if(strcmp(Password,temp)==0){
       			printf("���Ҧ��\\\n");
       			break;
			   }
			else
				printf("��J���~�A�Э��s��J\n");	
		}
       	toShopKeeper(path,User_Name);
       	printf("���ݩ��a�^��....\n");
       	while(1){
       		fp=fopen(path,"r");
       		fscanf(fp,"%s",temp);
       		if(strcmp(temp,"Y")==0||strcmp(temp,"y")==0){
       			printf("�q�즨�\\");
       			fclose(fp);
       			fp=fopen(path,"w");
       			fclose(fp);
       			book=true;
       			break;
			}
			else if(strcmp(temp,"N")==0||strcmp(temp,"n")==0){
				printf("���a�������A�q�쥢��");
				fclose(fp);
       			fp=fopen(path,"w");
       			fclose(fp);
       			book=false;
       			break;
			}
			else if(exceed_five_minute==false&&strcmp(temp,"5")==0){
				printf("���a�W�L5�������^��\n");
				fclose(fp);
				fp=fopen(path,"w");
				exceed_five_minute=true;
			}
			else if(strcmp(temp,"10")==0){
				printf("���a�W�L10�������^���A�����q��\n");
				fp=fopen(path,"w");
				fclose(fp);
				book=false;
       			break;
			}
       		fclose(fp);
		}
	}
	//�ק� 
	else if(b==2){
		while(1){
			printf("�п�J�w�w�ɶ��A�̤֥b�p�ɡA�̱�3�p��(�ק�xx:xx):");
			scanf("%s",store->time);
			if(censor_time())
				break;
			else
				printf("�q��ɶ��̦h�u��b3�Ӥp�ɫe�A�̤֭n�b�p�ɫe�A�Э��s��J\n");	
		}									
       	printf("�п�J�w�p�n�Y����(�ק�):");
       	scanf("%s",store->detail);
       	toShopKeeper2(path,User_Name);
       	printf("���ݩ��a�^��....\n");
       	while(1){
       		fp=fopen(path,"r");
       		fscanf(fp,"%s",temp);
       		if(strcmp(temp,"Y")==0||strcmp(temp,"y")==0){
       			printf("�ק令�\\");
       			fclose(fp);
       			fp=fopen(path,"w");
       			fclose(fp);
       			break;
			}
			else if(strcmp(temp,"N")==0||strcmp(temp,"n")==0){
				printf("���a�������A�ק異��");
				fclose(fp);
       			fp=fopen(path,"w");
       			fclose(fp);
       			break;
			}
       		fclose(fp);
		}
	}
	//����
	else if(b==3){
		while(1){
			printf("�A�T�w�n������(Y/N):");
       		scanf("%s",cancel);
       		if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0||strcmp(cancel,"N")==0||strcmp(cancel,"n")==0)
       			break;
       		else
       			printf("��J���~�A�Э��s��J\n");
		}									 
       	if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0){
           	toShopKeeper3(path,User_Name);
        	printf("���ݩ��a�^��....\n");
        	while(1){
               	fp=fopen(path,"r");
               	fscanf(fp,"%s",cancel);
               	if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0){
               		printf("�������\\\n");
                	fclose(fp);
               		fp=fopen(path,"w");
               		fclose(fp);
               		book=false;
               		cancel_reservation=true;
               		break;
				}	
            	else if(strcmp(cancel,"N")==0||strcmp(cancel,"n")==0){
               		printf("��������\n");
                	fclose(fp);
                	while(1){
                		printf("�O�_�n�j�����(Y/N):");
						scanf("%s",cancel);
						if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0||strcmp(cancel,"N")==0||strcmp(cancel,"n")==0)
       						break;
       					else
       						printf("��J���~�A�Э��s��J\n");
					}
					if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0){
						fp=fopen(path,"w");
						fputs("�j�����\n",fp);
						fputs("������: ",fp);    fputs(User_Name,fp);
						fclose(fp);
						book=false;
						cancel_reservation=true;
						break;
					}
					else{
						fp=fopen(path,"w");
                		fclose(fp);	
                		cancel_reservation=false;
                		system("CLS");
                		return;
					}	
                	break;
               	}
               	fclose(fp);
			} 
        	free(store);
        }
	}
	sleep(2);
    system("CLS");
}
