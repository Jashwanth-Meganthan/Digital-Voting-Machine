

#include<Stdio.h>
#include<Stdlib.h>
#include<string.h>



//FUNCTION PROTOTYPES

void printinfo();
void Pgraph();

//GLOBAL VARIABLES
int cand1 =0, cand2 =0, cand3 = 0,cand4 =0, cand5 =0, set =0,v =0,count = 0;
	char id[6],aid[6], fid[6], fid1[6];
 



//FILE POINTERS
FILE  *f2, *f3,*c1, *c2, *c3, *c4, *c5;
 
//LIMITED TO NO OF FILES USED

int main()
{
	
	
	f2 = fopen("userinfo.txt", "r");
	f3 = fopen("userinfocopy.txt", "a");
	
	if(f2 == NULL && f3 == NULL)
			printf("\n\nFILES NOT FOUND");

	fclose(f2);
	fclose(f3);
	printinfo();
	 
	 
	 
	 MAINMENU:
	
	 printf("\n\n>>>>> CHOOSE A SPECIFIC OPTION <<<<<<<<");
	 printf("\n[1] - ENTER ADMIN MODE");
	 printf("\n[2] - ENTER STUDENT VOTING MODE");
	 printf("\n[0] - TO EXIT");
	 printf("\nENTER YOUR CHOICE: ");
	 int choice;
	 scanf("%d", &choice);
	 
	 switch(choice)
	 {
	 	case 1:
	 			system("cls");
	 			AID:
	 			system("cls");
				 printf("\n\n>>>>>> ADMIN MODE <<<<<<<");
	 				
	 				printf("\nENTER YOUR ADMIN ID: ");
	 					scanf("%s", aid);
	 					
	 				if(!strcmp(aid,"EXIT0"))
	 					{
	 						system("CLS"); printinfo(); goto MAINMENU;
						 }
	 					
	 		
	 				if(!strcmp(aid,"ADMIN"))
	 				{	
	 				system("cls");
	 					
	 						c1 = fopen("candidate1.txt","r");
	 						c2 = fopen("candidate2.txt","r");
	 						c3 = fopen("candidate3.txt","r");
	 						c4 = fopen("candidate4.txt","r");
	 						c5 = fopen("candidate5.txt","r");
	 						fscanf(c1, "%d",&cand1);
	 							fscanf(c2, "%d",&cand2);
	 								fscanf(c3, "%d",&cand3);
	 									fscanf(c4, "%d",&cand4);
	 										fscanf(c5, "%d",&cand5);
				 			
				 			
				 			
				 			
				 			
				 			Pgraph();
				 			fclose(c1);
				 				fclose(c2);
				 					fclose(c3);
				 						fclose(c4);
				 							fclose(c5);
					 }
					 
					 
				else
					
					{	
						
						printf("\n\nENTERED ID IS INCORRECT PLEASE TRY AGAIN!");
						getch();
						goto AID; 
						break;
					}
	 			
	 			
	 				break;
	 		
			 
			 case 2:
	 				system("cls");
	 				OPTIONS:
	 				printf("\n>>>>>> WELCOME! PLEASE PROVIDE THE REQUIRED DETAILS <<<<<<");
	 				ED:
	 				printf("\n\n-> PLEASE ENTER YOUR USER ID: ");
	 				scanf("%s", id);
	 				
	 				if(!strcmp(id, "EXIT0"))
	 					{
	 						system("cls");
							 goto MAINMENU;
						 }
						 
						 
	 				if(f2 != NULL && f3 != NULL)
		 				{
						 
		 					f2 = fopen("userinfo.txt", "r");
		 						f3 = fopen("userinfocopy.txt", "r");
		 				}
	 				
	 				else
	 					{
	 						printf("\nFILES NOT FOUND!");
	 							goto MAINMENU;
						 }
	 				
	 			
	 				
	 				int i;
	 				for(i=0;i<50;i++)
	 				{
	 						fscanf(f2,"%[^\n]", fid);
	 						fscanf(f3,"%[^\n]", fid1);
	 						
	 						
	 					if(!strcmp(fid,id) )
	 					{
	 							if((strcmp(fid1, id)!= 0))
	 							{
	 								f3 = fopen("userinfocopy.txt","a");
	 								
									 	fprintf(f3, "%s", id);
	 										fprintf(f3,"\n");
	 											fclose(f3);
	 												set = 1;
	 													break;
								 }
	 							
	 							
	 							else
	 								{
	 									int v =0;
	 									printf("\n\n");
		 									while(v<52)
		 										{
		 											printf("-"); v++;
		 											
												 }
													printf("\n  	>>>>>> ID ALREADY USED! <<<<<<<\n");
															v=0;
																	while(v<52)
								 										{
								 											printf("-"); v++;
								 											
																		 }	
																				 while(v<52)
										 										{
										 											printf("-"); v++;
										 											
																				 }	
																		 				printf("\n\n\n\n");
																		 					getch();
																		 					system("cls");
										
	 																								goto OPTIONS;	
									 }
	 							
	 							 
	 							
		 					
					 		}
	 					
						 else
						 {
						 	
						 	fscanf(f2,"\n"); 
								fscanf(f3,"\n");
							  		set =0; 
							 
							 }
						 	
					}
				
				
				
	 			fclose(f3);
	 			fclose(f2);
	 			
				
				
				if(set ==1)
				{
					set = 0;
						f3 = fopen("userinfocopy.txt", "a");
	
									system("cls");
									VC:
										printf("\n\nCHOOSE A DESIRED OPTION TO CASTE YOUR VOTE:");
										printf("\n [1] - TO CASTE YOUR VOTE TO Mr.AKSHAY ");
										printf("\n [2] - TO CASTE YOUR VOTE TO Mr.ARAV ");
										printf("\n [3] - TO CASTE YOUR VOTE TO Ms.DHARSHINI ");
										printf("\n [4] - TO CASTE YOUR VOTE TO Mr.MOHAMMED");
										printf("\n [5] - TO CASTE YOUR VOTE TO Ms.SHREYA");
										printf("\n ENTER YOUR CHOICE HERE: ");
							int x;
								scanf("%d", &x);
									printf("\n\n")	;
							
							switch(x)
							{
							
							
							case 1:
									cand1++;
								 		count++;
											c1 = fopen("candidate1.txt", "w");
												fprintf(c1, "%d",cand1);
													fclose(c1);
														break;
							case 2:
									cand2++;
										count++;
											c2 = fopen("candidate2.txt", "w");
												fprintf(c2, "%d",cand2);
													fclose(c2);
														break;
							
							case 3:
									cand3++;;
										count++;
											c3 = fopen("candidate3.txt", "w");
												fprintf(c3, "%d",cand3);
													fclose(c3);
														break;
							
							case 4:
									cand4++;
										count++;
											c4 = fopen("candidate4.txt", "w");
										
												fprintf(c4, "%d",cand4);
													fclose(c4);
														break;
							
							case 5:
									cand5++;
										count++;
											c5 = fopen("candidate5.txt", "w");
													fprintf(c5, "%d",cand5);
														fclose(c1);
															break;
							
							default:
										v=0;
										while(v<52)
	 										{
	 											printf("-"); v++;
	 											
											 }	
													printf("\n  	>>> INVALID OPTION, TRY AGAIN! <<<\n");
													
											
											v =0;
											while(v<52)
											
	 										{
	 											printf("-"); v++;
	 											
											 }
											getch();
												system("cls");
														goto VC;
															break;
							
							
											
							}
								int v =0;
									printf("\n");
										while(v<52)
	 										{
	 											printf("-"); v++;
	 											
											 }	
													printf("\n   YOUR VOTE HAS BEEN ADDED, THANK YOU !!\n");
													v=0;
													while(v<52)
					 										{
					 											printf("-"); v++;
					 											
															 }
															 printf("\n\n\n\n\n");
															 
														getch();
															system("cls")	;
														 
													goto OPTIONS;
										}
				if(set == 0)
				{
						system("cls");
						printf("\n\n");
						while(v<52)
							{printf("-"); v++;}
					 										
					
					printf("\n >>>> THE VOTER ID YOU ENTERED IS INCORRECT! <<<<");
					printf("\n	       PLEASE TRY AGAIN! "); v=0;printf("\n");
					
						while(v<52)
								{printf("-"); v++;}
					 				
	
						
								goto ED;	
				}
				fflush(stdin);
				
				
				case 0:
					exit(0);
					break;
				
				default:
						system("cls");
						printf("\n->INCORRECT ENRTY PRESS ENTER AND TRY AGAIN!");
						getch();
						system("cls");
						goto MAINMENU;
				
	 
	 
		}
		return 0;
}
void printinfo()
{
	
	printf("\n\n");
	int i = 0;
	
	while(i<50)
		{
			printf("*");
			i++;
		}
		
	printf("\n>>>>>>>>> ELECTRONIC VOTING MACHINE <<<<<<<<<<<<<<\n");
	i=0;
	while(i<50)
		{
			printf("*"); 
			i++;
		}
		

	
}



						
																				
		 										
		 											
												 
																		
		 									
																	


 

