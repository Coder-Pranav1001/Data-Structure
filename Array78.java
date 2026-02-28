/*
	Description :- Accept N elements from user and Display 
	Author :- Pranav R Sonawane
*/
import java.lang.*;
import java.util.*;

class Array
{
	public int Arr[];
	
	public Array(int iSize)
	{
		Arr = new int[iSize];
	}
	
	protected void finalize()
	{
		Arr = null;
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter Elements : ");
		
		for(int i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("Elements from array are : ");
		
		for(int i = 0; i < Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
	}
}

class Array78
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		Array aobj = new Array(5);
		
		aobj.Accept();
		aobj.Display();
	}
}