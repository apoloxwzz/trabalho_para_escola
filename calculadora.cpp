#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int resposta(){
    int respostaQuantidadeDeTrimestre;

    cout << "Você deseja calcular a média de quantos trimestres? 1, 2, 3 ou 4?" << endl;
    cin >> respostaQuantidadeDeTrimestre;

    if(respostaQuantidadeDeTrimestre >= 1 && respostaQuantidadeDeTrimestre <= 5){
        //
    }
    else{
        cout << "Resposta inválida";
        exit(0);
    }

    return respostaQuantidadeDeTrimestre;
}

double primeiroTrimestre(){
    double primeiraNota = 0;
    double segundaNota = 0;
    double terceiraNota = 0;
    double mediaDasNotas = 0;
    
    cout << "Digite a N1 do primeiro trimestre: ";
    cin >> primeiraNota;
    cout << "Digite a N2 do primeiro trimestre: ";
    cin >> segundaNota;
    cout << "Digite a N3 do primeiro trimestre: ";
    cin >> terceiraNota;

    if(primeiraNota > 10.00 || segundaNota > 10.00 || terceiraNota > 10.00){
        cout << "Não tem como o aluno tirar uma nota maior que 10!" << endl;
        exit(0);
    }

    cout << fixed << setprecision(2);
    mediaDasNotas = (primeiraNota + segundaNota + terceiraNota) / 3;

    return mediaDasNotas;
}

double segundoTrimestre(){
    double primeiraNota = 0;
    double segundaNota = 0;
    double terceiraNota = 0;
    double mediaDasNotas = 0;
    
    cout << "Digite a N1 do segundo trimestre: ";
    cin >> primeiraNota;
    cout << "Digite a N2 do segundo trimestre: ";
    cin >> segundaNota;
    cout << "Digite a N3 do segundo trimestre: ";
    cin >> terceiraNota;

    if(primeiraNota > 10.00 || segundaNota > 10.00 || terceiraNota > 10.00){
        cout << "Não tem como o aluno tirar uma nota maior que 10!" << endl;
        exit(0);
    }

    cout << fixed << setprecision(2);
    mediaDasNotas = (primeiraNota + segundaNota + terceiraNota) / 3;

    return mediaDasNotas;
}

double terceiroTrimestre(){
    double primeiraNota = 0;
    double segundaNota = 0;
    double terceiraNota = 0;
    double mediaDasNotas = 0;
    
    cout << "Digite a N1 do terceiro trimestre: ";
    cin >> primeiraNota;
    cout << "Digite a N2 do terceiro trimestre: ";
    cin >> segundaNota;
    cout << "Digite a N3 do terceiro trimestre: ";
    cin >> terceiraNota;

    if(primeiraNota > 10.00 || segundaNota > 10.00 || terceiraNota > 10.00){
        cout << "Não tem como o aluno tirar uma nota maior que 10!" << endl;
        exit(0);
    }

    cout << fixed << setprecision(2);
    mediaDasNotas = (primeiraNota + segundaNota + terceiraNota) / 3;

    return mediaDasNotas;
}

double quartoTrimestre(){
    double primeiraNota = 0;
    double segundaNota = 0;
    double terceiraNota = 0;
    double mediaDasNotas = 0;
    
    cout << "Digite a N1 do quarto trimestre: ";
    cin >> primeiraNota;
    cout << "Digite a N2 do quarto trimestre: ";
    cin >> segundaNota;
    cout << "Digite a N3 do quarto trimestre: ";
    cin >> terceiraNota;

    if(primeiraNota > 10.00 || segundaNota > 10.00 || terceiraNota > 10.00){
        cout << "Não tem como o aluno tirar uma nota maior que 10!" << endl;
        exit(0);
    }

    cout << fixed << setprecision(2);
    mediaDasNotas = (primeiraNota + segundaNota + terceiraNota) / 3;

    return mediaDasNotas;
}

double arredondarMediaPrimeiroTrimestre(){
    string resposta;
    double mediaArredondada;
    mediaArredondada = primeiroTrimestre();

    cout << "A média do aluno no primeiro trimestre foi: " << mediaArredondada << "\n" << "Você deseja arredondar? Sim ou Não? ";
    cin >> resposta;
    if(resposta == "Sim" || resposta == "Sim " || resposta == "sim"){
        mediaArredondada = floor(mediaArredondada);
    }
    return mediaArredondada;

}

double arredondarMediaSegundoTrimestre(){
    string resposta;
    double mediaArredondada;
    mediaArredondada = segundoTrimestre();

    cout << "A média do aluno no segundo trimestre foi: " << mediaArredondada << "\n" << "Você deseja arredondar? Sim ou Não? ";
    cin >> resposta;
    if(resposta == "Sim" || resposta == "Sim " || resposta == "sim"){
        mediaArredondada = floor(mediaArredondada);
    }
    return mediaArredondada;

}
double arredondarMediaTerceiroTrimestre(){
    string resposta;
    double mediaArredondada;
    mediaArredondada = terceiroTrimestre();

    cout << "A média do aluno no terceiro trimestre foi: " << mediaArredondada << "\n" << "Você deseja arredondar? Sim ou Não? ";
    cin >> resposta;
    if(resposta == "Sim" || resposta == "Sim " || resposta == "sim"){
        mediaArredondada = floor(mediaArredondada);
    }
    return mediaArredondada;
}

