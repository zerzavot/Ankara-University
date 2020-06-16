//Client.java 
//FATMA ZEHRA ORTAK 16290114

import java.net.*;
import java.io.*;

public class Client{


	public static void main(String[] args) throws IOException {
 
		Socket socket = null;
		PrintWriter out = null;
		BufferedReader in = null;
 
		try {
			socket = new Socket("localhost", 5555); // "localhost" ya da sunucu IP adresi
                        // input stream ve output stream 
			out = new PrintWriter(socket.getOutputStream(), true);
			in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
		} catch (UnknownHostException e) {
			System.err.println("Sunucu bulunamadı");
			System.exit(1);
		} catch (IOException e) {
			System.err.println("I/O exception:" + e.getMessage());
			System.exit(1);
		}
		// 	System.out.println("Sunucuya baglanildi.");
		// klavyeden girdi: stdIn
		BufferedReader stdIn = new BufferedReader(new InputStreamReader(System.in));
		String userInput;
		System.out.println("~~~~~~~~~~SELECT paper, rock or scissors~~~~~~~~~~");
		userInput = stdIn.readLine();
		out.println(userInput);

		//System.out.println("Sunucudan gelen result: " + in.readLine());
		System.out.println("User Result : " + in.readLine());
		
		//System.out.println("Baglanti kesiliyor...");
 
		out.close();
		in.close();
		stdIn.close();
		socket.close();
	}


}
