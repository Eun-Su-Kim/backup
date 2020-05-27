import java.util.*;

// Name : Kim Eun Su
// Student ID : 20191568

@SuppressWarnings("unchecked")
class BST <T extends KeyValue> {

	class TreeNode <U extends KeyValue> {
		U data;	// storage for data : in HW 3, T will be Item
		TreeNode<U> leftChild;	// link to the left Child
		TreeNode<U> rightChild;	// link to the right Child

		// constructors come here
		TreeNode() {
			leftChild = rightChild = null;
		}
		TreeNode(U d) {
			// data is given
			data = d;
			// the leftChild and rightChild field are null
			leftChild = rightChild = null;
		}
	};

	TreeNode <T> root;// the reference to the root node

	BST() { 
		// BST constructor. 
		root = null;
	}

    void Show() {

		System.out.print( "Pre  Order : ");
		PreOrder(root);
		System.out.println("");
		System.out.print("In   Order : ");
		InOrder(root);
		System.out.println("");
		System.out.print("Post Order : ");
		PostOrder(root);
		System.out.println("");
		System.out.print("Count      : ");
		System.out.print( Count(root));
		System.out.println("");
		System.out.print("Height      : ");
		System.out.println( Height(root));
		System.out.println("");
	}


	// IMPLEMENT THE FOLLOWING FUNCTIONS

	boolean  Insert(T item)  {
		// first search the key
		if(root == null) {
			root = new TreeNode<T> (item);
			return true;
		}

		TreeNode<T> ptr, parent;
		ptr = root;
		while (true) {
			parent = ptr;
			if (ptr.data.GetKey() == item.GetKey()) {
				ptr.data = (T) new Item(ptr.data.GetKey(), item.GetValue());
				return false;
			} else if (ptr.data.GetKey() < item.GetKey()) {
				if (ptr.rightChild == null) {
					parent.rightChild = new TreeNode<T>(item);
					return true;
				}
				ptr = ptr.rightChild;
			} else if (ptr.data.GetKey() > item.GetKey()) {
				if (ptr.leftChild == null) {
					parent.leftChild = new TreeNode<T>(item);
					return true;
				}
				ptr = ptr.leftChild;
			}
		}
	}

	T Get(T item)  {
		// use the key field of item and find the node
		// do not use val field of item
		TreeNode<T> ptr;
		ptr = root;
		while (true) {
			if (ptr.data.GetKey() == item.GetKey()) {
				return ptr.data;
			} else if (ptr.data.GetKey() < item.GetKey()) {
				if (ptr.rightChild == null) {
					return null;
				}
				ptr = ptr.rightChild;
			} else if (ptr.data.GetKey() > item.GetKey()) {
				if (ptr.leftChild == null) {
					return null;
				}
				ptr = ptr.leftChild;
			}
		}
	} 

	boolean Delete(T item)  {
		if(root == null)
			return false;	// non existing key

		TreeNode<T> ptr, parent;
		ptr = root;
		parent = root;

		while (true) {
			if (parent.data.GetKey() == item.GetKey()) {
				ptr = parent;
				break;
			} else if (parent.data.GetKey() > item.GetKey()) {
				if (parent.leftChild == null) {
					return false;
				}
				if (parent.leftChild.data.GetKey() == item.GetKey()) {
					ptr = parent.leftChild;
					break;
				} else {
					parent = parent.leftChild;
				}
			} else if (parent.data.GetKey() < item.GetKey()) {
				if (parent.rightChild == null) {
					return false;
				}
				if (parent.rightChild.data.GetKey() == item.GetKey()) {
					ptr = parent.rightChild;
					break;
				} else {
					parent = parent.rightChild;
				}
			}
		}

		TreeNode<T> tmp = null;
		TreeNode<T> tmp2 = null;

		if (ptr.rightChild == null && ptr.leftChild == null) {
			if (parent.leftChild == ptr) {
				parent.leftChild = null;
			} else if (parent.rightChild == ptr) {
				parent.rightChild = null;
			} else {
				root = null;
			}
		} else if (ptr.rightChild == null || ptr.leftChild == null) {
			if (ptr.rightChild == null) {
				tmp = ptr.leftChild;
			} else if (ptr.leftChild == null) {
				tmp = ptr.rightChild;
			}
			if (ptr == root) {
				root = tmp;
			} else {
				if (parent.rightChild == ptr) {
					parent.rightChild = tmp;
				} else if (parent.leftChild == ptr) {
					parent.leftChild = tmp;
				} else {
					root = tmp;
				}
			} 
		} else {
			TreeNode<T> k, ptmp, rc;
			ptmp = ptr;
			k = ptr.rightChild;
			while (true) {
				if (k.leftChild == null) {
					break;
				}
				ptmp = k;
				k = k.leftChild;
			}
			rc = k.rightChild;
			k.rightChild = ptr.rightChild;
			k.leftChild = ptr.leftChild;
			ptmp.leftChild = rc;
			if (parent.rightChild == ptr) {
				parent.rightChild = k;
			} else if (parent.leftChild == ptr) {
				parent.leftChild = k;
			} else {
				root = k;
			}
		}	
		return true;
	}

	void  PreOrder(TreeNode<T> t)  {
		if (t != null) {
			System.out.print(t.data.GetKey() + "(" + t.data.GetValue() + ") ");
			PreOrder(t.leftChild);
			PreOrder(t.rightChild);
		}
	}

	void  InOrder(TreeNode<T> t)  {
		if (t != null) {
			InOrder(t.leftChild);
			System.out.print(t.data.GetKey() + "(" + t.data.GetValue() + ") ");
			InOrder(t.rightChild);
		}
	}

	void  PostOrder(TreeNode<T> t)  {
		if (t != null) {
			PostOrder(t.leftChild);
			PostOrder(t.rightChild);
			System.out.print(t.data.GetKey() + "(" + t.data.GetValue() + ") ");
		}
	}

	int  Count(TreeNode<T> t)  {
		if (t != null) {
			return 1 + Count(t.leftChild) + Count(t.rightChild);
		}
		return 0;
	}

	int  Height(TreeNode<T> t)  {
		if (t != null) {
			int lh = Height(t.leftChild);
			int rh = Height(t.rightChild);
			if (lh > rh) {
				return lh + 1;
			} else {
				return rh + 1;
			}
		}
		return 0;
	}
}


