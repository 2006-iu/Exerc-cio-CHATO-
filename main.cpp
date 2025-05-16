#include <iostream>
#include <locale>
#include <cstring>
using namespace std;

int main()
{
    string nome,nome_2, cidade;
    char estudo, opc;
    int cantor, serie, nota;

    setlocale(LC_ALL, "Portuguese");
    cout <<endl<< "Oii, vamos conversar!!" << endl;
    cout<< "Mas antes, me recusso de conversar com alguém sem ter o meu proprio nome."<<endl;
    cout<< "Meu criador certamente deve ser um iniciante e não me deu um nome próprio, então esse será o seu papel."<<endl;
    cout<< endl<<"Qual belo nome você vai me dar? :"<<endl;
    cin >>nome_2;
    cout<< nome_2<<" ?, esse certamente é o pior nome do mundo, mas não posso recusar..."<<endl;

    cout<< endl<< "Mas afinal, qual é o seu nome? "<< endl;
    cin>> nome;
    cout<< "Nossa " <<nome<< " seus pais não foram nada criativos... que nome tenebroso "<<endl;

    cout<< endl<< "Tenho até receio de perguntar... Qual é a sua cidade? Sei que coisa boa não vem daí"<<endl;
    cin>>cidade;
    cout<< endl<<"Nossa "<<nome<< " você mora em "<<cidade<<" que terror..." <<endl;
    cout<< endl<<"Mas mudando de assunto, você estuda? faz alguma faculdade? "<<endl;
    cout<<" Digite S - SIM"<< endl;
    cout<<" Digite N - NÃO"<< endl;
    cin>> estudo;
    estudo = toupper(estudo);

    switch(estudo){
        case 'N':
        cout<< "Que surpesa né, alguem como você jamais teria um futuro."<<endl;
        break;

        case 'S':
        cout<< "Que bom, só não te dou parabéns porque essa é a sua obrigação"<<endl;
        break;

        default:
        cout<< "Alguem que não sabe reponder uma simples pergunta, jamais estaria estudando."<<endl;
    }

    cout<< endl<<"Percebi que você é um ser sem sal. Vamos ver se pelo menos entende alguma coisa de cultura."<<endl;
    cout<<"Qual o seu cantor(a) favorito:"<<endl;
    cout<< "1- Taylor Swift"<<endl;
    cout<< "2- Beyoncé"<<endl;
    cout<< "3- Ana Castela"<<endl;
    cout<< "4- Matuê"<<endl;
    cin>>cantor;

    if(cantor == 1){
        cout<< "MELHORE!!, só confirmou que você é uma pessoa que não valoriza os cantores do seu país."<<endl;
    }else if(cantor == 2){
        cout<< "MELHORE!!, só confirmou que você é uma pessoa que não valoriza os cantores do seu país."<<endl;
    }else if(cantor == 3){
        cout<< "SEM comentários... boiadero(a)! Aposto que você ouve e acha que está arrasando"<<endl;
    }else if(cantor == 4){
        cout<< "SEM comentários...Aposto que você ouve e acha que está arrasando."<<endl;
    }else{
    cout<<"OUTRO? Aquele cantor que ninguém conhece? realmente sem nehuma cultura..."<<endl;
         }

    cout<<endl<< "Vou te dar mais uma chance, de provar que é uma pessoa interessante."<<endl;
    cout<< "O que você acha da série Stranger Things: "<<endl;
    cout<< "1- Ótima, uma das minhas séries favoritas. "<<endl;
    cout<< "2- Pra mim tanto faz. "<<endl;
    cout<< "3- Odeio, uma série pessima. "<<endl;
    cout<< "4- Nunca ouvi falar. "<<endl;
    cin>>serie;

    if(serie == 1){
        cout<< "Nossa, você ganhou um ponto comigo, mas não deixa de ser uma pessoa vazi.a"<<endl;
    }else if(serie == 2){
        cout<< "Claro alguém como você jamais teria uma opinião 100% formada."<<endl;
    }else if(serie == 3){
        cout<< "O pessimo gosto não é uma surpesa, deve ser comum entre quem mora em "<<cidade<< "."<<endl;
    }else if(serie == 4){
        cout<< "Alguem que não sabe digtar jamais veria uma serie como essa." <<endl;
    }else{
    cout<< "Imagina, a pessoa mal sabe digitar e vai entender essa série? "<<endl;

         }

    cout<< endl<<"Realmente cheguei a conclusão que vecê não tem personalidade."<<endl;
    cout<< "Vamos falar sobre algo mais interessante, sobre MIM: "<<endl;
    cout<< "ME AVALIE!!: "<<endl;
    cout<< "P- PERFEITO!!!"<<endl;
    cout<< "B- BOM"<<endl;
    cout<< "H- HORRÍVEL"<<endl;
    cin>>opc;
    opc = toupper(opc);

    switch(opc)
    {
        case 'P':
        cout<< "Realmente eu sei que sou perfeito!!"<<endl;
        break;

        case 'B':
        cout<< "Bom? querido(a) eu sou PERFEITO!!!!.  "<<endl;
        break;

        case 'H':
        cout<< "Horrível? infelizmente sua opinião para mim não vale de nada... "<<endl;
        break;

        default:
        cout<< "Não consegue dizer né, não sei porque ainda pergunto as coisas para você"<<endl;
        break;
    }
     while (nota != 10) {
        cout << endl << "Me cansei de falar com você..." << endl;
        cout << "Agora você pode dar uma nota para as minhas falas. Isso vai ajudar o meu criador nas futuras melhorias..." << endl;
        cout << "Embora eu saiba que já sou PERFEITO E MARAVILHOSO..." << endl;

        cout << endl << "NOTA (0-10)" << endl;
        cout << "(0-3)  Péssimo." << endl;
        cout << "(4-6)  Tolerável." << endl;
        cout << "(7-9)  Muito bom, mas ainda não é 10." << endl;
        cout << "(10)   Perfeito." << endl;

        cout << "Digite sua nota: ";
        cin >> nota;

        if (nota != 10) {
            cout<<endl<< "Se eu fui insuportável, a culpa é do meu criador. Não me xinga, vai lá reclamar com ele."<<endl;
            cout<<endl<<"TENTE DE NOVO!!!" << endl;
        }
    }

    cout <<endl<< "Finalmente, né. Até que enfim você tomou uma decisão sensata... já tava começando a perder as esperanças."<<endl;
    cout<<"Bom, já falei demais por hoje... Vou indo, não me procure mais, até a próxima!!!" << endl;

    return 0;
}
