# Test script to debug Get-StatementAtRow
$env:SEND_TO_STATA_SKIP_MAIN = 1
. "C:\repos\sight-zed\send-to-stata.ps1"

$tempFile = New-TemporaryFile
Set-Content -Path $tempFile.FullName -Value "gen x = 1"

# Check Get-Content behavior first
$lines = Get-Content $tempFile.FullName
Write-Host "Get-Content returned array of type: $($lines.GetType().FullName)"
Write-Host "Array length: $($lines.Length) if array, otherwise: $lines"
if ($lines -is [array]) {
    Write-Host "First element: '$($lines[0])'"
    Write-Host "First element type: $($lines[0].GetType().FullName)"
} else {
    Write-Host "Lines value: '$lines'"
}

# Check what Get-Content -ReadCount 0 returns
$linesArray = Get-Content $tempFile.FullName -ReadCount 0
Write-Host "Get-Content -ReadCount 0 returned: $($linesArray.GetType().FullName)"
Write-Host "Count: $($linesArray.Count)"
if ($linesArray.Count -gt 0) {
    Write-Host "First element: '$($linesArray[0])'"
}

$result = Get-StatementAtRow -FilePath $tempFile.FullName -Row 1
Write-Host "Result: '$result'"
Write-Host "Length: $($result.Length)"
$bytes = [System.Text.Encoding]::ASCII.GetBytes($result)
Write-Host "Bytes: $($bytes | ForEach-Object { "[{0}]" -f $_ })"
Remove-Item $tempFile.FullName