//
// Created by taylo on 12/11/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getbill(float Roomcost ,int adultboard,int childboard, char paper, int age , int children);

int main(void){
    char bookingId[20];
    char guestName[20];
    float bill;
    char data[7][12][20] = {
        {"james","cook","22/09/2007","16","0","2","FB","3","N","3","cook1234"},
        {"emma","smith","10/05/1992","31","1","1","BB","5","Y","1","smith2345"},
        {"liam","johnson","15/08/1985","38","2","2","HB","7","N","6","johnson6789"},
        {"olivia","brown","28/11/2001","22","0","1","FB","4","Y","2","brown4521"},
        {"noah","williams","04/02/1995","29","1","2","FB","10","N","4","williams7890"},
        {"sophia","martin","19/07/1988","35","3","2","HB","6","Y","5","martin3456"}
    };
    bill = getbill(3, 4,3,'y',5,2);
    return 0;
}
int getbill(float Roomcost ,int adultboard,int childboard, char paper, int age , int children){
    float total_bill;
    float total_board;
    char bookingId[20];
    char guestName[20];

    printf("Enter Booking ID:");
    fflush(stdin);
    scanf("%c",bookingId);
    printf("Enter Booking Name:");
    fflush(stdin);
    scanf("%c",guestName);

    if (paper == 'y'){
        total_bill = total_bill + 5.5;
    }

    if (age >= 65){
        Roomcost = Roomcost * 0.9;
    }

    if (children >= 1){
        childboard = childboard /2;
    }

    total_board = childboard + adultboard;
    total_bill = total_bill + Roomcost + total_board;


    if (paper == 'y'){
        printf("%c \n %c \n 5.50\n %f\n %f\nTotal Bill: %f ", bookingId[20], guestName[20], Roomcost, total_board, total_bill );
    }
    else{
        printf("%c \n %c \n %f\n %f\nTotal Bill: %f ", bookingId[20], guestName[20], Roomcost, total_board, total_bill );
    }
    return 0;
}