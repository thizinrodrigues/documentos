#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

main(){

	int player, game;
	cout<<"Jogo TBBT"<<endl;
	cout<<"Digite sua opção"<<endl;	
	cout<<"1 - para tesoura"<<endl;
	cout<<"2 - para papel"<<endl;
	cout<<"3 - para pedra"<<endl;
	cout<<"4 - para lagarto"<<endl;
	cout<<"5 - para spock"<<endl;

	cin>>player;
	
	unsigned seed = time(0);

    srand(seed);
	
	game=1+rand()%5;
	
	if(player == 1 && game == 2){
		cout<<"Você ganhou o meu era papel";
	}
	else if(player == 1 && game == 4){
		cout<<"Você ganhou o meu era lagarto";
	}
	else if(player == 2 && game == 3){
		cout<<"Você ganhou o meu era pedra";
	}
	else if(player == 2 && game == 5){
		cout<<"Você ganhou o meu era spock";
	}
	else if(player == 3 && game == 4){
		cout<<"Você ganhou o meu era lagarto";
	}
	else if(player == 3 && game == 1){
		cout<<"Você ganhou o meu era tesoura";
	}
	else if(player == 4 && game == 5){
		cout<<"Você ganhou o meu era spock";
	}
	else if(player == 4 && game == 2){
		cout<<"Você ganhou o meu era papel";
	}
	else if(player == 5 && game == 1){
		cout<<"Você ganhou o meu era tesoura";
	}
	else if(player == 5 && game == 3){
		cout<<"Você ganhou o meu era pedra";
	}
	else if(game == 1 && player == 2){
		cout<<"Você perdeu o meu era tesoura";
	}
	else if(game == 1 && player == 4){
		cout<<"Você perdeu o meu era tesoura";
	}
	else if(game == 2 && player == 3){
		cout<<"Você perdeu o meu era papel";
	}
	else if(game == 2 && player == 5){
		cout<<"Você perdeu o meu era papel";
	}
	else if(game == 3 && player == 4){
		cout<<"Você perdeu o meu era pedra";
	}
	else if(player == 3 && game == 1){
		cout<<"Você perdeu o meu era pedra";
	}
	else if(game == 4 && player == 5){
		cout<<"Você perdeu o meu era lagarto";
	}
	else if(player == 4 && game == 2){
		cout<<"Você perdeu o meu era lagarto";
	}
	else if(game == 5 && player == 1){
		cout<<"Você perdeu o meu era spock";
	}
	else if(player == 5 && game == 3){
		cout<<"Você perdeu o meu era spock";
	}
	else
	cout<<"Empate";

}




