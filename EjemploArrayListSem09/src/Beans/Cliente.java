/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Beans;

/**
 *
 * @author dizma
 */
public class Cliente {
    private int cod;
    private String apenom;
    private String dir;
    private String dni;

    public Cliente() {
    }

    public Cliente(int cod, String apenom, String dir, String dni) {
        this.cod = cod;
        this.apenom = apenom;
        this.dir = dir;
        this.dni = dni;
    }

    public int getCod() {
        return cod;
    }

    public void setCod(int cod) {
        this.cod = cod;
    }

    public String getApenom() {
        return apenom;
    }

    public void setApenom(String apenom) {
        this.apenom = apenom;
    }

    public String getDir() {
        return dir;
    }

    public void setDir(String dir) {
        this.dir = dir;
    }

    public String getDni() {
        return dni;
    }

    public void setDni(String dni) {
        this.dni = dni;
    }
    
    
}
