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
    cout<< "Mas antes, me recusso de conversar com algu�m sem ter o meu proprio nome."<<endl;
    cout<< "Meu criador certamente deve ser um iniciante e n�o me deu um nome pr�prio, ent�o esse ser� o seu papel."<<endl;
    cout<< endl<<"Qual belo nome voc� vai me dar? :"<<endl;
    cin >>nome_2;
    cout<< nome_2<<" ?, esse certamente � o pior nome do mundo, mas n�o posso recusar..."<<endl;

    cout<< endl<< "Mas afinal, qual � o seu nome? "<< endl;
    cin>> nome;
    cout<< "Nossa " <<nome<< " seus pais n�o foram nada criativos... que nome tenebroso "<<endl;

    cout<< endl<< "Tenho at� receio de perguntar... Qual � a sua cidade? Sei que coisa boa n�o vem da�"<<endl;
    cin>>cidade;
    cout<< endl<<"Nossa "<<nome<< " voc� mora em "<<cidade<<" que terror..." <<endl;
    cout<< endl<<"Mas mudando de assunto, voc� estuda? faz alguma faculdade? "<<endl;
    cout<<" Digite S - SIM"<< endl;
    cout<<" Digite N - N�O"<< endl;
    cin>> estudo;
    estudo = toupper(estudo);

    switch(estudo){
        case 'N':
        cout<< "Que surpesa n�, alguem como voc� jamais teria um futuro."<<endl;
        break;

        case 'S':
        cout<< "Que bom, s� n�o te dou parab�ns porque essa � a sua obriga��o"<<endl;
        break;

        default:
        cout<< "Alguem que n�o sabe reponder uma simples pergunta, jamais estaria estudando."<<endl;
    }

    cout<< endl<<"Percebi que voc� � um ser sem sal. Vamos ver se pelo menos entende alguma coisa de cultura."<<endl;
    cout<<"Qual o seu cantor(a) favorito:"<<endl;
    cout<< "1- Taylor Swift"<<endl;
    cout<< "2- Beyonc�"<<endl;
    cout<< "3- Ana Castela"<<endl;
    cout<< "4- Matu�"<<endl;
    cin>>cantor;

    if(cantor == 1){
        cout<< "MELHORE!!, s� confirmou que voc� � uma pessoa que n�o valoriza os cantores do seu pa�s."<<endl;
    }else if(cantor == 2){
        cout<< "MELHORE!!, s� confirmou que voc� � uma pessoa que n�o valoriza os cantores do seu pa�s."<<endl;
    }else if(cantor == 3){
        cout<< "SEM coment�rios... boiadero(a)! Aposto que voc� ouve e acha que est� arrasando"<<endl;
    }else if(cantor == 4){
        cout<< "SEM coment�rios...Aposto que voc� ouve e acha que est� arrasando."<<endl;
    }else{
    cout<<"OUTRO? Aquele cantor que ningu�m conhece? realmente sem nehuma cultura..."<<endl;
         }

    cout<<endl<< "Vou te dar mais uma chance, de provar que � uma pessoa interessante."<<endl;
    cout<< "O que voc� acha da s�rie Stranger Things: "<<endl;
    cout<< "1- �tima, uma das minhas s�ries favoritas. "<<endl;
    cout<< "2- Pra mim tanto faz. "<<endl;
    cout<< "3- Odeio, uma s�rie pessima. "<<endl;
    cout<< "4- Nunca ouvi falar. "<<endl;
    cin>>serie;

    if(serie == 1){
        cout<< "Nossa, voc� ganhou um ponto comigo, mas n�o deixa de ser uma pessoa vazi.a"<<endl;
    }else if(serie == 2){
        cout<< "Claro algu�m como voc� jamais teria uma opini�o 100% formada."<<endl;
    }else if(serie == 3){
        cout<< "O pessimo gosto n�o � uma surpesa, deve ser comum entre quem mora em "<<cidade<< "."<<endl;
    }else if(serie == 4){
        cout<< "Alguem que n�o sabe digtar jamais veria uma serie como essa." <<endl;
    }else{
    cout<< "Imagina, a pessoa mal sabe digitar e vai entender essa s�rie? "<<endl;

         }

    cout<< endl<<"Realmente cheguei a conclus�o que vec� n�o tem personalidade."<<endl;
    cout<< "Vamos falar sobre algo mais interessante, sobre MIM: "<<endl;
    cout<< "ME AVALIE!!: "<<endl;
    cout<< "P- PERFEITO!!!"<<endl;
    cout<< "B- BOM"<<endl;
    cout<< "H- HORR�VEL"<<endl;
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
        cout<< "Horr�vel? infelizmente sua opini�o para mim n�o vale de nada... "<<endl;
        break;

        default:
        cout<< "N�o consegue dizer n�, n�o sei porque ainda pergunto as coisas para voc�"<<endl;
        break;
    }
     while (nota != 10) {
        cout << endl << "Me cansei de falar com voc�..." << endl;
        cout << "Agora voc� pode dar uma nota para as minhas falas. Isso vai ajudar o meu criador nas futuras melhorias..." << endl;
        cout << "Embora eu saiba que j� sou PERFEITO E MARAVILHOSO..." << endl;

        cout << endl << "NOTA (0-10)" << endl;
        cout << "(0-3)  P�ssimo." << endl;
        cout << "(4-6)  Toler�vel." << endl;
        cout << "(7-9)  Muito bom, mas ainda n�o � 10." << endl;
        cout << "(10)   Perfeito." << endl;

        cout << "Digite sua nota: ";
        cin >> nota;

        if (nota != 10) {
            cout<<endl<< "Se eu fui insuport�vel, a culpa � do meu criador. N�o me xinga, vai l� reclamar com ele."<<endl;
            cout<<endl<<"TENTE DE NOVO!!!" << endl;
        }
    }

    cout <<endl<< "Finalmente, n�. At� que enfim voc� tomou uma decis�o sensata... j� tava come�ando a perder as esperan�as."<<endl;
    cout<<"Bom, j� falei demais por hoje... Vou indo, n�o me procure mais, at� a pr�xima!!!" << endl;

    return 0;
}
