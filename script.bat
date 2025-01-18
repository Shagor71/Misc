@echo off
:: Set the folder where you want to start the search (change this to the actual folder path)
set "folderPath=E:\CP"

:: Confirm the folder path
echo Deleting all .exe files in %folderPath% and its subfolders...

:: Use the for /r loop to search for .exe files recursively and delete them
for /r "%folderPath%" %%f in (*.exe) do (
    echo Deleting file: %%f
    del /f /q "%%f"
)

echo All .exe files in %folderPath% and subfolders have been deleted.
pause
