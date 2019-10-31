//
//  Header.h
//  ass3
//
//  Created by MacBook on 2019/10/31.
//  Copyright © 2019 MacBook. All rights reserved.
//

#ifndef Header_h
#define Header_h
class Date{
public:
    Date(int ,int ,int );
    void setyear(int );
    int getday();
    void setday(int );
    int getyear();
    void setmonth(int );
    int getmonth();
    void displayDate();
private:
    int year1;
    int month;
    int day;
};

#endif /* Header_h */