double arredondarMediaQuartoTrimestre(){
    string resposta;
    double mediaArredondada;
    mediaArredondada = quartoTrimestre();

    cout << "A média do aluno no quarto trimestre foi: " << mediaArredondada << "\n" << "Você deseja arredondar? Sim ou Não? ";
    cin >> resposta;
    if(resposta == "Sim" || resposta == "Sim " || resposta == "sim"){
        mediaArredondada = floor(mediaArredondada);
    }
    return mediaArredondada;
}

void aprovacao(double media1 = 0, double media2 = 0, double media3 = 0, double media4 = 0, double mediaTotal = 0) {
    mediaTotal = media1 + media2 + media3 + media4;

    if (media1 > 0) {
        if(media1 == 10.00){
            cout << "Excelente! O aluno tirou nota máxima no primeiro trimestre!" << endl;
        }
        else if(media1 >= 7.00){
            cout << "O aluno foi aprovado no primeiro trimestre!" << endl;
        }
        else if(media1 >= 6.00){
            cout << "O aluno está de recuperação no primeiro trimestre!" << endl;
        }
        else{
            cout << "O aluno não foi aprovado no primeiro trimestre!" << endl;
        }
    }

    if (media2 > 0) {
        if(media2 == 10.00){
            cout << "Excelente! O aluno tirou nota máxima no segundo trimestre!" << endl;
        }
        else if(media2 >= 7.00){
            cout << "O aluno foi aprovado no segundo trimestre!" << endl;
        }
        else if(media2 >= 6.00){
            cout << "O aluno está de recuperação no segundo trimestre!" << endl;
        }
        else{
            cout << "O aluno não foi aprovado no segundo trimestre!" << endl;
        }
    }

    if (media3 > 0) {
        if(media3 == 10.00){
            cout << "Excelente! O aluno tirou nota máxima no terceiro trimestre!" << endl;
        }
        else if(media3 >= 7.00){
            cout << "O aluno foi aprovado no terceiro trimestre!" << endl;
        }
        else if(media3 >= 6.00){
            cout << "O aluno está de recuperação no terceiro trimestre!" << endl;
        }
        else{
            cout << "O aluno não foi aprovado no terceiro trimestre!" << endl;
        }
    }

    if (media4 > 0) {
        if(media4 == 10.00){
            cout << "Excelente! O aluno tirou nota máxima no quarto trimestre!" << endl;
        }
        else if(media4 >= 7.00){
            cout << "O aluno foi aprovado no quarto trimestre!" << endl;
        }
        else if(media4 >= 6.00){
            cout << "O aluno está de recuperação no quarto trimestre!" << endl;
        }
        else{
            cout << "O aluno não foi aprovado no quarto trimestre!" << endl;
        }
    }
    if (mediaTotal > 0) {
        double mediaFinal = mediaTotal / 
            ((media1 > 0) + (media2 > 0) + (media3 > 0) + (media4 > 0));

        cout << fixed << setprecision(2);
        cout << "Média final do ano: " << mediaFinal << endl;

        if(mediaFinal == 10.00){
            cout << "Parabéns, o aluno passou de ano com a média máxima!" << endl;
        }
        else if(mediaFinal >= 7.00){
            cout << "Parabéns, o aluno passou de ano!" << endl;
        }
        else if(mediaFinal >= 6.00){
            cout << "O aluno precisa fazer recuperação." << endl;
        }
        else{
            cout << "O aluno não passou de ano." << endl;
        }
    }
}

int main(){
    double mediaTotal = 0;
    int respostaQuantidadeDeTrimestre;

    cout << "====================================================" << endl;
    cout << "   Bem-vindo à Calculadora de Médias Escolares!   " << endl;
    cout << "====================================================" << endl;
    cout << "   Este programa ajuda você a calcular médias" << endl;
    cout << "   trimestrais e verificar a aprovação do aluno." << endl;
    cout << "====================================================" << endl;
    cout << "   by: apolomecmec" << endl;
    cout << "   github.com/apoloxwzz        " << endl;
    cout << "   in C++ :)" << endl;
    cout << "----------------------------------------------------" << "\n" << endl;

    cout << "Você deseja calcular a média de quantos trimestres? 1, 2, 3 ou 4? ";
    cin >> respostaQuantidadeDeTrimestre;


    if(respostaQuantidadeDeTrimestre < 1 || respostaQuantidadeDeTrimestre > 4){
        cout << "Escolha outra opção!" << endl;
        exit(0);
    }
    

    switch (respostaQuantidadeDeTrimestre)
    {
    case 1: {
        double media1 = arredondarMediaPrimeiroTrimestre();
        mediaTotal += media1;
        aprovacao(media1);
        break;
    }

    case 2: {
        double media1 = arredondarMediaPrimeiroTrimestre();
        double media2 = arredondarMediaSegundoTrimestre();
        mediaTotal += media1 + media2;
        aprovacao(media1, media2, mediaTotal);
        break;
    }

    case 3: {
        double media1 = arredondarMediaPrimeiroTrimestre();
        double media2 = arredondarMediaSegundoTrimestre();
        double media3 = arredondarMediaTerceiroTrimestre();
        mediaTotal += media1 + media2 + media3;
        aprovacao(media1, media2, media3, mediaTotal);
        break;
    }

    case 4: {
        double media1 = arredondarMediaPrimeiroTrimestre();
        double media2 = arredondarMediaSegundoTrimestre();
        double media3 = arredondarMediaTerceiroTrimestre();
        double media4 = arredondarMediaQuartoTrimestre();
        mediaTotal += media1 + media2 + media3 + media4;
        aprovacao(media1, media2, media3, media4, mediaTotal);
        break;
    }

    default:
        break;
    }
    return 0;
}
