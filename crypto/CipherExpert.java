/*
 ***************************************************************************
  File: CipherExpert.java
  Author: Carolyn Rucci, Trinity '02
  Adviser: R.Morelli
  Auxiliary Files:
    -  cipher_expert.clp -- Expert System Rules
    -  cipher_expert.jar -- Jess and HcryptoJ class files
    -  testfiles/*.txt   -- Encrypted test files
									     
  Description: This program is the main engine for CipherExpert, an
  expert system in Cryptology.  The program takes an encrypted text,
  and uses cryptanalysis analyzers to analyze the text.  It then
  creates a Java object containing this information, which is added to
  a rete which is executed in Jess.  Jess contains the Expert System
  and it determines which cipher was used.  It then returns this
  information to the Java Main Engine which uses it to analyze the
  text to find the key and then to decrypt the message.

  This engine must be used in conjunction with the expert system rules
  contained in:

                cipher_expert.clp

  It should also be used with the jar file:

                cipher_expert.jar

  The decryption and analysis classes are written by Ralph Morelli and are 
  located in the Java directory.

  Keyword format for ciphers:
	
	Transposition: "str/az"  -str is a string of digits, here 40123
	Caesar: "shift/az" 	 -shift is any int between 1 and 25
	Affine: "int,int2/az" 	 -int1 is any odd integer
	Vigenere: "keyword/az"   -keyword is any unique string of digits
					with length >= 5
	Playfair: "maine/az"     -maine is the keyword which is hardcoded

  To compile from the current directory:

  javac -classpath cipher_expert.jar:. CipherExpert.java

  To run:

  java -classpath cipher_expert.jar:. CipherExpert cryptotextfile

	There are sample encrypted testfiles in the Java/testfiles folder

****************************************************************************/

import jess.*;
import hcrypto.analyzer.*;
import hcrypto.cipher.*;
import hcrypto.engines.*;
import hcrypto.provider.*;
import java.io.*;


public class CipherExpert {

    private String filename;
    private String message;
    private String keyspec;
    private String cipherName;
    private IndexOfCoincidence ioc;
    private Rete rete;
    private JessCipher jesscipher;

    public CipherExpert(String file) {
	Provider.addProvider(new DefaultProvider("Default"));
	filename = file;
	try {                                   // Input the file
	    File inputFile = new File(filename);
	    InputStreamReader inStream = new
		InputStreamReader(new FileInputStream(inputFile));
	    int length = (int)inputFile.length();
	    char[] input = new char[length];
	    inStream.read(input);
	    inStream.close();
	    message = new String(input);	
	}
	catch (FileNotFoundException e)  {
	    System.err.println("IOERROR: File not found either " + filename);
	    e.printStackTrace();
	}
	catch (IOException e)  {
	    System.err.println("IOERROR: " + e.getMessage());
	    e.printStackTrace();
	}
	ioc = new IndexOfCoincidence(message);
	rete = new Rete();                    // Create a rete
	rete.store("ic", ioc);
    }

    /****************************************************************
     * Get m and b from affine cipher analyzer, use these values to 
     * determine how the letter frequencies compare to a normal
     * distribution.  Set this value as the shift on the rete.

     * Finds a shift assuming caesar cipher, if 0 then we know that it is a 
     * Transposition cipher, otherwise it is a substitution cipher.  This 
     * knowledge will be used by the Jess Expert System to determine the 
     * cipher used.
     ****************************************************************/
    public void initializeJessCipher () {
        String classname = "hcrypto.analyzer.AffineAnalyzer";
	ExpertAnalyzer analyzer = null;
	
	try {
	    analyzer =
		(ExpertAnalyzer)Class.forName(classname).newInstance();
	} catch (Exception e) {
	    System.out.println(e.getMessage());
	    e.printStackTrace();
	}
	analyzer.doAnalysis(message);
	String keyword = analyzer.getKeywordString();
	String m = keyword.substring(0,keyword.indexOf(','));
	String b = keyword.substring(keyword.indexOf(',')+1);

	jesscipher = new JessCipher("unknown");
	if (m.equals("0"))  	    //transposition cipher
	    jesscipher.setShift(0);
	else if(b.equals("1"))  //caesar cipher
	    jesscipher.setShift(1);
	else		   //affine, playfair or vigenere ciphers
	    jesscipher.setShift(-1);
    }

    public void runExpertSystem() {
	rete.store("cipher", jesscipher);
	try {
	    rete.executeCommand("(batch CipherExpert.clp)");
	} catch (Exception e) {
	    System.out.println(e.getMessage());
	    e.printStackTrace();
	}
	cipherName = jesscipher.getCipher();
	if (cipherName.equals("unknown")) {
	    System.out.println("ERROR: Cipher could not be determined by Jess\n");
	} else if (cipherName.equals("Caesar")) {
	    keyspec = analyze("hcrypto.analyzer.CaesarAnalyzer2");
	} else if (cipherName.equals("Affine")) {
	    keyspec = analyze("hcrypto.analyzer.AffineAnalyzer");
	} else if (cipherName.equals("Transposition")) {
	    keyspec = "2301/az";
	} else if (cipherName.equals("Vigenere"))  {
	    keyspec = analyze("hcrypto.analyzer.VigenereAnalyzer2");
	} else if (cipherName.equals("Playfair")) {
	    keyspec = "thend/az";
	} else {
	    System.out.println("Cipher is not in database");
	    keyspec = "1/az";  	// MAKE IT ABORT IF REACHES HERE
	}
    }

    public String analyze (String classname) {
        ExpertAnalyzer analyzer = null;
	try {
	    analyzer = 
		(ExpertAnalyzer)Class.forName(classname).newInstance();
	    analyzer.doAnalysis(message);
	} catch (Exception e) {
	    System.out.println(e.getMessage());
	    e.printStackTrace();
	}
	return analyzer.getKeywordString() + "/az";
    }

    /**
     *  Prints out the name of the cipher determined and the key.
     *  Create an instance of the cipher class.  This will be used to decrypt 
     *  the file, given the key found by the appropriate analyzer and the 
     *  type of cipher found by the Jess Expert System.
     *  Read decrypted file into string buffer and then print file to screen
     */
    public void decryptMessage() {
	System.out.println("The key for the " + cipherName + " Cipher is: "
			   + keyspec + "\n");
	try {
	    Cipher cipher = Cipher.getInstance(cipherName);
	    HistoricalKey key = HistoricalKey.getInstance(cipher.getAlgorithm(),
						      cipher.getProvider());
	    key.init(keyspec);
	    cipher.init(key);
	    System.out.println("The original message is \n\n" + message + 
			       "\nThe decrypted message is: \n\n" + cipher.decrypt(message) + "\n");
	} catch (Exception e) {
	    System.out.println(e.getMessage());
	    e.printStackTrace();
	}
    }

    public static void main(String[] argv) throws Exception  {
	if (argv.length < 1) {
	    System.out.println("Usage: java ExpertCipher filename");
	    System.exit(0);
	}

	CipherExpert expert = new CipherExpert(argv[0]);
	expert.initializeJessCipher();
	expert.runExpertSystem();
	expert.decryptMessage();
	//	rete.executeCommand("(reset)");
    }
} // CipherExpert
