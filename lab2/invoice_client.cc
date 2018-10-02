#include <iostream>
#include "Invoice.h"


int main(){

    
    int option;
    int option_case1;
    int option_case2;

    Invoice Object1;
    
    string part_numb;
    string part_description;
    int quantity;
    double price_per_item;

    do{
        std:: cout << "\nEnter 1 to set a member, Enter 2 get a member value, Enter 3 to get invoice amount, Enter 4 to exit:";
        std:: cin >> option;

        switch (option){
            case(1):
                do{
                    std:: cout << "\n Enter 1 to set part number, Enter 2 set part description, Enter 3 to set quantity, Enter 4 to set price per item, Enter 5 to exit:";
                    std:: cin >> option_case1;

                    switch(option_case1){
                        case (1):
                            std:: cout<< " \nEnter a part number to set part number:";
                            std:: cin >> part_numb;

                            Object1.set_part_numb(part_numb);

                            
                            break;

                        case (2):

                            std:: cout<< " \nEnter a part number to set part description:";
                            std:: cin >> part_description;

                            Object1.set_part_description(part_description);

                            
                            break;

                        case (3):

                            std:: cout<< " \nEnter a quantity:";
                            std:: cin >> quantity;

                            Object1.set_quantity(quantity);

                            
                            break;

                        case (4):

                            std:: cout<< " \nEnter a price per item:";
                            std:: cin >> price_per_item;

                            Object1.set_price_per_item(price_per_item);

                            
                            break;
                       

                    }
                } while(option_case1 != 5);
                break;

            case(2):
                do{
                    std:: cout << "\n Enter 1 to get part number, Enter 2 get part description, Enter 3 to get quantity, Enter 4 to get price per item, Enter 5 to exit:";
                    std:: cin >> option_case2;

                    switch(option_case2){
                        case (1):

                            std:: cout<< "The part number is set to:" << Object1.get_part_numb();
                            break;

                        case (2):

                            std:: cout<< "The part description is set to:" << Object1.get_part_description();

                            break;

                        case (3):

                            std:: cout<< "The quantity is set to:" << Object1.get_quantity();

                            break;

                        case (4):

                            std:: cout<< "The price per item is set to:" << Object1.get_price_per_item();

                            break;

                    }
                } while(option_case2 != 5);
                break;

            case(3):

                std:: cout<< "The invoice amount is:" << Object1.getInvoiceAmount();
                break;

            case (4):
                exit(1);

        }
    
    } while (1);
    
}
