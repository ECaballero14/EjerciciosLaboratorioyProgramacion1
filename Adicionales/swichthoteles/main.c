#include <stdio.h>
#include <stdlib.h>

int main()
{

    int precio=100;

    int preciopaq,preciomediopago;

    int mediodepago;

    int paquete;

    int bandera;

    printf("\nSeleccion un paquete: 1-todoincluido, 2-solodesayuno:");

    scanf("%d",&paquete);

        switch(paquete){

        case 1:
                    preciopaq=precio-(precio*20/100);

                    printf("\nSeleccion un medio de pago: 1-Visa, 2-Paypal , 3-MercadoPago , 4-Efectivo:");

                    scanf("%d",&mediodepago);

                  switch(mediodepago){

                    case 1:
                        precio=preciopaq-(preciopaq*10/100);

                        preciomediopago=precio;

                        printf("\nEl precio final con desc. para el paquete todoincluido es de %d $.\n",preciomediopago);

                        break;


                    case 2:

                        precio=preciopaq-(preciopaq*15/100);

                        preciomediopago=precio;

                        printf("\nEl precio final con desc. para el paquete todoincluido es de %d $.\n",preciomediopago);

                        break;

                   case 3:
                   case 4:

                        printf("\nEl precio final para el paquete todoincluido no tiene descuento adicional es de %d $.\n",preciopaq);

                        break;

                   default:

                        printf("\nEl medio de pago elegido no existe.\n");

                        break;
                    }

                  break;

        case 2:

                    preciopaq=precio-(precio*20/100);

                    printf("\nSeleccion un medio de pago: 1-Visa, 2-Paypal , 3-MercadoPago , 4-Efectivo:");

                    scanf("%d",&mediodepago);

                  switch(mediodepago){


                    case 1:
                    case 2:
                    case 3:

                        printf("\nEl precio final para el paquete tododesayuno no tiene descuento adicional es de %d $.\n",preciopaq);

                        break;

                    case 4:
                        prepreciomediopagocio=preciopaq-(preciopaq*10/100);

                        preciomediopago=precio;

                        printf("\nEl precio final con desc. para el paquete tododesayuno es de %d $.\n",preciomediopago);

                        break;

                   default:

                        printf("\nEl medio de pago elegido no existe.\n");

                        break;
                    }

                  break;

        default:

                   printf("\nEl paquete elegido no existe.\n");

                   break;
       }

    return 0;
}
