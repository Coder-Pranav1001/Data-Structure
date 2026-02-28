/*
	Description :- Insertion Sort 
	Author :- Pranav R Sonawane
*/
import java.lang.*;
import java.util.*;

interface Marvellous
{
	public void InsertionSort();
}

class Sorting implements Marvellous
{
	private int Arr[];
	
	public Sorting(int Size)
	{
		Arr = new int[Size];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the elements : ");
		for(int i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("Elements of array are : ");
		for(int i = 0; i<Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
	}
	
	public void InsertionSort()
	{
		int i = 0, j = 0, Selected = 0;
		
		for(i = 1; i < Arr.length; i++)
		{
			for(j = i-1, Selected = Arr[i]; (j >= 0) && (Arr[j] > Selected); j--)
			{
				Arr[j+1] = Arr[j];
			}
			Arr[j+1] = Selected;
		}
	}
}

class Sorting77
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array : ");
		int Size = sobj.nextInt();
		
		Sorting obj = new Sorting(Size);
		obj.Accept();
		obj.Display();
		
		obj.InsertionSort();
		obj.Display();
	}
}
