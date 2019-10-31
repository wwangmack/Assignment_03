#include <iostream>

using namespace std;

#include "Invoice.h"

Invoice::Invoice(string number, string description, int sales, int price) {
    setPartNumber(number);
    setPartDescription(description);
    setProductSales(sales);
    setCommodityPrice(price);
}

void Invoice::setPartNumber(string number) {
    partNumber = number;
}

string Invoice::getPartNumber() {
    return partNumber;
}

void Invoice::setPartDescription(string description) {
    partDescription = description;
}

string Invoice::getPartDescription() {
    return partDescription;
}

void Invoice::setProductSales(int sales) {
    productSales = sales;
}

int Invoice::getProductSales() {
    return productSales;
}

void Invoice::setCommodityPrice(int price) {
    commodityPrice = price;
}

int Invoice::getCommodityPrice() {
    return commodityPrice;
}

int Invoice::getInvoiceAmount() {
    if (productSales < 0 || commodityPrice < 0) {
        return 0;
    } else {
        return productSales * commodityPrice;
    }
}
