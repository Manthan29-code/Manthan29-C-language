/*
		  NAME-->MOVALIYA MANTHAN JAGDISHBAHI
		  DOC-->15\6
		  TOPIC--PROJECT 2
*/
#include<stdio.h>
#include<stdlib.h>
#define size 5
void main(){
    int choice,i,j,k,a[size],t,key,index,b[size],c[size],g[9];
    int d[3][3],e[3][3],f[3][3];
    printf("\n1--loop");
    printf("\n2--array");
    printf("\n3--exit");
    printf("\nenter your choice=");
    scanf("%d",&choice);
    switch(choice){
       case 1:printf("\n1--for loop");
	      printf("\n2--while loop");
	      printf("\n3--do while loop");
	      printf("\nenter your choice=");
	      scanf("%d",&choice);
	      switch(choice){
		 case 1:printf("\n1--normal vertical triangle");
			printf("\n2--reverse vertical triangle");
			printf("\n3--normal horizontal triangle");
			printf("\n4--reverse horizontal triangle");
			printf("\nenter your choice=");
			scanf("%d",&choice);
			switch(choice){
			   case 1:for(k=0;k<=3;k++){
				    for(i=0;i<=5;i++){
				      for(j=0;j<=i;j++){
					printf("#");
				      }//end of j for
				      printf("\n");
				    }//end of i for
				  }//end of k for
			   break;
			   case 2:for(k=0;k<=3;k++){
				    for(i=0;i<=5;i++){
				      for(j=5;j>=i;j--){
					printf("#");
				      }//end of j for
				      printf("\n");
				    }//end of i for
				  }//end of k for
			   break;
			   case 3:for(i=0;i<=5;i++){
				     for(j=0;j<=i;j++){
				       printf("#");
				     }
				     printf("\t");
				     for(j=0;j<=i;j++){
				       printf("#");
				     }
				     printf("\t");
				     for(j=0;j<=i;j++){
				       printf("#");
				     }
				   printf("\n");
				  }//end of outer for
			   break;
			   case 4:for(i=0;i<=5;i++){
				     for(j=5;j>=i;j--){
				       printf("#");
				     }
				     printf("\t");
				     for(j=5;j>=i;j--){
				       printf("#");
				     }
				     printf("\t");
				     for(j=5;j>=i;j--){
				       printf("#");
				     }
				   printf("\n");
				  }//end of outer for
			   break;
			   default:printf("\ninvalide choice");
			}//end of triangle switch
		 break;
		 case 2:printf("\n1--normal vertical triangle");
			printf("\n2--reverse vertical triangle");
			printf("\n3--normal horizontal triangle");
			printf("\n4--reverse horizontal triangle");
			printf("\nenter your choice=");
			scanf("%d",&choice);
			switch(choice){
			    case 1:k=0;
				   while(k<=3){
				    i=0;
				    while(i<=5){
				    j=0;
				      while(j<=i){
					printf("#");
					j++;
				      }//end of j while
				      printf("\n");
				      i++;
				    }//end of i while
				    k++;
				  }//end of k while
			    break;
			    case 2:k=0;
				   while(k<=3){
				    i=0;
				    while(i<=5){
				    j=5;
				      while(j>=i){
					printf("#");
					j--;
				      }//end of j while
				      printf("\n");
				      i++;
				    }//end of i while
				    k++;
				  }//end of k while
			    break;
			    case 3:i=0;
				   while(i<=5){
				     j=0;
				     while(j<=i){
					printf("$");
					j++;
				     }//end of inner while 1
				   printf("\t");
				     j=0;
				     while(j<=i){
					printf("$");
					j++;
				     }//end of inner while 2
				     printf("\t");
				     j=0;
				     while(j<=i){
					printf("$");
					j++;
				     }//end of inner while 2
				     printf("\t");
				     j=0;
				     while(j<=i){
					printf("$");
					j++;
				     }//end of inner while 2
				     printf("\t");
				     j=0;
				     while(j<=i){
					printf("$");
					j++;
				     }//end of inner while 3
				  printf("\n");
				  i++;
				  }//end of outer while
			    break;
			    case 4:i=0;
				   while(i<=5){
				     j=5;
				     while(j>=i){
					printf("$");
					j--;
				     }//end of inner while 1
				   printf("\t");
				     j=5;
				     while(j>=i){
					printf("$");
					j--;
				     }//end of inner while 2
				     printf("\t");
				     j=5;
				     while(j>=i){
					printf("$");
					j--;
				     }//end of inner while 2
				     printf("\t");
				     j=5;
				     while(j>=i){
					printf("$");
					j--;
				     }//end of inner while 2
				     printf("\t");
				     j=5;
				     while(j>=i){
					printf("$");
					j--;
				     }//end of inner while 3
				  printf("\n");
				  i++;
				  }//end of outer while
			    break;
			}// end of triangle switch
		 break;
		 case 3:printf("\n1--normal vertical triangle");
			printf("\n2--reverse vertical triangle");
			printf("\n3--normal horizontal triangle");
			printf("\n4--reverse horizontal triangle");
			printf("\nenter your choice=");
			scanf("%d",&choice);
			switch(choice){
			    case 1:k=0;
				   do{
				    i=0;
				    do{
				     j=0;
				     do{
				       printf("$");
				       j++;
				     }while(j<=i);//end of j
				     printf("\n");
				     i++;
				    }while(i<=5);//end of i
				   k++;
				   }while(k<=3);//end of k
			    break;
			    case 2:k=0;
				   do{
				    i=0;
				    do{
				     j=5;
				     do{
				       printf("$");
				       j--;
				     }while(j>=i);//end of j
				     printf("\n");
				     i++;
				    }while(i<=5);//end of i
				   k++;
				   }while(k<=3);//end of k
			    break;
			    case 3:i=0;
				   do{
				     j=0;
				     do{
				      printf("$");
				      j++;
				     }while(j<=i);//end of while 1
				     printf("\t");
				     j=0;
				     do{
				      printf("$");
				      j++;
				     }while(j<=i);//end of while 2
				     printf("\t");
				     j=0;
				     do{
				      printf("$");
				      j++;
				     }while(j<=i);//end of while 3
				     printf("\t");
				     j=0;
				     do{
				      printf("$");
				      j++;
				     }while(j<=i);//end of while 4
				     printf("\t");
				     j=0;
				     do{
				      printf("$");
				      j++;
				     }while(j<=i);//end of while 5
				     printf("\n");
				     i++;
				   }while(i<=5);//end of i
			    break;
			    case 4:i=0;
				   do{
				     j=5;
				     do{
				      printf("$");
				      j--;
				     }while(j>=i);//end of while 1
				     printf("\t");
				     j=5;
				     do{
				      printf("$");
				      j--;
				     }while(j>=i);//end of while 2
				     printf("\t");
				     j=5;
				     do{
				      printf("$");
				      j--;
				     }while(j>=i);//end of while 3
				     printf("\t");
				     j=5;
				     do{
				      printf("$");
				      j--;
				     }while(j>=i);//end of while 4
				     printf("\t");
				     j=5;
				     do{
				      printf("$");
				      j--;
				     }while(j>=i);//end of while 5
				     printf("\n");
				     i++;
				   }while(i<=5);//end of i
			    break;
			    default:printf("\ninvalide choice");
			}// end of triangle switch
		 break;
		 default:printf("\ninvalide choice");
	     }//end of loop switch
      break;
      case 2:printf("\n1-->1D array");
	     printf("\n2-->2D array");
	     printf("\nenter your chouce=");
	     scanf("%d",&choice);
	     switch(choice){
		case 1:printf("\n1-->calculator");
		       printf("\n2-->sorting");
		       printf("\n3-->searching");
		       printf("\nenter your chouce=");
		       scanf("%d",&choice);
		       switch(choice){
			 case 1:printf("\n1----addition");
				printf("\n2---subtraction");
				printf("\n3----multiplicaton");
				printf("\n4---division");
				printf("\nchoose the operation");
				scanf("%d",&choice);
				switch(choice){
				      case 1:
					      printf("\nenter the value for first array");
					      for(i=0;i<size;i++){
						 printf("\na[%d]",i);
						 scanf("%d",&a[i]);
					      }
					      printf("\nenter the value for second array");
					      for(i=0;i<size;i++){
						 printf("\nb[%d]",i);
						 scanf("%d",&b[i]);
					      }
					      for(i=0;i<size;i++){
						   c[i]=a[i]+b[i];
					      }
					      clrscr();
					      for(i=0;i<3;i++){
						   printf("%d + %d = %d\n",a[i],b[i],c[i]);
					     }
				      break;//end of case 1
				      case 2:
					     printf("\nenter the value for first array");
					     for(i=0;i<size;i++){
						    printf("\na[%d]",i);
						    scanf("%d",&a[i]);
					     }
					     printf("\nenter the value for second array");
					     for(i=0;i<size;i++){
						printf("\nb[%d]",i);
						scanf("%d",&b[i]);
					     }
					     for(i=0;i<size;i++){
					       c[i]=a[i]-b[i];
					     }
					     clrscr();
					     for(i=0;i<size;i++){
						   printf("%d - %d = %d\n",a[i],b[i],c[i]);
					     }
				      break;//end of case 2
				     case 3:
					    printf("\nenter the value for first array");
					    for(i=0;i<size;i++){
							printf("\na[%d]",i);
							scanf("%d",&a[i]);
					    }
					    printf("\nenter the value for second array");
					    for(i=0;i<size;i++){
						       printf("\nb[%d]",i);
						       scanf("%d",&b[i]);
					    }
					    for(i=0;i<size;i++){
						       c[i]=a[i]*b[i];
					    }
					    clrscr();
					    for(i=0;i<size;i++){
						       printf("%d * %d = %d\n",a[i],b[i],c[i]);
					   }
				    break;//end of case 3
				   case 4:
					  printf("\nenter the value for first array");
					  for(i=0;i<size;i++){
						printf("\na[%d]",i);
						scanf("%d",&a[i]);
					  }
					  printf("\nenter the value for second array");
					  for(i=0;i<size;i++){
						printf("\nb[%d]",i);
						scanf("%d",&b[i]);
					  }
					  for(i=0;i<size;i++){
						c[i]=a[i]/b[i];
					  }
					  clrscr();
					  for(i=0;i<size;i++){
						  printf("%d / %d = %d\n",a[i],b[i],c[i]);
					 }
				   break;//end of case 4
				}//end of calculor switch
			  break;//of calculator case
			 case 2:for(i=0;i<size;i++){
					printf("\nenter the int value for a[%d]",i);
					scanf("%d",&a[i]);
				 }
				printf("\nthe unsorted array is:");
				for(i=0;i<size;i++){
				       printf("\n%d",a[i]);
				}
				for(i=0;i<size;i++){
				    for(j=i;j<size-1;j++){
					if(a[i]>a[j+1]){
						 t=a[i];
						 a[i]=a[j+1];
						 a[j+1]=t;
					 }
				    }//end od inner for
			       } ///end of outer for
			       printf("\nThe sorted array is:\n");
			       for(i=0;i<size;i++){
				     printf("%d\t",a[i]);
			      }
			break;
			case 3:for(i=0;i<size;i++){
				    printf("\nenter the element for a[%d]",i);
				    scanf("%d",&a[i]);
			       }
			       printf("\nthe array is as following\n");
			       for(i=0;i<size;i++){
				printf("%d\t",a[i]);
			       }
			       printf("\nenter the key value");
			       scanf("%d",&key);
			       for(i=0;i<size;i++){
					 if(key==a[i]){
						   index=i;
						   break;
					 }
			       }
			      if(index==-1){
				printf("\nsearch unsuccesful");
			      }else{
				printf("\nthe key %d is at %d place",key,index+1);
			      }
			break;
			default:printf("\ninvalide choice");
		       }//end of 1d array switch
		break;
	       case 2:printf("\n1-->calculator");
		      printf("\n2-->sorting");
		      printf("\nenter your chouce=");
		      scanf("%d",&choice);
		      switch(choice){
			    case 1:printf("\n1----addition");
				   printf("\n2---subtraction");
				   printf("\n3----multiplicaton");
				   printf("\n4---division");
				   printf("\nchoose the operation");
				   scanf("%d",&choice);
				   switch(choice){
					case 1: printf("\nenter the value for first array");
						printf("\n");
						for(i=0;i<3;i++){
						    for(j=0;j<3;j++){
							printf("\td[%d][%d]=",i,j);
							scanf("%d",&d[i][j]);
						    }
						printf("\n");
					       }
					       printf("\nenter the value for second array");
					       printf("\n");
					       for(i=0;i<3;i++){
						   for(j=0;j<3;j++){
						       printf("\te[%d][%d]=",i,j);
						       scanf("%d",&e[i][j]);
						   }
					       printf("\n");
					       }
					       for(i=0;i<3;i++){
						   for(j=0;j<3;j++){
							f[i][j]=d[i][j]+e[i][j];
						   }
					       }
					       clrscr();
					       for(i=0;i<3;i++){
						    for(j=0;j<3;j++){
							 printf("%d + %d = %d\t",d[i][j],e[i][j],f[i][j]);
						    }
					       printf("\n");
					       }
					break;// end of case 1
				       case 2: printf("\nenter the value for first array");
					       printf("\n");
					       for(i=0;i<3;i++){
						   for(j=0;j<3;j++){
							printf("\td[%d][%d]=",i,j);
							scanf("%d",&d[i][j]);
						   }
					       printf("\n");
					       }
					       printf("\nenter the value for second array");
					       printf("\n");
					       for(i=0;i<3;i++){
						    for(j=0;j<3;j++){
							 printf("\te[%d][%d]=",i,j);
							 scanf("%d",&e[i][j]);
						    }
					       printf("\n");
					       }
					       for(i=0;i<3;i++){
						   for(j=0;j<3;j++){
						       f[i][j]=d[i][j]-e[i][j];
						   }
					       }
					       clrscr();
					       for(i=0;i<3;i++){
						    for(j=0;j<3;j++){
							printf("%d - %d = %d\t",d[i][j],e[i][j],f[i][j]);
						    }
					       printf("\n");
					      }
				       break;// end of case 2
				      case 3: printf("\nenter the value for first array");
					      printf("\n");
					      for(i=0;i<3;i++){
						   for(j=0;j<3;j++){
							printf("\td[%d][%d]=",i,j);
							scanf("%d",&d[i][j]);
						   }
					      printf("\n");
					      }
					      printf("\nenter the value for second array");
					      printf("\n");
					      for(i=0;i<3;i++){
						  for(j=0;j<3;j++){
						      printf("\te[%d][%d]=",i,j);
						      scanf("%d",&e[i][j]);
						  }
					     printf("\n");
					     }
					     for(i=0;i<3;i++){
						 for(j=0;j<3;j++){
						       f[i][j]=d[i][j]*e[i][j];
						 }
					     }
					     clrscr();
					     for(i=0;i<3;i++){
						 for(j=0;j<3;j++){
						       printf("%d * %d = %d\t",d[i][j],e[i][j],f[i][j]);
						 }
					     printf("\n");
					     }
				      break;// end of case 3
				      case 4:printf("\nenter the value for first array");
					     printf("\n");
					     for(i=0;i<3;i++){
						 for(j=0;j<3;j++){
						     printf("\td[%d][%d]=",i,j);
						     scanf("%d",&d[i][j]);
						 }
					     printf("\n");
					     }
					     printf("\nenter the value for second array");
					     printf("\n");
					     for(i=0;i<3;i++){
						  for(j=0;j<3;j++){
						      printf("\te[%d][%d]=",i,j);
						      scanf("%d",&e[i][j]);
						  }
					     printf("\n");
					     }
					     for(i=0;i<3;i++){
						  for(j=0;j<3;j++){
							 f[i][j]=d[i][j]/e[i][j];
						  }
					     }
					    clrscr();
					    for(i=0;i<3;i++){
						for(j=0;j<3;j++){
						    printf("%d / %d = %d\t",d[i][j],e[i][j],f[i][j]);
						}
					    printf("\n");
					    }
				     break;// end of case 4
				     }//end of 2d array calculator switch
			     break;
			    case 2:printf("\nenter the value for  array");
				   for(i=0;i<3;i++){
				      for(j=0;j<3;j++){
				       printf("\nd[%d][%d]=",i,j);
				       scanf("%d",&d[i][j]);
				      }
				   }
				   k=0;
				   for(i=0;i<3;i++){
				      for(j=0;j<3;j++){
				       g[k]=d[i][j];
				       k++;
				      }
				   }
				   for(i=0;i<9;i++){
				      for(j=0;j<8;j++){
				       if(g[j]>=g[j+1]){
					  t=g[j];
					  g[j]=g[j+1];
					  g[j+1]=t;
				       }
				      }
				   }
				   k=0;
				   for(i=0;i<3;i++){
				      for(j=0;j<3;j++){
				       d[i][j]=g[k];
				       k++;
				      }
				   }
				   printf("\nthe sorted 2d array is:\n");
				   for(i=0;i<3;i++){
				      for(j=0;j<3;j++){
				       printf("%d\t",d[i][j]);
				      }
				   printf("\n");
				   }
			    break;
			    default:printf("\ninvalide choice");
			   }//end of 2d array switch
		break;
	       default:printf("\ninvalide choice");
	     }//end of array switch
      break;
      case 3:exit(0);
      break;
      default:printf("\ninvalide choice");
    }///end 0f main swtich
    return 0;
}//end of main