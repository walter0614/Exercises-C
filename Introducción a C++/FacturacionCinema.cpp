#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;


int main()
{system ("color 8B" );
	int dia,salas,inicio;
	int lunes,sala,elpaseo,funcion,tiquetes,total,actores,san,magia;//lunes
	int miercoles;//miercoles
	int viernes;//viernes
	int sabado;//sabado
	int domingo;//domingo
	bool salida=false;
    int numero;
    int opinion;
    char nombre[30];
    int identificacion,edad,dia1,mes,ano,salapeli,calificacion,retornar;
	
    std::cout<<"\n\t ************************";
    std::cout<<"\n\t*     CINE UNICOLOMBIA    *";
    std::cout<<"\n\t*          HECHO          *";
    std::cout<<"\n\t*           POR           *";
    std::cout<<"\n\t*                         *";
    std::cout<<"\n\t*                         *";
    std::cout<<"\n\t*     WALTER GUEVARA      *";
    std::cout<<"\n\t*            &            *";
    std::cout<<"\n\t*    ALEJANDRO SABOGAL    *";
    std::cout<<"\n\t ************************";
    
    std::cout<<"\n\n\tPRESIONE ENTER PARA CONTINUAR\n\n";
    getch();
    
do{
    
	 std::cout<<"\n\n\n\n\tINGRESE LA CLAVE:\t\t--> ";std::cin>>numero;
	
     std::cout<<"\n\n\t\tValidando .";

     for(int i=0;i<9;i++){
        std::cout<<".";
        Sleep(100);}
     if(numero==0000)
        salida=true;


  }while(!salida);
    std::cout<<"\n\n";
    std::cout<<"\n\n\t\tBIENVENIDO";
    getch();
    
    inicio:
    
    std::cout<<"\n\n\t\t  TARIFA\n";
    std::cout<<"\nPrecio de taquilla:\t$8.000\tPor persona\n";
    std::cout<<"\n\n\tPRESIONE ENTER PARA CONTINUAR\n\n";
    getch();
    std::cout<<"\n\n\t\tCRONOGRAMA\n";
    std::cout<<"\n\n\t1. Lunes     << 12 pm a 6 pm >>";
    std::cout<<"\n\n\t2. Miercoles << 12 pm a 6 pm >>";
    std::cout<<"\n\n\t3. Viernes   <<  2 pm a 8 pm >>";
    std::cout<<"\n\n\t4. Sabado    <<  4 pm a 10 pm >>";
    std::cout<<"\n\n\t5. Domingo   <<  4 pm a 10 pm >>";
    std::cout<<"\n\n\t6. Salir";
    std::cout<<"\n\n";
    std::cout<<"Eliga el dia que desee:\t";
    std::cin>>dia;
    std::cout<<"\n\n";
    
    switch(dia)
    {
    	case 1:
    		std::cout<<"\n\n\n\tUsted selecciono el dia Lunes\n";
    		std::cout<<"\n\tPromocion:\tSI\n";
    		std::cout<<"\n\t<<12pm a 2pm>> 50% de descuento en taquilla\n";
    		std::cout<<"\n\n\t1. Desea continuar \t 2. Regresar al menu \t 3.Salir\n";
    		std::cout<<"\n\t\t--> ";
    		std::cin>>lunes;
    		
    		switch(lunes)
			{salas:
				case 1:
					std::cout<<"\n\n \t 1. Sala A \t 2. Sala B \t 3.Sala C\n";
					std::cout<<"\n\t\t--> ";
    		        std::cin>>sala;
    		        std::cout<<"\n\n";
    		        
    		        switch(sala)
    		        {
    		        	case 1:sala:
    		        		std::cout<<"\n\n\t\tSALA A";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t30\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tEl Paseo";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>elpaseo;
    		                
    		                switch(elpaseo)
    		                {
    		                	case 1:elp:
    		                		std::cout<<"\n\n \t 1. 12:30 pm a 2:00 pm  <<Promocion 50% en taquilla>>\n";
    		                     	std::cout<<"\n\n \t 2.  2:30 pm a 4:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala A\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique;
    		                        	    }
    		                        		  else
											       total=tiquetes*4000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique;
    		                        		  goto fin;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto sala;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tEl Paseo\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol,Ingles y Portugues\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2010\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tDespues de 11 anos de trabajo continuo\n";
    		                    	std::cout<<"\n\t\t\t\tAlex Peinado decide pasar unas vacaciones\n";
    		                	    std::cout<<"\n\t\t\t\tinolvidables junto a su familia. Asi que\n";
    		                	    std::cout<<"\n\t\t\t\temprende un viaje rumbo a Cartagena,junto a su\n";
    		                	    std::cout<<"\n\t\t\t\tesposa, sus dos hijos,su perro y su insufrible\n";
    		                	    std::cout<<"\n\t\t\t\tsuegra.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tHarold Trompetero\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tDago Garcia\n";
    		                	    std::cout<<"\n\t3. Antonio Sanint:\t(Alex Peinado)\n";
    		                	    std::cout<<"\n\t4. Carolina Gomez:\t(Hortensia de Peinado)\n";
    		                	    std::cout<<"\n\t5. Maria Giraldo:\t(Carmelita)\n";
    		                	    std::cout<<"\n\t6. Adelaida Lopez:\t(Milena Peinado)\n";
    		                	    std::cout<<"\n\t7. Miguel Canal:\t(Octavio Peinado)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tHarold Trompetero\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t12 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tDago Garcia\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t25 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAntonio Sanint\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tManizales,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t8 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tCarolina Gomez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tMaria Giraldo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t5 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tAdelaida Lopez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t2 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tMiguel Canal\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tAntioquia,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act;
    		                	    	case 8:goto sala;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act;
    		                	    }
    		                	case 3:goto salas;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto sala;	
    		                }
    		            case 2:salab:
    		        		std::cout<<"\n\n\t\tSALA B";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t40\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tSan Andresito";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>san;
    		                
    		                switch(san)
    		                {
    		                	case 1:elp1:
    		                		std::cout<<"\n\n \t 1. 12:30 pm a 2:00 pm  <<Promocion 50% en taquilla>>\n";
    		                     	std::cout<<"\n\n \t 2.  2:30 pm a 4:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala B\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique1:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique1;
    		                        	    }
    		                        		  else
											       total=tiquetes*4000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique1;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique1;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salab;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp1;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tSan Andresito\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia,accion y ficcion\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2012\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tSanandresito, es la historia de un \n";
    		                    	std::cout<<"\n\t\t\t\tagente de la policia que esta asignado como\n";
    		                	    std::cout<<"\n\t\t\t\tconductor de seguridad.Por cuenta de su trabajo\n";
    		                	    std::cout<<"\n\t\t\t\tvisita frecuentemente los almacenes del sector\n";
    		                	    std::cout<<"\n\t\t\t\tdonde aprovecha su cargo para obtener uno que\n";
    		                	    std::cout<<"\n\t\t\t\totro favor y regalo.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act1:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tAlessandro Angulo\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tJorg Hiller\n";
    		                	    std::cout<<"\n\t3. Andres Parra:\t(Agente Tenorio)\n";
    		                	    std::cout<<"\n\t4. Veronica Orozco:\t(Sargento Fanny)\n";
    		                	    std::cout<<"\n\t5. Jimmy Vasquez:\t(Felix Heredita)\n";
    		                	    std::cout<<"\n\t6. Carolina Acevedo:\t(Tatiana)\n";
    		                	    std::cout<<"\n\t7. Rodrigo Candamil:\t(Jeremias Ladino)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tAlessando Angulo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act1;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tJorg Hiller\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act1;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAndres Parra\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act1;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tVeronica Orozco\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act1;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tJimmy Vasquez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCucuta,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act1;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tCarolina Acevedo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tIbague,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act1;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tRodrigo Candamil\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act1;
    		                	    	case 8:goto salab;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act1;
    		                	    }
    		                	case 3:goto salas;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salab;	
    		                }
    		             case 3:salac:
    		        		std::cout<<"\n\n\t\tSALA C";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t50\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tMagia Salvaje";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>magia;
    		                
    		                switch(magia)
    		                {
    		                	case 1:elp2:
    		                		std::cout<<"\n\n \t 1. 12:30 pm a 2:00 pm  <<Promocion 50% en taquilla>>\n";
    		                     	std::cout<<"\n\n \t 2.  2:30 pm a 4:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala C\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique2:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique2;
    		                        	    }
    		                        		  else
											       total=tiquetes*4000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique2;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique2;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salac;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp2;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tColombia Magia Salvaje\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tDocumental\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2015\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tColombia Magia Salvaje es una aventura\n";
    		                    	std::cout<<"\n\t\t\t\tque llevara a los colombianos por paisajes\n";
    		                	    std::cout<<"\n\t\t\t\tinexplorados y a conocer especies encantadoras\n";
    		                	    std::cout<<"\n\t\t\t\tde un pais aun desconocido por muchos.\n";
    		                	    std::cout<<"\n\t\t\t\tColombia Magia Salvaje es la cinta del mundo\n";
    		                	    std::cout<<"\n\t\t\t\tnatural as ambiciosa relizada en el pais.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act2:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t3. Caiman Llanero\n";
    		                	    std::cout<<"\n\t4. Colibri\n";
    		                	    std::cout<<"\n\t5. Oso Perezoso\n";
    		                	    std::cout<<"\n\t6. Oso de Anteojos\n";
    		                	    std::cout<<"\n\t7. Jaguar\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act2;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act2;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tCaiman Llanero\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tOrinoco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act2;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tColibri\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act2;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tOso Perezoso\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act2;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tOso de Anteojos\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tCordillera de los Andes,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act2;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tJaguar\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tAmazonia,Orinoco,Choco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act2;
    		                	    	case 8:goto salac;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act2;
    		                	    }
    		                	case 3:goto salas;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salac;	
    		                }
    		            default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salas;	
					}
				case 2:goto inicio;
				break;
				case 3:goto fin;
				break;
				default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto inicio;	
						
		   }
		case 2:
    		std::cout<<"\n\n\n\tUsted selecciono el dia Miercoles\n";
    		std::cout<<"\n\tPromocion:\tSI\n";
    		std::cout<<"\n\t<<2pm a 4pm>> 50% de descuento en taquilla\n";
    		std::cout<<"\n\n\t1. Desea continuar \t 2. Regresar al menu \t 3.Salir\n";
    		std::cout<<"\n\t\t--> ";
    		std::cin>>miercoles;
    		
    		switch(miercoles)
			{salas1:
				case 1:
					std::cout<<"\n\n \t 1. Sala A \t 2. Sala B \t 3.Sala C\n";
					std::cout<<"\n\t\t--> ";
    		        std::cin>>sala;
    		        std::cout<<"\n\n";
    		        
    		        switch(sala)
    		        {
    		        	case 1:sala1:
    		        		std::cout<<"\n\n\t\tSALA A";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t30\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tEl Paseo";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>elpaseo;
    		                
    		                switch(elpaseo)
    		                {
    		                	case 1:elp3:
    		                		std::cout<<"\n\n \t 1. 12:30 pm a 2:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  2:30 pm a 4:00 pm  <<Promocion 50% en taquilla>>\n";
    		                	    std::cout<<"\n\n \t 3.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala A\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique3:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique3;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique3;
    		                        	    }
    		                        		  else
											       total=tiquetes*4000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique3;
    		                        		  goto fin;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto sala1;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp3;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tEl Paseo\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol,Ingles y Portugues\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2010\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tDespues de 11 anos de trabajo continuo\n";
    		                    	std::cout<<"\n\t\t\t\tAlex Peinado decide pasar unas vacaciones\n";
    		                	    std::cout<<"\n\t\t\t\tinolvidables junto a su familia. Asi que\n";
    		                	    std::cout<<"\n\t\t\t\temprende un viaje rumbo a Cartagena,junto a su\n";
    		                	    std::cout<<"\n\t\t\t\tesposa, sus dos hijos,su perro y su insufrible\n";
    		                	    std::cout<<"\n\t\t\t\tsuegra.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act3:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tHarold Trompetero\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tDago Garcia\n";
    		                	    std::cout<<"\n\t3. Antonio Sanint:\t(Alex Peinado)\n";
    		                	    std::cout<<"\n\t4. Carolina Gomez:\t(Hortensia de Peinado)\n";
    		                	    std::cout<<"\n\t5. Maria Giraldo:\t(Carmelita)\n";
    		                	    std::cout<<"\n\t6. Adelaida Lopez:\t(Milena Peinado)\n";
    		                	    std::cout<<"\n\t7. Miguel Canal:\t(Octavio Peinado)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tHarold Trompetero\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t12 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act3;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tDago Garcia\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t25 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act3;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAntonio Sanint\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tManizales,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t8 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tCarolina Gomez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act3;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tMaria Giraldo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t5 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act3;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tAdelaida Lopez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t2 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act3;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tMiguel Canal\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tAntioquia,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act3;
    		                	    	case 8:goto sala1;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act3;
    		                	    }
    		                	case 3:goto salas1;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto sala1;	
    		                }
    		            case 2:salab1:
    		        		std::cout<<"\n\n\t\tSALA B";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t40\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tSan Andresito";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>san;
    		                
    		                switch(san)
    		                {
    		                	case 1:elp4:
    		                		std::cout<<"\n\n \t 1. 12:30 pm a 2:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  2:30 pm a 4:00 pm  <<Promocion 50% en taquilla>>\n";
    		                	    std::cout<<"\n\n \t 3.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala B\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique4:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique4;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique4;
    		                        	    }
    		                        		  else
											       total=tiquetes*4000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique4;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salab1;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp3;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tSan Andresito\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia,accion y ficcion\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2012\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tSanandresito, es la historia de un \n";
    		                    	std::cout<<"\n\t\t\t\tagente de la policia que esta asignado como\n";
    		                	    std::cout<<"\n\t\t\t\tconductor de seguridad.Por cuenta de su trabajo\n";
    		                	    std::cout<<"\n\t\t\t\tvisita frecuentemente los almacenes del sector\n";
    		                	    std::cout<<"\n\t\t\t\tdonde aprovecha su cargo para obtener uno que\n";
    		                	    std::cout<<"\n\t\t\t\totro favor y regalo.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act4:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tAlessandro Angulo\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tJorg Hiller\n";
    		                	    std::cout<<"\n\t3. Andres Parra:\t(Agente Tenorio)\n";
    		                	    std::cout<<"\n\t4. Veronica Orozco:\t(Sargento Fanny)\n";
    		                	    std::cout<<"\n\t5. Jimmy Vasquez:\t(Felix Heredita)\n";
    		                	    std::cout<<"\n\t6. Carolina Acevedo:\t(Tatiana)\n";
    		                	    std::cout<<"\n\t7. Rodrigo Candamil:\t(Jeremias Ladino)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tAlessando Angulo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act4;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tJorg Hiller\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act4;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAndres Parra\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act4;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tVeronica Orozco\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act4;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tJimmy Vasquez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCucuta,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act4;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tCarolina Acevedo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tIbague,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act4;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tRodrigo Candamil\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act4;
    		                	    	case 8:goto salab1;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act4;
    		                	    }
    		                	case 3:goto salas1;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salab1;	
    		                }
    		             case 3:salac1:
    		        		std::cout<<"\n\n\t\tSALA C";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t50\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tMagia Salvaje";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>magia;
    		                
    		                switch(magia)
    		                {
    		                	case 1:elp5:
    		                		std::cout<<"\n\n \t 1. 12:30 pm a 2:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  2:30 pm a 4:00 pm  <<Promocion 50% en taquilla>>\n";
    		                	    std::cout<<"\n\n \t 3.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala C\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique5:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique5;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique5;
    		                        	    }
    		                        		  else
											       total=tiquetes*4000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique5;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salac1;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp5;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tColombia Magia Salvaje\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tDocumental\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2015\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tColombia Magia Salvaje es una aventura\n";
    		                    	std::cout<<"\n\t\t\t\tque llevara a los colombianos por paisajes\n";
    		                	    std::cout<<"\n\t\t\t\tinexplorados y a conocer especies encantadoras\n";
    		                	    std::cout<<"\n\t\t\t\tde un pais aun desconocido por muchos.\n";
    		                	    std::cout<<"\n\t\t\t\tColombia Magia Salvaje es la cinta del mundo\n";
    		                	    std::cout<<"\n\t\t\t\tnatural as ambiciosa relizada en el pais.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act5:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t3. Caiman Llanero\n";
    		                	    std::cout<<"\n\t4. Colibri\n";
    		                	    std::cout<<"\n\t5. Oso Perezoso\n";
    		                	    std::cout<<"\n\t6. Oso de Anteojos\n";
    		                	    std::cout<<"\n\t7. Jaguar\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act5;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act5;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tCaiman Llanero\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tOrinoco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act5;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tColibri\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act5;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tOso Perezoso\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act5;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tOso de Anteojos\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tCordillera de los Andes,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act5;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tJaguar\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tAmazonia,Orinoco,Choco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act5;
    		                	    	case 8:goto salac1;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act5;
    		                	    }
    		                	case 3:goto salas1;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salac1;	
    		                }
    		            default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salas1;
										    
			        }
			    case 2:goto inicio;
				break;
				case 3:goto fin;
				break;
				default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto inicio;
				
    		
    		}
    	case 3:
    		std::cout<<"\n\n\n\tUsted selecciono el dia Viernes\n";
    		std::cout<<"\n\tPromocion:\tSI\n";
    		std::cout<<"\n\t<<6pm a 8pm>> 50% de descuento en taquilla\n";
    		std::cout<<"\n\n\t1. Desea continuar \t 2. Regresar al menu \t 3.Salir\n";
    		std::cout<<"\n\t\t--> ";
    		std::cin>>viernes;
    		
    		switch(viernes)
			{salas2:
				case 1:
					std::cout<<"\n\n \t 1. Sala A \t 2. Sala B \t 3.Sala C\n";
					std::cout<<"\n\t\t--> ";
    		        std::cin>>sala;
    		        std::cout<<"\n\n";
    		        
    		        switch(sala)
    		        {
    		        	case 1:sala2:
    		        		std::cout<<"\n\n\t\tSALA A";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t30\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tEl Paseo";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>elpaseo;
    		                
    		                switch(elpaseo)
    		                {
    		                	case 1:elp6:
    		                		std::cout<<"\n\n \t 1.  2:30 pm a 4:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  6:30 pm a 8:00 pm  <<Promocion 50% en taquilla>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala A\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique6:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique6;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique6;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique6;
    		                        		  goto fin;
    		                        	    }
    		                        		  else
											       total=tiquetes*4000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto sala2;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp6;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tEl Paseo\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol,Ingles y Portugues\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2010\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tDespues de 11 anos de trabajo continuo\n";
    		                    	std::cout<<"\n\t\t\t\tAlex Peinado decide pasar unas vacaciones\n";
    		                	    std::cout<<"\n\t\t\t\tinolvidables junto a su familia. Asi que\n";
    		                	    std::cout<<"\n\t\t\t\temprende un viaje rumbo a Cartagena,junto a su\n";
    		                	    std::cout<<"\n\t\t\t\tesposa, sus dos hijos,su perro y su insufrible\n";
    		                	    std::cout<<"\n\t\t\t\tsuegra.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act6:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tHarold Trompetero\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tDago Garcia\n";
    		                	    std::cout<<"\n\t3. Antonio Sanint:\t(Alex Peinado)\n";
    		                	    std::cout<<"\n\t4. Carolina Gomez:\t(Hortensia de Peinado)\n";
    		                	    std::cout<<"\n\t5. Maria Giraldo:\t(Carmelita)\n";
    		                	    std::cout<<"\n\t6. Adelaida Lopez:\t(Milena Peinado)\n";
    		                	    std::cout<<"\n\t7. Miguel Canal:\t(Octavio Peinado)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tHarold Trompetero\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t12 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act6;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tDago Garcia\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t25 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act6;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAntonio Sanint\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tManizales,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t8 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act6;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tCarolina Gomez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act6;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tMaria Giraldo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t5 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act6;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tAdelaida Lopez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t2 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act6;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tMiguel Canal\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tAntioquia,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act6;
    		                	    	case 8:goto sala2;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act6;
    		                	    }
    		                	case 3:goto salas2;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto sala2;	
    		                }
    		            case 2:salab2:
    		        		std::cout<<"\n\n\t\tSALA B";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t40\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tSan Andresito";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>san;
    		                
    		                switch(san)
    		                {
    		                	case 1:elp7:
    		                		std::cout<<"\n\n \t 1.  2:30 pm a 4:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  6:30 pm a 8:00 pm  <<Promocion 50% en taquilla>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala B\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique7:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique7;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique7;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique7;
    		                        	    }
    		                        		  else
											       total=tiquetes*4000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salab2;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp7;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tSan Andresito\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia,accion y ficcion\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2012\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tSanandresito, es la historia de un \n";
    		                    	std::cout<<"\n\t\t\t\tagente de la policia que esta asignado como\n";
    		                	    std::cout<<"\n\t\t\t\tconductor de seguridad.Por cuenta de su trabajo\n";
    		                	    std::cout<<"\n\t\t\t\tvisita frecuentemente los almacenes del sector\n";
    		                	    std::cout<<"\n\t\t\t\tdonde aprovecha su cargo para obtener uno que\n";
    		                	    std::cout<<"\n\t\t\t\totro favor y regalo.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act7:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tAlessandro Angulo\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tJorg Hiller\n";
    		                	    std::cout<<"\n\t3. Andres Parra:\t(Agente Tenorio)\n";
    		                	    std::cout<<"\n\t4. Veronica Orozco:\t(Sargento Fanny)\n";
    		                	    std::cout<<"\n\t5. Jimmy Vasquez:\t(Felix Heredita)\n";
    		                	    std::cout<<"\n\t6. Carolina Acevedo:\t(Tatiana)\n";
    		                	    std::cout<<"\n\t7. Rodrigo Candamil:\t(Jeremias Ladino)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tAlessando Angulo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act7;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tJorg Hiller\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act7;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAndres Parra\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act7;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tVeronica Orozco\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act7;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tJimmy Vasquez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCucuta,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act7;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tCarolina Acevedo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tIbague,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act7;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tRodrigo Candamil\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act7;
    		                	    	case 8:goto salab2;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act7;
    		                	    }
    		                	case 3:goto salas2;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salab2;	
    		                }
    		             case 3:salac2:
    		        		std::cout<<"\n\n\t\tSALA C";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t50\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tMagia Salvaje";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>magia;
    		                
    		                switch(magia)
    		                {
    		                	case 1:elp8:
    		                		std::cout<<"\n\n \t 1.  2:30 pm a 4:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  6:30 pm a 8:00 pm  <<Promocion 50% en taquilla>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala C\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique8:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique8;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique8;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique8;
    		                        	    }
    		                        		  else
											       total=tiquetes*4000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salac2;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp8;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tColombia Magia Salvaje\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tDocumental\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2015\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tColombia Magia Salvaje es una aventura\n";
    		                    	std::cout<<"\n\t\t\t\tque llevara a los colombianos por paisajes\n";
    		                	    std::cout<<"\n\t\t\t\tinexplorados y a conocer especies encantadoras\n";
    		                	    std::cout<<"\n\t\t\t\tde un pais aun desconocido por muchos.\n";
    		                	    std::cout<<"\n\t\t\t\tColombia Magia Salvaje es la cinta del mundo\n";
    		                	    std::cout<<"\n\t\t\t\tnatural as ambiciosa relizada en el pais.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act8:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t3. Caiman Llanero\n";
    		                	    std::cout<<"\n\t4. Colibri\n";
    		                	    std::cout<<"\n\t5. Oso Perezoso\n";
    		                	    std::cout<<"\n\t6. Oso de Anteojos\n";
    		                	    std::cout<<"\n\t7. Jaguar\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act8;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act8;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tCaiman Llanero\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tOrinoco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act8;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tColibri\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act8;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tOso Perezoso\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act8;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tOso de Anteojos\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tCordillera de los Andes,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act8;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tJaguar\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tAmazonia,Orinoco,Choco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act8;
    		                	    	case 8:goto salac2;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act8;
    		                	    }
    		                	case 3:goto salas2;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salac2;	
    		                }
    		            default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salas2;
										    
			        }
			    case 2:goto inicio;
				break;
				case 3:goto fin;
				break;
				default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto inicio;
				
    		
    		}	
    	case 4:
    		std::cout<<"\n\n\n\tUsted selecciono el dia Sabado\n";
    		std::cout<<"\n\tPromocion:\tNO\n";
    		std::cout<<"\n\n\t1. Desea continuar \t 2. Regresar al menu \t 3.Salir\n";
    		std::cout<<"\n\t\t--> ";
    		std::cin>>sabado;
    		
    		switch(sabado)
			{salas3:
				case 1:
					std::cout<<"\n\n \t 1. Sala A \t 2. Sala B \t 3.Sala C\n";
					std::cout<<"\n\t\t--> ";
    		        std::cin>>sala;
    		        std::cout<<"\n\n";
    		        
    		        switch(sala)
    		        {
    		        	case 1:sala3:
    		        		std::cout<<"\n\n\t\tSALA A";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t30\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tEl Paseo";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>elpaseo;
    		                
    		                switch(elpaseo)
    		                {
    		                	case 1:elp9:
    		                		std::cout<<"\n\n \t 1.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  6:30 pm a 8:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  8:30 pm a 10:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala A\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique9:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique9;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique9;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique9;
    		                        		  goto fin;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto sala3;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp9;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tEl Paseo\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol,Ingles y Portugues\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2010\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tDespues de 11 anos de trabajo continuo\n";
    		                    	std::cout<<"\n\t\t\t\tAlex Peinado decide pasar unas vacaciones\n";
    		                	    std::cout<<"\n\t\t\t\tinolvidables junto a su familia. Asi que\n";
    		                	    std::cout<<"\n\t\t\t\temprende un viaje rumbo a Cartagena,junto a su\n";
    		                	    std::cout<<"\n\t\t\t\tesposa, sus dos hijos,su perro y su insufrible\n";
    		                	    std::cout<<"\n\t\t\t\tsuegra.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act9:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tHarold Trompetero\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tDago Garcia\n";
    		                	    std::cout<<"\n\t3. Antonio Sanint:\t(Alex Peinado)\n";
    		                	    std::cout<<"\n\t4. Carolina Gomez:\t(Hortensia de Peinado)\n";
    		                	    std::cout<<"\n\t5. Maria Giraldo:\t(Carmelita)\n";
    		                	    std::cout<<"\n\t6. Adelaida Lopez:\t(Milena Peinado)\n";
    		                	    std::cout<<"\n\t7. Miguel Canal:\t(Octavio Peinado)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tHarold Trompetero\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t12 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act9;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tDago Garcia\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t25 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act9;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAntonio Sanint\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tManizales,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t8 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act9;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tCarolina Gomez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act9;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tMaria Giraldo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t5 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act9;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tAdelaida Lopez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t2 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act9;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tMiguel Canal\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tAntioquia,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act9;
    		                	    	case 8:goto sala3;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act9;
    		                	    }
    		                	case 3:goto salas3;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto sala3;	
    		                }
    		            case 2:salab3:
    		        		std::cout<<"\n\n\t\tSALA B";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t40\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tSan Andresito";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>san;
    		                
    		                switch(san)
    		                {
    		                	case 1:elp10:
    		                		std::cout<<"\n\n \t 1.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  6:30 pm a 8:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  8:30 pm a 10:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala B\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique10:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique10;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique10;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique10;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salab3;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp10;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tSan Andresito\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia,accion y ficcion\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2012\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tSanandresito, es la historia de un \n";
    		                    	std::cout<<"\n\t\t\t\tagente de la policia que esta asignado como\n";
    		                	    std::cout<<"\n\t\t\t\tconductor de seguridad.Por cuenta de su trabajo\n";
    		                	    std::cout<<"\n\t\t\t\tvisita frecuentemente los almacenes del sector\n";
    		                	    std::cout<<"\n\t\t\t\tdonde aprovecha su cargo para obtener uno que\n";
    		                	    std::cout<<"\n\t\t\t\totro favor y regalo.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act10:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tAlessandro Angulo\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tJorg Hiller\n";
    		                	    std::cout<<"\n\t3. Andres Parra:\t(Agente Tenorio)\n";
    		                	    std::cout<<"\n\t4. Veronica Orozco:\t(Sargento Fanny)\n";
    		                	    std::cout<<"\n\t5. Jimmy Vasquez:\t(Felix Heredita)\n";
    		                	    std::cout<<"\n\t6. Carolina Acevedo:\t(Tatiana)\n";
    		                	    std::cout<<"\n\t7. Rodrigo Candamil:\t(Jeremias Ladino)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tAlessando Angulo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act10;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tJorg Hiller\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act10;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAndres Parra\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act10;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tVeronica Orozco\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act10;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tJimmy Vasquez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCucuta,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act10;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tCarolina Acevedo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tIbague,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act10;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tRodrigo Candamil\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act10;
    		                	    	case 8:goto salab3;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act10;
    		                	    }
    		                	case 3:goto salas3;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salab3;	
    		                }
    		             case 3:salac3:
    		        		std::cout<<"\n\n\t\tSALA C";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t50\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tMagia Salvaje";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>magia;
    		                
    		                switch(magia)
    		                {
    		                	case 1:elp11:
    		                		std::cout<<"\n\n \t 1.  2:30 pm a 4:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  6:30 pm a 8:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala C\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique11:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique11;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique11;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique11;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salac3;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp11;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tColombia Magia Salvaje\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tDocumental\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2015\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tColombia Magia Salvaje es una aventura\n";
    		                    	std::cout<<"\n\t\t\t\tque llevara a los colombianos por paisajes\n";
    		                	    std::cout<<"\n\t\t\t\tinexplorados y a conocer especies encantadoras\n";
    		                	    std::cout<<"\n\t\t\t\tde un pais aun desconocido por muchos.\n";
    		                	    std::cout<<"\n\t\t\t\tColombia Magia Salvaje es la cinta del mundo\n";
    		                	    std::cout<<"\n\t\t\t\tnatural as ambiciosa relizada en el pais.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act11:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t3. Caiman Llanero\n";
    		                	    std::cout<<"\n\t4. Colibri\n";
    		                	    std::cout<<"\n\t5. Oso Perezoso\n";
    		                	    std::cout<<"\n\t6. Oso de Anteojos\n";
    		                	    std::cout<<"\n\t7. Jaguar\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act11;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act11;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tCaiman Llanero\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tOrinoco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act11;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tColibri\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act11;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tOso Perezoso\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act11;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tOso de Anteojos\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tCordillera de los Andes,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act11;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tJaguar\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tAmazonia,Orinoco,Choco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act11;
    		                	    	case 8:goto salac3;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act11;
    		                	    }
    		                	case 3:goto salas3;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salac3;	
    		                }
    		            default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salas3;
										    
			        }
			    case 2:goto inicio;
				break;
				case 3:goto fin;
				break;
				default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto inicio;
				
    		
    		}
    	case 5:
    		std::cout<<"\n\n\n\tUsted selecciono el dia Domingo\n";
    		std::cout<<"\n\tPromocion:\tNO\n";
    		std::cout<<"\n\n\t1. Desea continuar \t 2. Regresar al menu \t 3.Salir\n";
    		std::cout<<"\n\t\t--> ";
    		std::cin>>domingo;
    		
    		switch(domingo)
			{salas4:
				case 1:
					std::cout<<"\n\n \t 1. Sala A \t 2. Sala B \t 3.Sala C\n";
					std::cout<<"\n\t\t--> ";
    		        std::cin>>sala;
    		        std::cout<<"\n\n";
    		        
    		        switch(sala)
    		        {
    		        	case 1:sala4:
    		        		std::cout<<"\n\n\t\tSALA A";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t30\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tEl Paseo";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>elpaseo;
    		                
    		                switch(elpaseo)
    		                {
    		                	case 1:elp12:
    		                		std::cout<<"\n\n \t 1.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  6:30 pm a 8:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  8:30 pm a 10:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala A\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique12:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique12;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique12;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>30)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala A solo cuenta con 30 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique12;
    		                        		  goto fin;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto sala4;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp12;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tEl Paseo\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol,Ingles y Portugues\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2010\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tDespues de 11 anos de trabajo continuo\n";
    		                    	std::cout<<"\n\t\t\t\tAlex Peinado decide pasar unas vacaciones\n";
    		                	    std::cout<<"\n\t\t\t\tinolvidables junto a su familia. Asi que\n";
    		                	    std::cout<<"\n\t\t\t\temprende un viaje rumbo a Cartagena,junto a su\n";
    		                	    std::cout<<"\n\t\t\t\tesposa, sus dos hijos,su perro y su insufrible\n";
    		                	    std::cout<<"\n\t\t\t\tsuegra.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act12:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tHarold Trompetero\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tDago Garcia\n";
    		                	    std::cout<<"\n\t3. Antonio Sanint:\t(Alex Peinado)\n";
    		                	    std::cout<<"\n\t4. Carolina Gomez:\t(Hortensia de Peinado)\n";
    		                	    std::cout<<"\n\t5. Maria Giraldo:\t(Carmelita)\n";
    		                	    std::cout<<"\n\t6. Adelaida Lopez:\t(Milena Peinado)\n";
    		                	    std::cout<<"\n\t7. Miguel Canal:\t(Octavio Peinado)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tHarold Trompetero\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t12 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act12;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tDago Garcia\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t25 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act12;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAntonio Sanint\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tManizales,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t8 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act12;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tCarolina Gomez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act12;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tMaria Giraldo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t5 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act12;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tAdelaida Lopez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t2 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act12;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tMiguel Canal\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tAntioquia,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act12;
    		                	    	case 8:goto sala4;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act12;
    		                	    }
    		                	case 3:goto salas4;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto sala4;	
    		                }
    		            case 2:salab4:
    		        		std::cout<<"\n\n\t\tSALA B";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t40\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tSan Andresito";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>san;
    		                
    		                switch(san)
    		                {
    		                	case 1:elp13:
    		                		std::cout<<"\n\n \t 1.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  6:30 pm a 8:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  8:30 pm a 10:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala B\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique13:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique13;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique13;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>40)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala B solo cuenta con 40 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique13;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salab4;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp13;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tSan Andresito\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tComedia,accion y ficcion\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2012\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tSanandresito, es la historia de un \n";
    		                    	std::cout<<"\n\t\t\t\tagente de la policia que esta asignado como\n";
    		                	    std::cout<<"\n\t\t\t\tconductor de seguridad.Por cuenta de su trabajo\n";
    		                	    std::cout<<"\n\t\t\t\tvisita frecuentemente los almacenes del sector\n";
    		                	    std::cout<<"\n\t\t\t\tdonde aprovecha su cargo para obtener uno que\n";
    		                	    std::cout<<"\n\t\t\t\totro favor y regalo.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act13:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tAlessandro Angulo\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tJorg Hiller\n";
    		                	    std::cout<<"\n\t3. Andres Parra:\t(Agente Tenorio)\n";
    		                	    std::cout<<"\n\t4. Veronica Orozco:\t(Sargento Fanny)\n";
    		                	    std::cout<<"\n\t5. Jimmy Vasquez:\t(Felix Heredita)\n";
    		                	    std::cout<<"\n\t6. Carolina Acevedo:\t(Tatiana)\n";
    		                	    std::cout<<"\n\t7. Rodrigo Candamil:\t(Jeremias Ladino)\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tAlessando Angulo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t10 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act13;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tJorg Hiller\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act13;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tAndres Parra\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act13;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tVeronica Orozco\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tBogota,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act13;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tJimmy Vasquez\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCucuta,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t4 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act13;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tCarolina Acevedo\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tIbague,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t20 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act13;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tRodrigo Candamil\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tCali,Colombia\n";
    		                	    		std::cout<<"\n\tPeliculas:\t1 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act13;
    		                	    	case 8:goto salab4;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act13;
    		                	    }
    		                	case 3:goto salas4;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salab4;	
    		                }
    		             case 3:salac4:
    		        		std::cout<<"\n\n\t\tSALA C";
    		        		std::cout<<"\n\n\tPELICULA DISPONIBLE EN ESTA SALA Y NUMERO DE SILLAS\n";
    		        		std::cout<<"\n\t\tSillas disponibles:\t50\n";
    		        		std::cout<<"\n\t\tPelicula:\t\tMagia Salvaje";
    		        		std::cout<<"\n\n \t 1. Ver funciones \t 2. Ver informacion \t 3. Regresar a las salas \n";
					        std::cout<<"\n\t\t--> ";
    		                std::cin>>magia;
    		                
    		                switch(magia)
    		                {
    		                	case 1:elp14:
    		                		std::cout<<"\n\n \t 1.  2:30 pm a 4:00 pm  <<Promocion NO>>\n";
    		                     	std::cout<<"\n\n \t 2.  4:30 pm a 6:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 3.  6:30 pm a 8:00 pm  <<Promocion NO>>\n";
    		                	    std::cout<<"\n\n \t 4.  Regresar a Sala C\n";
									std::cout<<"\n\n\tElija una opcion:\n";
    		                	    std::cout<<"\n\t\t--> ";
    		                        std::cin>>funcion;
    		                        
    		                        switch(funcion)
    		                        {
    		                        	cantique14:
    		                        	case 1:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique14;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 2:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique14;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 3:
    		                        		std::cout<<"\n\nIngrese el numero de tiquetes que desea:\t--> ";
    		                        		std::cin>>tiquetes;
    		                        		
    		                        		if(tiquetes>50)
    		                        		{
    		                        		  std::cout<<"\n\nLa Sala C solo cuenta con 50 sillas\n\n";
    		                        		  getch();
    		                        		  goto cantique14;
    		                        	    }
    		                        		  else
											       total=tiquetes*8000;
											  	   std::cout<<"\n\nTOTAL A PAGAR:\t"<<total;
											  	   std::cout<<"\n\n";
											  	   goto fin;
										break;
										case 4: 
										    goto salac4;
										default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto elp14;
    		                        }
    		                    case 2:
    		                    	std::cout<<"\n\n";
    		                    	std::cout<<"\n\n\t\tINFORMACION DE LA PELICULA\n";
    		                    	std::cout<<"\n\tTitulo original:\tColombia Magia Salvaje\n";
    		                    	std::cout<<"\n\tGenero:\t\t\tDocumental\n";
    		                    	std::cout<<"\n\tIdioma:\t\t\tEspanol\n";
    		                    	std::cout<<"\n\tPais:\t\t\tColombia\n";
    		                    	std::cout<<"\n\tAno de produccion:\t2015\n";
    		                    	std::cout<<"\n\tDuracion:\t\t90 minutos\n";
    		                    	std::cout<<"\n\tClasificacion:\t\tApta para todo publico\n";
    		                    	std::cout<<"\n\tSinopsis:\t\tColombia Magia Salvaje es una aventura\n";
    		                    	std::cout<<"\n\t\t\t\tque llevara a los colombianos por paisajes\n";
    		                	    std::cout<<"\n\t\t\t\tinexplorados y a conocer especies encantadoras\n";
    		                	    std::cout<<"\n\t\t\t\tde un pais aun desconocido por muchos.\n";
    		                	    std::cout<<"\n\t\t\t\tColombia Magia Salvaje es la cinta del mundo\n";
    		                	    std::cout<<"\n\t\t\t\tnatural as ambiciosa relizada en el pais.\n";
    		                	    std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	    getch();
    		                	    act14:
    		                	    std::cout<<"\n\tDirectores y Reparto:\n\n";
    		                	    std::cout<<"\n\t1. Director:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t2. Guion:\t\tMike Slee\n";
    		                	    std::cout<<"\n\t3. Caiman Llanero\n";
    		                	    std::cout<<"\n\t4. Colibri\n";
    		                	    std::cout<<"\n\t5. Oso Perezoso\n";
    		                	    std::cout<<"\n\t6. Oso de Anteojos\n";
    		                	    std::cout<<"\n\t7. Jaguar\n";
    		                	    std::cout<<"\n\t8. Salir\n\n";
    		                	    std::cout<<"\n\n\tIngrese un numero:\t--> ";
    		                	    std::cin>>actores;
    		                	    
    		                	    switch(actores)
    		                	    {
    		                	    	case 1:
    		                	    		std::cout<<"\n\n\tDirector:\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act14;
    		                	    	case 2:
    		                	    		std::cout<<"\n\n\tGuion:\t\tMike Slee\n";
    		                	    		std::cout<<"\n\tNacionalidad:\tWindlesham,Surrey,Inglaterra\n";
    		                	    		std::cout<<"\n\tPeliculas:\t19 Participaciones\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act14;
    		                	    	case 3:
    		                	    		std::cout<<"\n\n\tCaiman Llanero\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tOrinoco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act14;
    		                	    	case 4:
    		                	    		std::cout<<"\n\n\tColibri\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act14;
    		                	    	case 5:
    		                	    		std::cout<<"\n\n\tOso Perezoso\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tColombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act14;
    		                	    	case 6:
    		                	    		std::cout<<"\n\n\tOso de Anteojos\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tCordillera de los Andes,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act14;
    		                	    	case 7:
    		                	    		std::cout<<"\n\n\tJaguar\n";
    		                	    		std::cout<<"\n\tLocalizacion:\tAmazonia,Orinoco,Choco,Colombia\n";
    		                	    		std::cout<<"\n\n\tPRESIONE ENTER PARA VER DIRECTORES Y REPARTO\n\n";
    		                	            getch();
    		                	    		goto act14;
    		                	    	case 8:goto salac4;
    		                	    	default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto act14;
    		                	    }
    		                	case 3:goto salas4;
								default: 
										    std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salac4;	
    		                }
    		            default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto salas4;
										    
			        }
			    case 2:goto inicio;
				break;
				case 3:goto fin;
				break;
				default:std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto inicio;
				
    		
    		}
    		case 6: goto fin;
    		break;
    		default :std::cout<<"\n\n\t\tDATO INCORRECTO\n";
										    goto inicio;
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
    		
	
	
	
	}
    
    fin:
    	
    std::cout<<"\n\n\tDesea realizar una opinion sobre la pelicula:\n\n";
    std::cout<<" \t 1.Si \t 2.No\n";
    std::cout<<"\n\t\t--> ";std::cin>>opinion;
    
    switch(opinion)
    {
    	case 1:
    	std::cout<<"\n\n\tIngrese su nombre:\t\t";std::cin>>nombre;
    	std::cout<<"\n\tIngrese su identificacion:\t";std::cin>>identificacion;
    	std::cout<<"\n\tIngrese su edad:\t\t";std::cin>>edad;
    	std::cout<<"\n\tIngrese la fecha:\n";
    	std::cout<<"\n\t\t     Dia:\t\t";std::cin>>dia1;
    	std::cout<<"\n\t\t     Mes:\t\t";std::cin>>mes;
    	std::cout<<"\n\t\t     Ano:\t\t";std::cin>>ano;
    	std::cout<<"\n\n\tNumero de sala en la que vio la pelicula:\n";
    	std::cout<<"\n\t\t--> ";std::cin>>salapeli;
    	std::cout<<"\n\n\tIngrese la calificacion:\t\n";
    	std::cout<<"\n\t1. Obra Maestra   2. Muy Buena   3. Buena   4. Regular   5. Mala\n\n";
    	std::cout<<"\n\t\t--> ";std::cin>>calificacion;
    	
    	  
    	std::cout<<"\n\n\tNombre:\t"<<nombre;
    	std::cout<<"\n\n\tIdentificacion:\t"<<identificacion;
    	std::cout<<"\n\n\tEdad:\t"<<edad;
    	std::cout<<"\n\n\tDia:\t"<<dia1;
    	std::cout<<"\tMes:\t"<<mes;
    	std::cout<<"\tAno:\t"<<ano;
    	switch(salapeli)
    	{
    		case 1:
    			std::cout<<"\n\n\tPelicula:\tEl Paseo";
    		break;
    		case 2:
    			std::cout<<"\n\n\tPelicula:\tSan Andresito";
    		break;
    		case 3:
    			std::cout<<"\n\n\tPelicula:\tMagia Salvaje";
    		break;
    		default:
    			std::cout<<"\n\n\tPelicula:\tEl usuario digito numero incorrecto";
    	}
    	switch(calificacion)
    	{
    		case 1:
    			std::cout<<"\n\n\tCalificacion:\tObra Maestra";
    		break;
    		case 2:
    			std::cout<<"\n\n\tCalificacion:\tMuy Buena";
    		break;
    		case 3:
    			std::cout<<"\n\n\tCalificacion:\tBuena";
    		break;
    		case 4:
    			std::cout<<"\n\n\tCalificacion:\tRegular";
    		break;
    		case 5:
    			std::cout<<"\n\n\tCalificacion:\tMala";
    		break;
    		default:
    			std::cout<<"\n\n\tCalificacion:\tEl usuario digito numero incorrecto";
    	}
    	case 2:break;
    	
    }
    std::cout<<"\n\n\tESTA SEGURO EN SALIR\n";
    std::cout<<"\n\t1. Retornar al inicio \t 2. Salir\n";
    std::cout<<"\n\t\t--> ";std::cin>>retornar;
    
    switch(retornar)
    {
    	case 1: goto inicio;
    	case 2: break;
    }
    
    

    std::cout<<"\n\n";
    std::cout<<"\n\n\t\t***MUCHAS GRACIAS POR SU VISITA***\n";
	std::cout<<"\n\t\t    ***LO ESPERAMOS PRONTO***\n";
    
    
    


    getch();
    return 0;
}
