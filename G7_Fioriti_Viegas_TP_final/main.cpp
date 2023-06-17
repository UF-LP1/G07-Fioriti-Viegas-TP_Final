#include "CBSA.H"
#include "Cfluido.h"
#include "Cpaciente.h"
#include "Creceptor.h"

int main() {

	Csangre* sangre1 = new Csangre(A,'+');
	Csangre* sangre2 = new Csangre(AB, '-');
	Csangre* sangre3 = new Csangre(O, '+');
	Csangre* sangre4 = new Csangre(B, '-');
	Csangre* sangre5 = new Csangre(O, '-');
	Csangre* sangre6 = new Csangre(A, '-');
	Csangre* sangre7 = new Csangre(AB, '+');
	Csangre* sangre8 = new Csangre(B, '+');
	Cplasma* plasma = new Cplasma();
	Cmedula* medula = new Cmedula();

	vector<Cregistro*>registroSanLuis;
	Cregistro registro1(1685631856, 1.6, *sangre1);
	Cregistro registro2(1767141967, 0.4, *medula);
	Cregistro registro3(1783173541, 0.9, *plasma);
	registroSanLuis.push_back(&registro1);
	registroSanLuis.push_back(&registro2);
	registroSanLuis.push_back(&registro3);

	vector<Cregistro*>registroBsAs;
	Cregistro registro4(1781712431, 1.1, *sangre2);
	Cregistro registro5(1872472812, 1.4, *medula);
	Cregistro registro6(1787163568, 0.7, *plasma);
	registroBsAs.push_back(&registro4);
	registroBsAs.push_back(&registro6);
	registroBsAs.push_back(&registro5);

	vector<Cregistro*>registroChubut;
	Cregistro registro7(1698673720, 1.4, *plasma);
	Cregistro registro8(1792184829, 0.2, *medula);
	Cregistro registro9(1918367191, 3.2, *sangre3);
	registroChubut.push_back(&registro7);
	registroChubut.push_back(&registro8);
	registroChubut.push_back(&registro9);

	vector<Cregistro*>registroFava;
	Cregistro registro10(1781936291, 1.7, *plasma);
	Cregistro registro11(1817250281, 1.4, *medula);
	Cregistro registro12(1858290101, 0.7, *sangre4);
	registroFava.push_back(&registro10);
	registroFava.push_back(&registro11);
	registroFava.push_back(&registro12);

	vector<Cregistro*>registroMendoza;
	Cregistro registro13(1783912281, 2.4, *sangre5);
	Cregistro registro14(1837129811, 0.3, *medula);
	Cregistro registro15(1781971913, 1.2, *plasma);
	registroMendoza.push_back(&registro13);
	registroMendoza.push_back(&registro14);
	registroMendoza.push_back(&registro15);

	vector<Cpaciente*>pacientesFava;
	vector<Cpaciente*>pacientesMendoza;
	vector<Cpaciente*>pacientesBsAs;
	vector<Cpaciente*>pacientesChubut;
	vector<Cpaciente*>pacientesSanLuis;
	time_t* facu = new time_t;
	*facu = 1675189689;

	Cdonante delfi(19, 65.3, false, false, "delfina", "Hanish", "23726575889", 'f', "45474635", 1078066714, registroSanLuis, sangre1);
	Creceptor graciela(1685631856, estable, "graciela", "duarte", "82346546325", "45522914", 'f', 1073055965, sangre6, sangre6);
	Creceptor mateoE(1685631856, inestable, "mateo", "espejo", "82346546325", "45522914", 'm', 1073055965, medula, sangre7);
	Creceptor facundo(1685631856, facu, recibio, "facundo", "baztan", "82346546325", "45522914", 'm', 1073055965, plasma, sangre8);
	pacientesSanLuis + delfi;
	pacientesSanLuis + graciela;
	pacientesSanLuis + mateoE;
	pacientesSanLuis + facundo;

	Cdonante martinS(19, 60, false, false, "martin", "scorza", "89171234451", 'm', "45474635", 1078066714, registroBsAs, sangre2);
	Creceptor martinB(1685631856, estable, "martin", "ballarino", "89765147246", "45522914", 'm', 1073055965, medula, sangre1);
	Creceptor juan(1685631856, inestable, "juan", "felis", "82346546325", "45522914", 'm', 1073055965, plasma, sangre2);
	Creceptor mateoC(1685631856, inestable, "mateo", "Carlin", "82346546325", "45522914", 'm', 1073055965, sangre3, sangre3);
	pacientesBsAs + martinS;
	pacientesBsAs + martinB;
	pacientesBsAs + juan;
	pacientesBsAs + mateoC;

	Cdonante saul(19, 60, false, false, "saul", "lezama", "23726575889", 'f', "45474635", 1078066714, registroMendoza, sangre5);
	Creceptor maria(1685631856, estable, "maria", "durand", "82346546325", "45522914", 'f', 1073055965, medula, sangre4);
	Creceptor mirtha(1685631856, inestable, "mirtha", "legrand", "82346546325", "45522914", 'f', 1073055965, plasma, sangre5);
	Creceptor liliana(1685631856, inestable, "liliana", "cruz", "82346546325", "45522914", 'f', 1073055965, sangre6, sangre6);
	pacientesMendoza + saul;
	pacientesMendoza + maria;
	pacientesMendoza + mirtha;
	pacientesMendoza + liliana;

	Cdonante isabella(19, 60, false, false, "isabella", "ferrari", "23726575889", 'f', "45474635", 1078066714, registroFava, sangre4);
	Creceptor emilia(1685631856, inestable, "emilia", "janin", "82346546325", "45522914", 'f', 1073055965, medula, sangre7);
	Creceptor pedro(1685631856, inestable, "federico", "fioriti", "82346546325", "45522914", 'm', 1073055965, sangre8, sangre8);
	Creceptor serafin(1685631856, inestable, "serafin", "quesada", "82346546325", "45522914", 'm', 1073055965, plasma, sangre1);
	pacientesFava + isabella;
	pacientesFava + emilia;
	pacientesFava + pedro;
	pacientesFava + serafin;


	Cdonante ernesto(19, 60, false, false, "ernesto", "guisa", "23726575889", 'm', "45474635", 1078066714, registroChubut, sangre3);
	Creceptor federicoL(1685631856, inestable, "federico", "lopez", "82346546325", "45522914", 'm', 1073055965, plasma, sangre2);
	Creceptor lorenzo(1685631856, inestable, "lorenzo", "hernandez", "82346546325", "45522914", 'm', 1073055965, medula, sangre3);
	Creceptor juancho(1685631856, inestable, "juancho", "perez", "82346546325", "45522914", 'm', 1073055965, sangre4, sangre4);
	pacientesChubut + ernesto;
	pacientesChubut + federicoL;
	pacientesChubut + lorenzo;
	pacientesChubut + juancho;

	Ccentro_salud Favaloro("Hospital Favaloro", "Entre Rios 2923", "CABA", CABA, "17262537832", pacientesFava);
	Ccentro_salud mendoza("Clinica Mendo", "Cabral 871", "San Rafael", Mendoza, "73246638859", pacientesMendoza);
	Ccentro_salud bsas("Hospital Pequenia familia", "Avenida de Mayo 5213", "Junin", BsAs, "76834672372", pacientesBsAs);
	Ccentro_salud chubut("Hospital Austral", "Carlos Gardel 366", "Comodoro Rivadavia", Chubut, "87457867232", pacientesChubut);
	Ccentro_salud sanLuis("Hospital Luisito", "Juan Labrada 821", "Villa Mercedes", San_Luis, "78362875623", pacientesSanLuis);

	vector<Ccentro_salud*> centros_salud;
	centros_salud + Favaloro;
	centros_salud + mendoza;
	centros_salud + bsas;
	centros_salud + chubut;
	centros_salud + sanLuis;

	CBSA BSA(centros_salud);

	Csangre* sangreM = new Csangre(B, '+');
	Csangre* sangreL = new Csangre(O,'-');

	vector<Cregistro*> registrodonante;
	Cregistro registro(1687023118, 3.2, *sangreM);
	registrodonante.push_back(&registro);

	Cdonante mariano(19, 85, false, false, "Mariano", "Viegas Bordeira", "8234652774", 'm', "45413782", 1071943854, registrodonante, sangreM);
	Creceptor lebron(1685643218, estable, "LeBron Raymone", "James Sr", "8273467389", "40328746", 'm', 473278599, sangreL,sangreL);
	try {
		BSA.agregar_donante(mariano, chubut);//agrego al donante nuevo
	}catch (exception* e) {
		cout << e->what() << endl;
		delete e;
	}
	try {
		BSA.agregar_receptor(lebron, Favaloro);//agrego al receptor nuevo
	}catch (exception* e) {
		cout << e->what() << endl;
		delete e;
	}

	cout << "El paciente con dni 45474635 tiene una prioridad de " << BSA.buscar_prioridad_receptor("45522914") << " en una escala de 0 a 5." << endl;

	try {
		BSA.empezar_transfusion();
	}catch (exception* e) {
		cout << e->what() << endl;
	}
	BSA.Buscar_espera();//imprimo la lista de espera
	
	delete facu;
	delete sangreM;
	delete sangreL;
	delete sangre1; 
	delete sangre2;
	delete sangre3;
	delete sangre4;
	delete sangre5;
	delete sangre6;
	delete sangre7;
	delete sangre8;
	delete medula;
	delete plasma; 
}
