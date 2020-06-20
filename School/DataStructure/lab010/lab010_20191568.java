// Lab 010	: Natural Merge
// Name : Kim Eun Su
// Student ID : 20191568

import java.util.*;

class NaturalMerge {
	int noe;  // the number of elements
	private int[] inputArray; // input array 
	int[] outputArray; // output array 


	NaturalMerge() { 
		// Graph constructor. 
		noe = 0;
	}

	public String toString() {
		String str = new String();
		str = "Input : ";
		for(int i = 0; i < noe; i++) {
			str += inputArray[i] + " ";
		}
		str += "\nOutput : ";
		for(int i = 0; i < noe; i++) {
			str += outputArray[i] + " ";
		}
		return str;
	}

	void Init(int [] arr, int n) { 
		noe = n;
		inputArray = new int[noe];
		System.arraycopy(arr, 0, inputArray, 0, n);

		outputArray = new int[noe];
	}

	void Merge() { 
		int n = noe;

	// NEED TO IMPLEMENT
		int k = 0;
		int it = 0;
		int wt = 0;
		System.out.print("noe = " + n);
		for (int i = 0; i < n; i++) {
			if (inputArray[i] > inputArray[i+1]) {
				k = i + 1;
				System.out.print(", R = " + k);
				break;
			}
		}
		System.out.println();

		int tmk = k;

		while (it < tmk && k < n) {
			if (inputArray[it] <= inputArray[k]) {
				outputArray[wt] = inputArray[it];
				it++;
				wt++;
				System.out.print("L ");
			} else {
				outputArray[wt] = inputArray[k];
				k++;
				wt++;
				System.out.print("R ");
			
			}
		}
		for (; it < tmk; it++) {
			outputArray[wt] = inputArray[it];
			wt++;
		}
		for (; k < n; k++) {
			outputArray[wt] = inputArray[k];
			wt++;
		}










		System.out.println();
	}
}







