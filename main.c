#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <time.h>
#include <stdbool.h>
#include "�Τ�n�J.h" 
#include "�H������\�U.h"
#include "����.h"
#include "�\�U�w��.h"  
#include "�\�U��m�d��.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t2;
	char A;
	while(1){
		system("CLS");
		while(1){
			printf("�Τ���U�п�J1 �Τ�n�J�п�J2\n"); 
			printf("�п�ܰʧ@:");
			fflush(stdin);
			scanf("%c",&A);
			if(A=='1'||A=='2')
				break;
			else
				printf("��J���~�A�Э��s��J\n");
		} 
		system("CLS");
		if(A=='1'){
			printf("�Τ���U\n\n");
			user_registration(1); //�b�����U.h 
			sleep(2);
		} 
		else if(A=='2'){
			t2=GetTickCount();
			//�K�X���~���ƹL�h�A����5���� 
			if(t2-t1<300000){
				printf("�ЦA��%d��\n",300-(t2-t1)/1000);
				sleep(2);
			}
			//�Τ�n�J 
			else{
				printf("�b���n�J\n\n");
				user_login(2);//�Τ�n�J.h 
				sleep(2);
				if(B==1){
					system("CLS");
					preference();//�b�����U.h
					while(1){
						cancel_reservation=false;
						while(1){
							printf("���\�\\�U�п�J1  �Ѩt���H�����\�\\�U�п�J2\n");
							printf("�п�ܰʧ@:");
							fflush(stdin);
							scanf("%c",&A);
							if(A=='1'||A=='2')
								break;
							else
								printf("��J���~�A�Э��s��J\n");
						}
						if(A=='1'){
							restaurant_position_inquire(1,NULL);//�\�U��m�d�� 
							if(book==true&&cancel_reservation==false||book==false&&cancel_reservation==false&&navigation==true){
								evaluation(account_number,restaurant);//���� 
								break;
							}
							if(system_end==true)
								break;		
						}
						else if(A=='2'){
							system("CLS");
							while(1){
								printf("��ܯS�w���������п�J1  ���i�H�п�J2\n");
								printf("�п�ܰʧ@:");
								fflush(stdin);
								scanf("%c",&A);
								if(A=='1'||A=='2')
									break;
								else
									printf("��J���~�A�Э��s��J\n"); 
							}
							if(A=='1')
								random_selection(1,account_number);//�H������\�U.h
							else
								random_selection(2,account_number);//�H������\�U.h
							restaurant_reservation(1,account_number);//�\�U�w��.h 
							if(book==false)
								continue;
							while(1){
								while(1){
									printf("�ק�q���T�п�J1  �����q��п�J2  �e��\�\\�U�п�J3\n");
									printf("�п�ܰʧ@:");
									fflush(stdin);
									scanf("%c",&A);
									if(A=='1'||A=='2'||A=='3')
										break;
									else
										printf("��J���~�A�Э��s��J\n");
								}
								if(A=='1')
									restaurant_reservation(2,account_number);//�\�U�w��.h
								else if(A=='2'){
									restaurant_reservation(3,account_number);//�\�U�w��.h
									break;
								}
								else if(A=='3'){
									restaurant_position_inquire(0,ptr4->restaurant_name);//�\�U��m�d��.h 
									if(cancel_reservation==false){
										evaluation(account_number,ptr4->restaurant_name);//���� 
										printf("�t�ε���\n");
										system("pause");
										return 0;
									}
									else	
										break;
								}		
							}
						}
					}
				printf("�t�ε���\n");
				system("pause");
				break;
				} 
			}
		} 
	}
	return 0;
}
