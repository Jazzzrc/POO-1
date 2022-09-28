/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controller;

import Beans.Usuario;
import java.util.ArrayList;
import java.util.List;
import Beans.Cliente;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;

/**
 *
 * @author dizma
 */
public class ClienteController {
    private List<Cliente> lstcliente;

    public ClienteController() {
        this.lstcliente = new ArrayList<Cliente>();     
        cargar();
    }    
    public void add(Cliente cli){
        this.lstcliente.add(cli);
    }
    public Cliente get(int pos){
        return this.lstcliente.get(pos);
    }
    public int size(){
        return this.lstcliente.size();
    }

    public void grabar(){
    try{
        PrintWriter pw;
        String linea;
        pw= new PrintWriter(new FileWriter("cliente.txt"));
        for(int i=0;i<size();i++){
            linea=(lstcliente.get(i).getCod() + ";" + 
                      lstcliente.get(i).getApenom()+";" + 
                      lstcliente.get(i).getDir()+ ";" +
                      lstcliente.get(i).getDni()
                    );
            pw.println(linea);//Agregar el registro al archivo
        }
        pw.close();
    }catch(Exception e){
        System.out.println(e.getMessage());
    }    
    }

    private void cargar() {
    try{
        BufferedReader br;
        String linea=null;
        String[] array=null;
        br = new BufferedReader(new FileReader("cliente.txt"));
        while((linea = br.readLine()) != null ){
            array = linea.split(";");
            //Crear el objeto de tipo producto con los datos del archivo
             Cliente objcli = 
                    new Cliente(Integer.parseInt(array[0].trim()),array[1].trim(),array[2].trim(),array[3].trim());
            //Agregar el objeto al ArrayList
            this.lstcliente.add(objcli);
        }
        br.close();
    }catch(Exception e){
        System.out.println(e.getMessage());
    }    }

}
