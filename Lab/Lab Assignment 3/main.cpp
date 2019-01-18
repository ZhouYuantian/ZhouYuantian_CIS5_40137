/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Administrator
 *
 * Created on 2019年1月15日, 上午10:19
 */


#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float totaltax;
    float taxpergalon;
    float totalprofit;
    float price;
    float galon;
    float profpergalon;
    float taxpercent;
    float profitpercent;
    
    cout << "Input the amount of gallon.\n";
    cin >> galon;
    cout << "Input the price per gallon in dollar.\n";
    
    
    cin >> price;
    price = price * 100;
    totaltax = price * galon * 0.08 + 39 + 10 + 18.4;
    totaltax = totaltax/100;
    taxpergalon = totaltax / galon;
    totalprofit = price * galon * 0.065 / 100;
    profpergalon = totalprofit / galon;
    taxpercent = totaltax / (price/100 * galon) * 100;
    profitpercent = totalprofit / (price/100 * galon) * 100;
    cout << fixed << setprecision(2) << "Total tax is " << totaltax << " dollar.\n";
     cout << fixed << setprecision(2) << "Tax per gallon is " << taxpergalon << " dollar.\n";
    cout << fixed << setprecision(2) << "Total profit is " << totalprofit << " dollar.\n";
    cout << fixed << setprecision(2) << "Profit per gallon is " << profpergalon << " dollar.\n";
    cout << fixed << setprecision(2) << "Tax percentage is " << taxpercent << "%" << "\n";
    cout << fixed << setprecision(2) << "Profit percentage is " << profitpercent << "%" << "\n";
            
    
            
    return 0;
}

