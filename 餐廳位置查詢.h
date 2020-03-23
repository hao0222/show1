char restaurant[20];
bool navigation=false;
bool system_end=false;
//導航 
void googlemap(char res[]){
	printf("進入GOOGLE MAP\n");
	printf("取得現在位置\n");
	printf("搜尋 %s\n",res);
	srand( (unsigned)time(NULL) );
	int i=rand()%3;//隨機取得變數0，1，2 
	if(strcmp(res,"三友町美食茶樓")==0){
		printf("地址為 : 台中市西屯區逢甲路19巷6號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約5分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約7分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦自行車 約4分鐘\n");
		}
	}
	else if(strcmp(res,"大丁拉麵")==0){
		printf("地址為 : 台中市西屯區文華路121之31號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約3分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約9分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約2分鐘\n");
		}
	}
	else if(strcmp(res,"大逢甲小辣椒")==0){
		printf("地址為 : 台中市西屯區文華路109號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約3分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦機車 約1分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦步行 約5分鐘\n");
		}
	}
	else if(strcmp(res,"天狗炙燒牛排")==0){
		printf("地址為 : 台中市西屯區文華路155巷11號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約7分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約10分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約4分鐘\n");
		}
	}
	else if(strcmp(res,"牛妹妹牛排坊")==0){
		printf("地址為 : 台中市西屯區逢甲路19巷6號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約5分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約5分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約2分鐘\n");
		}
	}
	else if(strcmp(res,"炒悟道")==0){
		printf("地址為 : 台中市西屯區文華路126號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約7分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約8分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約5分鐘\n");
		}
	}
	else if(strcmp(res,"紅豆食堂")==0){
		printf("地址為 : 台中市西屯區文華路122號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約8分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約9分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦自行車 約5分鐘\n");
		}
	}
	else if(strcmp(res,"異國風味美食館")==0){
		printf("地址為 : 台中市西屯區文華路106號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約7分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約7分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約4分鐘\n");
		}
	}
	else if(strcmp(res,"麥當勞")==0){
		printf("地址為 : 台中市西屯區福星路427號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約7分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦自行車 約5分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約4分鐘\n");
		}
	}
	else if(strcmp(res,"森記快")){ //餐字打不出來 
		printf("地址為 : 台中西屯區西安街200號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約5分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約7分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約4分鐘\n");
		}
	}
	else if(strcmp(res,"翔樂食堂")==0){
		printf("地址為 : 台中市西屯區文華路121-29號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約3分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約8分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約3分鐘\n");
		}
	}
	else if(strcmp(res,"陽光老爹")==0){
		printf("地址為 : 台中市西屯區文華路121號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約2分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約3分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約1分鐘\n");
		}
	}
	else if(strcmp(res,"黑盒子")==0){
		printf("地址為 : 台中市西屯區文華路115號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約3分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約3分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約2分鐘\n");
		}
	}
	else if(strcmp(res,"黑豬咖哩")==0){
		printf("地址為 : 台中市西屯區西安街217號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約5分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約8分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約4分鐘\n");
		}
	}
	else if(strcmp(res,"滿燒肉丼食堂")==0){
		printf("地址為 : 台中市西屯區文華路100號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約3分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約4分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約2分鐘\n");
		}
	}
	else if(strcmp(res,"摩斯漢堡")==0){
		printf("地址為 : 台中市西屯區文華路100號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約3分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約4分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約2分鐘\n");
		}
	}
	else if(strcmp(res,"擄胃專家")==0){
		printf("地址為 : 台中市西屯區文華路127巷22號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約8分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約11分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約6分鐘\n");
		}
	}
	else if(strcmp(res,"龍涎居雞膳食坊")==0){
		printf("地址為 : 台中市西屯區福星路405號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約9分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦機車 約6分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦自行車 約7分鐘\n");
		}
	}
	else if(strcmp(res,"豐成麵館")==0){
		printf("地址為 : 台中市西屯區文華路117號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約6分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約5分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約3分鐘\n");
		}
	}
	else if(strcmp(res,"鐵人番町")==0){
		printf("地址為 : 台中市西屯區文華路102號\n");
		printf("開始規劃路線...\n");
		sleep(2);
		if(i==0){
			printf("選擇路徑A\n");
			printf("推薦步行 約7分鐘\n");
		}
		else if(i==1){
			printf("選擇路徑B\n");
			printf("推薦步行 約8分鐘\n");
		}
		else if(i==2){
			printf("選擇路徑C\n");
			printf("推薦機車 約5分鐘\n");
		}
	}	
}
//抽獎 
void lottery(){
    printf("進入抽抽樂(抽獎)介面\n");
    printf("開始抽獎\n");
	srand( (unsigned)time(NULL) );
	int k=rand()%6;//隨機取得變數0，1，2，3，4，5;
	if(k==0){
		printf("可惜沒中\n");
	}
	else if(k==1){
		printf("恭喜抽中 五十嵐飲料九五折 優惠\n");
	}
	else if(k==2){
		printf("恭喜抽中 7-11九五折優惠\n");
	}
	else if(k==3){
		printf("恭喜抽中 麥當勞消費送中包薯條 優惠\n");
	}
	else if(k==4){
		printf("恭喜抽中 系統加盟餐\廳五元折價 優惠\n");
	}
	else if(k==5){
		printf("恭喜抽中 系統加盟餐\廳十元折價 優惠\n");
	}
	sleep(3);
}

