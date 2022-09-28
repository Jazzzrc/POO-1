class DetalleVenta
{
  private:
    int codVenta,
        codProducto,
        cantidad;
    float precioVenta;
  public:
    float getImporte()
    {
      return cantidad * precio;
    }
};
