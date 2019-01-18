/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Administrator
 *
 * Created on 2019年1月6日, 上午9:11
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float milBdgt,fedBdgt,mlPrcnt;

milBdgt=7.0e11f;    //Military Budget = 700 Billion   

fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion

mlPrcnt = (float)milBdgt / fedBdgt * 100;
 cout << mlPrcnt << "%";
    return 0;
}

