#include"Date.h"
#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     Date first(10,30,2019);///初始化
     first.display();///显示
     first.setmonth(13);///非法月份1
     first.display();///显示
     first.setmonth(0);///非法月份2
     first.display();///显示
 }
