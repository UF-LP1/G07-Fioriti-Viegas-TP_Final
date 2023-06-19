#include "CBSA.H"
#include "Cfluido.h"
#include "Cpaciente.h"
#include "Creceptor.h"

/*time_t convertir_fecha(int dia, int mes, int anio);
Cdonante registrar_personaD();
Ccentro_salud seleccionar_centro();
Creceptor registrar_personaR();*/

int main()
{

	Csangre* sangre1 = new Csangre(A, '+');
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
	Cregistro registro1SL(1684350560, 450, *sangre1);
	Cregistro registro2SL(1679599437, 5, *medula);
	Cregistro registro3SL(1675020267, 600, *plasma);
	registroSanLuis.push_back(&registro1SL);
	registroSanLuis.push_back(&registro2SL);
	registroSanLuis.push_back(&registro3SL);

	vector<Cregistro*>registroBsAs;
	Cregistro registro1BSAS(1675538711, 450, *sangre2);
	Cregistro registro2BSAS(1675538711, 5, *medula);
	Cregistro registro3BSAS(1669749977, 160, *plasma);
	registroBsAs.push_back(&registro1BSAS);
	registroBsAs.push_back(&registro2BSAS);
	registroBsAs.push_back(&registro3BSAS);

	vector<Cregistro*>registroChubut;
	Cregistro registro1CH(1685820410, 160, *plasma);
	Cregistro registro2CH(1686079643, 5, *medula);
	Cregistro registro3CH(1685216118, 450, *sangre3);
	registroChubut.push_back(&registro1CH);
	registroChubut.push_back(&registro2CH);
	registroChubut.push_back(&registro3CH);

	vector<Cregistro*>registroFavaloro;
	Cregistro registro1FA(1678390123, 600, *plasma);
	Cregistro registro2FA(1672601355, 5, *medula);
	Cregistro registro3FA(1668285446, 450, *sangre4);
	registroFavaloro.push_back(&registro1FA);
	registroFavaloro.push_back(&registro2FA);
	registroFavaloro.push_back(&registro3FA);

	vector<Cregistro*>registroMendoza;
	Cregistro registro1ME(1702063839, 450, *sangre5);
	Cregistro registro2ME(1665603073, 5, *medula);
	Cregistro registro3ME(1663961665, 600, *plasma);
	registroMendoza.push_back(&registro1ME);
	registroMendoza.push_back(&registro2ME);
	registroMendoza.push_back(&registro3ME);

	vector<Cregistro*>registroSantaFe;
	Cregistro registro1SF(1675446387, 450, *sangre6);
	Cregistro registro2SF(1671385703, 5, *medula);
	Cregistro registro3SF(1673718530, 600, *plasma);
	registroMendoza.push_back(&registro1ME);
	registroMendoza.push_back(&registro2ME);
	registroMendoza.push_back(&registro3ME);

	vector<Cregistro*>registroCatamarca;
	Cregistro registro1CA(1683222563, 450, *sangre7);
	Cregistro registro2CA(1682531413, 5, *medula);
	Cregistro registro3CA(1685814640, 600, *plasma);
	registroMendoza.push_back(&registro1ME);
	registroMendoza.push_back(&registro2ME);
	registroMendoza.push_back(&registro3ME);

	vector<Cpaciente*>pacientesFavaloro;
	vector<Cpaciente*>pacientesMendoza;
	vector<Cpaciente*>pacientesBsAs;
	vector<Cpaciente*>pacientesChubut;
	vector<Cpaciente*>pacientesSanLuis;
	vector<Cpaciente*>pacientesSantaFe;
	vector<Cpaciente*>pacientesCatamarca;



	time_t* recibida1 = new time_t;
	*recibida1 = 1676406680;
	time_t* recibida2 = new time_t;
	*recibida2 = 1670531507;
	time_t* recibida3 = new time_t;
	*recibida3 = 1665606805;
	time_t* recibida4 = new time_t;
	*recibida4 = 1670099920;
	time_t* recibida5 = new time_t;
	*recibida5 = 1686775173;
	time_t* recibida6 = new time_t;
	*recibida6 = 1674843132;
	time_t* recibida7 = new time_t;
	*recibida7 = 1671387197;

	Cdonante Delfina(19, 65.3, false, false, "delfina", "Hanish", "23726575889", 'f', "45474635", 1013976026, registroSanLuis, sangre1);
	Cdonante Franco(28,81.3,false, false, "franco", "gomez", "2975781601", 'm', "39881491", 795028879, registroSanLuis, sangre3);
	Cdonante Flavio(41, 90.8, false, false, "flavio", "Esquirra", "2978643192", 'm', "330987671", 389727465, registroSanLuis, sangre8);
	Creceptor Graciela(1679084218, estable, "graciela", "duarte", "82346546325", "45522914", 'f', 423432049, sangre6, sangre6);
	Creceptor Mateo(1677615339, inestable, "mateo", "espejo", "82346546325", "45522914", 'm', 987537668, medula, sangre7);
	Creceptor Facundo(1673727361, recibida1, recibio, "facundo", "baztan", "82346546325", "45522914", 'm', 935870496, plasma, sangre8);
	pacientesSanLuis + Delfina;
	pacientesSanLuis + Franco;
	pacientesSanLuis + Flavio;
	pacientesSanLuis + Graciela;
	pacientesSanLuis + Mateo;
	pacientesSanLuis + Facundo;

	Cdonante MartinS(19, 60, false, false, "martin", "scorza", "89171234451", 'm', "45474635", 772920118, registroBsAs, sangre2);
	Cdonante JuanCruz(31, 78.7, false, false, "juan cruz", "elirralde", "154984291", 'm', "35091981", 702581017, registroBsAs, sangre7);
	Cdonante Anselmo(27, 71.4, false, false, "anselmo", "herrera", "2973918271", 'm', "41819191", 842290731, registroBsAs, sangre3);
	Creceptor MartinB(1670530648, estable, "martin", "ballarino", "89765147246", "45522914", 'm', 889473737, medula, sangre1);
	Creceptor Juan(1668716968, recibida2, recibio, "juan", "felis", "82346546325", "45522914", 'm', 1114977817, plasma, sangre2);
	Creceptor MateoC(1674073102, inestable, "mateo", "Carlin", "82346546325", "45522914", 'm', 627509047, sangre3, sangre3);
	pacientesBsAs + MartinS;
	pacientesBsAs + JuanCruz;
	pacientesBsAs + Anselmo; 
	pacientesBsAs + MartinB;
	pacientesBsAs + Juan;
	pacientesBsAs + MateoC;

	Cdonante saul(19, 60, false, false, "saul", "lezama", "23726575889", 'f', "45474635", 1053720312, registroMendoza, sangre5);
	Cdonante Pablo(20, 66.8, false, false, "pablo", "heraclito", "2974028181", 'm', "42891763", 1028827534, registroMendoza, sangre3);
	Cdonante Juana(32, 71.4, false, false, "Juana", "Suazo", "2871912981", 'f', "32819191", 681586819, registroMendoza, sangre3);
	Creceptor maria(1664655559, recibida3, recibio, "maria", "durand", "82346546325", "45522914", 'f', 938117129, medula, sangre4);
	Creceptor mirtha(1662841186, inestable, "mirtha", "legrand", "82346546325", "45522914", 'f', 223934764, plasma, sangre5);
	Creceptor liliana(1668543617, inestable, "liliana", "cruz", "82346546325", "45522914", 'f', 691963663, sangre6, sangre6);
	pacientesMendoza + saul;
	pacientesMendoza + Pablo;
	pacientesMendoza + Juana;
	pacientesMendoza + maria;
	pacientesMendoza + mirtha;
	pacientesMendoza + liliana;

	Cdonante isabella(19, 60, false, false, "isabella", "ferrari", "23726575889", 'f', "45474635", 881179685, registroFavaloro, sangre4);
	Cdonante Silvina(34, 71.3, false, false, "Silvina", "Manso", "8917813181", 'f', "40918131", 629056439, registroFavaloro, sangre5);
	Cdonante Eduardo(48, 86.8, false, false, "Eduardo", "Phillip", "219813911", 'm', "359181091", 232826065, registroFavaloro, sangre6);
	Creceptor emilia(1672258874, inestable, "emilia", "janin", "82346546325", "45522914", 'f', 1020542906, medula, sangre7);
	Creceptor pedro(1668716491, recibida4, recibio, "federico", "fioriti", "82346546325", "45522914", 'm', 836597321, sangre8, sangre8);
	Creceptor serafin(1677615742, inestable, "serafin", "quesada", "82346546325", "45522914", 'm', 1066594135, plasma, sangre1);
	pacientesFavaloro + isabella;
	pacientesFavaloro + Silvina;
	pacientesFavaloro + Eduardo;
	pacientesFavaloro + emilia;
	pacientesFavaloro + pedro;
	pacientesFavaloro + serafin;


	Cdonante ernesto(21, 60, false, false, "ernesto", "guisa", "23726575889", 'm', "45474635", 174946163, registroChubut, sangre3);
	Cdonante Jessica(27, 68.3, false, false, "jessica", "baez", "8923331871", 'f', "41981033", 831232636, registroChubut, sangre6);
	Cdonante Horacio(42, 78.4, false, false, "horacio", "diaz", "2739819312", 'm', "39651420", 310413459, registroChubut, sangre1);
	Creceptor federicoL(1684959787, recibida5, recibio, "federico", "lopez", "82346546325", "45522914", 'm', 1002398998, plasma, sangre2);
	Creceptor lorenzo(1685219034, inestable, "lorenzo", "hernandez", "82346546325", "45522914", 'm', 1006200616, medula, sangre3);
	Creceptor juancho(1684355050, inestable, "juancho", "perez", "82346546325", "45522914", 'm', 885586305, sangre4, sangre4);
	pacientesChubut + ernesto;
	pacientesChubut + Jessica;
	pacientesChubut + Horacio; 
	pacientesChubut + federicoL;
	pacientesChubut + lorenzo;
	pacientesChubut + juancho;

	Cdonante Dolores(19, 64.1, false, false, "dolores", "monteros", "23726575889", 'f', "45474635", 1013976026, registroCatamarca, sangre1);
	Cdonante Matias(26, 79.1, false, false, "matias", "aguerre", "2975781601", 'm', "39881491", 795028879, registroCatamarca, sangre3);
	Cdonante Agustin(41, 97.8, false, false, "agustin", "murphy", "2978643192", 'm', "330987671", 389727465, registroCatamarca, sangre8);
	Creceptor Samanta(1682360162, estable, "samanta", "levy", "82346546325", "45522914", 'f', 423432049, sangre2, sangre5);
	Creceptor Takeo(1681755382, inestable, "takeo", "najira", "82346546325", "45522914", 'm', 987537668, medula, sangre7);
	Creceptor Enrique(1685038607, recibida6, recibio, "enrique", "tomori", "82346546325", "45522914", 'm', 935870496, plasma, sangre8);
	pacientesCatamarca + Dolores;
	pacientesCatamarca + Matias;
	pacientesCatamarca + Agustin;
	pacientesCatamarca + Samanta;
	pacientesCatamarca + Takeo;
	pacientesCatamarca + Enrique;

	Cdonante Martina(19, 65.3, false, false, "martina", "mendoza", "2891719031", 'f', "44818191", 1078423735, registroSantaFe, sangre2);
	Cdonante Felipe(28, 81.3, false, false, "felipe", "murra", "2971819818", 'm', "39881421", 810583773, registroSantaFe, sangre3);
	Cdonante Fabian(41, 90.8, false, false, "fabian", "najera", "2978817192", 'm', "330987671", 387137415, registroSantaFe, sangre8);
	Creceptor Augusto(1674324861, estable, "augusto", "soto", "82346546325", "45522914", 'f', 1025806247, sangre1, sangre8);
	Creceptor Tamara(1672683295, inestable, "tamara", "yupanqui", "82346546325", "45522914", 'm', 865793460, plasma, sangre7);
	Creceptor Camila(1671041726, recibida7, recibio, "camila", "calerta", "82346546325", "45522914", 'm', 976039883, medula, sangre8);
	pacientesSantaFe + Martina;
	pacientesSantaFe + Felipe;
	pacientesSantaFe + Fabian;
	pacientesSantaFe + Augusto;
	pacientesSantaFe + Tamara;
	pacientesSantaFe + Camila;

	Ccentro_salud Favaloro("Hospital Favaloro CABA", "Entre Rios 2923", "CABA", CABA, "17262537832", pacientesFavaloro);
	Ccentro_salud mendoza("Clinica Mendoza", "Cabral 871", "San Rafael", Mendoza, "73246638859", pacientesMendoza);
	//Ccentro_salud BsAs("Hospital Pequenia familia", "Avenida de Mayo 5213", "Junin", BsAs, "76834672372", pacientesBsAs);
	Ccentro_salud chubut("Hospital Austral Chubut", "Carlos Gardel 366", "Comodoro Rivadavia", Chubut, "87457867232", pacientesChubut);
	Ccentro_salud sanLuis("Hospital San Luisito", "Juan Labrada 821", "Villa Mercedes", San_Luis, "78362875623", pacientesSanLuis);
	Ccentro_salud SantaFe("Hospital de la Santa Virgen", "Gutierrez Leguiza 981", "Rosario", Santa_Fe, "449089181", pacientesSantaFe);
	//Ccentro_salud Catamarca("Clinica del Valle de Catamarca", "Jose Castelli 8191", "San Fernando", Catamarca, "4491812091", pacientesCatamarca);

	vector<Ccentro_salud*> centros_salud;
	centros_salud + Favaloro;
	centros_salud + mendoza;
	//centros_salud + BsAs; Presenta fallos
	centros_salud + chubut;
	centros_salud + sanLuis;
	centros_salud + SantaFe;
	//centros_salud + Catamarca;


	CBSA BSA(centros_salud);

	Csangre* sangreM = new Csangre(B, '+');
	Csangre* sangreL = new Csangre(O, '-');

	vector<Cregistro*> registrodonante;
	Cregistro registro(1687023118, 450, *sangreM);
	registrodonante.push_back(&registro);

	Cdonante mariano(19, 85, false, false, "Mariano", "Viegas Bordeira", "8234652774", 'm', "45413782", 1071943854, registrodonante, sangreM);
	Creceptor lebron(1685643218, estable, "LeBron Raymone", "James Sr", "8273467389", "40328746", 'm', 473278599, sangreL, sangreL);

	cout << "Se agrega el nuevo donante al centro correspondiente." << endl << endl;
	try {
		BSA.agregar_donante(mariano, chubut);//agrego al donante nuevo
	}
	catch (exception* e) {
		cout << e->what() << endl;
		delete e;
	}
	cout << "Aprete cualquier boton para continuar." << endl;
	getchar();
	system("CLS");
	cout << "Se agrega el nuevo receptor al centro correspondiente." << endl << endl;
	try {
		BSA.agregar_receptor(lebron, Favaloro);//agrego al receptor nuevo
	}
	catch (exception* e) {
		cout << e->what() << endl;
		delete e;
	}
	cout << "Aprete cualquier boton para continuar." << endl;
	getchar();
	system("CLS");
	cout << "Se busca la prioridad de un paciente en base al dni unico del mismo." << endl << endl;
	cout << "El paciente con dni 45474635 tiene una prioridad de " << BSA.buscar_prioridad_receptor("45522914") << " en una escala de 0 a 5." << endl;
	cout << "Aprete cualquier boton para continuar." << endl;
	getchar();
	system("CLS");
	cout << "Empieza el procedimiento de trasfusion." << endl << endl;
	try {
		BSA.empezar_transfusion();
	}
	catch (exception* e) {
		cout << e->what() << endl;
		delete e;
	}
	cout << "Aprete cualquier boton para continuar." << endl;
	getchar();
	system("CLS");
	cout << "Se imprime la lista de espera de los centros de salud."<< endl << endl;
	try {
		BSA.Buscar_espera();
	}
	catch (exception* e) {
		cout << e->what() << endl;
		delete e;
	}
	cout << "Aprete cualquier boton para continuar." << endl;
	getchar();
	system("CLS");
	cout << "Se imprime las estadisticas de donaciones en cada provincia hasta el mes actual de este mismo anio." << endl << endl;
	try {
		BSA.donaciones_provincia();
	}
	catch (exception* e) {
		cout << e->what() << endl;
		delete e;
	}
	cout << "Aprete cualquier boton para continuar." << endl;
	getchar();
	system("CLS");
	cout << "Se imprimen los datos del Banco de Sangre de Argentina." << endl << endl;
	BSA.imprimir();

	delete recibida1;
	delete recibida2;
	delete recibida3;
	delete recibida4;
	delete recibida5;
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
	//Hasta este punto ya se cumplio la consigna, ibamos a agregar un menu, pero en agregar donante y receptor habian algunos problemas asi que decidimos dejarlo asi. Igualmente, el resto de metodos 
	//se pueden ejecutar si se desea;

	/*string opcion;
	cout << "Hola! Usted ha ingresado en el Sistema del Banco de Sangre Argentina." << endl
		 << "Si usted quiere registrar un nuevo DONANTE, ingrese la opción 1." << endl
		<< "Si usted quiere registrar un nuevo RECEPTOR, ingrese la opción 2." << endl
		<< "Si usted desea conocer la prioridad de un receptor específico, ingrese la opción 3." << endl
		<< "Si usted desea imprimir la Lista de Espera de pacientes del Banco de Sangre Argentina, ingrese la opción 4." << endl
		<< "Si usted desea iniciar los trámites para una futura transfusión, ingrese la opción 5." << endl
		<< "Si usted desea ver la cantidad de donaciones que se llevan a cabo en cada provincia, ingrese la opción 6." << endl;
	cin >> opcion;

	if (opcion == "1") {
		Cdonante DonanteRegistrado = registrar_personaD();
		Ccentro_salud centro1 = seleccionar_centro();
		try{
		BSA.agregar_donante(DonanteRegistrado, centro1);
		}catch{exception* e){
		cout << e->what() << endl;

	}
	else if (opcion == "2") {
		Creceptor ReceptorRegistrado = registrar_personaR();
		Ccentro_salud centro2 = seleccionar_centro();
		BSA.agregar_receptor(Mateo, centro2);
	}
	if (opcion == "3")
	{
		string dniP;
		cout << "Ingrese el dni de la persona:" << endl;
		cin >> dniP;
		BSA.buscar_prioridad_receptor(dniP);
	}
	else if (opcion == "4") 
		BSA.Buscar_espera();
	
	else if (opcion == "5")
		BSA.empezar_transfusion();

	else if (opcion == "6")
		BSA.donaciones_provincia();
	*/
}
/*
time_t convertir_fecha(int dia,int  mes,int  anio)
{
	time_t now, convertido;
	now = time(NULL);
	tm* fecha = new tm;;
	localtime_s(fecha, &now);
	fecha->tm_year = anio - 1900;
	fecha->tm_mon = mes - 1;
	fecha->tm_mday = dia;
	convertido = mktime(fecha);
	delete fecha;
	return convertido;
}
Cdonante registrar_personaD()
{
	string nombre;
	string apellido;
	string dni;
	char fluido;
	int dia;
	int mes;
	int anio;
	int edad;
	char  sexo;
	double peso;
	string gruposangre;
	tipo_sangre tipo; 
	char rh;
	bool enfermedad;
	bool tatuajes;
	string telefono;
	Cmedula* medula = new Cmedula();
	Cplasma* plasma = new Cplasma();

	cout << "Porfavor, ingrese el nombre de la persona." << endl;
	cin >> nombre;
	cout << "Porfavor, ingrese el apellido de la persona." << endl;
	cin >> apellido;
	cout << "Porfavor ingrese el DNI de la persona." << endl;
	cin >> dni;
	cout << "Porfavor ingrese el dia de nacimiento de la persona." << endl;
	cin >> dia;
	cout << "Porfavor ingrese el mes de nacimiento de la persona." << endl;
	cin >> mes;
	cout << "Porfavor ingrese el anio de nacimiento de la persona." << endl;
	cin >> anio;
	cout << "Porfavor ingrese la edad de la persona." << endl;
	cin >> edad;
	cout << "Porfavor ingrese el sexo de la persona. Digite f si es mujer, m si es hombre." << endl;
	cin >> sexo;
	cout << "Porfavor ingrese el peso (kg) de la persona." << endl;
	cin >> peso;
	cout << "Porfavor ingrese el grupo sanguíneo de la persona (A/B/AB/O)." << endl;
	cin >> gruposangre;
	cout << "Porfavor ingrese el factor Rh de la persona (+/-)." << endl;
	cin >> rh;
	cout << "¿Sufre de enfermedades que sean transmitidas vía sangre, como Hepetitis o Chagas?" << endl
		<< "En caso afirmativo digite true, caso contrario digite false" << endl;
	cin >> enfermedad;
	cout << "¿Se ha realizado donaciones o tatuajes en los ultimos dos meses?" << endl;
	cout << "En caso afirmativo digite true, caso contrario digite false." << endl;
	cin >> tatuajes;
	cout << "Porfavor ingrese su numero de telefóno.";
	cin >> telefono;
	cout << "Que fluido se desea donar? Ingrese m(medula), p(plasma) o s(sangre)." << endl;
	cin >> fluido;
	cout << "Donar Salva vidas!" << endl;
	if (gruposangre == "A")
	{
		tipo = A;
	}
	else if (gruposangre == "AB")
	{
		tipo = AB;
	}
	else if (gruposangre == "B")
	{
		tipo = B;
	}
	else if (gruposangre == "O")
	{
		tipo = O;
	}

	vector<Cregistro*> registropersona;
	Csangre* sangreS = new Csangre(tipo, rh);

	if (fluido == 'm') {
		Cregistro registro_(0, 0, *medula);
		registropersona.push_back(&registro_);
	}
	else if (fluido == 'p')
	{
		Cregistro registro_(0, 0, *plasma);
		registropersona.push_back(&registro_);
	}
	else {
		Cregistro registro_(0, 0, *sangreS);
		registropersona.push_back(&registro_);
	}

	time_t fechanac = convertir_fecha(dia, mes, anio);


	Cdonante DonanteRegistrado = Cdonante(edad, peso, enfermedad, tatuajes, nombre, apellido, telefono, sexo, dni, fechanac, registropersona, sangreS);
	return DonanteRegistrado;
}

Ccentro_salud seleccionar_centro() {
	int numero;
	provincias provincia;
	string provinciaelegida;
	cout << "Porfavor ingrese el numero del centro disponible donde desea anotar a la persona:" << endl
		<< " 1) San Luis" << endl
		<< "2) Chubut" << endl
		<< "3) Mendoza" << endl
		<< "4) Centro Favaloro" << endl
		<< "5) Buenos Aires" << endl;
	// solo queda completar para que pueda elegir las 24 provincias
	cin >> provinciaelegida;

	if (provinciaelegida == "1" || provinciaelegida == "San Luis")
	{
		provincia = San_Luis;
	}
	else if (provinciaelegida == "2" || provinciaelegida == "Chubut")
	{
		provincia = Chubut;
	}
	else if (provinciaelegida == "3" || provinciaelegida == "Mendoza")
	{
		provincia = Mendoza;
	}
	else if (provinciaelegida == "4" || provinciaelegida == "Centro Favaloro")
	{
		provincia = CABA;
	}
	else if (provinciaelegida == "5" || provinciaelegida == "Buenos Aires")
	{
		provincia = BsAs;
	};
	vector<Cpaciente*>registrocentro;
	Ccentro_salud centro("Hospital Pequenia familia", "Avenida de Mayo 5213", "Junin", provincia, "76834672372", registrocentro);
	return centro;
}

Creceptor registrar_personaR()
{
	string nombreR;
	string apellidoR;
	string dniR;
	int diaN;
	int mesN;
	int anioN;
	int edadR;
	char sexoR;
	string estado;
	estados estado_;
	string telefonoR;
	string gruposangreR;
	char rhR;
	tipo_sangre tipoR;
	string necesario; 
	Cfluido* necesita; 

	cout << "Porfavor, ingrese el nombre de la persona." << endl;
	cin >> nombreR;
	cout << "Porfavor, ingrese el apellido de la persona." << endl;
	cin >> apellidoR;
	cout << "Porfavor ingrese el DNI de la persona." << endl;
	cin >> dniR;
	cout << "Porfavor ingrese el dia de nacimiento de la persona." << endl;
	cin >> diaN;
	cout << "Porfavor ingrese el mes de nacimiento de la persona." << endl;
	cin >> mesN;
	cout << "Porfavor ingrese el anio de nacimiento de la persona." << endl;
	cin >> anioN;
	cout << "Porfavor ingrese el sexo de la persona. Digite f si es mujer, m si es hombre." << endl;
	cin >> sexoR;
	cout << "Porfavor introduzca el estado de la persona. (Inestable/Estable)." << endl;
	cin >> estado; 
	cout << "Porfavor ingrese el grupo sanguíneo de la persona (A/B/AB/O)." << endl;
	cin >> gruposangreR;
	cout << "Porfavor ingrese el factor Rh de la persona (+/-)." << endl;
	cin >> rhR;
	cout << "Porfavor ingrese el fluido el cual necesita la persona. (Sangre/Medula/Plasma)" << endl;
	cin >> necesario;
	cout << "Porfavor para finalizar ingrese su numero de telefóno.";
	cin >> telefonoR;
	cout << "Donar Salva vidas!" << endl;

	if (estado == "estable" || estado == "Estable"){
		estado_ = estable;
	}
	else if (estado == "inestable" || estado == "Inestable")
	{
		estado_ = inestable;
	}
	
	if (gruposangreR == "A")
	{
		tipoR = A;
	}
	else if (gruposangreR == "AB")
	{
		tipoR = AB;
	}
	else if (gruposangreR == "B")
	{
		tipoR = B;
	}
	else if (gruposangreR == "O")
	{
		tipoR = O;
	}

	if (necesario == "plasma" || necesario == "Plasma")
	{
		necesita = new Cplasma();
	}
	else  if (necesario == "medula" || necesario == "Medula")
	{
		necesita = new Cmedula();
	}
	if (necesario == "sangre" || necesario == "Sangre")
	{
		necesita = new Csangre(tipoR, rhR);	
	}

	time_t fechanac = convertir_fecha(diaN, mesN, anioN);
	time_t fechaingreso = time(nullptr); // le asigno el tiempo actual de registro. 
	Csangre* sangreR = new Csangre(tipoR, rhR);
	
	Creceptor ReceptorRegistrado = Creceptor(fechaingreso,estado_, nombreR, apellidoR,telefonoR, dniR, sexoR, fechanac, necesita, sangreR);
	return ReceptorRegistrado;
	delete necesita; 
}*/