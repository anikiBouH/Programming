package lesson19;

import java.time.Year;

public class Car {
	private String model;
	private String color;
	private int year;
	
	public Car()
	{
		
	}
	
	public Car(String model, String color, int year)
	{
		setModel(model);
		setColor(color);
		setYear(year);
	}
	
	public void setModel(String model)
	{
		if(model != null)
			this.model = model;
	}
	
	public void setColor(String color)
	{
		if (color != null)
			this.color = color;
	}
	
	public void setYear(int year)
	{
		
		if ((year < Year.now().getValue()+1)||(year > 1800));
			this.year = year;
	}
	
	public String getModel()
	{
		return this.model;
	}
	
	public String getColor()
	{
		return this.color;
	}
	
	public int getYear()
	{
		return this.year;
	}
	
	public String toString()
	{
		return (String)this.model+" "+ this.color + " " + this.year;
	}
}
