/*
	Description :- Selection Sort (Find Index of Minimum element)
	Author :- Pranav R Sonawane
*/
import java.lang.*;
import java.util.*;

interface Marvellous
{
	public void SelectionSort();
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
	
	public void SelectionSort()
	{
		int i = 0, j = 0, Min_Index = 0, temp = 0;
		
		for(i = 0; i < Arr.length-1; i++)
		{
			Min_Index = i;
			for(j = i+1; j < Arr.length; j++)
			{
				if(Arr[j] < Arr[Min_Index])
				{
					Min_Index = j;
				}
			}
			temp = Arr[i];
			Arr[i] = Arr[Min_Index];
			Arr[Min_Index] = temp;
		}
	}
}

class Sorting76
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array : ");
		int Size = sobj.nextInt();
		
		Sorting obj = new Sorting(Size);
		obj.Accept();
		obj.Display();
		
		obj.SelectionSort();
		obj.Display();
	}
}
