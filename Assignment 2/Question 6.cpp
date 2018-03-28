
struct Item
{
char itemName[20];
int itemCode;
float price;
int QtyInStock;
int IsHighDemand;
int SoldToday;
Item *next;
};

void ShowPrice(Item *n)
{
	while(n!=NULL)
	{
		cout << n->itemName << " " << n->price << "\n";
		n = n->next;
	}
}

node* push(struct node* head, int new_data)
{
   	struct node* temp = new node;
 	temp->data  = new_data;
    temp->next = head;
 	head = temp;
	return head;
}


int main()
{
	int x=0;
	
	while(x!=6)
	{
		cout << "What do you want to do?\t Type the option number\n
		1. Add a new item\n
		2. Update the price of an item\n
		3. Update the stock\n
		4. Show the price list\n
		5. Sell an item\n
		6. Exit\n";
		cin >> x;
		if(x==4)
			ShowPrice(head);
	}



	return 0;
}