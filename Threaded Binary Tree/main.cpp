#include "BinNode.h"
#include "book.h"
#include "BST.h"
#include "BSTNode.h"
#include "dictionary.h"

using namespace std;

int main() {
	BST<int, string> tree;

	tree.insert(24, "twenty-four");
	tree.insert(77, "seventy-seven");
	tree.insert(70, "seventy");
	tree.insert(75, "seventy-five");
	tree.insert(66, "sixty-six");
	tree.insert(79, "seventy-nine");
	tree.insert(68, "sixty-eight");
	tree.insert(67, "sixty-seven");
	tree.insert(69, "sixty-nine");
	tree.insert(90, "ninety");
	tree.insert(85, "eighty-five");
	tree.insert(83, "eighty-three");
	tree.insert(87, "eighty-seven");
	tree.insert(65, "sixty-five");

	cout << "Doubly-Threaded Binary Search Tree" << endl;
	cout << "The size of the binary tree is: " << tree.size() << endl;
	cout << "Print using printhelp():" << endl;
	tree.print();
	cout << endl;
	cout << "Print tree in order:";
	tree.printInorder();
	cout << endl << endl;
	cout << "Print tree in reverse:";
	tree.printReverse();
}