#ifndef INVOICE_H
#define INVOICE_H


#include <iostream>

using namespace std;

class Invoice {
    private:
    
        string part_numb_m;
        string part_description_m;
        int quantity_m;
        double price_per_item_m;

    public:

        Invoice();
       // Invoice(string part_numb, string part_description, int quantity, double price_per_item);
        void set_part_numb(string part_numb);
        void set_part_description(string part_description);
        void set_quantity(int quantity);
        void set_price_per_item(double price_per_item);


        string get_part_numb();
        string get_part_description();
        int get_quantity();
        double get_price_per_item();

        double getInvoiceAmount();
        
};

#endif