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
public class DetalleVenta {
 private int codven;
 private int codpro;
 private int cantidad;
 private double preven;

    public DetalleVenta() {
    }

    public DetalleVenta(int codven, int codpro, int cantidad, double preven) {
        this.codven = codven;
        this.codpro = codpro;
        this.cantidad = cantidad;
        this.preven = preven;
    }

    public int getCodven() {
        return codven;
    }

    public void setCodven(int codven) {
        this.codven = codven;
    }

    public int getCodpro() {
        return codpro;
    }

    public void setCodpro(int codpro) {
        this.codpro = codpro;
    }

    public int getCantidad() {
        return cantidad;
    }

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }

    public double getPreven() {
        return preven;
    }

    public void setPreven(double preven) {
        this.preven = preven;
    } 
}