/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controller;

import Beans.DetalleVenta;
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
public class DetalleVentaController {
      private List<DetalleVenta> lstdetalleventa;

    public DetalleVentaController() {
        this.lstdetalleventa = new ArrayList<DetalleVenta>();     
        cargar();
    }    
    public void add(DetalleVenta obj){
        this.lstdetalleventa.add(obj);
    }
    public DetalleVenta get(int pos){
        return this.lstdetalleventa.get(pos);
    }
    public int size(){
        return this.lstdetalleventa.size();
    }

   public double getTotalPrecio(){
       double st=0;
       for(int i=0;i<lstdetalleventa.size();i++){
           st+=lstdetalleventa.get(i).getCantidad() * lstdetalleventa.get(i).getPreven();
       }   
        return st;
    }    

    public void grabar(){
    try{
        PrintWriter pw;
        String linea;
        pw= new PrintWriter(new FileWriter("detalleventa.txt"));
        for(int i=0;i<size();i++){
            linea=(lstdetalleventa.get(i).getCodven() + ";" + 
                      lstdetalleventa.get(i).getCodpro()+";" + 
                      lstdetalleventa.get(i).getCantidad()+ ";" +
                      lstdetalleventa.get(i).getPreven()
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
        br = new BufferedReader(new FileReader("detalleventa.txt"));
        while((linea = br.readLine()) != null ){
            array = linea.split(";");
            //Crear el objeto de tipo producto con los datos del archivo
             DetalleVenta obj = 
                    new DetalleVenta(Integer.parseInt(array[0].trim()),
                            Integer.parseInt(array[1].trim()),
                            Integer.parseInt(array[2].trim()),
                            Double.parseDouble(array[3].trim())
                            );
            //Agregar el objeto al ArrayList
            this.lstdetalleventa.add(obj);
        }
        br.close();
    }catch(Exception e){
        System.out.println(e.getMessage());
    }    }
  
}
