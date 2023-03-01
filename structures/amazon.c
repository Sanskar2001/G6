#include <stdio.h>
#include <stdbool.h>

enum amazonOrderStatus
{
    Payment_failed,Cancelled,Placed,Dispatched,Shipped,Delievered
};

 typedef struct customer{

 	char customerName[20];
 	int contactNo;
 	char address[100];
 	bool isPrime;

 }cust;
// typedef struct customer cust;
typedef int aakash;

 struct order{

 	int orderNo;
 	// char customerName[100];
 	struct customer customerDetails;
 	int price;
 	// char address[100];
 	enum amazonOrderStatus orderStatus;
 };

 typedef struct order ord;

void printOrderDetails(struct order o)
{
	printf("Order No: %d \n",o.orderNo);
	printf("Customer Name: %s \n",o.customerDetails.customerName);
	printf("Order Price is: %d \n",o.price);
	// printf("Order Status is: %d\n",o.orderStatus);
    switch(o.orderStatus)
    {
        case Payment_failed : printf("Order Status is: Payment failed\n");
                            break;
        case Cancelled : printf("Order Status is: Cancelled\n ");
                            break;
        case Placed : printf("Order Status is: Placed\n");
                            break;
        case Dispatched : printf("Order Status is: Dispatched\n");
                            break;
        case Shipped : printf("Order Status is: Shipped\n");
                            break;
        case Delievered : printf("Order Status is: Delievered\n");
                            break;
    }

}

void changeOrderStatus(struct order* o,enum amazonOrderStatus newStatus)
{
    // o.orderStatus=newStatus;

    // (*o).orderStatus=newStatus;
   o->orderStatus=newStatus;
}

 int main()
 {
 	// struct order o1={101,"Yaadwinder",500,"Rajpura,Punjab","Placed"};
 	// struct order o2={102,"Aditi",1500,"Rajpura,Punjab","Placed"};
 	// struct order o3={103,"Anushka",2500,"Rajpura,Punjab","Placed"};

 	// cust c1={"Yaadwinder",8238148,"Rajpura",false};
 	// cust  c2={"Aditi",334893,"Rajpura",false};
 	// cust  c3={"Anushka",32423421,"Rajpura",true};
  //   cust c4={"Arpan",23423423,"Rajpura,Punjab",true};
  //   cust c5={"Aditya",23423243,"Rajpura",true};
  //   cust c6={"Yogesh",32434534,"Bangalore",true};


    cust customersList[100]={
        {"Yaadwinder",8238148,"Rajpura",false},
        {"Aditi",334893,"Rajpura",false},
        {"Anushka",32423421,"Rajpura",true},
        {"Arpan",23423423,"Rajpura,Punjab",true},
        {"Aditya",23423243,"Rajpura",true},
        {"Yogesh",32434534,"Bangalore",true}

    };


 	// struct order o1={101,customersList[0],500,Placed};
 	// struct order o2={102,customersList[1],1500,Shipped};
 	// struct order o3={103,customersList[2],2500,Payment_failed};
    ord orders[1000]={
        {101,customersList[0],500,Placed},
        {102,customersList[1],1500,Shipped},
        {103,customersList[2],2500,Payment_failed}
    };

 	printOrderDetails(orders[0]);
 	printOrderDetails(orders[1]);

    changeOrderStatus(&orders[2],Placed);
 	printOrderDetails(orders[2]);

 
        // aakash a=10;
        // printf("\n \n  %d",a);
 	// printf("%d %s %d %s %s \n",o1.orderNo,o1.customerName,o1.price,o1.address,o1.orderStatus);
 	// printf("%d %s %d %s %s \n",o2.orderNo,o2.customerName,o2.price,o2.address,o2.orderStatus);
 	// printf("%d %s %d %s %s \n",o3.orderNo,o3.customerName,o3.price,o3.address,o3.orderStatus);

 }