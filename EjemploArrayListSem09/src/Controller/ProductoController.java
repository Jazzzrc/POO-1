/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controller;

import Beans.Producto;
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
public class ProductoController {
    private List<Producto> lst;
    
    public ProductoController(){
        lst = new ArrayList<Producto>();
        cargar();          
    }
   //Agregar objetos al arreglo
    public void add(Producto obj){
       lst.add(obj);
    }
   //Obtener un objeto
    public Producto get(int indice){
        return lst.get(indice);
    }
   //Tamaño total
    public int size(){
        return lst.size();
    }
    
    
   //Eliminar objetos
    public void remove(Producto objpro){
        lst.remove(objpro);
    }
    
    //Coorelativo - Indetity
    public int getCorrelativo(){
       if(lst.size() == 0){
         return 1;
       }else{
           return lst.get(lst.size()-1).getCodigo() + 1;
       }
    }
    
    public Producto buscar(String nom){
     for(Producto aux:lst)
         if(aux.getNombre().equalsIgnoreCase(nom))
             return aux;
    return null;
    }  
    public Producto buscar2(String nom){
     for(int i=0;i<lst.size();i++)
         if(lst.get(i).getNombre().equalsIgnoreCase(nom))
             return lst.get(i);
    return null;
    }  
    public Producto buscar(int cod){
     for(int i=0;i<lst.size();i++)
         if(lst.get(i).getCodigo() == cod)
             return lst.get(i);
    return null;
    }  
    
    public double getTotalPrecio(){
       double st=0;
       for(int i=0;i<lst.size();i++){
           st+=lst.get(i).getPrecio();
       }   
        return st;
    }    
    public void grabar(){
    try{
        PrintWriter pw;
        String linea;
        pw= new PrintWriter(new FileWriter("producto.txt"));
        for(int i=0;i<size();i++){
            linea=(lst.get(i).getCodigo() + ";" + 
                      lst.get(i).getNombre()+";" + 
                      lst.get(i).getPrecio() + ";" +
                      lst.get(i).getStock()
                    );
            pw.println(linea);//Agregar el registro al archivo
        }
        pw.close();
    }catch(Exception e){
        System.out.println(e.getMessage());
    }    
    }
    public void cargar(){
    try{
        BufferedReader br;
        String linea=null;
        String[] array=null;
        br = new BufferedReader(new FileReader("producto.txt"));
        while((linea = br.readLine()) != null ){
            array = linea.split(";");
            //Crear el objeto de tipo producto con los datos del archivo
            Producto objpro =
                    new Producto(Integer.parseInt(array[0].trim()), array[1].trim(),
                            Double.parseDouble(array[2].trim()), Integer.parseInt(array[3].trim()));
            //Agregar el objeto al ArrayList
            lst.add(objpro);
        }
        br.close();
    }catch(Exception e){
        System.out.println(e.getMessage());
    }
    }
}
