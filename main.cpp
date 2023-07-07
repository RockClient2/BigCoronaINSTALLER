#include <iostream>
#include <cstdlib>
#include <string>

void openURL(const std::string& url) {
    std::string command = "start " + url;
    system(command.c_str());
}

int main() {
    std::cout << "Ciao! Questo è il Cracker X del Rock Client." << std::endl;
    std::cout << "Permette di trasformare un client di merda in Rock Client." << std::endl;
    std::cout << "Vuoi iniziare il processo? (si/no): ";
    std::string choice;
    std::getline(std::cin, choice);

    if (choice == "si") {
        std::cout << "Oooo bene! Iniziamo installando questo client di schifo." << std::endl;
        std::cout << std::endl;
        openURL("https://github.com/SkyblockClient/SkyblockClient/releases/download/1.3.11/SkyblockClient-1.3.11.exe");

        std::cout << std::endl;
        std::cout << "Bene! Ora lasciami permettere che lo apra." << std::endl;
        std::cout << std::endl;
        system("pause");

        std::cout << std::endl;
        std::cout << "Su dai, installalo. L'hai installato? (si/no): ";
        std::getline(std::cin, choice);

        if (choice == "si") {
            std::cout << "Ora metti roba a caso e avvisami quando ti è uscita la conferma che hai fatto. (Scrivi 'ho fatto')" << std::endl;
            std::cout << std::endl;

            std::string confirmation;
            while (true) {
                std::getline(std::cin, confirmation);
                if (confirmation == "ho fatto") {
                    std::cout << std::endl;
                    std::cout << "Grande! Ora puoi scaricare il file Rock Installer." << std::endl;
                    std::cout << std::endl;
                    openURL("https://download1593.mediafire.com/nj6q810rf6ngyI-BQT4C3dfuOSu5tfNWoS7IsEDAG7tkK6RexgxiBlXOHtFd1chpvenqJ2bYOEiRMYwhYi7zfaQk0BintfhEt0nfNCCQxeCSjsRJLcgNlWeelFf-88tknevjAs1JB6ajUZ3zYGoJJ2fJoRViPgdUNRLCJfSDMMX0at4/tc3so9sq1ti1ajs/rockinstaller.zip");

                    std::cout << std::endl;
                    std::cout << "Attendi il completamento del download del file Rock Installer." << std::endl;
                    std::cout << std::endl;
                    system("pause");

                    std::cout << std::endl;
                    std::cout << "Eliminando la cartella %APPDATA%\\.minecraft\\skyclient" << std::endl;
                    std::cout << std::endl;
                    system("rmdir /s /q \"%APPDATA%\\.minecraft\\skyclient\"");

                    std::cout << std::endl;
                    std::cout << "Estrazione del file rockinstaller.zip..." << std::endl;
                    std::cout << std::endl;
                    system("powershell -command \"& { Add-Type -A 'System.IO.Compression.FileSystem'; [IO.Compression.ZipFile]::ExtractToDirectory('%APPDATA%\\.minecraft\\rockinstaller.zip', '%APPDATA%\\.minecraft') }\"");

                    std::cout << std::endl;
                    std::cout << "Bro! È fatto. Avvialo come Sky Client, anche se non lo è." << std::endl;
                    std::cout << std::endl;
                    system("pause");

                    return 0;
                } else {
                    continue;
                }
            }
        } else {
            std::cout << "Installazione annullata." << std::endl;
            std::cout << std::endl;
            system("pause");

            return 0;
        }
    } else {
        std::cout << "Processo interrotto." << std::endl;
        std::cout << std::endl;
        system("pause");

        return 0;
    }
}