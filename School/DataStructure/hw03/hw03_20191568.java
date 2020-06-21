// HW 203, QuickSort
// Name : Kim Eun Su
// Student ID : 20191568

import java.util.*;


class QuickSort {
    int[] arr; // array
	int arrSize;  // number of elements in arr

	QuickSort() { 
		arr = new int[1024];  
		arrSize = 0;
	}


	void Show(int s, int e) { 
		// Show all the element in the arr
		if(s > e)
			return ;
		String str = new String();
		str = "arr : ";

		// print all the nodes in the arr
		for(int i = 0; i < arrSize; i++) {
			if(i == s)
				str += "[";
			else
				str += " ";
			str += arr[i];
			if(i == e)
				str += "]";
			else
				str += " ";
		}
		System.out.println( str);
	}

	void  Init(int[] es, int n) {	
		// fill the arr array by the input
		arrSize = n;
		for(int i = 0; i < n; i++)
			arr[i] = es[i];
	}


	void  Sort() {
		// sort arr[0:arrSize-1] into nonincreasing order
		// This is an invoking method to the Partition() and QSort() 
		QSort(0, arrSize - 1);	// quick sort from 0 to n-1
	}



	void  QSort(int s, int e) {	
		// sort arr[s:e] into nonincreasing order
		System.out.println("Sort in [" + s + "," + e + "]");
		Show(s, e);

		if(s >= e)
			return;

		//	"NEED TO IMPLEMENT" 
		int l = s;
		int r = e;
		int m = (s + e) / 2;
		int p;
		int tmp;
		
		if (((arr[s] >= arr[r]) && (arr[s] <= arr[m])) || ((arr[s] >= arr[m]) && (arr[s] <= arr[r]))) {
			p = arr[s];
		} else if (((arr[m] >= arr[r]) && (arr[m] <= arr[l])) || ((arr[m] >= arr[l]) && (arr[m] <= arr[r]))) {
			p = arr[m];
			tmp = arr[m];
			arr[m] = arr[s];
			arr[s] = tmp;
		} else {
			p = arr[r];
			tmp = arr[r];
			arr[r] = arr[s];
			arr[s] = tmp;
		}
		int it = s;
		int lt = e + 1;
		
		while (it < lt) {
			it++;
			lt--;
			while (arr[it] > p) {
				it++;
			}
			while (arr[lt] < p) {
				lt--;
			}
			if (it < lt) {
				tmp = arr[it];
				arr[it] = arr[lt];
				arr[lt] = tmp;
			}
		}

		tmp = arr[lt];
		arr[lt] = arr[s];
		arr[s] = tmp;
		QSort(s, lt - 1);
		QSort(lt + 1, e);
	}
}