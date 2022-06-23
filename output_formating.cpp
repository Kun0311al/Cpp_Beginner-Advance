#include<iostream>
#include<iomanip> //std::setw(value),std::stefill('any sign'),std::showpos,
                //std::hex::dec::oct,std::uppercase,std::showpint,std::noshowpint are include in this file
int main(){
//unordered data 
    std::cout<<std::endl;
    std::cout<<"Unordered Data"<<std::endl;
    std::cout<<"Kunal "<< "Parkar "<<"19"<<std::endl;
    std::cout<<"Avinash "<< "Rajak "<<"20"<<std::endl;
    std::cout<<"Ananya "<< "Shetty "<<"19"<<std::endl;
    std::cout<<"Ruchita "<< "Sabale "<<"21"<<std::endl;
    std::cout<<"Shraddha "<< "Singh "<<"20"<<std::endl;
    std::cout<<"Shrikant "<< "Sabbani "<<"21"<<std::endl;
//order data in default side
    std::cout<<std::endl;
    std::cout<<"ordered Data"<<std::endl;
    std::cout<<std::setw(10)<<"First Name "<<std::setw(10)<< "Last Name "<<std::setw(5)<<"Age"<<std::endl;
    std::cout<<std::setw(10)<<"Kunal "<<std::setw(10)<< "Parkar "<<std::setw(5)<<"19"<<std::endl;
    std::cout<<std::setw(10)<<"Avinash "<<std::setw(10)<< "Rajak "<<std::setw(5)<<"20"<<std::endl;
    std::cout<<std::setw(10)<<"Ananya "<<std::setw(10)<< "Shetty "<<std::setw(5)<<"19"<<std::endl;
    std::cout<<std::setw(10)<<"Ruchita "<<std::setw(10)<< "Sabale "<<std::setw(5)<<"21"<<std::endl;
    std::cout<<std::setw(10)<<"Shraddha "<<std::setw(10)<< "Singh "<<std::setw(5)<<"20"<<std::endl;
    std::cout<<std::setw(10)<<"Shrikant "<<std::setw(10)<< "Sabbani "<<std::setw(5)<<"21"<<std::endl;
//order data in default side in sapecific declaration
    std::cout<<std::endl;
    std::cout<<"ordered Data with width declaration"<<std::endl;
    int col_w = 13;//declaring the width 
    int col_w2 = 5;
    std::cout<<std::setw(col_w)<<"First Name "<<std::setw(col_w)<< "Last Name "<<std::setw(col_w2)<<"Age"<<std::endl;
    std::cout<<std::setw(col_w)<<"Kunal "<<std::setw(col_w)<< "Parkar "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Avinash "<<std::setw(col_w)<< "Rajak "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ananya "<<std::setw(col_w)<< "Shetty "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ruchita "<<std::setw(col_w)<< "Sabale "<<std::setw(col_w2)<<"21"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shraddha "<<std::setw(col_w)<< "Singh "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shrikant "<<std::setw(col_w)<< "Sabbani "<<std::setw(col_w2)<<"21"<<std::endl;
//ordered data in lieft side
    std::cout<<std::endl;
    std::cout<<"ordered Data in left side"<<std::endl;
    std::cout<<std::left;//right side is default
    std::cout<<std::setw(col_w)<<"First Name "<<std::setw(col_w)<< "Last Name "<<std::setw(col_w2)<<"Age"<<std::endl;
    std::cout<<std::setw(col_w)<<"Kunal "<<std::setw(col_w)<< "Parkar "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Avinash "<<std::setw(col_w)<< "Rajak "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ananya "<<std::setw(col_w)<< "Shetty "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ruchita "<<std::setw(col_w)<< "Sabale "<<std::setw(col_w2)<<"21"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shraddha "<<std::setw(col_w)<< "Singh "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shrikant "<<std::setw(col_w)<< "Sabbani "<<std::setw(col_w2)<<"21"<<std::endl;
    //in right and left justification the sing of the date is also go with the data at that side
    //by using internal justification the sign and the data goes seprete sign goes left and data goes right
    //sign (-,+)
//internal justification
    std::cout<<std::endl;
    std::cout<<"Internal Justification"<<std::endl;
    std::cout<<std::right;
    std::cout<<std::setw(15)<<-12.4<<std::endl;
    std::cout<<std::internal;
    std::cout<<std::setw(15)<<-12.4<<std::endl;
//fill the remaining part with the declared sign
    //setfill(-) this is use to fill the remaining gap bitwin the words
    std::cout<<std::endl;
    std::cout<<"ordered Data with set fill"<<std::endl;
    std::cout<<std::left;//right side is default
    std::cout<<std::setfill('-');
    std::cout<<std::setw(col_w)<<"First Name "<<std::setw(col_w)<< "Last Name "<<std::setw(col_w2)<<"Age"<<std::endl;
    std::cout<<std::setw(col_w)<<"Kunal "<<std::setw(col_w)<< "Parkar "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Avinash "<<std::setw(col_w)<< "Rajak "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ananya "<<std::setw(col_w)<< "Shetty "<<std::setw(col_w2)<<"19"<<std::endl;
    std::cout<<std::setw(col_w)<<"Ruchita "<<std::setw(col_w)<< "Sabale "<<std::setw(col_w2)<<"21"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shraddha "<<std::setw(col_w)<< "Singh "<<std::setw(col_w2)<<"20"<<std::endl;
    std::cout<<std::setw(col_w)<<"Shrikant "<<std::setw(col_w)<< "Sabbani "<<std::setw(col_w2)<<"21"<<std::endl;
//to showing the possitive sign of the number
    //std::showpos is use for it and cloasing this std::noshoepose is use
    std::cout<<std::endl;
    std::cout<<"show the positive sing also"<<std::endl;
    int pos_no = 10;
    int neg_no = -20;
    std::cout<<"Pos_no: "<<pos_no<<std::endl;
    std::cout<<"neg_no: "<<neg_no<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::showpos;
    std::cout<<"Pos_no: "<<pos_no<<std::endl;
    std::cout<<"neg_no: "<<neg_no<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::noshowpos;
    std::cout<<"Pos_no: "<<pos_no<<std::endl;
    std::cout<<"neg_no: "<<neg_no<<std::endl;
//to display the numbers in other number system
    /*std::dec is use to display the decimal no. of given number
      std::hex is use to display the hexadecimal no. of given no.
      std::oct is use to display the octal form of given no.*/
    /*positive and negative no are declared already in last code*/
    double double_no = 4.094;
    std::cout<<std::endl;
    std::cout<<"showing the no. in different no. system"<<std::endl;
    std::cout<<"display original no.: "<<std::endl;
    std::cout<<"pos_no.: "<<pos_no<<std::endl;
    std::cout<<"neg_no.: "<<neg_no<<std::endl;
    std::cout<<"double_no.: "<<double_no<<std::endl;
    //using for positive no.:
    std::cout<<std::endl;
    std::cout<<"pos_no. (dec): "<<std::dec<<pos_no<<std::endl;
    std::cout<<"pos_no. (hex): "<<std::hex<<pos_no<<std::endl;
    std::cout<<"pos_no. (oct): "<<std::oct<<pos_no<<std::endl;
    //using for negative no.:
    std::cout<<std::endl;
    std::cout<<"neg_no. (dec): "<<std::dec<<neg_no<<std::endl;
    std::cout<<"neg_no. (hex): "<<std::hex<<neg_no<<std::endl;
    std::cout<<"neg_no. (oct): "<<std::oct<<neg_no<<std::endl;
    //using for double no.:
    //this system is not works for double or floating no.
    std::cout<<std::endl;
    std::cout<<"double_no. (dec): "<<std::dec<<double_no<<std::endl;
    std::cout<<"double_no. (hex): "<<std::hex<<double_no<<std::endl;
    std::cout<<"double_no. (oct): "<<std::oct<<double_no<<std::endl;
    /*for showing the letters in upper case use std::uppercase
    std::showpint is use for the for eg:our value is double double_no:20.0 but if we print this 
    value we will get 20 only bt after using std::show point we get 20.0000 like this and for off this 
    setting we can use std::noshowpoint*/
}