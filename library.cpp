/*  Name: Mazhar Hussain     Registration Number:20MDELE098
Email: 20MDELE098@uetmardan.edu.pk */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct library_information{
   char bookname[100];
   char author[100];
   int pages;
   float price;
    int Id;
    int Quantity;
};//structure defined by user//

int main(){
struct library_information lib[100];//structure variable name//
   char bookname[50];
   
   int i,j, keepcount;
   int search;
   int totalbooks=0;
   
   i=j=keepcount = 0;
   char ar_nm[30],
    bk_nm[30];  
   
   while(j!=7){
   printf("\n\n**************************************************Library Management************************************************\n");
   printf("------------------------------------------------------------------------------------------------------------------------\n");
      printf("\t\t*****************1. Add book information*********************************\n");
      printf("\t\t*****************2. Display book information*****************************\n");
      printf("\t\t*****************3. View Book List           ****************************\n");
      printf("\t\t*****************4. List the title of specified book*********************\n");
      printf("\t\t*****************5. List the count of books in the library***************\n");
      printf("\t\t*****************6. Search (Unique ID/ Book Name)************************\n");
      printf("\t\t*****************7. Exit*************************************************");
      printf ("\t\t\n\nEnter your option [1|2|3|4|5|6|7] : ");
      
   scanf("%d",&j);//checking for options//
   
   switch(j){
   	case 1://1st case//
   			printf("\n********************* Adding Book Record ********************* \n");
            printf ("Enter Book Name = ");
            scanf ("%100s",lib[i].bookname);
            printf ("Enter Author Name = ");
            scanf ("%50s",lib[i].author);
            printf ("Enter Pages = ");
            scanf ("%d",&lib[i].pages);
            printf ("Enter Price = ");
            scanf ("%f",&lib[i].price);
            printf("enter Id of book =");
            scanf("%d",&lib[i].Id);
            printf("Enter the quantity of books=");
            scanf("%d",&lib[i].Quantity);
            keepcount++;
            totalbooks=totalbooks+lib[i].Quantity;
            i++;
     
            break;
            
            case 2://2nd case//
            printf("you have entered the following information\n");
            printf("\n--------------------\n");
            for(i=0; i<keepcount; i++){
               printf (" book name = %s\n",lib[i].bookname);
               printf (" author name = %s\n",lib[i].author);
               printf (" pages = %d\n",lib[i].pages);
               printf (" price = RS %f\n",lib[i].price);
               printf(" Quantity = %d\n",lib[i].Quantity);
                printf("\n-----------\n");
            }
           
           
            break;
            
            case 3://3rd case//
            printf("\n No of books in library : %d\n", totalbooks);
            printf("\n--------------------\n");
            break;
            
            case 4://4th case//
         printf ("Enter author name : ");
         scanf ("%50s",ar_nm);
         for (i=0; i<keepcount; i++) {
         if (strcmp(ar_nm, lib[i].author) == 0)
         printf ("||book name=%s||  ||author name=%s||  ||pages=%d||  ||price= Rs %f||  ||quantity=%d||\n",lib[i].bookname,lib[i].author,lib[i].pages,lib[i].price,lib[i].Quantity); 
		 } 
	
		 break;
            
            case 5://5th case//
        printf ("Enter book name : ");
        scanf ("%50s",bk_nm);
        for (i=0; i<keepcount; i++) {
        if (strcmp(bk_nm, lib[i].bookname) == 0)
        printf ("||book name=%s||  ||author name=%s||  ||pages=%d||  ||price= Rs %f||  ||quantity=%d||\n",lib[i].bookname,lib[i].author,lib[i].pages,lib[i].price,lib[i].Quantity);
		} 
       
		break;
          
		   case 6://6th case//
            	printf("enter book id\n");
            	scanf("%d",&search);
            	printf("\n--------------------\n");
            	if(search<=keepcount){
            	for(i=0; i<keepcount; i++){
                 printf("%s available\n",lib[i].bookname);
            	 printf ("author name = %s\n",lib[i].author);}
					}
				else 
			printf("wrong id search\n");
				
					break;
			case 7: 
			exit(0) ;}
   }
    return 0;
   }
