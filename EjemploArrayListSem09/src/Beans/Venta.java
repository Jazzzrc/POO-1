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
public class Venta {
private int codven;
private int codcli;
private String fecha;
private double total;
private int estado;

    public Venta() {
    }

    public Venta(int codven, int codcli, String fecha, double total, int estado) {
        this.codven = codven;
        this.codcli = codcli;
        this.fecha = fecha;
        this.total = total;
        this.estado = estado;
    }

    public int getCodven() {
        return codven;
    }

    public void setCodven(int codven) {
        this.codven = codven;
    }

    public int getCodcli() {
        return codcli;
    }

    public void setCodcli(int codcli) {
        this.codcli = codcli;
    }

    public String getFecha() {
        return fecha;
    }

    public void setFecha(String fecha) {
        this.fecha = fecha;
    }

    public double getTotal() {
        return total;
    }

    public void setTotal(double total) {
        this.total = total;
    }

    public int getEstado() {
        return estado;
    }

    public void setEstado(int estado) {
        this.estado = estado;
    }



}