void Pgraph()
{
	system("cls");
		int i;
		printf("\n--------------------------\n");	
			printf("   VOTE PROGRESS BAR");
			printf("\n--------------------------\n");	
			
		printf("\nMr.AKSHAY    -> ");
				for(i=0;i<cand1;i++)
					printf("%c",219 ); printf(" %d", cand1);
						 
					
					
						
						printf("\n\nMr.ARAV      -> ");
							for(i=0;i<cand2;i++)
								printf("%c",219 ); printf(" %d", cand2);
									
								printf("\n\nMs.DHARSHINI -> ");
										for(i=0;i<cand3;i++)
												printf("%c",219); printf(" %d", cand3);
											
												printf("\n\nMr.MOHAMMED  -> ");
													for(i=0;i<cand4;i++)
															printf("%c", 219);	 printf(" %d", cand4);
															
																printf("\n\nMs.SHREYA    -> ");
																	for(i=0;i<cand5;i++)
																		printf("%c",219); printf(" %d", cand5);
																		
																			printf("\n\nTOTAL STUDENTS THAT VOTED: %d", (cand1+cand2+cand3+cand4+cand5));
																		
																		printf("\n--------------------------\n\n\n");
																		printf("\nPRESS ANY KEY TO RETURN TO MAIN MENU!");
																			getch();
																			system("cls");
																			main();
																			
																			}
									
										
										
			
			
					
					
				
					
									
						
		
			
					 
					 
							
						 				
						 					 
						 					
	
						
									
										 
				
					 
	 			
