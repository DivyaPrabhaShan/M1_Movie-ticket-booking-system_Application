#include"Movie.h"
void main()
{

	 int ch;
 	do{
	printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
	printf("\n");	
	printf("\t Online based movie ticket booking system ");
	printf("\n");
	printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
	
	printf("\n1.Enter the Movie");
   	printf("\n2.Lookall the Movies available");
	printf("\n3.Find the Movie ");
	printf("\n4.Reserve the Ticket");
	printf("\n5.Lookall the Reservation details");
   	printf("\n6.Logout");

   	printf("\nEnter your option = ");
   	scanf("%d",&ch); 	

   	switch (ch)
   	{
    		case 1 :
    		enterdetails();
   		break;
		case 2:
    		Lookall();
   		break;
    		
		case 3:
    		Find();
   		break;

		case 4:
	       reserve_ticket();
		break;
		
		case 5:
		past_record();
		break;

    		case 0:
    		exit(0);
    		break;

    		default:
    		printf("Invalid");
    		break;
   	}
 }while(ch!=0);

	


}
