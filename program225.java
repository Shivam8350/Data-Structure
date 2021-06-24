import java.util.*;
class Node <T>
{
	public T data;
	public Node next;

	public Node(T no)
	{
		this.data = no;
		this.next = null;
	}
}
class SinglyLL<T>
{
	public Node Head;
	private int iSize;

	public SinglyLL()
	{
		this.Head = null;
		this.iSize = 0;
	}
	public void InsertFirst(T no)
	{
		Node newn = new Node(no);
		if(this.Head != null)
		{
			newn.next = Head;
		}
		Head = newn;
		this.iSize++;
	}
	public void InsertLast(T no)
	{
		Node newn = new Node(no);
		if(Head == null)
		{
			Head = newn;
		}
		else
		{
			Node temp = this.Head;
			while(temp.next != null)
			{
				temp = temp.next;
			}
			temp.next = newn;
		}
		this.iSize++;
	}
	public int Count()
	{
		return this.iSize;
	}
	public void Display()
	{
		Node temp = this.Head;
		while(temp != null)
		{
			System.out.print("|"+temp.data+"|->");
			temp= temp.next;
		}
		System.out.println();
	}
}

class Program225
{
	public static void main(String arg[])
	{
		SinglyLL <Integer>obj = new SinglyLL<Integer>();
		Scanner sobj = new Scanner(System.in);
		int choice = 1,no = 0;
		while(choice != 0)
		{
			System.out.println("Please enter your choice");
			System.out.println("1: InsertFirst");
			System.out.println("2: InsertLast");
			System.out.println("3: Display");
			System.out.println("4: Count");
			System.out.println("5: Exit");
			choice = sobj.nextInt();
			switch(choice)
			{
				case 1:
					System.out.println("Enter number");
					no = sobj.nextInt();
					obj.InsertFirst(no);
				break;

				case 2:
					System.out.println("Enter number");
					no = sobj.nextInt();
					obj.InsertLast(no);
				break;
				
				case 3:
					System.out.println("Elements of linked list are");
					obj.Display();
				break;
	
				case 4:
					no = obj.Count();
					System.out.println("Number of elements are : "+no);
				break;

				case 5:
					System.out.println("Thank you...");
					choice = 0;
				break;
			}
		}
	}
}