char restaurant[20];
bool navigation=false;
bool system_end=false;
//�ɯ� 
void googlemap(char res[]){
	printf("�i�JGOOGLE MAP\n");
	printf("���o�{�b��m\n");
	printf("�j�M %s\n",res);
	srand( (unsigned)time(NULL) );
	int i=rand()%3;//�H�����o�ܼ�0�A1�A2 
	if(strcmp(res,"�T���m��������")==0){
		printf("�a�}�� : �x������ٰϳ{�Ҹ�19��6��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��5����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��7����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˦ۦ樮 ��4����\n");
		}
	}
	else if(strcmp(res,"�j�B����")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�121��31��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��3����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��9����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��2����\n");
		}
	}
	else if(strcmp(res,"�j�{�Ҥp����")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�109��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��3����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˾��� ��1����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˨B�� ��5����\n");
		}
	}
	else if(strcmp(res,"�Ѫ����N����")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�155��11��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��7����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��10����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��4����\n");
		}
	}
	else if(strcmp(res,"���f�f���Ƨ{")==0){
		printf("�a�}�� : �x������ٰϳ{�Ҹ�19��6��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��5����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��5����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��2����\n");
		}
	}
	else if(strcmp(res,"�����D")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�126��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��7����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��8����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��5����\n");
		}
	}
	else if(strcmp(res,"��������")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�122��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��8����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��9����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˦ۦ樮 ��5����\n");
		}
	}
	else if(strcmp(res,"���ꭷ�������]")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�106��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��7����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��7����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��4����\n");
		}
	}
	else if(strcmp(res,"�����")==0){
		printf("�a�}�� : �x������ٰϺ֬P��427��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��7����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˦ۦ樮 ��5����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��4����\n");
		}
	}
	else if(strcmp(res,"�˰O��")){ //�\�r�����X�� 
		printf("�a�}�� : �x����ٰϦ�w��200��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��5����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��7����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��4����\n");
		}
	}
	else if(strcmp(res,"���֭���")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�121-29��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��3����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��8����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��3����\n");
		}
	}
	else if(strcmp(res,"�����ѯR")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�121��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��2����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��3����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��1����\n");
		}
	}
	else if(strcmp(res,"�²��l")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�115��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��3����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��3����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��2����\n");
		}
	}
	else if(strcmp(res,"�½ީ@��")==0){
		printf("�a�}�� : �x������ٰϦ�w��217��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��5����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��8����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��4����\n");
		}
	}
	else if(strcmp(res,"���N���d����")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�100��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��3����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��4����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��2����\n");
		}
	}
	else if(strcmp(res,"�����~��")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�100��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��3����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��4����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��2����\n");
		}
	}
	else if(strcmp(res,"�ۭG�M�a")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�127��22��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��8����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��11����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��6����\n");
		}
	}
	else if(strcmp(res,"�s�C�~�������{")==0){
		printf("�a�}�� : �x������ٰϺ֬P��405��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��9����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˾��� ��6����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˦ۦ樮 ��7����\n");
		}
	}
	else if(strcmp(res,"�צ����]")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�117��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��6����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��5����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��3����\n");
		}
	}
	else if(strcmp(res,"�K�H�f�m")==0){
		printf("�a�}�� : �x������ٰϤ�ظ�102��\n");
		printf("�}�l�W�����u...\n");
		sleep(2);
		if(i==0){
			printf("��ܸ��|A\n");
			printf("���˨B�� ��7����\n");
		}
		else if(i==1){
			printf("��ܸ��|B\n");
			printf("���˨B�� ��8����\n");
		}
		else if(i==2){
			printf("��ܸ��|C\n");
			printf("���˾��� ��5����\n");
		}
	}	
}
//��� 
void lottery(){
    printf("�i�J����(���)����\n");
    printf("�}�l���\n");
	srand( (unsigned)time(NULL) );
	int k=rand()%6;//�H�����o�ܼ�0�A1�A2�A3�A4�A5;
	if(k==0){
		printf("�i���S��\n");
	}
	else if(k==1){
		printf("���ߩ⤤ ���Q�P���ƤE���� �u�f\n");
	}
	else if(k==2){
		printf("���ߩ⤤ 7-11�E�����u�f\n");
	}
	else if(k==3){
		printf("���ߩ⤤ ����Ү��O�e���]���� �u�f\n");
	}
	else if(k==4){
		printf("���ߩ⤤ �t�Υ[���\\�U������� �u�f\n");
	}
	else if(k==5){
		printf("���ߩ⤤ �t�Υ[���\\�U�Q����� �u�f\n");
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
		printf("�i��\�\\�U :\n1.�T���m��������\n2.�j�B����\n3.�j�{�Ҥp����\n4.�Ѫ����N����\n5.���f�f���Ƨ{\n6.�����D\n7.��������\n8.���ꭷ�������]\n9.�����\n10.�˰O��\�\\\n11.���֭���\n12.�����ѯR\n13.�²��l\n14.�½ީ@��\n15.���N���d����\n16.�����~��\n17.�ۭG�M�a\n18.�s�C�~�������{\n19.�צ����]\n20.�K�H�f�m\n");
		printf("�п�J\�\\�U�W�� : ");
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
			printf("\n\n�ɯ�п�J1  �q��п�J2  ��^�п�J3\n");
		else if(A==0)
			printf("\n\n�ɯ�п�J1\n");
		input=0;
		while(1){
			printf("�п�J�ʧ@:");
			fflush(stdin);
			scanf("%d",&input);
			if(A==1&&((char)(input+48))>=49&&((char)(input+48))<=51||A==0&&((char)(input+48))==49)
				break;
			else
				printf("��J���~�A�Э��s��J\n");
		}
		if(input==1){
			navigation=true;
			while(b==0){
				system("CLS");
				googlemap(restaurant);
				while(1){
					printf("�O�_���N�ҿ���u?(yes/no) : ");
					fflush(stdin);
					scanf("%s",choice);
					if(strcmp(choice,"yes")==0||strcmp(choice,"no")==0)
						break;
					else
						printf("��J���~�A�Э��s��J\n");
				}
				if(strcmp(choice,"no")==0){
					if(n==3){
						system("CLS");
						if(book==false)
							printf("�����t�νп�J1  ���s�W�����u�п�J2\n");
						else
							printf("�����q��п�J1  ���s�W�����u�п�J2\n");
						input=0;
						while(1){
							printf("�п�ܰʧ@:");
							fflush(stdin);
							scanf("%d",&input);
							if(((char)(input+48))==49||((char)(input+48))==50)
								break;
							else
								printf("��J���~�A�Э��s��J\n");
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
					printf("���s�W����...\n");
					sleep(1);
				}
				else if(strcmp(choice,"yes")==0){
					b=1;
				}
			}
			if(navigation==true){
				printf("\n���O�̩�F\n");
				sleep(1);
				system("CLS");
				if(book==true){
					while(1){
						while(1){
							printf("�O�_�n��QR-CODE�A���o�馩?(yes/no):");
							fflush(stdin);
							scanf("%s",choice);
							if(strcmp(choice,"yes")==0||strcmp(choice,"no")==0)
								break;
							else
								printf("��J���~�A�Э��s��J\n");
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
							fp=fopen(".\\restaurant_program\\return.txt","w");
							fputs("�쩱\n",fp);
							fputs("�쩱�q��\n",fp);
							fputs("���O��: ",fp);
							fputs(user_name,fp);
							fputs("\n��F",fp);
							fclose(fp);
							srand( (unsigned)time(NULL) );
							char num[5];
							sprintf(num,"%d",(10+rand()%89));
							strcat(temp,num);
							while(1){
								system("CLS");
								printf("�A��QR-CODE��:%s\n",temp);
								printf("�п�JQR-CODE:");
								fflush(stdin);
								scanf("%s",QR_CODE);
								if(strcmp(QR_CODE,temp)==0){
									system("CLS");
									lottery();
									break;
								}
								else{
									printf("��J���~�A�Э��s��J\n");
									sleep(2);
								}
							}
							break;	
						}
						else if(strcmp(choice,"no")==0)
							break;
						else
							printf("��J���~�A�Э��s��J\n"); 
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
						printf("�ק�q���T�п�J1  �����q��п�J2  �e��\�\\�U�п�J3\n");
						while(1){
							printf("�п�ܰʧ@:");
							fflush(stdin);
							scanf("%d",&input);
							if(((char)(input+48))>=49&&((char)(input+48))<=51)
								break;
							else
								printf("��J���~�A�Э��s��J\n");
						}
						if(input==1)
							restaurant_reservation(2,account_number);//�\�U�w��.h 
						else if(input==2){
							restaurant_reservation(3,account_number);//�\�U�w��.h 
							break;
						} 
						else if(input==3){
							restaurant_position_inquire(0,restaurant);//�\�U��m�d��.h 
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
