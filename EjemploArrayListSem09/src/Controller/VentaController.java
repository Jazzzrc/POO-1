/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controller;

import Beans.Venta;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author dizma
 */
public class VentaController {
    private List<Venta> lstventa;

    public VentaController() {
        this.lstventa = new ArrayList<Venta>();     
        cargar();
    }    
    public void add(Venta obj){
        this.lstventa.add(obj);
    }
    public Venta get(int pos){
        return this.lstventa.get(pos);
    }
    public int size(){
        return this.lstventa.size();
    }

    public void grabar(){
    try{
        PrintWriter pw;
        String linea;
        pw= new PrintWriter(new FileWriter("venta.txt"));
        for(int i=0;i<size();i++){
            linea=(lstventa.get(i).getCodven() + ";" + 
                      lstventa.get(i).getCodcli()+";" + 
                      lstventa.get(i).getFecha()+ ";" +
                      lstventa.get(i).getTotal() + ";" + 
                     lstventa.get(i).getEstado()
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
        br = new BufferedReader(new FileReader("venta.txt"));
        while((linea = br.readLine()) != null ){
            array = linea.split(";");
            //Crear el objeto de tipo producto con los datos del archivo
             Venta obj = 
                    new Venta(Integer.parseInt(array[0].trim()),
                            Integer.parseInt(array[1].trim()),array[2].trim(),
                            Double.parseDouble(array[3].trim()),
                            Integer.parseInt(array[4].trim()));
            //Agregar el objeto al ArrayList
            this.lstventa.add(obj);
        }
        br.close();
    }catch(Exception e){
        System.out.println(e.getMessage());
    }    }

}
