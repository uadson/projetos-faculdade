/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exemplo006;

/**
 *
 * @author uadson
 */
public class Exemplo006 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        // Cálculo do valor médio da sequência y = f(x) = x * x
        // Media = Somatorio dos valores / quantidade
        // Limites 1 a 5
        
        double soma = 0.0;
        
        for (int x=1; x<=5; x++)
            soma += Math.pow(x, 2);
            // eleva x a potência 2 e acumula
            System.out.println(soma);
        System.out.println(soma/5);
    }
    
}
