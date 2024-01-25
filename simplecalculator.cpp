#include<iostream>
int main()
{
    double num1,num2;
    int choice;
    std::cout<<"\t\tSIMPLE CALCULATOR"<<std::endl;
    std::cout<<"This calculator is used to add subtract multiply and divide two numbers"<<std::endl;
    
    do{
    std::cout<<"enter the choice"<<std::endl;
    std::cout<<"1 --> addition"<<std::endl; 
    std::cout<<"2 --> subtraction"<<std::endl;
    std::cout<<"3 --> multiplication"<<std::endl;
    std::cout<<"4 --> division"<<std::endl;
    std::cout<<"5 --> exit"<<std::endl;
    std::cin>>choice;
    if(choice == 5){
        std::cout<<"THANK YOU!!";
        break;}
    std::cout<<"\n enter num1 and num2"<<std::endl;
    std::cin>>num1>>num2;
    std::cout<<"\n";
    switch(choice)
    {
        case 1:
            std::cout<<"Adding two numbers"<<std::endl;
            std::cout<<num1+num2<<std::endl;
            break;
        case 2:
            std::cout<<"subtracting two nubers"<<std::endl;
            std::cout<<num1-num2<<std::endl;
            break;
        case 3:
            std::cout<<"multiplying two numbers"<<std::endl;
            std::cout<<num1*num2<<std::endl;
            break;
        case 4:
            std::cout<<"dividing two numbers"<<std::endl;
            if(num2!=0){
            std::cout<<num1/num2<<std::endl;}
            else{
             std::cout<<"the denominator should not be zero"<<std::endl; }
            break;
        default:
            std::cout<<"INVALID OPERATOR"; }
            }while(true);
    return 0;
}