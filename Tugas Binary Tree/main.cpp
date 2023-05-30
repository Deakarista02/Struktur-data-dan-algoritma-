#include <iostream>
#include "BinaryTree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(5);
	bin.insertNode(15);
	bin.insertNode(3);
	bin.insertNode(6);
	bin.insertNode(2);
	bin.insertNode(20);
	bin.insertNode(25);
	
	cout << endl << "PreOrder: ";
	bin.preOrder();
	
	cout << endl << "InOrder: ";
	bin.inOrder();
	
	cout << endl << "PostOrder: ";
	bin.postOrder();

	cout << "\n" << endl << "Nilai MIN: ";
	bin.findMin();
	
	cout << endl << "Nilai MAX: ";
	bin.findMax();
	
	cout <<"\n" << endl << "Search Node";
	int searchNode;
	cout << "\nMasukan Node: ";
	cin >> searchNode;
	bin.searchNode(searchNode);
	
	return 0;
}
