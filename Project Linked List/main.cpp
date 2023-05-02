#include <iostream>
#include "LinkedList.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	LinkedList lk1;
	
	lk1.insertToHead(10);
	lk1.insertToHead(30);
	lk1.insertToTail(70);
	lk1.deleteFromTail();
	lk1.printAll();
	
	return 0;
}