void restaurant_position_inquire(int A,char restaurant_name[]){
	system("CLS");
	FILE *fp;
	int input,n=0;
	char choice[5],QR_CODE[5],user_name[50],path[50]=".\\restaurant\\",temp[100];
	bool b=0;
	if(A==1){
		printf("可選\餐\廳 :\n1.三友町美食茶樓\n2.大丁拉麵\n3.大逢甲小辣椒\n4.天狗炙燒牛排\n5.牛妹妹牛排坊\n6.炒悟道\n7.紅豆食堂\n8.異國風味美食館\n9.麥當勞\n10.森記快\餐\\n11.翔樂食堂\n12.陽光老爹\n13.黑盒子\n14.黑豬咖哩\n15.滿燒肉丼食堂\n16.摩斯漢堡\n17.擄胃專家\n18.龍涎居雞膳食坊\n19.豐成麵館\n20.鐵人番町\n");
		printf("請輸入\餐\廳名稱 : ");
		scanf("%s",restaurant);
	}
	else if(A==0){
		strcpy(restaurant,restaurant_name);
	}
	system("CLS");
	strcat(path,restaurant); strcat(path,".txt");
	fp=fopen(path,"r");
	while(fgets(temp,100,fp)!=NULL){
		printf("%s",temp);
	}
	fclose(fp);
	while(1){
		if(A==1)
			printf("\n\n導航請輸入1  訂位請輸入2  返回請輸入3\n");
		else if(A==0)
			printf("\n\n導航請輸入1\n");
		input=0;
		while(1){
			printf("請輸入動作:");
			fflush(stdin);
			scanf("%d",&input);
			if(A==1&&((char)(input+48))>=49&&((char)(input+48))<=51||A==0&&((char)(input+48))==49)
				break;
			else
				printf("輸入錯誤，請重新輸入\n");
		}
		if(input==1){
			navigation=true;
			while(b==0){
				system("CLS");
				googlemap(restaurant);
				while(1){
					printf("是否滿意所選路線?(yes/no) : ");
					fflush(stdin);
					scanf("%s",choice);
					if(strcmp(choice,"yes")==0||strcmp(choice,"no")==0)
						break;
					else
						printf("輸入錯誤，請重新輸入\n");
				}
				if(strcmp(choice,"no")==0){
					if(n==3){
						system("CLS");
						if(book==false)
							printf("結束系統請輸入1  重新規劃路線請輸入2\n");
						else
							printf("取消訂位請輸入1  重新規劃路線請輸入2\n");
						input=0;
						while(1){
							printf("請選擇動作:");
							fflush(stdin);
							scanf("%d",&input);
							if(((char)(input+48))==49||((char)(input+48))==50)
								break;
							else
								printf("輸入錯誤，請重新輸入\n");
						}
						if(book==true&&input==1){
							restaurant_reservation(3,account_number);
							if(cancel_reservation==true){
								navigation=false;
								break;
							}	
							else
								n=0;
						}
						else if(book==true&&input==2)
							n=0;
						else if(book==false&&input==1){
							system("CLS");
							navigation=false;
							system_end=true;
							break;
						}
						else if(book==false&&input==2)
							n=0;
					}	
					n++;
					system("CLS");
					printf("重新規劃中...\n");
					sleep(1);
				}
				else if(strcmp(choice,"yes")==0){
					b=1;
				}
			}
			if(navigation==true){
				printf("\n消費者抵達\n");
				sleep(1);
				system("CLS");
				if(book==true){
					while(1){
						while(1){
							printf("是否要掃QR-CODE，取得折扣?(yes/no):");
							fflush(stdin);
							scanf("%s",choice);
							if(strcmp(choice,"yes")==0||strcmp(choice,"no")==0)
								break;
							else
								printf("輸入錯誤，請重新輸入\n");
						}
						if(strcmp(choice,"yes")==0){
							fp=fopen(path,"r");
							while(1){
								fscanf(fp,"%s",temp);
								if(strcmp(temp,"QR-CODE:")==0){
									fscanf(fp,"%s",temp);
									break;
								}
							}
							fclose(fp);
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
							fp=fopen(".\\restaurant_program\\return.txt","w");
							fputs("到店\n",fp);
							fputs("到店通知\n",fp);
							fputs("消費者: ",fp);
							fputs(user_name,fp);
							fputs("\n到了",fp);
							fclose(fp);
							srand( (unsigned)time(NULL) );
							char num[5];
							sprintf(num,"%d",(10+rand()%89));
							strcat(temp,num);
							while(1){
								system("CLS");
								printf("你的QR-CODE為:%s\n",temp);
								printf("請輸入QR-CODE:");
								fflush(stdin);
								scanf("%s",QR_CODE);
								if(strcmp(QR_CODE,temp)==0){
									system("CLS");
									lottery();
									break;
								}
								else{
									printf("輸入錯誤，請重新輸入\n");
									sleep(2);
								}
							}
							break;	
						}
						else if(strcmp(choice,"no")==0)
							break;
						else
							printf("輸入錯誤，請重新輸入\n"); 
					}
				}		
			}	
			break;
		}
		else if(input==2){
			if(A==1){
				restaurant_reservation(1,account_number);
				if(book==true){
					while(1){
						input=0;
						printf("修改訂位資訊請輸入1  取消訂位請輸入2  前往\餐\廳請輸入3\n");
						while(1){
							printf("請選擇動作:");
							fflush(stdin);
							scanf("%d",&input);
							if(((char)(input+48))>=49&&((char)(input+48))<=51)
								break;
							else
								printf("輸入錯誤，請重新輸入\n");
						}
						if(input==1)
							restaurant_reservation(2,account_number);//餐廳預約.h 
						else if(input==2){
							restaurant_reservation(3,account_number);//餐廳預約.h 
							break;
						} 
						else if(input==3){
							restaurant_position_inquire(0,restaurant);//餐廳位置查詢.h 
							break;
						}
					}
				}	
			}
			break;		
		}
		else if(input==3)
			restaurant_position_inquire(1,NULL);
	}
}
