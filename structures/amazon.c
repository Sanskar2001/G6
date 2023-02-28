#include <stdio.h>
#include <stdbool.h>
 struct customer{

 	char customerName[20];
 	int contactNo;
 	char address[100];
 	bool isPrime;

 }; 
 struct order{

 	int orderNo;
 	// char customerName[100];
 	struct customer customerDetails;
 	int price;
 	// char address[100];
 	char orderStatus[20];
 };

void printOrderDetails(struct order o)
{
	printf("Order No: %d \n",o.orderNo);
	printf("Customer Name: %s \n",o.customerDetails.customerName);
	printf("Order Price is: %d \n",o.price);
	printf("Order Status is: %s\n",o.orderStatus);

}

 int main()
 {
 	// struct order o1={101,"Yaadwinder",500,"Rajpura,Punjab","Placed"};
 	// struct order o2={102,"Aditi",1500,"Rajpura,Punjab","Placed"};
 	// struct order o3={103,"Anushka",2500,"Rajpura,Punjab","Placed"};

 	struct customer c1={"Yaadwinder",8238148,"Rajpura",false};
 	struct customer c2={"Aditi",334893,"Rajpura",false};
 	struct customer c3={"Anushka",32423421,"Rajpura",true};


 	struct order o1={101,c1,500,"Placed"};
 	struct order o2={102,c2,1500,"Placed"};
 	struct order o3={103,c3,2500,"Placed"};

 	printOrderDetails(o1);
 	printOrderDetails(o2);
 	printOrderDetails(o3);



 	// printf("%d %s %d %s %s \n",o1.orderNo,o1.customerName,o1.price,o1.address,o1.orderStatus);
 	// printf("%d %s %d %s %s \n",o2.orderNo,o2.customerName,o2.price,o2.address,o2.orderStatus);
 	// printf("%d %s %d %s %s \n",o3.orderNo,o3.customerName,o3.price,o3.address,o3.orderStatus);

 }