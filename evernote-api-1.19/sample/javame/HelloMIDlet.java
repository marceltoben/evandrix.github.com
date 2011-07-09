/*
  A simple Evernote API demo application that authenticates with the
  Evernote web service, lists all notebooks and notes in the user's account,
  and creates a simple test note in the default notebook.
  
  Before running this sample, you must change the API consumer key
  and consumer secret to the values that you received from Evernote.
*/

package hello;

import java.util.*;
import java.io.*;
import javax.microedition.midlet.*;
import javax.microedition.lcdui.*;

import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import com.evernote.edam.type.*;
import com.evernote.edam.limits.*;
import com.evernote.edam.error.*;
import com.evernote.edam.userstore.*;
import com.evernote.edam.userstore.Constants;
import com.evernote.edam.notestore.*;

public class HelloMIDlet extends MIDlet implements CommandListener {

    private Command exitCommand; // The exit command
    private Display display;     // The display for this MIDlet

    // NOTE: You must change the consumer key and consumer secret to the 
    //       key and secret that you received from Evernote
    String consumerKey = "en-test";
    String consumerSecret = "a16355d52aa46ed1";

    String username = "dave";
    String password = "mypass!";

    String evernoteHost = "sandbox.evernote.com";
    String userStoreUrl = "https://" + evernoteHost + "/edam/user";
    String noteStoreUrlBase = "https://" + evernoteHost + "/edam/note/";
    
    // Change the User Agent to a String that describes your application, using the form
    // company name/app name
    String userAgent = "Evernote/JavaMidlet " + 
                       Constants.EDAM_VERSION_MAJOR + "." + Constants.EDAM_VERSION_MINOR;


    public HelloMIDlet() {
        display = Display.getDisplay(this);
        exitCommand = new Command("Exit", Command.EXIT, 0);
    }

    public void startApp() {
        TextBox t = new TextBox("Hello", "Hello, World!", 256, 0);

        t.addCommand(exitCommand);
        t.setCommandListener(this);

        display.setCurrent(t);

        try {
            String result = testThrift();
            t.setString(result);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private String testThrift() throws Exception {
        THttpClient userStoreHttp = new THttpClient(userStoreUrl);
        userStoreHttp.setCustomHeader("User-Agent", userAgent);
        TBinaryProtocol userProt = new TBinaryProtocol(userStoreHttp);
        UserStore.Client userStore = new UserStore.Client(userProt);
        boolean checked = userStore.checkVersion("JavaMidlet",
                          Constants.EDAM_VERSION_MAJOR, Constants.EDAM_VERSION_MINOR);
        if (!checked) {
            return "Invalid EDAM version";
        }
        AuthenticationResult authResult =
            userStore.authenticate(username, password,
                consumerKey, consumerSecret);
        String authToken = authResult.getAuthenticationToken();
        User user = authResult.getUser();

        THttpClient noteStoreHttp = new THttpClient(noteStoreUrlBase + user.getShardId());
        noteStoreHttp.setCustomHeader("User-Agent", userAgent);
        TBinaryProtocol noteProt = new TBinaryProtocol(noteStoreHttp);
        NoteStore.Client noteStore = new NoteStore.Client(noteProt);

        Notebook defaultNotebook = noteStore.getDefaultNotebook(authToken);

        Resource resource = new Resource();
        Data resData = readFileAsData("/enlogo.png");
        resource.setData(resData);
        resource.setMime("image/png");
        
        Note note = new Note();
        note.setTitle("Test note from EDAMDemo JavaME");
        note.addToResources(resource);
        
        String hashHex = bytesToHex(resource.getData().getBodyHash());
        String content = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
            + "<!DOCTYPE en-note SYSTEM \"http://xml.evernote.com/pub/enml2.dtd\">"
            + "<en-note>Here's the Evernote logo:<br/>"
            + "<en-media type=\"image/png\" hash=\"" + hashHex + "\"/>"
            + "</en-note>";
        note.setContent(content);
        
        Note createdNote = noteStore.createNote(authToken, note);
        String guid = createdNote.getGuid();
        Note retrieved = noteStore.getNote(authToken, guid, true, true, true, true);
        if (((Resource)retrieved.getResources().elementAt(0)).getData().getBody().length !=
            resData.getBody().length) {
            return "Bad note created";
        }
        return "Created: " + guid;
    }

    private static Data readFileAsData(String fileName) throws Exception {
        InputStream in = Class.class.getResourceAsStream(fileName);
        ByteArrayOutputStream byteOut = new ByteArrayOutputStream();
        byte[] block = new byte[1024];
        int len;
        while ((len = in.read(block, 0, block.length)) >= 0) {
            byteOut.write(block, 0, len);
        }
        byte[] body = byteOut.toByteArray();
        Data data = new Data();
        data.setSize(body.length);
        com.twmacinta.util.MD5 md5 = new com.twmacinta.util.MD5();
        md5.Update(body);
        data.setBodyHash(md5.Final());
        data.setBody(body);
        data.setSize(body.length);
        return data;
    }


  public static String bytesToHex(byte[] bytes) {
    StringBuffer sb = new StringBuffer();
    for (int i = 0; i < bytes.length; ++i) {
      int intVal = 0xff & bytes[i];
      if (intVal < 0x10) {
        sb.append('0');
      }
      sb.append(Integer.toHexString(intVal));
    }
    return sb.toString();
  }

    public void pauseApp() {
    }

    public void destroyApp(boolean unconditional) {
    }

    public void commandAction(Command c, Displayable s) {
        if (c == exitCommand) {
            destroyApp(false);
            notifyDestroyed();
        } 
    }

}
