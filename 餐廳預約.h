bool book=false;
bool cancel_reservation=false;

struct Restaurant{
	char time[10];
	char detail[50];
}*store=NULL;
//回傳店家(訂位
void toShopKeeper(char path[],char User_Name[]) {
	FILE *fp=fopen(path,"w");
    fputs("toShopKeeper\n",fp);
    fputs("你有新的預訂！\n",fp);
	fputs("訂位者: ",fp);			fputs(User_Name,fp);		fputs("\n",fp);
	fputs("訂位時間: ",fp);			fputs(store->time,fp); 		fputs("\n",fp);
	fputs("預計要吃: ",fp);			fputs(store->detail,fp);                             
   	fclose(fp);
};
//回傳店家(修改
void toShopKeeper2(char path[],char User_Name[]) {
	FILE *fp=fopen(path,"w");
    fputs("toShopKeeper2\n",fp);
    fputs("你有修改請求！\n",fp);
	fputs("訂位者: ",fp);			fputs(User_Name,fp);		fputs("\n",fp);
	fputs("訂位時間: ",fp);			fputs(store->time,fp); 		fputs("\n",fp);
	fputs("預計要吃: ",fp);			fputs(store->detail,fp);                             
   	fclose(fp);
};
//回傳店家(取消
void toShopKeeper3(char path[],char User_Name[]) {
	FILE *fp=fopen(path,"w");
    fputs("toShopKeeper3\n",fp);
    fputs("你有取消請求！",fp);		fputs("\n",fp); 
	fputs("取消者: ",fp);			fputs(User_Name,fp);
	fclose(fp);
};
//檢查訂位時間
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
	int choice;//選項
    char cancel[20];//取消確認
    bool run=1;
    FILE *fp;
    char path[40]=".\\restaurant_program\\return.txt",temp[50],Password[50],User_Name[50];
    store=(struct Restaurant*)malloc(sizeof(struct Restaurant));
    fp=fopen("用戶資料.txt","r");
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
	//訂位 
    if(b==1){
    	bool exceed_five_minute=false;
		//取得密碼												 
    	fp=fopen("用戶資料.txt","r");
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
		//輸入訂位資訊 
    	printf("進入\餐\廳預訂系統\n\n");		
    	while(1){
    		printf("請輸入訂位時間,最少半小時，最晚3小時(xx:xx):");
			scanf("%s",store->time);
			if(censor_time())
				break;
			else
				printf("訂位時間最多只能在3個小時前，最少要半小時前，請重新輸入\n");
		}
       	printf("請輸入預計要吃什麼:");
       	scanf("%s",store->detail);
       	while(1){
       		printf("請輸入密碼:");
       		scanf("%s",Password);
       		if(strcmp(Password,temp)==0){
       			printf("驗證成功\\n");
       			break;
			   }
			else
				printf("輸入錯誤，請重新輸入\n");	
		}
       	toShopKeeper(path,User_Name);
       	printf("等待店家回應....\n");
       	while(1){
       		fp=fopen(path,"r");
       		fscanf(fp,"%s",temp);
       		if(strcmp(temp,"Y")==0||strcmp(temp,"y")==0){
       			printf("訂位成功\");
       			fclose(fp);
       			fp=fopen(path,"w");
       			fclose(fp);
       			book=true;
       			break;
			}
			else if(strcmp(temp,"N")==0||strcmp(temp,"n")==0){
				printf("店家不接受，訂位失敗");
				fclose(fp);
       			fp=fopen(path,"w");
       			fclose(fp);
       			book=false;
       			break;
			}
			else if(exceed_five_minute==false&&strcmp(temp,"5")==0){
				printf("店家超過5分鐘未回應\n");
				fclose(fp);
				fp=fopen(path,"w");
				exceed_five_minute=true;
			}
			else if(strcmp(temp,"10")==0){
				printf("店家超過10分鐘未回應，取消訂位\n");
				fp=fopen(path,"w");
				fclose(fp);
				book=false;
       			break;
			}
       		fclose(fp);
		}
	}
	//修改 
	else if(b==2){
		while(1){
			printf("請輸入預定時間，最少半小時，最晚3小時(修改xx:xx):");
			scanf("%s",store->time);
			if(censor_time())
				break;
			else
				printf("訂位時間最多只能在3個小時前，最少要半小時前，請重新輸入\n");	
		}									
       	printf("請輸入預計要吃什麼(修改):");
       	scanf("%s",store->detail);
       	toShopKeeper2(path,User_Name);
       	printf("等待店家回應....\n");
       	while(1){
       		fp=fopen(path,"r");
       		fscanf(fp,"%s",temp);
       		if(strcmp(temp,"Y")==0||strcmp(temp,"y")==0){
       			printf("修改成功\");
       			fclose(fp);
       			fp=fopen(path,"w");
       			fclose(fp);
       			break;
			}
			else if(strcmp(temp,"N")==0||strcmp(temp,"n")==0){
				printf("店家不接受，修改失敗");
				fclose(fp);
       			fp=fopen(path,"w");
       			fclose(fp);
       			break;
			}
       		fclose(fp);
		}
	}
	//取消
	else if(b==3){
		while(1){
			printf("你確定要取消嗎(Y/N):");
       		scanf("%s",cancel);
       		if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0||strcmp(cancel,"N")==0||strcmp(cancel,"n")==0)
       			break;
       		else
       			printf("輸入錯誤，請重新輸入\n");
		}									 
       	if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0){
           	toShopKeeper3(path,User_Name);
        	printf("等待店家回應....\n");
        	while(1){
               	fp=fopen(path,"r");
               	fscanf(fp,"%s",cancel);
               	if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0){
               		printf("取消成功\\n");
                	fclose(fp);
               		fp=fopen(path,"w");
               		fclose(fp);
               		book=false;
               		cancel_reservation=true;
               		break;
				}	
            	else if(strcmp(cancel,"N")==0||strcmp(cancel,"n")==0){
               		printf("取消失敗\n");
                	fclose(fp);
                	while(1){
                		printf("是否要強制取消(Y/N):");
						scanf("%s",cancel);
						if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0||strcmp(cancel,"N")==0||strcmp(cancel,"n")==0)
       						break;
       					else
       						printf("輸入錯誤，請重新輸入\n");
					}
					if(strcmp(cancel,"Y")==0||strcmp(cancel,"y")==0){
						fp=fopen(path,"w");
						fputs("強制取消\n",fp);
						fputs("取消者: ",fp);    fputs(User_Name,fp);
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
