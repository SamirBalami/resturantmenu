#include<iostream>
#include<string>
using namespace std;
class restaurantMenu
{
    private:
    string mainMenu[12]={"chicken.burger","veg.burger","chicken.pizza","cheese.pizza","veg.momo","buff.momo","chicken.momo","buff.choila","chicken.choila","coke","pepsi","sprite"};
    int foodPrice[12]={200,150,300,350,100,150,170,180,200,60,60,60};
    static int netPrice;
    float totalPrice;
    float vatAmount;
    int serial=0;
    public:
    friend int burger(restaurantMenu rm);
    friend int pizza(restaurantMenu rm);
    friend int momo(restaurantMenu rm);
    friend int choila(restaurantMenu rm);
    friend int softDrinks(restaurantMenu rm);
    void billing()//Biling is need to show.
    {
        cout<<"\t\tHWIC BILL"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"\t\tNet Price: "<<netPrice<<endl;
        vatAmount=(13*netPrice)/100;
        cout<<"\t\tVat amount: "<<vatAmount<<endl;
        totalPrice=netPrice+vatAmount;
        cout<<"\t\tTotal price: "<<totalPrice<<endl;
        cout<<"****************************************"<<endl;
    }
};
int restaurantMenu::netPrice;//by defaullt zero

int softDrinks(restaurantMenu rm)
{
    int option,i,quantity;
    int price;
    cout<<"\t\tSOFT DRINKS MENU"<<endl;
    for(i=9;i<=11;i++)
    {
        cout<<"\t\t "<<rm.serial+1<<". "<<rm.mainMenu[i]<<"\t"<<rm.foodPrice[i]<<endl;
        rm.serial++;
    }
    cout<<"Input option here: ";
    cin>>option;
    cout<<"Quantity: ";
    cin>>quantity;
    
    switch (option)
    {
    case 1:
        price=rm.foodPrice[9]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    case 2:
        price=rm.foodPrice[10]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    case 3:
        price=rm.foodPrice[11]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    default:
        cout<<"Invalid input"<<endl;
        break;
    }
}


int choila(restaurantMenu rm)
{
    int option,i,quantity;
    int price;
    cout<<"\t\tCHOILA MENU"<<endl;
    for(i=7;i<9;i++)
    {
        cout<<"\t\t "<<rm.serial+1<<". "<<rm.mainMenu[i]<<"\t"<<rm.foodPrice[i]<<endl;
        rm.serial++;
    }
    cout<<"Input option here: ";
    cin>>option;
    cout<<"Quantity: ";
    cin>>quantity;
    
    switch (option)
    {
    case 1:
        price=rm.foodPrice[7]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    case 2:
        price=rm.foodPrice[8]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    default:
        cout<<"Invalid input"<<endl;
        break;
    }
}

int momo(restaurantMenu rm)
{
    int option,i,quantity;
    int price;
    cout<<"\t\tMOMO MENU"<<endl;
    for(i=4;i<7;i++)
    {
        cout<<"\t\t "<<rm.serial+1<<". "<<rm.mainMenu[i]<<"\t"<<rm.foodPrice[i]<<endl;
        rm.serial++;
    }
    cout<<"Input option here: ";
    cin>>option;
    cout<<"Quantity: ";
    cin>>quantity;
    
    switch (option)
    {
    case 1:
        price=rm.foodPrice[4]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    case 2:
        price=rm.foodPrice[5]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    case 3:
        price=rm.foodPrice[6]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    default:
        cout<<"Invalid input"<<endl;
        break;
    }
}

int pizza(restaurantMenu rm)
{
    int option,i,quantity;
    int price;
    cout<<"\t\tPIZZA MENU"<<endl;
    for(i=2;i<4;i++)
    {
        cout<<"\t\t "<<rm.serial+1<<". "<<rm.mainMenu[i]<<"\t"<<rm.foodPrice[i]<<endl;
        rm.serial++;
    }
    cout<<"Input option here: ";
    cin>>option;
    cout<<"Quantity: ";
    cin>>quantity;
    
    switch (option)
    {
    case 1:
        price=rm.foodPrice[2]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    case 2:
        price=rm.foodPrice[3]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    default:
        cout<<"Invalid input"<<endl;
        break;
    }
}

int burger(restaurantMenu rm)
{
    int option,i,quantity;
    int price;
    cout<<"\t\tBURGER MENU"<<endl;
    for(i=0;i<2;i++)
    {
        cout<<"\t\t "<<rm.serial+1<<". "<<rm.mainMenu[i]<<"\t"<<rm.foodPrice[i]<<endl;
        rm.serial++;
    }
    cout<<"Input option here: ";
    cin>>option;
    cout<<"Quantity: ";
    cin>>quantity;
    
    switch (option)
    {
    case 1:
        price=rm.foodPrice[0]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    case 2:
        price=rm.foodPrice[1]*quantity;
        return rm.netPrice=rm.netPrice+price;
        break;
    default:
        cout<<"Invalid input"<<endl;
        break;
    }
}

void welcome()
{
    cout<<"\t\tHWIC CAFE"<<endl;
    cout<<"\t\tputalisadak,ktm"<<endl;
    cout<<"********************************************"<<endl;
}
void menu()
{
    cout<<"\t\tMAIN MENU"<<endl;
    cout<<"\t\t1. Burger"<<endl;
    cout<<"\t\t2. Pizza"<<endl;
    cout<<"\t\t3. Momo"<<endl;
    cout<<"\t\t4. Choila"<<endl;
    cout<<"\t\t5. Soft Drinks"<<endl;
}

int main()
{
    string mainMenu[]={"chicken.burger,veg.burger,chicken.pizza,cheese.pizza,veg.momo,buff.momo,chicken.momo,buff.choila,chicken.choila,coke,pepsi,sprite"};
    int price[]={200,150,300,350,100,150,170,180,200,60,60,60};
    int choice;
    char reorder;
    restaurantMenu rm;
    do
     {
        welcome();
        menu();
        cout<<"Input option here: ";
        cin>>choice;
        system("cls");
        switch(choice)
        {
            case 1:
            burger(rm);
            break;
            case 2:
            pizza(rm);
            break;
            case 3:
            momo(rm);
            break;
            case 4:
            choila(rm);
            break;
            case 5:
            softDrinks(rm);
            break;
            default:
            cout<<"invalid input1!"<<endl;
            break;

        }
        cout<<"Will you like to order anything y/n: ";
        cin>>reorder;
    } while (reorder=='y');
    
    rm.billing();
    return 0;
}
