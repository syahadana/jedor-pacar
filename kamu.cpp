#include <iostream>
#include <thread>
#include <chrono>

bool validateLogin(const std::string& username, const std::string& password) {
    return (username == "syahadana" && password == "hana");
}

int main() {
    std::string nama, username, password;

    std::cout << "Masukkan nama mu: ";
    std::cin >> nama;

    while (true) {
        std::cout << "Halo, " << nama << "! Silahkan Masukkan Username Dan Password!..\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));

        std::cout << "Username: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        if (validateLogin(username, password)) {
            std::cout << "Selamat datang, " << nama << "! Kamu berhasil masuk ke halaman hatiku.\n";
            break;
        } else {
            std::cout << "Ups, " << nama << ". Kayaknya hatimu belum siap menerima aku.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "Ayo coba lagi.\n";
        }
    }

    while (true) {
        std::cout << "Kamu mau gak jadi pacar ku?" << std::endl;
        std::cout << "mau/gamau" << std::endl;

        std::string jawaban;
        std::cin >> jawaban;

        if (jawaban == "mau") {
            std::cout << "Aaaa,Aku Sayang ayang><\n";
             std::cout << "____________________██████\n"
             "_________▓▓▓▓____█████████\n"
             "__ Ƹ̵̡Ӝ̵̨̄Ʒ▓▓▓▓▓=▓____▓=▓▓▓▓▓\n"
             "__ ▓▓▓_▓▓▓▓░●____●░░▓▓▓▓\n"
             "_▓▓▓▓_▓▓▓▓▓░░__░░░░▓▓▓▓\n"
             "_ ▓▓▓▓_▓▓▓▓░░♥__♥░░░▓▓▓\n"
             "__ ▓▓▓___▓▓░░_____░░░▓▓\n"
             "▓▓▓▓▓____▓░░_____░░▓\n"
             "_ ▓▓____ ▒▓▒▓▒___ ████\n"
             "_______ ▒▓▒▓▒▓▒_ ██████\n"
             "_______▒▓▒▓▒▓▒ ████████\n"
             "_____ ▒▓▒▓▒▓▒_██████ ███\n"
             "_ ___▒▓▒▓▒▓▒__██████ _███\n"
             "_▓▓X▓▓▓▓▓▓▓__██████_ ███\n"
             "▓▓_██████▓▓__██████_ ███\n"
             "▓_███████▓▓__██████_ ███\n"
             "_████████▓▓__██████ _███\n"
             "_████████▓▓__▓▓▓▓▓▓_▒▒\n"
             "_████████▓▓__▓▓▓▓▓▓\n"
             "_████████▓▓__▓▓▓▓▓▓\n"
             "__████████▓___▓▓▓▓▓▓\n"
             "_______▒▒▒▒▒____▓▓▓▓▓▓\n"
             "_______▒▒▒▒▒ _____▓▓▓▓▓\n"
             "_______▒▒▒▒▒_____ ▓▓▓▓▓\n"
             "_______▒▒▒▒▒ _____▓▓▓▓▓\n"
             "________▒▒▒▒______▓▓▓▓▓\n"
             "________█████____█████\n"
             "_'▀█║────────────▄▄────────────▄──▄_\n"
             "──█║───────▄─▄─█▄▄█║──────▄▄──█║─█║\n"
             "──█║───▄▄──█║█║█║─▄║▄──▄║█║─█║█║▄█║\n"
             "──█║──█║─█║█║█║─▀▀──█║─█║█║─█║─▀─▀\n"
             "──█║▄║█║─█║─▀───────█║▄█║─▀▀\n"
             "──▀▀▀──▀▀────────────▀─█║\n"
             "───────▄▄─▄▄▀▀▄▀▀▄──▀▄▄▀\n"
             "──────███████───▄▀\n"
             "──────▀█████▀▀▄▀\n"
             "────────▀█▀\n";
        } else if (jawaban == "gamau") {
            std::cout << "Aaaaaa, Kenapa Gamau, Harus Mau\n";
        } else {
            std::cout << "Input tidak valid. Silakan masukkan 'Mau' atau 'Gamau'.\n";
        }
    }

    return 0;
}