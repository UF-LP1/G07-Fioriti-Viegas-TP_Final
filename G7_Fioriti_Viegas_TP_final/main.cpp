
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
	Creceptor mate(1685631856, 0, inestable, "mateo", "espejo", "82346546325", "45522914", 'm', 1073055965);
	Cdonante fede(19, 90, false, false, "federico", "fioriti", "2364346284", 'm', "45428877", 1072451751);
	Creceptor inia();

	CBSA BSA(centros_salud);
}