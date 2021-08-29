package lesson19;

public class Book {
	private String author;
	private String title;
	private int pages;
	private int isbn;
	
	public Book()
	{
		
	}
	
	public Book(String author, String title, int pages, int isbn)
	{
		setAuthor(author);
		setTitle(title);
		setPages(pages);
		setIsbn(isbn);
	}
	
	public void setAuthor(String author)
	{
		if (author != null)
			this.author = author;
	}
	
	public void setTitle(String title)
	{
		if(title != null)
			this.title = title;
	}
	
	public void setPages(int pages)
	{
		if (pages > 0)
			this.pages = pages;
	}
	
	public void setIsbn(int isbn)
	{
		if (isbn > 0)
			this.isbn = isbn;
	}
	
	public String getAuthor()
	{
		return this.author;
	}
	
	public String getTitle()
	{
		return this.title;
	}
	
	public int getPages()
	{
		return this.pages;
	}
	
	public int getIsbn()
	{
		return this.isbn;
	}
	
	public String toString() 
	{
		return (String) this.author + " " + this.title + " " + this.pages + " " + this.isbn;
	}
}
