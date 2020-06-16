/* FATMA ZEHRA ORTAK 16290114

ANKARA UNIVERSITY
COMPUTER ENGINEERING DEPARTMENT
BLM/COM334   ASSIGNMENT 2


You write a rock / paper / scissors game that works with Client-Server logic in Java language. Your client program sends the
rock / paper / scissors value from the user to the server. The statement of won / lost / draw will be sent to the Client by
comparing the data received with the randomly generated value on the server. The server program waits for any client
connection to be established with the accept () method. When client connection is established:
1-) CLIENT Gets the statement of rock / paper / scissors from the user
2-) CLIENT Sends the data to SERVER using socket.
3-) SERVER Reads the data from the socket and prints its contents on the screen.
4-) SERVER Generates a Random variable and prints it on the screen.
5-) SERVER Compare the values (SERVER -> random vs Client -> user input).
6-) SERVER Prints the result statement (win / lost / draw) on the screen.
7-) SERVER Sends the result statement to the Client.
8-) CLIENT Prints the result statement on the screen.

*/

//Server.java

import java.net.*;
import java.io.*;
import java.util.Random;

public class Server{

	public static void main(String[] args) throws IOException {
 
		ServerSocket serverSocket = null;
		try {
			serverSocket = new ServerSocket(5555);
		} catch (IOException e) {
			System.err.println("I/O exception: " + e.getMessage());
			System.exit(1);
		}
		//System.out.println("Sunucu baslatildi. Baglanti bekleniyor...");
		Socket clientSocket = null;
		try {
			clientSocket = serverSocket.accept(); // bekle bağlantı gelinceye kadar
							      
		} catch (IOException e) {
			System.err.println("Accept failed.");
			System.exit(1);
		}
 
		//System.out.println(clientSocket.getLocalAddress() + " baglandi."); 
 
		// input stream ve output stream 
		PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true);
		BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
 
		String inputLine;
		//System.out.println("İstemciden girdi bekleme sırası");




		inputLine=in.readLine(); //Alınan yani paper rock scissors
		
		if(inputLine!=null){
		
		Random random = new Random();
		int input = random.nextInt(3) + 1;
		//1 rock //2 paper //3 scissor
		
		String computer="";
		if(input==1){ computer="rock";}
		else if(input==2){ computer="paper";}
		else if(input==3){ computer="scissors";}

		System.out.println("User choice     : " + inputLine);
		System.out.println("Computer choice : " + computer);

		String result="";
		String comresult="";
		
			if(inputLine.equals("paper"))
			{
				if(computer.equals("paper"))
				{
					//result="Tie!";
					result="draw";comresult="draw";
				}
				else if(computer.equals("rock"))
				{
					//result="Player beats computer.. You won!";
					result ="win";comresult="lost";
				}
				else if(computer.equals("scissors"))
				{
					//result="Computer beats player.. You lost!";
					result="lost";comresult="win";
				}

			}
			else if(inputLine.equals("rock"))//1 rock //2 paper //3 scissor
			{
				if(computer.equals("paper"))
				{
					//result="Computer beats player.. You lost!";
					result="lost";comresult="win";
				}
				else if(computer.equals("rock"))
				{
					//result="Tie!";
					result="draw";comresult="draw";
				}
				else if(computer.equals("scissors"))
				{
					//result="Player beats computer.. You won!";
					result ="win";comresult="lost";
				}

			}
			else if(inputLine.equals("scissors"))
			{
				if(computer.equals("paper"))
				{
					//result="Player beats computer.. You won!";
					result ="win";comresult="lost";
				}
				else if(computer.equals("rock"))
				{
					//result="Computer beats player.. You lost!";
					result="lost";comresult="win";
				}
				else if(computer.equals("scissors"))
				{
					//result="Tie!" ;
					result="draw";comresult="draw";
				}


			}
System.out.println("Computer Result : "+comresult); //comresult
out.println(result);

		}
//-----------------------------------------------------------------------------------------------------
		
		//System.out.println(clientSocket.getLocalSocketAddress()+ " baglantisi kesildi.");


		// stream ve socketleri kapat.
		out.close();
		in.close();
		clientSocket.close();
		serverSocket.close();
	}




}
