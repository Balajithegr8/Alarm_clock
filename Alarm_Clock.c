#include<stdio.h>
#include<windows.h>
#include <time.h>

int main()
{
    int a,b,c;
    printf("enter the time you want the alarm to ring : ");
    scanf("%d %d %d",&a,&b,&c);
    time_t rawtime;
    struct tm * timeinfo;
    time( &rawtime );
    timeinfo = localtime( &rawtime );
    int h=timeinfo->tm_hour,m=timeinfo->tm_min,s=timeinfo->tm_sec;
    int i=1;
    while(i)
    {
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>24){
            h=1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",h,m,s);
        Sleep(995);
        system ("cls");
        if(a==h && b==m && c==s){
            int n=5;
            while(n--){
            printf("WAKE UP ");
		    Beep(10000000, 450);
            i=0;
        }
    }
}
}