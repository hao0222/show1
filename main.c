#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <time.h>
#include <stdbool.h>
#include "用戶登入.h" 
#include "隨機選擇餐廳.h"
#include "評價.h"
#include "餐廳預約.h"  
#include "餐廳位置查詢.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t2;
	char A;
	while(1){
		system("CLS");
		while(1){
			printf("用戶註冊請輸入1 用戶登入請輸入2\n"); 
			printf("請選擇動作:");
			fflush(stdin);
			scanf("%c",&A);
			if(A=='1'||A=='2')
				break;
			else
				printf("輸入錯誤，請重新輸入\n");
		} 
		system("CLS");
		if(A=='1'){
			printf("用戶註冊\n\n");
			user_registration(1); //帳號註冊.h 
			sleep(2);
		} 
		else if(A=='2'){
			t2=GetTickCount();
			//密碼錯誤次數過多，等候5分鐘 
			if(t2-t1<300000){
				printf("請再等%d秒\n",300-(t2-t1)/1000);
				sleep(2);
			}
			//用戶登入 
			else{
				printf("帳號登入\n\n");
				user_login(2);//用戶登入.h 
				sleep(2);
				if(B==1){
					system("CLS");
					preference();//帳號註冊.h
					while(1){
						cancel_reservation=false;
						while(1){
							printf("選擇\餐\廳請輸入1  由系統隨機選擇\餐\廳請輸入2\n");
							printf("請選擇動作:");
							fflush(stdin);
							scanf("%c",&A);
							if(A=='1'||A=='2')
								break;
							else
								printf("輸入錯誤，請重新輸入\n");
						}
						if(A=='1'){
							restaurant_position_inquire(1,NULL);//餐廳位置查詢 
							if(book==true&&cancel_reservation==false||book==false&&cancel_reservation==false&&navigation==true){
								evaluation(account_number,restaurant);//評價 
								break;
							}
							if(system_end==true)
								break;		
						}
						else if(A=='2'){
							system("CLS");
							while(1){
								printf("選擇特定種類食物請輸入1  都可以請輸入2\n");
								printf("請選擇動作:");
								fflush(stdin);
								scanf("%c",&A);
								if(A=='1'||A=='2')
									break;
								else
									printf("輸入錯誤，請重新輸入\n"); 
							}
							if(A=='1')
								random_selection(1,account_number);//隨機選擇餐廳.h
							else
								random_selection(2,account_number);//隨機選擇餐廳.h
							restaurant_reservation(1,account_number);//餐廳預約.h 
							if(book==false)
								continue;
							while(1){
								while(1){
									printf("修改訂位資訊請輸入1  取消訂位請輸入2  前往\餐\廳請輸入3\n");
									printf("請選擇動作:");
									fflush(stdin);
									scanf("%c",&A);
									if(A=='1'||A=='2'||A=='3')
										break;
									else
										printf("輸入錯誤，請重新輸入\n");
								}
								if(A=='1')
									restaurant_reservation(2,account_number);//餐廳預約.h
								else if(A=='2'){
									restaurant_reservation(3,account_number);//餐廳預約.h
									break;
								}
								else if(A=='3'){
									restaurant_position_inquire(0,ptr4->restaurant_name);//餐廳位置查詢.h 
									if(cancel_reservation==false){
										evaluation(account_number,ptr4->restaurant_name);//評價 
										printf("系統結束\n");
										system("pause");
										return 0;
									}
									else	
										break;
								}		
							}
						}
					}
				printf("系統結束\n");
				system("pause");
				break;
				} 
			}
		} 
	}
	return 0;
}
