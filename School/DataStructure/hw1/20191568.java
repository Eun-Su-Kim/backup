import java.util.*;

//20191568

class Expression {
	static Stack<String> postfix = new Stack<>();

	
	static double Eval(Vector<String> infix) throws Exception {
		System.out.println("infix expression : " + express(infix));
		Postfix(infix);
		Stack<Double> n = new Stack<Double>();
		for (int i=0; i<postfix.size(); i++) {
			String c = postfix.elementAt(i);
			if (checkNumber(c)) {
				n.push(Double.parseDouble(c));
			} else {
				double c2 = n.pop();
				double c1 = n.pop();
				char cn = c.charAt(0);
				switch(cn) {
					case '+':
						n.push((double)c1 + (double)c2);
						break;
					case '-':
						n.push((double)c1 - (double)c2);
						break;
					case '*':
						n.push((double)c1 * (double)c2);
						break;
					case '/':
						n.push((double)c1 / (double)c2);
						break;
				}
			}
		}
		return n.pop();
	}

	static boolean checkNumber(String ss) {
		try {
			Double.parseDouble(ss);
			return true;
		} catch(NumberFormatException ee) {
			return false;
		}
	}

	static void Postfix(Vector<String> in) {
		Stack<String> oper = new Stack<>();
		postfix.clear();
		for (int i=0; i<in.size(); i++) {
			String a = in.elementAt(i);
			System.out.println("Token : " + a);
			if (a.equals("+") || a.equals("-") || a.equals("*") || a.equals("/") || a.equals("(") || a.equals(")")) {
				if (oper.isEmpty()) {
					oper.push(a);
				} else if ((a.equals("-") || a.equals("+")) && (oper.peek().equals("*") || oper.peek().equals("/"))) {
					while (true) {
						if (oper.isEmpty()) {
							break;
						}
						if (oper.peek().equals("(")) {
							break;
						}
						postfix.push(oper.pop());
					}
					oper.push(a);
				} else if ((a.equals("*") || a.equals("/")) && (oper.peek().equals("*") || oper.peek().equals("/"))) {
					postfix.push(oper.pop());
					oper.push(a);
				} else if ((a.equals("+") || a.equals("-")) && (oper.peek().equals("+") || oper.peek().equals("-"))) {
					postfix.push(oper.pop());
					oper.push(a);
				} else if (a.equals(")")) {
					while (true) {
						if (oper.peek().equals("(")) {
							oper.pop();
							break;
						}
						postfix.push(oper.pop());
					}
				} else {
					oper.push(a);
				}
				if (oper.isEmpty()) {
					System.out.println("Stack : " + print(oper));
				} else {
					System.out.println("Stack : " + print(oper) + " ");
				}	
			} else {
				if (oper.isEmpty()) {
					System.out.println("Stack : " + print(oper));
				} else {
					System.out.println("Stack : " + print(oper) + " ");
				}
				postfix.push(a);
			}
			if (i == in.size()-1) {
				while(!oper.isEmpty()) {
					postfix.push(oper.pop());
				}
			}
		}
		System.out.println("Postfix expression : " + express(postfix));
	}
	
	static String print(Stack<String> op) {
		Stack<String> pr = new Stack<>();
		Stack<String> a = copied(op);
		String ans = "";
		while (!a.isEmpty()) {
			pr.push(a.pop());
		}
		while (!pr.isEmpty()) {
			ans += pr.pop() + " ";
		}
		ans = ans.trim();
		return ans;
	}

	static Stack<String> copied(Stack<String> op) {
		Stack<String> cp = new Stack<>();
		for (int i=0; i<op.size(); i++) {
			cp.push(op.elementAt(i));
		}
		return cp;
	}

	static String express(Vector<String> in) {
		String ans = "";
		for (int i=0; i<in.size(); i++) {
			ans += in.elementAt(i) + "  ";
		}
		ans = ans.trim();
		return "["+ans+"]";
	}
}; 