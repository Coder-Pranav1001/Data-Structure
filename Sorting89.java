/*
	Description :- Sorting (Selection Sort) Decreasing order
	Author :- Pranav R Sonawane
*/
import java.lang.*;
import java.util.*;

interface MarvellousSort
{
	public void Accept();
	public void Display();
	public void BubbleSort();
	public void InsertionSort();
	public void SelectionSort();
}

class Array implements MarvellousSort
{
	public int Arr[];
	
	public Array(int iSize)
	{
		Arr = new int[iSize];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the element : ");
		for(int i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("Elements of the array are : ");
		for(int i = 0; i < Arr.length; i++)
		{
			System.out.print(Arr[i]+" ");
		}
		System.out.println();
	}
	
	public void BubbleSort(){}
	
	public void BubbleSort(char type)
	{
		int i = 0, j = 0, temp = 0;
		boolean Swap = false;
		
		if(type == 'I' || type == 'i')
		{
			for(i = 0; i < Arr.length; i++)
			{
				for(j = 0; j < Arr.length-i-1; j++)
				{
					if(Arr[j] > Arr[j+1])
					{
						temp = Arr[j];
						Arr[j] = Arr[j+1];
						Arr[j+1] = temp;
						Swap = true;
					}
				}
				System.out.println("Pass :"+(i + 1));
				Display();
				if(Swap == false)
				{
					break;
				}
			}
		}
		else if(type == 'd' || type == 'D')
		{
			for(i = 0; i < Arr.length; i++)
			{
				for(j = 0; j < Arr.length-i-1; j++)
				{
					if(Arr[j] < Arr[j+1])
					{
						temp = Arr[j];
						Arr[j] = Arr[j+1];
						Arr[j+1] = temp;
						Swap = true;
					}
				}
				System.out.println("Pass :"+(i + 1));
				Display();
				if(Swap == false)
				{
					break;
				}
			}
		}
	}
	 
	public void InsertionSort()
	{
		
	}
	
	public void SelectionSort()
	{
		int i = 0, j = 0, max_index = 0, temp = 0;
		
		for(i = 0; i < Arr.length-1; i++)
		{
			max_index = i;
			for(j = i+1; j < Arr.length; j++)
			{
				if(Arr[max_index] < Arr[j])
				{
					max_index = j;
				}
			}
			if(i != max_index)
			{
				temp = Arr[i];
				Arr[i] = Arr[max_index];
				Arr[max_index] = temp;
			}
		}
	}
}

class Sorting89
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array : ");
		int size = sobj.nextInt();
		
		Array aobj = new Array(size);
		
		aobj.Accept();
		aobj.Display();
		
		aobj.SelectionSort();
		System.out.println("Data after sorting :");
		aobj.Display();
	}	
}