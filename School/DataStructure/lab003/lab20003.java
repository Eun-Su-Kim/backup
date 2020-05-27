import java.util.*;
import java.lang.*;

class Polynomial {
	private Term[] termArray;
	private int terms;  // number of nonzero terms

	class Term {
		private double coef; //coefficient
		private int exp; //exponent
	};

	// constructor
	Polynomial(int cap) {
		termArray = new Term[cap];
		terms = 0;
	}

	/**
	*  Add a new term to the end of termArray
	*/
	public void NewTerm(double theCoeff, int theExp) {	
		if(terms == termArray.length)
		{// double capacity of termArray
			termArray = Arrays.copyOf(termArray , termArray.length * 2);
		}
		termArray[terms] = new Term();
		termArray[terms].coef = theCoeff;
		termArray[terms++].exp = theExp;
	}

	public Polynomial Add(Polynomial b) {
		// Return the sum of the polynomials this and b
		Polynomial c = new Polynomial(128);
		int aPos = 0, bPos = 0;
		while((aPos < terms) && (bPos < b.terms))
			if(termArray[aPos].exp == b.termArray[bPos].exp){
				double t=termArray[aPos].coef+b.termArray[bPos].coef;
				if (t != 0.0) c.NewTerm(t, termArray[aPos].exp);
				aPos++; bPos++;
			}
			else if(termArray[aPos].exp < b.termArray[bPos].exp){
				c.NewTerm(b.termArray[bPos].coef, b.termArray[bPos].exp);
				bPos++;
			}
			else {
				c.NewTerm(termArray[aPos].coef, termArray[aPos].exp);
				aPos++;
			}

		// add in remaining terms of *this
		for( ; aPos < terms; aPos++)
			c.NewTerm(termArray[aPos].coef, termArray[aPos].exp);
		for( ; bPos < b.terms; bPos++)
			c.NewTerm(b.termArray[bPos].coef, b.termArray[bPos].exp);
		return c;
	}		

	public Polynomial Subtract(Polynomial b) {
		// Return the sum of the polynomials this and b
		Polynomial c = new Polynomial(128);
		int aPos = 0, bPos = 0;
		while((aPos < terms) && (bPos < b.terms))
			if(termArray[aPos].exp == b.termArray[bPos].exp){
				double t=termArray[aPos].coef-b.termArray[bPos].coef;
				if (t != 0.0) c.NewTerm(t, termArray[aPos].exp);
				aPos++; bPos++;
			}
			else if(termArray[aPos].exp < b.termArray[bPos].exp){
				c.NewTerm(b.termArray[bPos].coef*(-1), b.termArray[bPos].exp);
				bPos++;
			}
			else {
				c.NewTerm(termArray[aPos].coef, termArray[aPos].exp);
				aPos++;
			}

		// add in remaining terms of *this
		for( ; aPos < terms; aPos++)
			c.NewTerm(termArray[aPos].coef, termArray[aPos].exp);
		for( ; bPos < b.terms; bPos++)
			c.NewTerm(b.termArray[bPos].coef*(-1), b.termArray[bPos].exp);
		return c;
	}

	public Polynomial Multiply(Polynomial b) {
		Polynomial c = new Polynomial(128);
		int sz = termArray[0].exp + b.termArray[0].exp + 1;
		double a[] = new double[sz];
		for (int i=0; i < terms; i++) {
			for (int j=0; j < b.terms; j++) {
				double co = termArray[i].coef * b.termArray[j].coef;
				a[termArray[i].exp+b.termArray[j].exp] += co;
			}
		}
		for (int i = sz-1; i>=0; i--) {
			if (a[i] != 0) {
				c.NewTerm(a[i], i);
			}
		}
		return c;
	}

	double Evaluate(double f) {
		double eval = 0.0;
		for (int Pos = 0; Pos < termArray.length; Pos++) {
			if (termArray[Pos] != null) {
				eval += termArray[Pos].coef * Math.pow(f, termArray[Pos].exp);
			}
		}
		return eval;
	}
}