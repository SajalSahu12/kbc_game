#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>



void main()
{
 int i,a[10],n=0,win;
 printf("WELCOME TO THE GAME""KAUN BANEGA CROREPATHI""\nIt contains 10 QUESTIONS each carries specific amount\nYou Have to Answer as 1,2,3,or 4\n");

 for(i=1;i<=10;i++){
    n=0;
    switch(i){
    case 1:
            printf("1. How many category of land was divided under Delhi Sultanate? \n1.Tree 2.Four \n3.Five 4.Six \n");
            scanf("%d",&n);
            if(n==2){
                win+=10000;
                printf("You have entered the correct answer Now you have won Rs.%d Your Next Question is \n",win);
            }
            else{
                printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d\n",win);
                i=11;
            }
            break;
    case 2:
            printf("2.Who among the following divided the kingdom into iqtas amongst his Amirs and Khalsa lands that proved the principle source of revenue?\n 1.Aibak 2.Allaudin Khilji \n3.Balban 4.None of these ");
            scanf("%d",&n);
            if(n==1){
                win+=15000;
                printf("You have entered the correct answer Now you have won Rs.%d Your Next Question is ",win);
            }
            else{
                printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d",win);
                i=11;
            }
            break;
    case 3:
            printf("What is the Symbol of Nazis(Army of Great Hitler) \n1.Cross 2.Skull and Bones \n3.Owl 4.Swastika ");
            scanf("%d",&n);
            if(n==4){
                win+=30000;
                printf("You have entered the correct answer Now you have won Rs.%d Your Next Question is\n ",win);
            }
            else{
                printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d \n",win);
                i=11;
            }
            break;
    case 4:
            printf("Who among these is not an Railway Minister\n 1.Mamtha Banerjee 2.Lal Bahadur Shastri \n3.Geetha Mukerjee 4.George Fernandis ");
            scanf("%d",&n);
            if(n==3){
                win+=50000;
                printf("You have entered the correct answer Now you have won Rs.%d Your Next Question is\n ",win);
            }
            else{
                printf(" You have entered the wrong answer Better Luck Next Time You have earned Rs.%d \n",win);
                i=11;
            }
            break;
    case 5:
            printf("Who Correctly Answered to Yaksha's Questions \n1.Drona 2.Abimanyu\n 3.Yudishtira 4.Arjuna");
            scanf("%d",&n);
            if(n==3){
                win+=100000;
                printf("You have entered the correct answerNow you have wonRs.%d Your Next Question is\n",win);
            }
            else{
                printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d \n",win);
                i=11;
            }
            break;
    case 6:
            printf("Who Heads Reserve Bank of India \n1.FinanceMinister  2.Commissioner \n3.Chief Bank Manager 4.Governor");
            scanf("%d",&n);
            if(n==4){
                win+=120000;
                printf("You have entered the correct answerNow you have wonRs.%d \nYour Next Question is\n",win);
            }
            else{
                printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d",win);
                i=11;
            }
            break;
    case 7:
            printf("Which of these AnimalsLaughs \n1.Monkey 2.Tiger\n3.Giraffe 4.Hyna");
            scanf("%d",&n);
            if(n==4){
                win+=150000;
                printf("You have entered the correct answerNow you have wonRs.%d Your Next Question is/n",win);
            }
            else{
                printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d",win);
                i=11;
            }
            break;
    case 8:
            printf("Which is the system of Governance in China\n 1.communism 2.communalism\n 3.Monarchy 4.Democratic");
            scanf("%d",&n);
            if(n==1){
                win+=300000;
                printf("You have entered the correct answerNow you have wonRs.%d Your Next Question is\n",win);
            }
            else{
                printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d",win);
                i=11;
            }
            break;
    case 9:
            printf("How many Rings does Olympic Symbol have 1.3 2.2\n 3.6 4.5");
            scanf("%d",&n);
            if(n==4){
                win+=500000;
                printf("You have entered the correct answerNow you have wonRs.%d Your Next Question is\n",win);
            }
            else{
                printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d",win);
                i=11;
            }
            break;
    case 10:
            printf("Who patronised Kalidas1.Akbar2.Chandra Guptha3.VikramaAditya4.Krishna Devaraya");
            scanf("%d",&n);
            if(n==3){
                win+=100000;
                printf("You have entered the correct answerNow you have wonRs.%d \n*YOU HAVE BECOME MILLIONAIRE OF THIS WEEK*",win);
            }
            else{
                printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d",win);
                i=11;
            }
            break;
            default:
                break;
        }
    }
   getch();
}