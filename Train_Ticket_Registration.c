#include"head.h"
int main(){
    //veariables
    //user input ver
    char name[30];
    char arr[30];
    char arrt[30];
    char des[30];
    long long int phone;
    //..................
    char p[10]=".........";
    int u;
    //while conditio ver
    int count;
    int i=0,con,num;
    //train seat arr
    int a[7][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16},
                 {17,18,19,20},
                 {21,22,23,24},
                 {25,26,27,28}};
    //user select section
    system("color 06");//system used to output color.........
    rep("~",49);//this is head function......it's used to repeted the given symble
    printf("1.Booking\n2.Cancel\n3.Detials of Bookings.......pass:12345\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\nEnter your option : ");
    scanf("%d",&u);
    rep("~",60);
    //if user select 1 exicute booking section
    if(u==1){
      system("cls");
      system("color 0A");
      int mem=inputd("How many peoples : ");//->this is header file code for taken int input......
      while(count<mem){
        count++;
        rep("=",100);
        printf("\n");
        //display train detials
        printf("\t\t\t\tTrain detials.....{`_`}\n");
        rep("=",100);
        //printing of train list
        printf("\nTrain no.\t	Train name\t	Starts\t\t	Ends");
        printf("\n12723\t	Andhra Pradesh Express\t	Hyderabad Decan\t	New Delhi");
        printf("\n22416\t	Andhra Pradesh Express\t	New Delhi	\tVishakapatnam");
        printf("\n12724\t	Andhra Pradesh Express    	New Delhi  \t\tHyderabad Decan\n12707\t	Andhra Pradesh Sampark Kranti   Tirupati\t	H Nizamuddin\n15609\t	Abadh Assam Express\t	New Tinsukia Junction   Darbhanga Junction\n15909\t	Abadh Assam Express\t	New Tinsukia Junction   Darbhanga Junction\n18242\t	Abkp Durg Passenger E\t	Ambikapur\t	Durg\n11266\t	Abkp Jbp Express\t	Ambikapur\t	Jabalpur\n54703\t	Abs Ju Passengr\t	        Abohar\t         	Jodhpur Junction\n");
        rep("=",100);
        rep("~",60);
        printf("     only first 3 trains are avable....\n");
        rep("~",60);
        printf("   we will devloped this fuctre.....{o_o}\n");
        rep("~",60);
        //taken train number
        num=inputd("\nenter a train number : |");
        system("cls");
        system("color 03");
        //train seclection
        switch(num)
        {
            case 12723:
                printf("Hyderabad Decan to 	New Delhi");
                break;
            case 22416:
                printf("New Delhi to Vishakapatnam");
                break;
            case 12724:
                printf("New Delhi to Hyderabad Decan");
                break;
            default:
                    break;
        }

        //seat detials
        printf("\t");
        rep("~",60);
        printf("\t\t\tseats detials.....{-_-}\n");
        printf("\t");
        rep("~",60);
        //seat detials printing section using nested for loop.......printing output like a pattern
        // #start
        for(int i=0;i<7;i++){//2d array row....
            printf("\n\t-----------------");
            printf("\n");
            printf("\t_________________\n");
            printf("\t|");
            for(int j=0;j<4;j++){//2d array coloum....
                if(a[i][j]!=0){
                    printf(" * |");
                if(j==3){
                    printf("  seat row[%d]~~~>",i+1);
                for(int r=0;r<4;r++){//this is used to printing the available seats
                    printf("(%d)",a[i][r]);
                }
                }
                }
                else if(a[i][j]==0){
                    printf(" x |");
                    if(j==3){
                    printf("  seat row[%d]~~~>",i+1);
                    for(int r=0;r<4;r++){
                        printf("(%d)",a[i][r]);
                    }
                    }
                }
            }
        }
        printf("\n");
        rep("_",60);
        //user input taken section......
        printf("\nEnter your Name: ");
        gets(name);
        gets(name);
        rep("_",60);
        //name
        phone=inputlld("Enter Your Phone Number : |");
        rep("_",60);
        //arrival
        printf("\nEnter a Arrival : |");
        gets(arrt);
        gets(arrt);
        rep("_",60);
        //destination
        printf("\nEnter a Destination : |");
        gets(des);
        rep("_",60);
        //class
        int clas=inputd("Enter a class [1/2] : |");
        int y=clas;
        rep("_",60);
        //class conditions
        if(clas==1){
            int seat=inputd("enter a seat: |");
            for(int i=0;i<7;i++){
                for(int j=0;j<4;j++){
                    if(a[i][j]==seat){
                        a[i][j]=0;
                    }
                }
            }

        for(int i=0;i<7;i++){
            printf("\n\t-----------------");
            printf("\n");
            printf("\t_________________\n");
            printf("\t|");
            for(int j=0;j<4;j++)
                if(a[i][j]!=0){
                    printf(" * |");
                if(j==3){
                    printf("  seat row[%d]~~~>",i+1);
                    for(int r=0;r<4;r++){
                        printf("(%d)",a[i][r]);
                    }
                }
                }
                else if(a[i][j]==0){
                    printf(" x |");
                    if(j==3){
                        printf("  seat row[%d]~~~>",i+1);
                        for(int r=0;r<4;r++){
                            printf("(%d)",a[i][r]);
                        }
                    }
                }
        }
        char g[10]="details...";
        printf("\n");
        rep(">",60);
        printf("\nyour ticket is generating.....\n");
        rep("<",60);
        printf("please check you ");
        for(int i=0;i<10;i++){
            printf("%c",g[i]);
            sleep(1);
        }
        rep("^",60);
        printf("\n");
        }
        system("cls");
        rep("~",60);
        //ticket preview....start.....
        printf("\n\tYour booking is prossing...\n");
        rep("^",60);
        printf("\n\tpreview your ticket\n");
        rep("^",60);
        //ticket preview printing
        printf("\nName :             %s\n",name);
        rep("_",60);
        printf("Phone number :     %lld\n",phone);
        rep("_",60);
        printf("Arravle :          %s\n",arrt);
        rep("_",60);
        printf("desition :         %s\n",des);
        rep("_",60);
        printf("Train :            %d",num);
        printf("\n");
        rep("_",60);
        printf("class :            %d\n",clas);
        printf("\n");
        rep("^",60);
        //End.....
        //uplodeing on file section........
        FILE *fp;//fp means file pointer
        fp = fopen("list_of_booking.txt", "a+");
        fprintf(fp, "\n\nName :         %s\nPhone no :     %lld\nTrain no:      %d\nArravle :      %s\ndesition :     %s\nClass :        %d\n",name,phone,num,arrt,des,clas);
        fclose(fp);
        printf("Please wait 5 sec your booking is upodeing");
        //this cooman is used to
        for(int i=0;i<10;i++){
            sleep(1);
            printf("%c",p[i]);
        }
        printf("your booking was succesfully booked.....\n\n\n");
      }
    }
    else if(u==3){
        //if user select 3...and execute this program
        system("cls");
        system("color 0A");
        int password=inputd("Enter a password : ");
        printf("\n\n");
        if(password==12345){
            FILE *fp;
            char str;
            fp=fopen("list_of_booking.txt","r");
            while((str=fgetc(fp))!=EOF){
                if(str=="\n"){
                    printf("yes");
                }
            printf("%c",str);}
            fclose(fp);
        }
        return 0;
    }
    else if(u==2){
        system("cls");
        system("color 05");
        rep("^",60);
        int h=inputd("Enter your booking number : ");
        rep("^",60);
        printf("\n\t\t");
        char t[13]="Thank you...";
        for(int i=0;i<12;i++){
            sleep(1);
            printf("%c",t[i]);
        }
        char y[10]="....{-_-}";
        printf("\n");
        rep("^",60);
        printf("\t");
        printf("you booking is canceld");
        for(int i=0;i<9;i++){
            sleep(1);
            printf("%c",y[i]);
            system("color 0b");
        }
        printf("\n");
        rep("^",60);
    }
}
