 #include<stdio.h>
 int main()
 {
     int ts,h,m,s;
     //ts=totalSecond,h=hours,m=minutes,s=seconds;
     printf ("Enter ts : ");
     scanf ("%d",&ts);

     h=ts/3600;
     m=(ts%3600)/60;
     s=ts%60;

     printf ("Hours= %d\n",h);
     printf ("Minutes= %d\n",m);
     printf ("Seconds= %d",s);

     return 0;
 }
