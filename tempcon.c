using System; 

class GFG { 
static float Celsius_to_Kelvin(float C) 
	{ 
		return (float)(C + 273.15); 
	} 
public static void Main() 
	{ 
float C = 100; 

		Console.WriteLine("Temperature in Kelvin ( K ) = " + 
									Celsius_to_Kelvin(C)); 
	} 
} 
