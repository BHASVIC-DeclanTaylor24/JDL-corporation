//
// Created by taylo on 15/11/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getbill(char data[7][12][20]);

int main(void){
    float bill;
    char data[7][12][20] = {
        {"james","cook","22/09/2007","16","0","2","FB","3","N","3","cook1234"},
        {"emma","smith","10/05/1992","31","1","1","BB","5","Y","1","smith2345"},
        {"liam","johnson","15/08/1985","38","2","2","HB","7","N","6","johnson6789"},
        {"olivia","brown","28/11/2001","22","0","1","FB","4","Y","2","brown4521"},
        {"noah","williams","04/02/1995","29","1","2","FB","10","N","4","williams7890"},
        {"sophia","martin","19/07/1988","35","3","2","HB","6","Y","5","martin3456"}
    };
    printf("%s",data[1][2]);
    // need to know how to send whole array into subroutine
    bill = getbill(data[7][12][20]);
    return 0;
}
int getbill(char data[7][12][20]) {
    char paper = data[0][8];
    float total_bill = 0;
    float Roomcost =0;
    int children = data[0][4];
    int age = data[0][3];
    float adultboard =0;
    float childboard =0;
    float total_board =0;
    int rooms = data[0][9];
    int days = data[0][5];


    if (paper == 'Y'){
        total_bill = total_bill + 5.5;
    }

    if(rooms == 1 || rooms == 2) {
        Roomcost =  rooms * 100 * days;
    }
    else if(rooms == 3) {
        Roomcost = rooms *85 * days;
    }
    else if(rooms == 4 || rooms == 5) {
        Roomcost = rooms * 75 * days;
    }
    else if(rooms == 6) {
        Roomcost = rooms * 50 * days;
    }
    if (age >= 65){
        Roomcost = Roomcost * 0.9;
    }

    if (children >= 1){

        childboard = childboard /2;
    }

    total_board = childboard + adultboard;
    total_bill = total_bill + Roomcost + total_board;

    printf("\n%f",Roomcost);
}

