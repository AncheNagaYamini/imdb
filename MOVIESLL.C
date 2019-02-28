#include<stdio.h>
#include<conio.h>
#include<string.h>
struct movie
{
 int year;
 char movie_name[3][20];
 long int collection[3];
 long int total;
 struct movie *next;
}*first=NULL,*temp,*nn;
int i;
void create()//Creating nodes to enter data
{
 for(i=1;i<=20;i++)
    {
     nn = (struct movie *)malloc(sizeof(struct movie));
     if(first == NULL)
       {
	first = nn;
	temp = nn;
       }
     else
	{
	 temp->next = nn;
	 temp=nn;
	}
    }
 nn->next=NULL;
}
void insert_movie()//data
{
 char name_read[20];
 temp = first;
 temp->year=1981;
 strcpy(temp->movie_name[0],"Airplanes!");
 strcpy(temp->movie_name[1],"9 to 5");
 temp->collection[0]=1350000;
 temp->collection[1]=1500000;
 temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1982;
 strcpy(temp->movie_name[0],"Blade runner");
 strcpy(temp->movie_name[1],"Grease");

 temp->collection[0]=1500000;
 temp->collection[1]=1750000;
 temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1983;
 strcpy(temp->movie_name[0],"Robo");
 temp->collection[0]=1983000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1984;
  strcpy(temp->movie_name[0],"Movie1984");
 temp->collection[0]=1984000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1985;
  strcpy(temp->movie_name[0],"Movie1985");
 temp->collection[0]=1985000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1986;
 strcpy(temp->movie_name[0],"Movie1986");
 temp->collection[0]=1986000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1987;
  strcpy(temp->movie_name[0],"Movie1987");
 temp->collection[0]=1987000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1988;
 strcpy(temp->movie_name[0],"Movie1988");
 temp->collection[0]=1988000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1989;
 strcpy(temp->movie_name[0],"Movie1989");
 temp->collection[0]=1989000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1990;
 strcpy(temp->movie_name[0],"Movie1990");
 temp->collection[0]=1990000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1991;
 strcpy(temp->movie_name[0],"Movie1991");
 temp->collection[0]=1991000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }

 temp=temp->next;
 temp->year=1992;
 strcpy(temp->movie_name[0],"Movie1992");
 temp->collection[0]=1992000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1993;
 strcpy(temp->movie_name[0],"Movie1993");
 temp->collection[0]=1993000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1994;
 strcpy(temp->movie_name[0],"Movie1994");
 temp->collection[0]=1994000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1995;
 strcpy(temp->movie_name[0],"Movie1995");
 temp->collection[0]=1995000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1996;
 strcpy(temp->movie_name[0],"Movie1996");
 temp->collection[1]=temp->collection[2]=0;
 temp->collection[0]=1996000;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1997;
 strcpy(temp->movie_name[0],"Movie1997");
 temp->collection[0]=1997000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1998;
 strcpy(temp->movie_name[0],"Movie1998");
 temp->collection[0]=1998000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=1999;
 strcpy(temp->movie_name[0],"Movie1999");
 temp->collection[0]=1999000;
 temp->collection[1]=temp->collection[2]=0;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }
 temp=temp->next;
 temp->year=2000;
 strcpy(temp->movie_name[0],"Movie2000");
 temp->collection[1]=temp->collection[2]=0;
 temp->collection[0]=2000000;
 temp->total=0;
 for(i=0;i<3;i++)
     {
      temp->total=temp->total+temp->collection[i];
     }

}
void high_least_ygrss(int yr)
{
 int i,x;
 long int max;
 temp=first;
 while(temp!=NULL)
      {
	while(temp->year != yr)
	  {
	   temp=temp->next;
	  }
	     max = temp->collection[0];
	     x=0;
	     //min = temp->collection[0];
	     for(i=0;i<3;i++)
		{
		 if(temp->collection[i]>max)
		   {
		    max = temp->collection[i];
		    x=i;
		   }
		}
	 break;
      }
    printf("\nHighest grosser in that year = %ld",max);
    printf(" for the movie %s",temp->movie_name[x]);

}

void mvie_cnt_total(int yr)//No of movies released in an year given
{
 int mv_count=0;
 temp = first;
 while(temp!=NULL)
      {
       while(temp->year != yr)
	 {
	  temp = temp->next;
	 }
	   for(i=0;i<3;i++)
	       {
		if(temp->collection[i]!=0)
		   mv_count++;
	       }
	 break;
      }
  printf("\nNo of movies released in that year = %d\n",mv_count);
  printf("\nTotal collection = %ld\n",temp->total);

}
void all_time1()//Highest and least grossing year
{
 long int max_coll;
 long int min_coll;
 int max_coll_yr;
 int min_coll_yr;
 temp = first;
 max_coll=temp->total;
 min_coll=temp->total;
 while(temp != NULL)
      {
       if(temp->total>max_coll)
	 {
	  max_coll=temp->total;
	  max_coll_yr = temp->year;
	 }
       if(min_coll>temp->total)
	 {
	  min_coll=temp->total;
	  min_coll_yr = temp->year;
	 }
       temp=temp->next;
      }
  printf("\nMax collection of %ld is in the year %d\n",max_coll,max_coll_yr);
  printf("\nMin collection of %ld is in the year %d\n",min_coll,min_coll_yr);

}
void all_time2()//Highest and least grosser all time with movie name and collection
{
 long int max_coll_movie;
 long int min_coll_movie;
 char max_coll_movie_name[20];
 char min_coll_movie_name[20];
 int x,y,i;
 temp = first;
 max_coll_movie = temp->collection[0];
 strcpy(max_coll_movie_name,temp->movie_name[0]);
 min_coll_movie = temp->collection[0];
 strcpy(min_coll_movie_name,temp->movie_name[0]);
 while(temp!=NULL)
      {
       for(i=0;i<3;i++)
	  {
	   if(temp->collection[i]>max_coll_movie)
	     {
	      max_coll_movie=temp->collection[i];
	      strcpy(max_coll_movie_name,temp->movie_name[i]);
	     }
	    if(temp->collection[i]!=0 && temp->collection[i]<min_coll_movie)
	     {
	      min_coll_movie = temp->collection[i];
	      strcpy(min_coll_movie_name,temp->movie_name[i]);
	     }
	   }
	temp = temp->next;
       }
 printf("\n %s is the highest grosser all time with collection %ld\n",max_coll_movie_name,max_coll_movie);
 printf("\n %s is the least grosser all time with collection %ld\n",min_coll_movie_name,min_coll_movie);
}







void main()
{
 int choice,yr;
 char ch = 'y';
 create();
 insert_movie();
 while(ch == 'y')
      {
       printf("\n1.Year wise statistics 2.All time statistics");
       scanf("%d",&choice);
       switch(choice)
	     {
	      case 1 :printf("Enter year between 1981 and 2000:");
		      scanf("%d",&yr);
		      if(yr<1981 && yr>2000)
			 printf("Invalid input");
		      else
			 {
			  high_least_ygrss(yr);
			  mvie_cnt_total(yr);
			 }
		      break;
	      case 2 :all_time1();
		      all_time2();
		      break;
	      default:printf("Invalid input");
	     }
       printf("Continue y or n?\n");
       fflush(stdin);
       scanf("%c",&ch);
      }
}



