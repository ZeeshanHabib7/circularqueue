#include<iostream>
using namespace std;
int queue[3], front = -1, rear = -1, n = 3, flag = 0;

void insert(int data){
	if ((front == 0 && rear == 2) || (rear == front - 1)){
		cout << "\nQueue is already full" << endl;
	}
	else if (front == -1){
		front = 0;
		rear = 0;
		queue[rear] = data;
	}
	else if (rear == 2){
		rear = 0;
		queue[rear] = data;
	}
	else{
		rear = rear + 1;
		queue[rear] = data;
	}
}
int del(){
	if (front == -1){
		cout << "Queue is already empty";
		return 0;
	}
	int temp;
	temp = queue[front];
	if (front == rear){
			front = -1;
			rear = -1;
		}
	else if (front == 2)
	{
		front = 0;
	}
	else{
		front = front + 1;
	}
	
	return (temp);
	

}

int main(){
	int data;
	do{
		cout << "\nPlz Enter 1 for Insert" << endl;
		cout << "Plz Enter 2 for Delete" << endl;
		cout << "Plz Enter 3 for Exit" << endl;
		cin >> flag;
		if (flag == 1){
			cout << "\tEnter value to insert:" << endl;
			cin >> data;
			insert(data);
		}
		else if (flag == 2){
			cout << endl << del();

		}
	} while (flag != 3);


	return 0;
}



