package domain;

public class Tesoura implements Algoritimo{

    @Override
    public void executar(TipoAlgoritimo tipo) {
        switch(tipo){
            case PEDRA:
                System.out.println("Perdeu! Tesoura perde Pedra.");
                break;
            case SPOCK:
                System.out.println("Perdeu! Tesoura perde Spock.");
                break;
            case PAPEL:
                System.out.println("Ganhou! Tesoura corta Papel.");
                break;
            case LAGARTO:
                System.out.println("Ganhou! Tesoura corta Lagarto.");
                break;
            default:
                System.out.println("Empatou! Tesoura empata com Tesoura.");
        }
    }
    
}
