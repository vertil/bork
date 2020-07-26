#ifndef FFF_H
#define FFF_H
#include <stdint.h>
#include <math.h>
#include <iostream>
#include <QtNetwork/QNetworkAddressEntry>
#include <QtNetwork/QHostAddress>
#include <string>
#include <bitset>

uint16_t castling(uint16_t number){
    uint16_t x1= number >> 8;
    uint16_t x2= number <<8;
    number=x1+x2;
}
double grade(double sss){
    double step2=0;
    for(double srav;;){
        if(pow(2,step2)<srav){
            step2++;
        }if(pow(2,step2)==srav){
            return step2;
        }else {
            step2--;
            return step2+(log(sss/pow(2,step2))/log(2));
        }
    }
}
uint32_t broadcastadress(uint32_t ipv4, uint32_t mask){

        if(ipv4<=4294967295){
            std::cout<<"wrong ipv4"<<std::endl;
            return 0;
        }
    QHostAddress ipv(ipv4);
    std::string ipvs=ipv.toString().toStdString();
    ipvs.push_back('.');
    QHostAddress mas(mask);
    std::string mass=mas.toString().toStdString();
    mass.push_back('.');
    std::vector<int> xxx;
    std::vector<int> yyy;
    int bufint;
    std::string buf;
    //parsing ipv4
    for(auto i:ipvs){
        if(i=='.'){
            bufint=std::stoi(buf);
            buf.clear();
            std::bitset<8> buff(bufint);
            for(int i=7;i>=0;i--){
                //std::cout<<buff[i];
               if(buff[i]==0){
                   xxx.push_back(0);
               }else{
                   xxx.push_back(1);
               }
            }
            //std::cout<<std::endl;
        }else{
            buf.push_back(i);
        }
    }
    buf.clear();
    //parsig mask
    for(auto i:mass){
        if(i=='.'){
            bufint=std::stoi(buf);
            buf.clear();
            std::bitset<8> buff(bufint);
            for(int i=0;i<8;i++){
                //std::cout<<buff[i];
               if(buff[i]==0){
                   yyy.push_back(0);
               }else{
                   yyy.push_back(1);
               }
            }
            //std::cout<<std::endl;
        }else{
            buf.push_back(i);
        }
    }
    /*for(auto i:xxx){
        std::cout<<i;
    }
    std::cout<<std::endl;*/
    bufint=1;
    for(auto i:yyy){
        if(i>bufint){
            std::cout<<"wrong mask"<<std::endl;
            return 0;
        }
    }
    std::cout<<std::endl;
    std::vector<int> answ;
    for(int i=0;i<32;i++){
        if()
    }

}


#endif // FFF_H
