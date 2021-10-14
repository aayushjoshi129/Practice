package javaSwayamQuestionsWeek1;
import java.util.Scanner;
public class HighestAndAverageMarks {
	   public static void main(String[] args) {
			 Scanner input = new Scanner(System.in);
			 System.out.print("enter the number of subjects : ");
		         double mark_avg;
		         int result;
		         int i;
		         int s;
		      //define size of array
		       s = input.nextInt();
		     //The array is defined "arr" and inserted marks into it of integer type.
		      int[] arr = new int[s];   
		      
			 for(i=0;i<arr.length;i++)
			  {
		       System.out.print("enter the " + i +" subject marks : ");
				 arr[i]=input.nextInt();
			  } 
		 //initialise maximum element as first element of array.  
			   int max=arr[0];
		           double sum=arr[0];  
			  //traverse array elements to get the current max
		      for(i=1;i<arr.length;i++)
			  { 
		         sum=sum+arr[i]; 
		         if(arr[i]>max)
		            max =arr[i];
			  }
			 
		    //Store the highest mark in the variable max
		   //Store average mark in avgMarks
		    result=max;	
		    mark_avg=sum/(arr.length);    
		 //Evaluation code 
		    System.out.println("the highest no. is : "+result);
		    System.out.println("the average of " + s + " subject marks is : "+mark_avg);
		 }
		}