/**
* Using a menu, Class PBArraysDemoNamesANDAges will demo how to Read in the size of the array from the user (could be any positive number entered)
* Read in the names and ages into the names and ages arrays
* Print out the two arrays in chart form using printf Sort the arrays by age from smallest to largest (keeping the right name with the right age)
* Sort the arrays by age from largest to smallest (keeping the right name with the right age)
* RECOMMENDED Do the fillArrays method FIRST THEN, do the displayArrays method once you get these two methods to work. THEN start the sorting methods.
* @author (Your name and Zenia Bahorsk
* @version (24 March 2021)
*/
import java.util.Scanner;
public class PBAraysDemoNamesANDAges
{
public static void main (String [] args)
{
// Declarations
int choice = 0;
Scanner input = new Scanner(System.in);
//Header - Describes the program to the user.(INCLUDE your name here!)
displayHeader();
//Read in the size of the array AND use THAT value to set the size of the arrays 
int max = getPosint("How many names and ages would you like to include?");
int[] ages = new int[max];
String[] names = new String [max];
do{
dashes(80);
choice = menu();
dashes(80);
switch (choice) {
case 1: // Fill array with random ages 
System.out.println(" Fill array");
//fillArrays(ages, names);
break;
case 2: // Print array

System.out.println("Print out a chart of the names and ages");
//displayArrays(ages, names);
break;
case 3: // Sort both arrays by age from smallest to largest age 
System.out.println("Sort arrays from smallest to largest: based on age");
//sortSmallestToLargest(ages, names);
break;
case 4: // Sort both arrays by age from largest to smallest age 
System.out.println("Sort arrays from largest to smallest: based on age");
//sort Largest To Smallest(ages, names);
break;
case 0:
System.out.println("Thank you for using YOUR NAME's SORTING Demo Program");
break;
default: // Acknowledge an illegal entry has been made 
System.out.println("illegal entry. Try again");
break;
}// Bottom of switch block 
}while (choice !=0);
System.out.println("Come back again soon!");
}
/**************************fillArrays ********************************
* This method fills the names and ages arrays. The program will request 
* the names and ages. The user will enter the names and ages to fill the 
* array. Nothing is sent back! Arrays are reference type. This method 
* will access the SAME reference in memory when filling the arrays.
*
* NOTES: Use the getString(prompt) method to read in the name 
* Use the getPosint(prompt) method to read in the age
* HINT: Use a for loop to fill each of the array elements. 
*   	Fill the n array with what comes back from getString(prompt) method
*		Fill the a array with what comes back from the getPosint(prompt) method
*@param n - This is the names array to fill 
*@param a - This is the ages array to fill
*@return - NOTHING to return. If you make a change to the array 
*			HERE, it makes a change to the array EVERYWHERE!
*/

/*************************displayArrays************************
* This method will display the contents of the names array and the ages array 
* in a neatly formatted chart (using print). See the sample.
*
*HINT: include a row of dashes but not as many for this row of dashes)
*		Identify the columns
* Include another row of dashes (the same width)
* Use a for loop to printf each element of both arrays
*

*
*@param a - This is the ages array 
*@param n - This is the names array
*@retum - NOTHING to return
 */
 
/**************************** sortSmaliestTolargest *************************
*This method will sort the arrays from smallest to largest. based on age
*Both the names array and the ages arrays are sent to this method.
*
*HINT: Use the selection sort (described in class) to sort the ages array.
*	 When you find the smallest value in the inner loop, store it
*	 After the inner loop ends, but before you increment the outer loop
*	 swap not only the a array, but also the n array BOTH must be swapped
*	 to keep the right names with the right ages.
*
*@param n -This is the names array
*@param a - This is the ages arrays
*@return - NOTHING is returned
*/

/***********************sort Largest To Smallest*************************
*This method will sort the arrays from largest to smallest, based on age.
* Both the names array and the ages arrays are sent to this method.
*
*HINT: Use the selection sort (described in class) to sort the a (ages) array.
*	 When you find the largest value in the inner loop, store it
*	 After the inner loop ends, but before you increment the outer loop
*	 swap not only the a array, but also the n array. BOTH must be swapped
* to keep the right names with the right ages.
*
*@param n -This is the names array
*@param a - This is the ages array 
*@return - NOTHING is returned.
*/
/*
* displayHeader method will call the dashes() function and 
* prints the data related to the program 
* also proints the instructions to the user about the output and input
*/
public static void displayHeader()
{
dashes(80);
System.out.println("\nArray Demo Program by YOUR NAME - version 2021");
System.out.println("This program will create two arrays: the names array and the ages array." );
System.out.println("YOU will decide how many names and ages you will enter!");
System.out.println ("he program will display a menu that will let you choose what to do from there.");
System.out.println(" You can then choose to sort the arrays from smallest age to largest,from");
System.out.println(" largest to smallest, keeping the names together with the right age.\n\n");
}
/*
* menu method will print the options in top down fashion along with the numbers
* and asks the user to select the option by entering the number before the option and
* reads and returns that option
*/
public static int menu(){

//Scanner input = new Scanner(System.in):
System.out.println("Choose from the menu:");
System.out.println("1: Fill the names and ages arrays. ");
System.out.println("2: Print the arrays in chart form.");
System.out.println("3: Sort the arrays by age, from smallest to largest.");
System.out.println("4: Sort the arrays by age, from largest to smallest.");
System.out.println("0: END the program.");

// Let user enter menu selection (ANY int is accepted Only through 4 will work return getint("\nEnter your choice: ");
}
/*
* getInt method takes a string argument and 
* takes integer input from the user and returns that integer input
*/
public static int getInt(String prompt){
Scanner input = new Scanner(System.in); 
System.out.print(prompt);
return input.nextInt();
}
/*
* getPosInt method will take a string argument and 
* prints the given string and takes positive integer from the user as input and
* stores it into the var variable and returns var 
*/
public static int getPosInt(String prompt){
Scanner input = new Scanner(System.in);
int var = -5;
do{
System.out.print(prompt);
var = input.nextInt();
if (var <= 0)
System.out.println("The number you enter must be positive.");
}while(var <= 0);
return var;
}
/*
* dashes method will take an integer as parameter and 
* print the '=' for n times in a new line
*/
public static void dashes(int n)
{
System.out.println();
for (int i = 0; i<n; i++)
System.out.print("=");
System.out.println();
}
}