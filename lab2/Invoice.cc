#include <iostream>
#include "Invoice.h"


Invoice:: Invoice (){

    part_numb_m = "number";
    part_description_m = "name" ;
    quantity_m = 0;
    price_per_item_m = 0;


}

void Invoice:: set_part_numb(string part_numb){
    part_numb_m = part_numb;
}
void Invoice:: set_part_description(string part_description){
    part_description_m = part_description;
}
void Invoice:: set_quantity(int quantity){
    quantity_m = quantity;
}
void Invoice:: set_price_per_item(double price_per_item){
    price_per_item_m = price_per_item;
}

string Invoice:: get_part_numb(){

    return part_numb_m;

}
string Invoice:: get_part_description(){

    return part_description_m;
}
int Invoice:: get_quantity(){

    return quantity_m;
}

double Invoice:: get_price_per_item(){

    return price_per_item_m;
}

double Invoice:: getInvoiceAmount(){

    double invoice_amount;

    if ((quantity_m> 0) && (price_per_item_m>0)){
        invoice_amount = quantity_m * price_per_item_m;
    }

    else{
        invoice_amount = 0;
    }

    return invoice_amount;

}