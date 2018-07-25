#include<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&name,&s);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }



void help()
 {
 system("cls");
 printf("\n\n\n\tThe Quiz is very easy to answer. ");
 printf("\n\n\tYou'll be asked some general knowledge questions");
 printf("\n\n\tfour options provided. Your score will be calculated");
 printf("\n\n\tRemember that the more quicker you give answer");
 printf("\n\n\tYour score will be calculated and displayed");
 printf("\n\n\tat the end and displayed. If you secure highest score.");
 printf("\n\n\twill be recorded. So BEST OF LUCK.");
 }
void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }
int main()
     {
     int countq,countr;
     int r,i;
     int pa;int nq[6];int w;
     float score;
     char choice;
     char playername[20];
     time_t initialtime,finaltime;
     system("cls");
     //randomize();
     mainhome:
     system("cls");
     puts("\n\t\t WELCOME TO QUIZ APPLICATION PROJECT\n\n") ;
     puts("\n\t\t--------------------------------------");
     puts("\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     puts("\n\t\t**************************************");
     puts("\n\t\t Enter 'S' to start game       ");
     puts("\n\t\t Enter 'R' to view high score/ Your score");
     puts("\n\t\t Enter 'H' for help            ");
     puts("\n\t\t Enter 'E' to Exit             ");
     puts("\n\t\t*************************************");
     printf("\n\t\t-------------------------------------\n\n\t\t  ");
     choice=toupper(getch());
     if (choice=='R')
        {
            displayscore();
            goto mainhome;
        }
     else if (choice=='E')
     {
        exit(1);
     }
     else if (choice=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(choice=='S')
        {
     system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%23+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nWhich is the second country to recognize Bangladesh?");
  printf("\n\nA.Bhutan\tB.India\n\nC.Japan\tD.China\n\n");
  countq++;
  if (toupper(getch())=='A')
    {
       printf("\n\nCorrect!!!");countr++; break;
    }
   else
    {
        printf("\n\nWrong!!! The correct answer is A.Bhutan");
        break;
    }

  case 2:
  printf("\n\n\nHow was Bangladesh known when it was part of Pakistan?");
  printf("\n\nA.East Pakistan\tB.North Pakistan\n\nC.South Pakistan\tD.West Pakistan\n\n");
  countq++;
  if (toupper(getch())=='A')
    {
        printf("\n\nCorrect!!!");
        countr++;
        break;
    }
  else
    {
        printf("\n\nWrong!!! The correct answer is A.East Pakistan");
        break;
    }


  case 3:
  printf("\n\n\nWhich type of government in Bangladesh?");
  printf("\n\nA.None Republic\tB.Dictatorship\n\nC.Autocracy\tD.Republic\n\n");
  countq++;
  if (toupper(getch())=='D')
    {
        printf("\n\nCorrect!!!");
        countr++;
        break;
    }
  else
    {
        printf("\n\nWrong!!! The correct answer is D.Republic");
        break;
    }
  case 4:
  printf("\n\n\nNational tree in Bangladesh");
  printf("\n\nA.Mango tree\tB.Jackfruit tree\n\nC.blackberry tree\tD.None of those\n\n");
  countq++;
  if (toupper(getch())=='A')
    {
        printf("\n\nCorrect!!!");
        countr++;
        break;
    }
  else
    {
        printf("\n\nWrong!!! The correct answer is A.Mango tree");
        break;
    }


  case 5:
  printf("\n\n\nWhich country won the FIFA World Cup 2002?");
  printf("\n\nA.Brazil\tB.France\n\nC.Italy\tD.England\n\n");
  countq++;
  if (toupper(getch())=='A')
    {
        printf("\n\nCorrect!!!");
        countr++;
        break;
    }
  else
    {
        printf("\n\nWrong!!! The correct answer is A.Brazil");
        break;
    }

  case 6:
  printf("\n\n\nHow many students in your class ..... from Jatrabary?");
  printf("\n\nA.comes\tB.come\n\nC.came\tD.not come\n\n");
  countq++;
  if (toupper(getch())=='B' )
    {
        printf("\n\nCorrect!!!");
        countr++;
        break;
    }
  else
    {
        printf("\n\nWrong!!! The correct answer is B.come");
        break;
    }


  case 7:
  printf("\n\n\nWhich country was the winner of Cricket World Cup 2007?");
  printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
  countq++;
  if (toupper(getch())=='C')
   {
       printf("\n\nCorrect!!!");
       countr++;
       break;
   }
  else
   {
       printf("\n\nWrong!!! The correct answer is C.Australia");
       break;
   }


  case 8:
  printf("\n\n\nWhat is the height of Mount everest in feet?");
  printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
  countq++;
  if (toupper(getch())=='D')
   {
       printf("\n\nCorrect!!!");
       countr++;
       break;
   }
  else
   {
       printf("\n\nWrong!!! The correct answer is D.8848");
       break;
   }


  case 9:
  printf("\n\n\nWhat is the capital of Denmark?");
  printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
  countq++;
  if (toupper(getch())=='A')
   {
       printf("\n\nCorrect!!!");
       countr++;
       break;
   }
  else
   {
       printf("\n\nWrong!!! The correct answer is A.Copenhagen");
       break;
   }


  case 10:
  printf("\n\n\nWhat is the national flower of Bangladesh?");
  printf("\n\nA.Rose\tB.Tulip\n\nC.Water lily\tD.Sunflower\n\n");
  countq++;
  if (toupper(getch())=='C')
   {
       printf("\n\nCorrect!!!");
       countr++;
       break;
   }
  else
   {
       printf("\n\nWrong!!! The correct answer is C.Water lily");
       break;
   }


  case 11:
  printf("\n\n\nWhat is the main religion practiced in Bangladesh?");
  printf("\n\nA.Buddism\tB.M.S.Hinduism\n\nC.Islam\tD.None of those\n\n");
  countq++;
  if (toupper(getch())=='C')
   {
       printf("\n\nCorrect!!!");
       countr++;
       break;
   }
  else
   {
       printf("\n\nWrong!!! The correct answer is C.Islam");
       break;
   }

  case 12:
  printf("\n\n\nOn which continent is Bangladesh located?");
  printf("\n\nA.Europe\tB.Asia\n\nC.USA\tD.Africa\n\n");
  countq++;
  if (toupper(getch())=='B')
   {
       printf("\n\nCorrect!!!");countr++;
       break;
   }
  else
   {
       printf("\n\nWrong!!! The correct answer is B.Asia");
       break;
   }

  case 13:
  printf("\n\n\nWhich country is hosting the Fifa World Cup 2010?");
  printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
  countq++;
  if (toupper(getch())=='A')
   {
       printf("\n\nCorrect!!!");
       countr++;
       break;
   }
  else
    {
        printf("\n\nWrong!!! The correct answer is A.South Africa");
        break;
    }

  case 14:
  printf("\n\n\nWhat is the Time Zone of Bangladesh ?");
  printf("\n\nA.Utc + 6\tB.Utc + 7\n\nC.B.Utc + 2\tD.Utc + 4\n\n");
  countq++;
  if (toupper(getch())=='A')
   {
       printf("\n\nCorrect!!!");
       countr++;
       break;
    }
  else
        {
             printf("\n\nWrong!!! The correct answer is A.Utc + 6");
             break;
        }

  case 15:
  printf("\n\n\nWhich district of Bangladesh was part of Assam?");
  printf("\n\nA.Sylhet\tB.Comillah\n\nC.Rongpur\tD.Rajshahi\n\n");
  countq++;
  if (toupper(getch())=='A')
    {
       printf("\n\nCorrect!!!");
       countr++;
       break;
    }
  else
        {
             printf("\n\nWrong!!! The correct answer is A.Sylhet");
             break;
        }

  case 16:
  printf("\n\n\nWhich river of Bangladesh originates in Tibet?");
  printf("\n\nA.Padma\tB.Brahmaputra\n\nC.Jamuna\tD.Burigonga\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Brahmaputra");break;}


  case 17:
  printf("\n\n\nWhich one Bangladesh YouTube top song in 2018?");
  printf("\n\nA.Dil Dil Dil\tB.Pream tumi\n\nC.Oporadhi\tD.Ghum amer\n\n");
  countq++;
  if (toupper(getch())=='C')
    {
       printf("\n\nCorrect!!!");countr++;
       break;
    }
  else
        {
            printf("\n\nWrong!!! The correct answer is C.Oporadhi");
            break;
        }

  case 18:
  printf("\n\n\nWhich area of sea lies to the south of Bangladesh ?");
  printf("\n\nA.South China Sea\tB.South India Sea\n\nC.Indian Sea\tD.Bay of Bengal\n\n");
  countq++;
  if (toupper(getch())=='D')
    {
        printf("\n\nCorrect!!!");countr++;
        break;
    }
  else
        {
            printf("\n\nWrong!!! The correct answer is D.Bay of Bengal");
            break;
        }

  case 19:
  printf("\n\n\nOver 90% of Bangladesh is on average what height above sea level ?");
  printf("\n\nA.120 metres\tB.110 metres\n\nC.10 metres\tD.105 metres\n\n");
  countq++;
  if (toupper(getch())=='C')
    {
        printf("\n\nCorrect!!!");
        countr++;
        break;
    }
  else
        {
            printf("\n\nWrong!!! The correct answer is C.10 metres");
            break;
        }

  case 20:
  printf("\n\n\nBefore the 1950's which crop was the principle crop of Bangladesh ?");
  printf("\n\nA.Jute\tB.Rice\n\nC.Vegetable\tD.Mango\n\n");
  countq++;
  if (toupper(getch())=='A')
    {
        printf("\n\nCorrect!!!");
        countr++;
        break;
    }
  else
  {
      printf("\n\nWrong!!! The correct answer is A.Jute");
      break;
  }

  case 21:
  printf("\n\n\nThe population of Bangladesh is around ?");
  printf("\n\nA.130 million\tB.16 million\n\nC.160 million\tD.1600 million\n\n");
  countq++;
  if (toupper(getch())=='C')
    {
        printf("\n\nCorrect!!!");
        countr++;
        break;
    }
  else
        {
            printf("\n\nWrong!!! The correct answer is C.160 million");
            break;
        }

  case 22:
  printf("\n\n\nWho make this Project?");
  printf("\n\nA.OLi Khan\tB.Ashik Ahmed\n\nC.Musfique mondol\tD.Ridoy Ahmad\n\n");
  countq++;
  if (toupper(getch())=='D')
    {
        printf("\n\nCorrect!!!");countr++;
        break;
    }
  else
        {
            printf("\n\nWrong!!! The correct answer is D.Ridoy Ahmad");
            break;
        }

  case 23:
  printf("\n\n\nName the country where there no mosquito is found?");
  printf("\n\nA.Germany\tB.Spain\n\nC.Japan\tD.France\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.France");break;}



  }
 i++;
 if (i<=5) goto start;
 finaltime=time(NULL);
 score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
 if(score<0)
    {
        score=0;
        printf("\n\n\nYour Score: %.2f",score);
    }
 if (score==100)
    {
        printf("\n\nVery Very Good. You are the top of the score.\n********************");
    }
 else if(score>=60 && score<100)
    {
        printf("\n\nWOW VERY GOOD.\n********************");
    }
 else if(score>=40 &&score<60)
    {
        printf("\n\nGOOD! You need more practice.\n********************");
    }
 else
    {
        printf("\n\nYou are very bad.\n********************");
    }
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
    goto home;
 else
    {
        writescore(score,playername);
        goto mainhome;
    }
 }
 else
    {
        printf("\n\n\t\tEnter the right key\n\n\t\t  ");
        Sleep(700);
        goto mainhome;
    }
 return 0;
}
