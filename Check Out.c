//
// Created by taylo on 12/11/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getbill(float Roomcost ,int adultboard,int childboard, char paper, int age , int children);

int main(void){
    float bill;
    bill = getbill(3, 4,3,'y',5,2);
    return 0;
}
int getbill(float Roomcost ,int adultboard,int childboard, char paper, int age , int children){
    float total_bill;
    float total_board;
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
        printf("%c \n %c \n 5.50\n %f\n %f\nTotal Bill: %f ", bookingId, guestName, Roomcost, total_board, total_bill );
    }
    else{
        printf("%c \n %c \n %f\n %f\nTotal Bill: %f ", bookingId, guestName, Roomcost, total_board, total_bill );
