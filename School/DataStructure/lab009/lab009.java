// Lab 009	: Heapsort
// Name :
// Student ID :

import java.util.*;


class HeapSort {
    int[] heapArr; // array
	int hSize;  // number of elements in heapArr

	HeapSort(int capacity) { 
		heapArr = new int[capacity + 1];  
		hSize = 0;
	}


	public String toString() { 
		String str = new String();
		// Show all the element in heapArr
		str = "Heap : - ";

		// print all the nodes in heapArr
		for(int i = 1; i <= hSize; i++)
			str +=  heapArr[i] + "  ";
		return str;
	}

	void  Init(int []es, int n) {	
		// fill the heapArr array by the input
		// we need to create heap structure when we call hSort()
		hSize = n;
		for(int i = 1; i <= n; i++)
			heapArr[i] = es[i];
	}

	void  Adjust(int root, int n) {	
		// adjust binary tree with root "root" to satisfy heap property.
		// The left and right subtrees of "root" already satisfy the heap
		// property. No node index is > n.

		//	NEED TO IMPLEMENT

		int e = heapArr[root];


	}

	void  Heapify() {	
		// reorder heapArr[1:n] into a heap
		//	NEED TO IMPLEMENT


	}
}


