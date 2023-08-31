import java.util.Random;
import java.util.Scanner;

import domain.Algoritimo;
import domain.Jokenpo;
import domain.Papel;
import domain.Tesoura;
import domain.TipoAlgoritimo;

public class App {
    public static int PAPEL =1;
    public static int TESOURA = 2;
    public static int PEDRA = 3;
    public static int LAGARTO = 4;
    public static int SPOCK = 5;





    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        System.out.println("Selecione uma das opções:");
        System.out.println("PAPEL : 1");
        System.out.println("TESOURA : 2");
        System.out.println("PEDRA : 3");
        System.out.println("LAGARTO : 4");
        System.out.println("SPOCK : 5");
        System.out.println();
        int jogada = in.nextInt();

        Algoritimo algoritimo = geAlgoritimo(jogada);

        //Algoritimo papel = new Papel();

        Integer random = new Random().nextInt(5) + 1;
        TipoAlgoritimo computador = TipoAlgoritimo.getTipo(random);

        Jokenpo jokenpo = new Jokenpo();
        jokenpo.setAlgoritimo(algoritimo); 

        jokenpo.jogar(computador);
            
        in.close();
    }

    static Algoritimo geAlgoritimo(Integer id){
        TipoAlgoritimo tipo = TipoAlgoritimo.getTipo(id);
        switch(tipo){
            case PAPEL:
                return new Papel();
            case TESOURA:
                return new Tesoura();
            case PEDRA:
                return new Papel();
            case LAGARTO:
                return new Papel();
            case SPOCK:
                return new Papel();
            default:
                throw new RuntimeException("Tipo inválido.");
        }
    }
}
