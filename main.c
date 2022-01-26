/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
void clear()
{
  system ("clear");
}
int list3()
{
int a;
printf("enter any digit to continue\n");
scanf("%d",&a);
return a;
   }
 

int main(){
    clear();
     int pay;
  char name[100];
  char gmail[100];
  char pass[100];
  
  printf ("please enter your name\n ");
  scanf ("%s", &name);
  clear();
  printf("please enter your mail id:      ");
  scanf("%s",&gmail);
  printf("please enter the password of %s mail id:  ",&gmail);
  scanf("%s",&pass);
  clear();
  printf("HELLO Mr.%s\nwe  are so glad that we have reached you\n",name);
  printf("would you like to continue....?");
  list3();
  clear();
  printf(">>>>>WELCOME TO SRM TOURISM MANAGMENT MR.%s<<<<<\nthank you for choosing our tourism managment\n---------",&name);//intro
 

  printf ("-----------You can book all your requirments for your tour------------\n");
  int mainmenudigit,menudigit,tourdigit;
  
  printf("press 1-to Menu\n2-brochre\n3-About us\n4-Exit\n");//mainmenu

  scanf(" %d",&mainmenudigit);
  clear();
  switch(mainmenudigit){
      case 1:{
          printf(">>>>>You have chosen menu");
          
          printf("For booking \na tour-press 1\nTo exit - press 2\n");
          scanf(" %d",&menudigit);
          clear();
          switch(menudigit){
          case 1:{
           printf("---------You have chosen tour booking---------");
           
           printf("-------we have 3 types of tours\n------please enter the type");
           printf("PRESS\n1 for sightseeing\n2 for a couple tour\n3 for a devotional tour");
           scanf("%d",&tourdigit);
           clear();
       switch(tourdigit){
           case 1:{
                int opt,confirm_opt,num_of_tickets,tot_num_of_tickets;
    printf("---------You have chosen tour booking---------");
    printf("\n1.MUMBAI"); 
    printf("\n2.DELHI");
    printf("\n3.KOLKATA");
    printf("\n4.HYDERABAD");
    printf("\n5.GOA");
    printf("\n6.other places");
    printf("\n\nEnter the tour place you like : ");
    scanf("%d",&opt);
    if(opt==1)
    {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *Gateway of India \n *Elephanta Caves \n *Siddhivinayak Temple \n *Marine Drive \n *Hanging Gardens \n *Sanjay Gandhi National Park");
    printf("\n\n The tour cost of MUMBAI is 5,000 per head");
    printf("\n Enter the numbers of tickets : ");
    scanf("%d",&num_of_tickets);
    tot_num_of_tickets=num_of_tickets*5000;
    goto ticket_done;
    }
    if(opt==2)
    {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *India Gate \n *Qutub Minar \n *Jama masjid \n *Red Fort \n *Lotus Temple \n *Akshardham");  
    printf("\n The tour cost of DELHI is 4,500 per head");
    printf("\n Enter the numbers of tickets : ");
    scanf("%d",&num_of_tickets);
    tot_num_of_tickets=num_of_tickets*4500;
    goto ticket_done;
    }
    if(opt==3)
     {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *Victoria memorial \n *Howrah bridge \n *Dakshineswar Kali temple \n *Science City  \n *Park City");
    printf("\n The tour cost of KOLKATA is 5,500 per head");
    printf("\n Enter the numbers of tickets : ");
    scanf("%d",&num_of_tickets);
    tot_num_of_tickets=num_of_tickets*5500;
    goto ticket_done;
     }
    if(opt==4)
    {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *Charminar \n *Golconda Fort \n *Ramoji film city \n *Birla Mandir \n *Tank Bund \n *Sanghi Temple");
    printf("\n The tour cost of HYDERABAD is 5,000 per head");
    printf("\n Enter the numbers of tickets : ");
    scanf("%d",&num_of_tickets);
    tot_num_of_tickets=num_of_tickets*5000;
    goto ticket_done;
    }
    if(opt==5)
     {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *Tito's Street \n *Dudhsagar Waterfalls \n *Casino cruise  \n *Grand Island \n *SinQ night club \n *Bom Jesus Basilica");
    printf("\n The tour cost of GOA is 4,500 per head");
    printf("\n Enter the numbers of tickets : ");
    scanf("%d",&num_of_tickets);
    tot_num_of_tickets=num_of_tickets*4500;
    goto ticket_done;
    }
    if(opt==6){
        printf("We are soon expanding our travels to other places ");
        break;
    }
  
    ticket_done:
 
    printf("\n The total cost of %d tickets is %d",num_of_tickets,tot_num_of_tickets);
    printf("\n \nEnter 1 for confirm booking ");
    printf("\nEnter 2 for cancel booking ");
     printf("\n------------------------------------");
    printf("\n Select the option 1 or 2 : ");
    scanf("%d",&confirm_opt);
    if(confirm_opt==1)
    printf("\nYour booking has been confirmed for the tour for %d tickets",num_of_tickets);
  printf("\nplease select payment method:\n->1)google pay \n->2) phonepay\n->3)paytm\n->4)bank payment");
  scanf("%d",&pay);
  if(pay==1){
  printf("\nplease transfer the amount to number 9182254536");
  printf("\n____After your payment you will recieve message of confirmation by which you have made payment___\n");}
  if (pay==2){
   printf("\nplease transfer the amount to number 9182254536");
  printf("\n____After your payment you will recieve message of confirmation by which you have made payment___\n");
}   if (pay==3){
      printf("\nplease transfer the amount to number 9182254536");
  printf("\n___After your payment you will recieve message of confirmation by which you have made payment___\n");
}
    if (pay==4){ printf("please transfer your amount to the account no.09143626572826");
    printf("\nyou will recieve confirmation soon");
}
    if(confirm_opt==2)
    printf("\nYour have not booked your tickets ");
              break; }
              case 2:{
                  printf("you have selected COUPLE tour\n you will have different packages");
              int opti,conform_opt,numb_of_tickets,tot_numb_of_tickets;
    printf("---------You have chosen tour booking---------");
    printf("\n1.KULLU-MANALI-SHIMLA PACKAGE"); 
    printf("\n2.MUNNAR-THEKKADY PACKAGE");
    printf("\n3.OOTY-KODAIKANAL");
    printf("\n4.LONAWALA PACKAGE");
    printf("\n5.GOA PACKAGE");
    printf("\n\nEnter the tour place you like : ");
    scanf("%d",&opti);
    if(opti==1)
    {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *Kullu valley view \n *Manali wild life sanctuary \n *Rohtang pass snow point  \n *Chadwick waterfall \n *Hotel spring field resort ");
    printf("\n\n The tour cost of KULLU-MANALI-SHIMLA PACKAGE is 5,000 per couple");
    printf("\n Enter the numbers of couples : ");
    scanf("%d",&numb_of_tickets);
    tot_numb_of_tickets=numb_of_tickets*5000;
    goto tickets_done;
    }
    if(opti==2)
    {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *kollukkumali tea estate \n *Lockhart gap \n *Echo point \n *Elephant junction \n *Backwaters boat house resort ");  
    printf("\n\n The tour cost of MUNNAR-THEKKADY PACKAGE is 4,500 per couple");
    printf("\n Enter the numbers of couples : ");
    scanf("%d",&numb_of_tickets);
    tot_numb_of_tickets=numb_of_tickets*4500;
    goto tickets_done;
    }
    if(opti==3)
     {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *Ooty lake \n *Rose garden \n *Avalanche lake  \n *Coakers walk  \n *Pine forest");
    printf("\n\n The tour cost of OOTY-KODAIKANAL is 5,500 per couple");
    printf("\n Enter the numbers of couples : ");
    scanf("%d",&numb_of_tickets);
    tot_numb_of_tickets=numb_of_tickets*5500;
    goto tickets_done;
     }
    if(opti==4)
    {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *Della adventure park \n *Lion's point  \n *Karla caves \n *Nagphani \n *Sky waltz baloon safari");
    printf("\n\n The tour cost of LONAWALA PACKAGE is 5,000 per couple");
    printf("\n Enter the numbers of couples : ");
    scanf("%d",&numb_of_tickets);
    tot_numb_of_tickets=numb_of_tickets*5000;
    goto tickets_done;
    }
    if(opti==5)
     {
    printf("\n\n These are the places you will be visiting in our tour : ");
    printf("\n\n *breakfast with dolphins \n *Private party on butterfly island \n *Cycling tours  \n *Tambdi surla temple \n *Underwater walk");
    printf("\n\n The tour cost of GOA PACKAGE is 4,500 per couple");
    printf("\n Enter the numbers of couples : ");
    scanf("%d",&numb_of_tickets);
    tot_numb_of_tickets=numb_of_tickets*4500;
    goto tickets_done;
    }
    
    tickets_done:
 
    printf("\n The total cost of %d couples is %d",numb_of_tickets,tot_numb_of_tickets);
    printf("\n \nEnter 1 for confirm booking ");
    printf("\nEnter 2 for cancel booking ");
     printf("\n------------------------------------");
    printf("\n Select the option 1 or 2 : ");
    scanf("%d",&conform_opt);
    if(conform_opt==1)
    printf("\nYour booking has been confirmed for the tour for %d tickets",numb_of_tickets);
   
  printf("\nplease select payment method:1)google pay \n 2) phonepay\n3)paytm");
  scanf("%d",&pay);
  if(pay==1){
  printf("\nplease transfer the amount to number 9182254536");
  printf("\nafter your payment you will recieve message of confirmation by which you have made payment\n");}
  if (pay==2){
   printf("\nplease transfer the amount to number 9182254536");
  printf("\nafter your payment you will recieve message of confirmation by which you have made payment\n");
}   if (pay==3){
      printf("\nplease transfer the amount to number 9182254536");
  printf("\nafter your payment you will recieve message of confirmation by which you have made payment\n");
}
    if(conform_opt==2)
    printf("\nYour have not booked your tickets ");
   
              
             break; }
              case 3:{printf("----DEVOTIONAL TOURS-----");
               int opto,confoorm_opt,nume_of_tickets,tot_nume_of_tickets;
    printf("---------You have chosen tour booking---------");
    printf("\n1.Meenakshi amman temple (TN)");
    printf("\n2.Tirumala-Tirupati (AP)"); 
    printf("\n3.Chardham (gangotri / yamunotri / kedarnath / badrinath)");
    printf("\n4.shiridi (MH)");
    printf("\n5.Vaishno Devi (JK)");
    printf("\n6.Ananthapadmanabha Swamy temple (KL)");
    printf("\n\nEntre the tour place you like : ");
    scanf("%d",&opto);
    if(opto==1)
    {
    printf("\n\n The tour cost of Meenakshi amman temple (TN) is 5,000 per head");
    printf("\n Enter the number of tickets : ");
    scanf("%d",&nume_of_tickets);
    tot_nume_of_tickets=nume_of_tickets*5000;
    goto ticketss_done;
    }
    if(opto==2)
    {
    printf("\n The tour cost of Tirumala-Tirupati (AP) is 4,500 per head");
    printf("\n Enter the number of tickets : ");
    scanf("%d",&nume_of_tickets);
    tot_nume_of_tickets=nume_of_tickets*4500;
    goto ticketss_done;
    }
    if(opto==3)
     {
    printf("\n The tour cost of Chardham (gangotri / yamunotri / kedarnath / badrinath) is 5,500 per head");
    printf("\n Entre the numbers of tickes : ");
    scanf("%d",&nume_of_tickets);
    tot_nume_of_tickets=nume_of_tickets*5500;
    goto ticketss_done;
     }
    if(opto==4)
    {
    printf("\n The tour cost of shiridi (MH) is 5,000 per head");
    printf("\n Enter the number of tickets : ");
    scanf("%d",&nume_of_tickets);
    tot_nume_of_tickets=nume_of_tickets*5000;
    goto ticketss_done;
    }
    if(opto==5)
    {
    printf("\n The tour cost of Vaishno Devi (JK) is 4,500 per head");
    printf("\n Entre the numbers of tickes : ");
    scanf("%d",&nume_of_tickets);
    tot_nume_of_tickets=nume_of_tickets*4500;
    goto ticketss_done;
    }
    if(opto==6)
    {
    printf("\n The tour cost of Ananthapadmanabha Swamy temple (KL) is 4,500 per head");
    printf("\n Enter the number of tickets : ");
    scanf("%d",&nume_of_tickets);
    tot_nume_of_tickets=nume_of_tickets*4500;
    goto ticketss_done;
    }
    ticketss_done:
 
    printf("\n The total cost of %d tickets is %d",nume_of_tickets,tot_nume_of_tickets);
    printf("\n \nEnter 1 for confirm booking ");
    printf("\nEnter 2 for cancel booking ");
     printf("\n------------------------------------");
    printf("\n Select the option 1 or 2 : ");
    scanf("%d",&confoorm_opt);
    if(confoorm_opt==1)
    printf("\nYour booking has been confirmed for the tour for %d tickets",nume_of_tickets);
    
  printf("\nplease select payment method:1)google pay \n 2) phonepay\n3)paytm");
  scanf("%d",&pay);
  if(pay==1){
  printf("\nplease transfer the amount to number 9182254536");
  printf("\nafter your payment you will recieve message of confirmation by which you have made payment\n");}
  if (pay==2){
   printf("\nplease transfer the amount to number 9182254536");
  printf("\nafter your payment you will recieve message of confirmation by which you have made payment\n");
}   if (pay==3){
      printf("\nplease transfer the amount to number 9182254536");
  printf("\nafter your payment you will recieve message of confirmation by which you have made payment\n");
}
     
    if(confoorm_opt==2)
    printf("\nYour have not booked your tickets ");
   
             break; }
          default: printf("website is  under maintainence/n");
              break;
          }}break;
          case 2:{
              
              printf("exitted");
        break;  }
          default:printf("\n");
          break;}
            
          
          
        break;  
      
  case 2:{ printf("FOR SIGHT SEEING TOURS\nWE HAVE 5 DIFFERENT PLACES AND ITS A ONE DAY TRIP");
  printf("\nTHE TRIP INCLUDES BREAKFAST,LUNCH,SNACKS AND DINNER\n");
  printf("ALL THE ENTRANCE CHARGES ARE HANDLED BY US\nTHE remaining info will be given as message for your number\n");
      printf("MUMBAI\n\n *Gateway of India \n *Elephanta Caves \n *Siddhivinayak Temple \n *Marine Drive \n *Hanging Gardens \n *Sanjay Gandhi National Park");
   printf("\nDELHI\n\n *India Gate \n *Qutub Minar \n *Jama masjid \n *Red Fort \n *Lotus Temple \n *Akshardham"); 
    printf("\nKOLKATA\n\n *Victoria memorial \n *Howrah bridge \n *Dakshineswar Kali temple \n *Science City  \n *Park City");
       printf("\nHYDERABAD\n\n *Charminar \n *Golconda Fort \n *Ramoji film city \n *Birla Mandir \n *Tank Bund \n *Sanghi Temple"); 
  
  printf("\nGOA\n\n *Tito's Street \n *Dudhsagar Waterfalls \n *Casino cruise  \n *Grand Island \n *SinQ night club \n *Bom Jesus Basilica");    
  
      printf("\n\n\n\nFOR DEVOTIONAL TOURS WE HAVE THE FOLLOWING PACKAGES:\nDEVOTIONAL TOURS\n1) Tirumala-Tirupati (AP)\n2) Chardham (gangotri / yamunotri / kedarnath / badrinath)\n3) shiridi (MH)\n4) Vaishno Devi (JK)\n5) Ananthapadmanabha Swamy temple (KL)");
 printf("\n\n\n\nFOR COUPLE TOURS WE HAVE SEVERAL PACKAGES\nKULLU-MANALI-SHIMLA PACKAGE\nKullu valley view\nManali wild life sanctuary\nRohtang pass snow point\nChadwick waterfall\nHotel spring field resort\nMUNNAR-THEKKADY PACKAGE\nkollukkumali tea estate\nLockhart gap\nEcho point\nElephant junction\nBackwaters boat house resort\nOOTY-KODAIKANAL\nOoty lake\nRose garden\nAvalanche lake \nCoakers walk\nPine forest\nLONAWALA PACKAGE\nDella adventure park\nLion's point\nKarla caves\nNagphani\nSky waltz baloon safari\n\nGOA PACKAGE\nbreakfast with dolphins\nPrivate party on butterfly island\nCycling tours\nTambdi surla temple\nUnderwater walk"); }
 break;
 case 3:printf("we are a group of btech students of SRM\n1)ps shashank\n2)likhith kumsr\n3)saurav kumar\n4)prahladanand");
  printf("\nYOU CAN CONTACT US ANY QUERIES\n 9182264148\nFOR email id \n bs5418@srmist.edu.in");
  break;
  
  list3();
  clear();
      
 
 
      case 4:{printf("u have been exitted please open again for booking");
          
      }
      default:
      printf("\n");
      break;
  }}
  
return 0;
}
