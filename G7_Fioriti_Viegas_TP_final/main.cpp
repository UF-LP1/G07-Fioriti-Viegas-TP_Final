
#include "CBSA.H"

int main() {
	Ccentro_salud Favaloro("Hospital Favaloro", "necochea_163", "CABA", CABA, "17262537832");
	Ccentro_salud mendoza("Clinica Mendo", "necochea_163", "CABA", Mendoza, "73246638859");
	Ccentro_salud BsAs("Hospital Favaloro", "necochea_163", "CABA", BsAs, "76834672372"); 
	Ccentro_salud chubut("Hospital Favaloro", "necochea_163", "CABA", Chubut, "87457867232"); 
	Ccentro_salud sanJuan("Hospital Favaloro", "necochea_163", "CABA", San_Juan, "23432679732"); 
	Ccentro_salud sanLuis("Hospital Favaloro", "necochea_163", "CABA", San_Luis, "78362875623"); 
	Ccentro_salud cordoba("Hospital Favaloro", "necochea_163", "CABA", Cordoba, "87231566812"); 
	Ccentro_salud misiones("Hospital Favaloro", "necochea_163", "CABA", Misiones, "87236426344"); 
	Ccentro_salud jujuy("Hospital Favaloro", "necochea_163", "CABA", Jujuy, "87623486265"); 
	Ccentro_salud santiagoDelEstero("Hospital Favaloro", "necochea_163", "CABA", Santiago_del_Estero, "12376736434"); 
	Ccentro_salud RioNegro("Hospital Favaloro", "necochea_163", "CABA", Rio_Negro, "89726345323");

	vector<Ccentro_salud*> centros_salud;
	centros_salud + Favaloro;
	centros_salud + mendoza;
	centros_salud + BsAs;
	centros_salud + chubut;
	centros_salud + sanJuan;
	centros_salud + sanLuis;
	centros_salud + cordoba;
	centros_salud + misiones;
	centros_salud + jujuy;
	centros_salud + santiagoDelEstero;
	centros_salud + RioNegro;

	Cdonante delfi(19, 60, false, false, "delfina", "Hanish", "23726575889", 'f', "45474635", 1078066714);
	Creceptor graciela(1685631856, 0, estable, "graciela", "duarte", "82346546325", "45522914", 'f', 1073055965);
	Creceptor mateoE(1685631856, 0, inestable, "mateo", "espejo", "82346546325", "45522914", 'm', 1073055965);
	Creceptor facundo(1685631856, 0, recibio, "facundo", "baztan", "82346546325", "45522914", 'm', 1073055965);

	Cdonante martinS(19, 60, false, false, "martin", "scorza", "89171234451", 'm', "45474635", 1078066714);
	Creceptor martinB(1685631856, 0, estable, "martin", "ballarino", "89765147246", "45522914", 'm', 1073055965);
	Creceptor juan(1685631856, 0, inestable, "juan", "felis", "82346546325", "45522914", 'm', 1073055965);
	Creceptor mateoC(1685631856, 0, inestable, "mateo", "Carlin", "82346546325", "45522914", 'm', 1073055965);

	Cdonante saul(19, 60, false, false, "saul", "lezama", "23726575889", 'f', "45474635", 1078066714);
	Creceptor maria(1685631856, 0, estable, "maria", "durand", "82346546325", "45522914", 'f', 1073055965);
	Creceptor mirtha(1685631856, 0, inestable, "mirtha", "legrand", "82346546325", "45522914", 'f', 1073055965);
	Creceptor liliana(1685631856, 0, inestable, "liliana", "cruz", "82346546325", "45522914", 'f', 1073055965);

	Cdonante isabella(19, 60, false, false, "isabella", "ferrari", "23726575889", 'f', "45474635", 1078066714);
	Creceptor emilia(1685631856, 0, inestable, "emilia", "janin", "82346546325", "45522914", 'f', 1073055965);
	Creceptor pedro(1685631856, 0, inestable, "pedro", "kocho", "82346546325", "45522914", 'm', 1073055965);
	Creceptor serafin(1685631856, 0, inestable, "serafin", "quesada", "82346546325", "45522914", 'm', 1073055965);

	Cdonante ernesto(19, 60, false, false, "ernesto", "guisa", "23726575889", 'm', "45474635", 1078066714);
	Creceptor federicoL(1685631856, 0, inestable, "federico", "lopez", "82346546325", "45522914", 'm', 1073055965);
	Creceptor lorenzo(1685631856, 0, inestable, "lorenzo", "hernandez", "82346546325", "45522914", 'm', 1073055965);
	Creceptor juancho(1685631856, 0, inestable, "juancho", "perez", "82346546325", "45522914", 'm', 1073055965);

	Cdonante guadalupe(19, 60, false, false, "guadalupe", "helou", "23726575889", 'f', "45474635", 1078066714);
	Creceptor valentina(1685631856, 0, inestable, "valentina", "mao", "82346546325", "45522914", 'f', 1073055965);
	Creceptor juana(1685631856, 0, inestable, "juana", "juarez", "82346546325", "45522914", 'f', 1073055965);
	Creceptor anselmo(1685631856, 0, inestable, "anselmo", "jujuy", "82346546325", "45522914", 'm', 1073055965);

	Cdonante sofia(19, 60, false, false, "sofia", "altamirano", "23726575889", 'f', "45474635", 1078066714);
	Creceptor hernan(1685631856, 0, inestable, "hernan", "fross", "82346546325", "45522914", 'm', 1073055965);
	Creceptor jimmy(1685631856, 0, inestable, "jimmy", "butler", "82346546325", "45522914", 'm', 1073055965);
	Creceptor nikola(1685631856, 0, inestable, "nikola", "jokic", "82346546325", "45522914", 'm', 1073055965);


	Cdonante julian(19, 60, false, false, "julian", "fuente", "23726575889", 'm', "45474635", 1078066714);
	Creceptor ricardo(1685631856, 0, inestable, "ricardo", "centurion", "82346546325", "45522914", 'm', 1073055965);
	Creceptor leonel(1685631856, 0, inestable, "leonel", "messi", "82346546325", "45522914", 'm', 1073055965);
	Creceptor sergio(1685631856, 0, inestable, "sergio", "aguero", "82346546325", "45522914", 'm', 1073055965);

	Cdonante arnaldo(19, 60, false, false, "arnaldo", "zeta", "23726575889", 'm', "45474635", 1078066714);
	Creceptor mauro(1685631856, 0, inestable, "Mauro", "soto", "82346546325", "45522914", 'm', 1073055965);
	Creceptor bautista(1685631856, 0, inestable, "bautista", "rach", "82346546325", "45522914", 'm', 1073055965);
	Creceptor stefan(1685631856, 0, inestable, "stefan", "taco", "82346546325", "45522914", 'm', 1073055965);

	Cdonante juan(19, 60, false, false, "juan", "polo", "23726575889", 'm', "45474635", 1078066714);
	Creceptor tomas(1685631856, 0, inestable, "tomas", "lutterbach", "82346546325", "45522914", 'm', 1073055965);
	Creceptor alvaro(1685631856, 0, inestable, "alvaro", "atue", "82346546325", "45522914", 'm', 1073055965);
	Creceptor thiago(1685631856, 0, inestable, "thiago", "villanova", "82346546325", "45522914", 'm', 1073055965);

	Cdonante agostina(19, 60, false, false, "agostina", "olivan", "23726575889", 'f', "45474635", 1078066714);
	Creceptor camila(1685631856, 0, inestable, "camila", "fosa", "82346546325", "45522914", 'f', 1073055965);
	Creceptor tiago(1685631856, 0, inestable, "tiago", "segovia", "82346546325", "45522914", 'm', 1073055965);
	Creceptor paolo(1685631856, 0, inestable, "paolo", "guerrero", "82346546325", "45522914", 'm', 1073055965);

	Cdonante agustina(19, 60, false, false, "agustina", "losa", "23726575889", 'f', "45474635", 1078066714);
	Creceptor lucia(1685631856, 0, inestable, "lucia", "parra", "82346546325", "45522914", 'f', 1073055965);
	Creceptor valentin(1685631856, 0, inestable, "valentin", "pirr", "82346546325", "45522914", 'm', 1073055965);
	Creceptor valentina(1685631856, 0, inestable, "valentina", "vargas", "82346546325", "45522914", 'f', 1073055965);

	Cdonante josefina(19, 60, false, false, "josefina", "perez", "23726575889", 'f', "45474635", 1078066714);
	Creceptor ana(1685631856, 0, inestable, "ana", "merlo", "82346546325", "45522914", 'f', 1073055965);
	Creceptor santiago(1685631856, 0, inestable, "santiago", "diaz", "82346546325", "45522914", 'm', 1073055965);
	Creceptor blas(1685631856, 0, inestable, "blas", "parera", "82346546325", "45522914", 'm', 1073055965);

	Cdonante juan_roman(19, 60, false, false, "juan_roman", "riquelme", "23726575889", 'm', "45474635", 1078066714);
	Creceptor diego(1685631856, 0, inestable, "diego", "maradona", "82346546325", "45522914", 'm', 1073055965);
	Creceptor martin(1685631856, 0, inestable, "martin", "palermo", "82346546325", "45522914", 'm', 1073055965);
	Creceptor marcelo(1685631856, 0, inestable, "marcelo", "gallardo", "82346546325", "45522914", 'm', 1073055965);

	Creceptor josue(1685631856, 0, inestable, "josue", "lema", "82346546325", "45522914", 'm', 1073055965);
	Cdonante lucila(19, 90, false, false, "lucila", "herrera", "2364346284", 'f', "45428877", 1072451751);
	Creceptor ulises(1685631856, 0, inestable, "ulises", "viegas", "82346546325", "45522914", 'm', 1073055965);
	Creceptor lisandro(1685631856, 0, inestable, "lisandro", "bordeira", "82346546325", "45522914", 'm', 1073055965);

	Creceptor mariano(1685631856, 0, inestable, "mariano", "bordeira", "82346546325", "45522914", 'm', 1073055965);
	Cdonante joaquin(19, 60, false, false, "joaquin", "palacio", "23726575889", 'm', "45474635", 1078066714);
	Creceptor fermin(1685631856, 0, inestable, "fermin", "nunez", "82346546325", "45522914", 'm', 1073055965);
	Creceptor luciano(1685631856, 0, inestable, "luciano", "toscani", "82346546325", "45522914", 'm', 1073055965);

	Creceptor tiagoA(1685631856, 0, inestable, "tiago", "aranguren", "82346546325", "45522914", 'm', 1073055965);
	Cdonante renzo(19, 60, false, false, "renzo", "danei", "23726575889", 'm', "45474635", 1078066714);
	Creceptor manuel(1685631856, 0, inestable, "manuel", "lorenzana", "82346546325", "45522914", 'm', 1073055965);
	Creceptor emilio(1685631856, 0, inestable, "emilio", "garcia", "82346546325", "45522914", 'm', 1073055965);


	Creceptor lujan(1685631856, 0, inestable, "mateo", "espejo", "82346546325", "45522914", 'm', 1073055965);
	Cdonante roberto(19, 60, false, false, "delfina", "Hanish", "23726575889", 'f', "45474635", 1078066714);
	Creceptor martha(1685631856, 0, inestable, "martha", "grand", "82346546325", "45522914", 'm', 1073055965);
	Creceptor gaston(1685631856, 0, inestable, "gaston", "romagnoli", "82346546325", "45522914", 'm', 1073055965);

	Creceptor carlos(1685631856, 0, inestable, "carlos", "vazquez", "82346546325", "45522914", 'm', 1073055965);
	Cdonante giuliana(19, 60, false, false, "giuliana", "nascar", "23726575889", 'f', "45474635", 1078066714);
	Creceptor anna(1685631856, 0, inestable, "anna", "frank", "82346546325", "45522914", 'm', 1073055965);
	Creceptor ruperto(1685631856, 0, inestable, "ruperto", "giles", "82346546325", "45522914", 'm', 1073055965);

	Creceptor luana(1685631856, 0, inestable, "luana", "diarco", "82346546325", "45522914", 'm', 1073055965);
	Cdonante julieta(19, 60, false, false, "julieta", "palavecino", "23726575889", 'f', "45474635", 1078066714);
	Creceptor john(1685631856, 0, inestable, "john", "stones", "82346546325", "45522914", 'm', 1073055965);
	Creceptor edwin(1685631856, 0, inestable, "edwin", "cardona", "82346546325", "45522914", 'm', 1073055965);

	Creceptor francisco(1685631856, 0, inestable, "francisco", "bru", "82346546325", "45522914", 'm', 1073055965);
	Cdonante luis(19, 60, false, false, "luis", "herrera", "23726575889", 'f', "45474635", 1078066714);
	Creceptor salomon(1685631856, 0, inestable, "salomon", "rondon", "82346546325", "45522914", 'm', 1073055965);
	Creceptor fernando(1685631856, 0, inestable, "fernando", "rosas", "82346546325", "45522914", 'm', 1073055965);

	Creceptor ida(1685631856, 0, inestable, "ida", "casasola", "82346546325", "45522914", 'm', 1073055965);
	Cdonante alejandro(19, 90, false, false, "alejandro", "andrada", "2364346284", 'm', "45428877", 1072451751);
	Creceptor adrian(1685631856, 0, inestable, "adrian", "terrera", "82346546325", "45522914", 'm', 1073055965);
	Creceptor cecilia(1685631856, 0, inestable, "cecilia", "crovetto", "82346546325", "45522914", 'm', 1073055965);

	Cdonante alejandra(19, 60, false, false, "alejandra", "andrea", "23726575889", 'f', "45474635", 1078066714);
	Creceptor matias(1685631856, 0, inestable, "matias", "lopetegui", "82346546325", "45522914", 'm', 1073055965);
	Creceptor oyha(1685631856, 0, inestable, "bautista", "oyha", "82346546325", "45522914", 'm', 1073055965);
	Creceptor mateo(1685631856, 0, inestable, "mateo", "murray", "82346546325", "45522914", 'm', 1073055965);

	Cdonante mathias(19, 60, false, false, "mathias", "hirschfeldt", "23726575889", 'f', "45474635", 1078066714);
	Creceptor ramon(1685631856, 0, inestable, "ramon", "fellfort", "82346546325", "45522914", 'm', 1073055965);
	Creceptor ricardo(1685631856, 0, inestable, "ricardo", "fort", "82346546325", "45522914", 'm', 1073055965);
	Creceptor laura(1685631856, 0, inestable, "laura", "ramal", "82346546325", "45522914", 'm', 1073055965);

	Cdonante joaquina(19, 60, false, false, "delfina", "Hanish", "23726575889", 'f', "45474635", 1078066714);
	Creceptor maitena(1685631856, 0, inestable, "maitena", "wols", "82346546325", "45522914", 'm', 1073055965);
	Creceptor yuri(1685631856, 0, inestable, "yuri", "oshea", "82346546325", "45522914", 'm', 1073055965);
	Creceptor conor(1685631856, 0, inestable, "conor", "glass", "82346546325", "45522914", 'm', 1073055965);

	Cdonante ezequiel(19, 60, false, false, "ezequiel", "stanganelli", "85734508967", 'f', "45474635", 1078066714);
	Creceptor fran(1685631856, 0, inestable, "fran", "campos", "81934713020", "45522914", 'm', 1073055965);
	Creceptor sol(1685631856, 0, inestable, "sol", "segura", "82346546325", "45522914", 'm', 1073055965);
	Creceptor cindy(1685631856, 0, inestable, "lucas", "cabral", "82346546325", "45522914", 'm', 1073055965);

	Cdonante mayra(19, 60, false, false, "mayra", "ruiz", "89457382912", 'f', "45474635", 1078066714);
	Creceptor elisaldo(1685631856, 0, inestable, "elisaldo", "cruz", "81937189212", "45522914", 'm', 1073055965);
	Creceptor jose(1685631856, 0, inestable, "jose", "desanmartin", "82346546325", "45522914", 'm', 1073055965);
	Creceptor marianoMoreno(1685631856, 0, inestable, "mariano", "moreno", "82346546325", "45522914", 'm', 1073055965);

	Cdonante leonardo(19, 60, false, true, "leonardo", "dicaprio", "18819371231", 'f', "45474635", 1078066714);
	Creceptor kylian(1685631856, 0, inestable, "kylian", "mbappe", "27198501361", "45522914", 'm', 1073055965);
	Creceptor guido(1685631856, 0, inestable, "guido", "kazka", "82346546325", "45522914", 'm', 1073055965);
	Creceptor pepe(1685631856, 0, inestable, "pepe", "pepon", "82346546325", "45522914", 'm', 1073055965);

	CBSA BSA(centros_salud);
}