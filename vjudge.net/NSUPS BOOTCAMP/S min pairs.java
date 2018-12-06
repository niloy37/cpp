//package codeforces;
import java.util.*;

 class secondlargest {
	public static void main (String [] args) {
		
		Scanner var = new Scanner(System.in);
		int x=var.nextInt();
		
		for(int j=0;j<x;j++) {
			int n=var.nextInt();
			int [] arr = new int [n];
			for(int i=0;i<n;i++ ) {
				arr[i]=var.nextInt();
			}
			
			Arrays.sort(arr);
			
			System.out.println(arr[0]+arr[1]);
			
		}
	}

}
