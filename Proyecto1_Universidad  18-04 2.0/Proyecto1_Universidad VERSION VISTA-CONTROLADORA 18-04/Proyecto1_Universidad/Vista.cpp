#include "Vista.h"

void Vista::presentacion()
{
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "\n\n\n\n\n\t\t<<<< BIENVENIDO(A) AL SISTEMA DE GESTION DE LA >>>>" << endl;
    cout << "\t\t<<<<<<<< UNIVERSIDAD NACIONAL DE COSTA RICA >>>>>>>\n\n\n\n" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    Sleep(4000);
}

void Vista::fin()
{
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "\n\n\n\n\n\t\t        << GRACIAS POR UTILIZAR ESTE SISTEMA >>" << endl;
    cout << "\t\t      <<< UNIVERSIDAD NACIONAL DE COSTA RICA >>>\n\n\n\n" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
}

int Vista::menuPrincipal()
{
    int opcion;
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                                 MENU PRINCIPAL" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << "  1) SEGURIDAD Y ADMINISTRACION DE ROLES" << endl;
        cout << "  2) MANTENIMIENTO GENERAL A NIVEL DE REGISTRO" << endl;
        cout << "  3) MANTENIMIENTO POR ESCUELA" << endl;
        cout << "  4) MATRICULA E HISTORIALES" << endl;
        cout << "  5) REGISTRO DE ACTAS" << endl;
        cout << "  6) CAMBIAR USUARIO" << endl;
        cout << "  7) SALIR DEL SISTEMA" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        opcion = verificarDato("Opcion: ", 1, 7);
    } while (!(opcion > 0 && opcion < 8));
    return opcion;
}

int Vista::seguridadAminitracion()
{
    int opcion;
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                     SEGURIDAD Y ADMINISTRACION DE ROELS" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << "  1) CREAR USUARIO" << endl;
        cout << "  2) MOSTRAR USUARIOS" << endl;
        cout << "  0) MENU PRINCIPAL" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        opcion = verificarDato("Opcion: ", 0, 2);
    } while (!(opcion >= 0 && opcion < 3));
    return opcion;
}

int Vista::mantenimientoRegistro()
{
    int opcion;
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                    MANTENIMIENTO GENERAL A NIVEL DE REGISTRO" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << "  1) MANTENIMIENTO DE ANIOS Y CICLOS LECTIVOS" << endl;
        cout << "  2) MANTENIMIENTO DE CARRERAS Y CURSOS" << endl;
        cout << "  3) EMPADRONAMIENTO" << endl;
        cout << "  0) MENU PRINCIPAL" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        opcion = verificarDato("Opcion: ", 0, 3);
    } while (!(opcion >= 0 && opcion < 4));
    return opcion;
}

int Vista::mantenimientoEscuela()
{
    int opcion;
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                             MANTENIMIENTO POR ESCUELA" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << "  1) CONSULTA DE PLAN DE ESTUDIOS VIGENTE POR CARRERA" << endl;
        cout << "  2) PROCESO DE ASIGNACION DE GRUPOS" << endl;
        cout << "  3) CONSULTA GENERAL DE MATRICULA" << endl;
        cout << "  4) MANTENIMIENTO DE ACADEMICOS" << endl;
        cout << "  0) MENU PRINCIPAL" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        opcion = verificarDato("Opcion: ", 0, 4);
    } while (!(opcion >= 0 && opcion < 5));
    return opcion;
}

int Vista::matriculaHistoriales()
{
    int opcion;
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                             MATRICULA E HISTORIALES" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << "  1) PROCESO DE MATRICULA" << endl;
        cout << "  2) CONSULTA DE MATRICULA POR ESTUDIANTE" << endl;
        cout << "  3) HISTORIAL ACADEMICO POR ESTUDIANTE" << endl;
        cout << "  0) MENU PRINCIPAL" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        opcion = verificarDato("Opcion: ", 0, 4);
    } while (!(opcion >= 0 && opcion < 4));
    return opcion;
}

int Vista::registroAtas()
{
    int opcion;
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                                 REGISTRO DE ACTAS" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << "  1) PROCESO DE REGISTRO DE ACTAS" << endl;
        cout << "  0) MENU PRINCIPAL" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        opcion = verificarDato("Opcion: ", 0, 1);
    } while (!(opcion >= 0 && opcion < 2));
    return opcion;
}

int Vista::mantenimientoCarreasCursos()
{
    int opcion;
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                        MANTENIMIENTO DE CARREAS Y CURSOS" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << "  1) CREAR CARRERA" << endl;
        cout << "  2) CREAR Y ASIGNAR CURSO A CARRERA" << endl;
        cout << "  0) MENU MANTENIMIENTO DE REGISTRO" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        opcion = verificarDato("Opcion: ", 0, 2);
    } while (!(opcion >= 0 && opcion < 3));
    return opcion;
}

int Vista::mantenimientoCiclosLectivos()
{
    int opcion;
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                           MANTENIMIENTO CICLOS LECTIVOS" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << "  1) CREAR CICLO LECTIVO" << endl;
        cout << "  2) MOSTRAR CICLOS LECTIVOS" << endl;
        cout << "  0) MENU MANTENIMIENTO A NIVEL DE REGISTRO" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        opcion = verificarDato("Opcion: ", 0, 2);
    } while (!(opcion >= 0 && opcion < 3));
    return opcion;
}

void Vista::systemPause()
{
    system("pause");
}

void Vista::imprimir(string s)
{
    cout << s;
}

int Vista::verificarDato(string etiqueta, int min, int max)
{
    int n;
    while (true) {
        cout << etiqueta;
        try {
            if (cin >> n) {
                if (n < min || n > max) {
                    cin.clear();
                    cin.ignore(1024, '\n');
                    throw new ExcepcionRango(min, max);
                }
                cin.clear();
                cin.ignore(1024, '\n');
                return n;
            }
            else {
                cin.clear();
                cin.ignore(1024, '\n');
                throw new ExcepcionValor();
            }
        }
        catch (ExcepcionRango* e) {
            cout << e->toString();
        }
        catch (ExcepcionValor* e) {
            cout << e->toString();
        }
    }
}

float Vista::verificarDatoFloat(string etiqueta, int min, int max)
{
    float n;
    while (true) {
        cout << etiqueta;
        try {
            if (cin >> n) {
                if (n < min || n > max) {
                    cin.clear();
                    cin.ignore(1024, '\n');
                    throw new ExcepcionRango(min, max);
                }
                cin.clear();
                cin.ignore(1024, '\n');
                return n;
            }
            else {
                cin.clear();
                cin.ignore(1024, '\n');
                throw new ExcepcionValor();
            }
        }
        catch (ExcepcionRango* e) {
            cout << e->toString();
        }
        catch (ExcepcionValor* e) {
            cout << e->toString();
        }
    }
}

int Vista::empadronamiento()
{
    int opcion;
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                                   EMPADRONAMIENTO" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << "  1) EMPADRONAR ESTUDIANTE" << endl;
        cout << "  2) MOSTRAR ESTUDIANTES EMPADRONADOS POR CARRERA" << endl;
        cout << "  0) MENU MANTENIMIENTO A NIVEL DE REGISTRO" << endl;
        cout << "------------------------------------------------------------------------------------" << endl;
        opcion = verificarDato("Opcion: ", 0, 2);
    } while (!(opcion >= 0 && opcion < 3));
    return opcion;
}



usuario* Vista::inicioSesion(universidad* uni)
{
    usuario* aux = NULL;
    string identificacion, clave;
    do {
        system("cls");
        cout << "User: 0\nPassword: 0";
        cout << "\n\n\n\n\n" << endl;
        cout << "                                 INICIO DE SESION" << endl;
        cout << "                                ------------------" << endl;
        cout << "\n\tIdentificacion: "; getline(cin, identificacion);
        cout << "\tClave: "; getline(cin, clave);

        aux = uni->buscarUsuarioEspecifico(identificacion, clave);
        if (!aux) {
            cout << "<<< IDENTIFICACION O CONTRASENIA INVALIDOS >>>" << endl;
            Sleep(1000);
        }
    } while (!aux);
    return aux;
}

usuario* Vista::crearUsuario()
{
    string nombre;
    string id;
    string clave;
    int opcion;
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                                 CREAR USUARIO" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << "\t" << "INGRESE EL ID ";
    getline(cin, id);
    cout << "\t" << "INGRESE EL NOMBRE..."; getline(cin, nombre);
    exepcionValor e;
    clave = e.validarContra1();
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "\t" << "INGRESE NUMERO DE ROL" << endl;
    cout << "\t" << "1- Usuario-Administrador " << endl;
    cout << "\t" << "2- Usuario-Registo " << endl;
    cout << "\t" << "3- Usuario-Estudiante " << endl;
    cout << "\t" << "4- Usuario-Profesor " << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    exepcionValor e2;
    opcion = e2.validar(1, 4);

    switch (opcion) {
    case 1: {
        usuario* a = new administrativos(id, nombre, clave, "USUARIO-ADMINISTRADOR");
        cout << endl << endl;
        cout << '\t' << "USUARIO AGREGADO CON EXITO!!" << endl;
        Sleep(1000);
        return a;
    }
          break;

    case 2: {
        usuario* a = new registro(id, nombre, clave, "USUARIO-REGISTRO");
        cout << endl << endl;
        cout << '\t' << "USUARIO AGREGADO CON EXITO!!" << endl;
        Sleep(1000);
        return a;
        
    }
          break;
    case 3: {
        int celu1;
        celu1 = verificarDato("\tINGRESE EL NUMERO DE CELULAR: ", 00000001, 99999999);
        usuario* a = new estudiante(id, nombre, clave, "USUARIO-ESTUDIANTE", celu1);
        cout << endl<<endl;
        cout << '\t' << "USUARIO AGREGADO CON EXITO!!" << endl;
        Sleep(1000);
        return a;
        
    }
          break;
    case 4: {
        int celu;
        string grado;
        celu = verificarDato("\tINGRESE EL NUMERO DE CELULAR: ", 00000001, 99999999);
        //validadar grado 
        do {
            cout << '\t' << "INGRESE EL GRADO ACADEMICO (Lic, Maestria, Doctorado): ";
            getline(cin, grado);
            if (!(grado == "Lic" || grado == "Maestria" || grado == "Doctorado")) {
                cout << "\tERROR: Grado Invalido" << endl;
            }
        } while (!(grado == "Lic" || grado == "Maestria" || grado == "Doctorado"));
        //
        usuario* a = new profesor(id, nombre, clave, "USUARIO-PROFESOR", celu, grado);
        cout << endl << endl;
        cout << '\t' << "USUARIO AGREGADO CON EXITO!!" << endl;
        Sleep(1000);
        return a;
        
    }
          break;
    }
    return NULL;
}

void Vista::mostrarUsuarios(universidad* uni)
{
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                             MOSTRAR USUARIOS" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << uni->mostrarUsuarios();
    system("pause");
}

ciclo* Vista::crearCiclo()
{
    int annio, dia, mes, annioo, dia2, mes2, annioo2, val;
    string periocidad, fechaI, fechaF;
    bool f = true;
    //
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                                 CREAR CICLO" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    annio = verificarDato("\tDijite el annio del ciclo... ", 1970, 2050 );
    do {
        cout << '\t' << "Dijite numeracion (I,II,III)...";
        getline(cin, periocidad);
        if (!(periocidad == "I" || periocidad == "II" || periocidad == "III")) {
            cout << "Ciclo Invalido" << endl;
        }
    } while (!(periocidad == "I" || periocidad == "II" || periocidad == "III"));



    do {
        cout << '\t' << "Ingrese la fecha de inicio " << endl;
        dia = verificarDato("\tDia de inicio : ", 1,30);
        mes = verificarDato("\tMes de inicio:  ", 1, 12);
        annioo = verificarDato("\tAnnio de inicio  ", 1970, 2050);
        fecha* fecha1 = new fecha(dia, mes, annioo);

        cout << '\t' << "Ingrese la fecha de Finalizacion " << endl;
        dia2 = verificarDato("\tDia de finalizacion : ", 1, 30);
        mes2 = verificarDato("\tMes de finalizacion:  ", 1, 12);
        annioo2 = verificarDato("\tAnnio de finalizacion  ", 1970, 2050);
        fecha* fecha2 = new fecha(dia2, mes2, annioo2);


        val = fecha::comparaFecha(fecha1, fecha2);
        if (val < 0) {
            ciclo* nuevoCiclo = new ciclo(annio, periocidad, fecha1, fecha2);
            f = false;
            cout << '\t' << "CICLO CREADO CON EXITO!!" << endl;
            return nuevoCiclo;
            Sleep(1000);

        }
        else {
            if (val == 0) {
                cout << '\t' << "ERROR: FECHAS IGUALES" << endl;
            }
            else {
                cout << '\t' << "ERROR: FECHA DE INICIO MAYOR A LA FECHA DEL FINAL" << endl;
            }
        }

    } while (f == true);
    return NULL;
}

void Vista::mostarCiclos(universidad* uni)
{
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                            MOSTRAR CICLOS LECTIVOS" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << uni->mostrarCiclos();
    system("pause");
}

void Vista::ingresarCarreras(universidad* uni)
{
    string codigo, nombreCarrera, grado, facultad;
    int posicion;
    escuela* auxEscuela;
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                                   CREAR CARREARA" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
   // cout << '\t' << "Ingrese el codigo de la carrera... ";
    //getline(cin, codigo);
    cout << '\t' << "Ingrese el nombre de la carrera... ";
    getline(cin, nombreCarrera);
    cout << '\t' << "INNGRESE EL GRADO DE LA CARRERA (DIPLOMADO-MAESTRIA-LICENCIATURA)... ";
    getline(cin, grado);
    cout << '\t' << "INGRESE LA FACULTAD DE LA ESCUELA... ";
    getline(cin, facultad);
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                               ESCOGER ESCUELA" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << uni->mostarEscuelas();
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << '\t' << "A CUAL ESCUELA LE QUEIRE ASIGNAR LA CARRERA ?" << endl;
    cout << '\t' << "INGRESE LA POSICION " << endl;
    exepcionValor e;
    posicion = e.validar(1, uni->getTodasEscuelas()->getCant());
    auxEscuela = uni->recuperarEscuelaPosicion(posicion);
    carrera* c1 = new carrera(auxEscuela->getCodigo(), nombreCarrera, grado, facultad);
    auxEscuela->agregarCarrerasPro(c1);
    cout << '\t' << "INGRESO DE CARRRERA EXITOSO !!!" << endl;
    Sleep(2000);
}

void Vista::ingresarCursos(universidad* uni)
{
    string periocidad, nombreCurso, tipoCurso, estado, desicion;
    int a�o, pos1, pos2, creditos, requisitos, horas, pos3;
    int contador = 0;
    ciclo* cicloAux = NULL;
    escuela* escuelaAux = NULL;
    carrera* carreraAux = NULL;
    curso* cursoAux = NULL;
    bool f = true;

    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                              ESCOGER CICLO LECTIVO" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << uni->mostrarCiclos();
        cout << "------------------------------------------------------------------------------------" << endl;
        verificarLista(uni->getTodosCiclos());
        //exepcion lista vacia
        cout << endl;
        cout << '\t' << "ESCOJA EN CUAL CICLO QUIERE MATRICULAR EL CURSO " << endl;
        cout << '\t' << "INGRESE LA EL PERIODO (I,II,III)...."; 
        getline(cin, periocidad);
        a�o = verificarDato("\tINGRESE EL ANNIO DEL CICLO... ", 1970, 2050);
        cicloAux = uni->buscarCicloEspecifico(periocidad, a�o);



        if (cicloAux) {
            f = false;

            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                                 ESCOGER ESCUELA" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << uni->mostarEscuelas();
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << '\t' << "DIGITE EL NUMERO DE LA ESCUELA DONDE QUIERE MATRICULAR EL CURSO" << endl;
            exepcionValor a1;
            pos1 = a1.validar(1, uni->getCantEscuelas());
            escuelaAux = uni->recuperarEscuelaPosicion(pos1);
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                                ESCOGER LA CARRERA" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << escuelaAux->mostrarCarreras();
            cout << "------------------------------------------------------------------------------------" << endl;
            verificarLista(escuelaAux->getTodasCarrerasEscuela());
            //exepcion lista vacia
            cout << "\t" << " DIGITE EL NUMERO DE LA CARRERA DONDE QUIERE MATRICULAR EL CURSO " << endl;
            exepcionValor a2;
            pos2 = a2.validar(1, escuelaAux->getCantCarreras());

            carreraAux = escuelaAux->recuperarCarreraPro(pos2);
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                                      CREAR CURSO" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << '\t' << "DIGITE EL NOMBRE DEL CURSO... ";  getline(cin, nombreCurso);
            cout << '\t' << "DIGITE EL TIPO DE CURSO (LAB,CUR,SEM,PRA,TES)...";  getline(cin, tipoCurso);
            cout << '\t' << "DIJITE EL NUMERO DE CREDITOS... " << endl;
            exepcionValor e;
            creditos = e.validar(1, 4);
            cout << '\t' << "DIGITE EL LAS HORAS SEMANALES... " << endl;
            exepcionValor a;
            horas = a.validar(1, 10);
            cout << '\t' << "DIGITE EL ESTADO DEL CURSO (ACTIVO - INACTIVO) ..."; getline(cin, estado);

            curso* cursoPrueba = new curso(nombreCurso, tipoCurso, creditos, horas, estado, cicloAux, carreraAux);
            cursoPrueba->setCodigo();
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                                  REQUISITOS" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            
           
            requisitos = verificarDato("\tCUANTOS REQUISITOS TIENE EL CURSO ? (SI NO TIENE DIGITE 0): ", 0, 10);


            if (requisitos != 0) {
                cout << "------------------------------------------------------------------------------------" << endl;
                cout << "                                ESCOGER CURSO" << endl;
                cout << "------------------------------------------------------------------------------------" << endl << endl;
                cout << carreraAux->mostrarPlanEstudios();
                cout << "------------------------------------------------------------------------------------" << endl;
                //exepcion lista vac
                verificarLista(carreraAux->getTodosCursos());
                do {
                    
                    //cout << carreraAux->mostrarPlanEstudios();
                    ////exepcion lista vacia
                    //verificarLista(carreraAux->getTodosCursos());
                    pos3 = verificarDato("DIGITE EL NUMERO DE CURSO PARA AGREGARLO AL LOS REQUISITOS...",1, carreraAux->getTodosCursos()->getCant());
                    cursoAux = carreraAux->recuperarCursoPro(pos3);
                    cursoPrueba->agregarRequistosPro(cursoAux);
                    contador++;
                    cout << '\t' << "REQUISITO AGREGADOS CON EXITO!!" << endl;
                    Sleep(1000);
                } while (contador < requisitos);
            }
            cout << '\t' << "CURSO AGREGADO CON EXITO!!!!" << endl;
            carreraAux->agregarCursoPlan(cursoPrueba);
            Sleep(2000);
        }
    } while (f == true);
}

void Vista::empadronarEstudiante(universidad* uni)
{
    string cedula, codigo;
    int pos1;
    bool puerta = true;
    bool puerta2 = true;
    lista<usuario>* estudi = uni->getUsuariosEstudiantes();
    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                          EMPADRONAR ESTUDIANTE" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << estudi->toStringLista();
        cout << "------------------------------------------------------------------------------------" << endl;

        verificarLista(estudi);
        cout << '\t' << "INGRESE LA CEDULA DEL ESTUDIANTE..."; getline(cin, cedula);
        usuario* a = uni->getTodosUsuarios()->buscarPorString(cedula);
        if (a) {
            puerta = false;
            estudiante* estudianteAux = exepcionCambioTipo::cambiarEstudiante(a);
            cout << "SE RECUPERO A USUARIO DE LA BASE DATOS " << endl << endl;

            cout << '\t' << "Identificacion ->" << estudianteAux->getidUsu() << endl;
            cout << '\t' << "Nombre ->" << estudianteAux->getnombreUsu() << endl;
            cout << '\t' << "Telefono ->" << estudianteAux->getTelefono() << endl << endl;
            Sleep(4000);
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                                   ESOGER ESCUELA" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << uni->mostarEscuelas();
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "DIGITE EL NUMERO DE LA ESCUELA DONDE QUIERE EMPADRONAR AL ESTUDIANTE  " << endl;
            exepcionValor exe1;
            pos1 = exe1.validar(1, uni->getCantEscuelas());

            escuela* escuelaAux = uni->recuperarEscuelaPosicion(pos1);
            do {

                system("cls");
                cout << "------------------------------------------------------------------------------------" << endl;
                cout << "                                   ESCOGER CARRERA" << endl;
                cout << "------------------------------------------------------------------------------------" << endl << endl;
                cout << escuelaAux->mostrarCarreras();
                cout << "------------------------------------------------------------------------------------" << endl;
                verificarLista(escuelaAux->getTodasCarrerasEscuela());
                cout << "INGRESE EL CODIGO DE LA CARRERA "; getline(cin, codigo);
                carrera* carreraAux = escuelaAux->getTodasCarrerasEscuela()->buscarPorString(codigo);
                if (carreraAux) {
                    puerta2 = false;
                    carreraAux->agregarEstudinatesPro(estudianteAux);
                    estudianteAux->setProfesion(carreraAux);
                    cout << endl << endl;
                    cout << '\t' << "EL estudiante " << estudianteAux->getnombreUsu() << " fue empadronado en :" << endl;
                    cout << '\t' << carreraAux->getNombreCarrera() << endl;
                    cout << '\t' << escuelaAux->getNombreEscuela() << endl;
                    Sleep(4000);


                }
                else {
                    cout << '\t' << "ERROR: Codigo Incorrecto " << endl;
                    Sleep(2000);
                }
            } while (puerta2 == true);
        }
        else
        {
            cout << "ERROR: Usuario no registrado en la base de datos" << endl;
        }
    } while (puerta == true);


}

void Vista::mostrarEstudiantesEmpadronados(universidad* uni)
{
    int pos;
    string codigo;
    bool bandera = true;
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                                   ESCOGER ESCUELA" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << uni->mostarEscuelas();
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "Ingrese la posicion de la escuela... " << endl;
    exepcionValor a;
    pos = a.validar(1, uni->getCantEscuelas());
    escuela* escuelaAux = uni->recuperarEscuelaPosicion(pos);
    do {


        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                                ESCOGER CARRERA" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << escuelaAux->mostrarCarreras();
        cout << "------------------------------------------------------------------------------------" << endl;
        verificarLista(escuelaAux->getTodasCarrerasEscuela());
        cout << "Ingrese el codigo de la carrera... "; getline(cin, codigo);
        carrera* carrerraAux = escuelaAux->getTodasCarrerasEscuela()->buscarPorString(codigo);
        if (carrerraAux) {
            bandera = false;
            system("cls");
            cout << carrerraAux->mostrarEstudiantesEmpadronados();
            verificarLista(carrerraAux->getTodosEstudiantes());
            system("pause");

        }
        else {
            cout << '\t' << "ERROR: Codigo Incorrecto " << endl;

        }
    } while (bandera == true);
}

void Vista::consultaPlanDeEstudio(universidad* uni)
{
    system("cls");
    int pos1, pos2;
    string enter;
    carrera* carreraAux = NULL;
    escuela* escuelaAux = NULL;
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                                    ESCOGER ESCUELA" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << uni->mostarEscuelas();
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << '\t' << "DIGITE EL NUMERO DE LA ESCUELA" << endl;
    exepcionValor ex1;
    pos1 = ex1.validar(1, uni->getCantEscuelas());
    escuelaAux = uni->recuperarEscuelaPosicion(pos1);
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                                    ESCOGER CARRERA" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << escuelaAux->mostrarCarreras();
    cout << "------------------------------------------------------------------------------------" << endl;
    verificarLista(escuelaAux->getTodasCarrerasEscuela());
    cout << "\t" << " DIGITE EL NUMERO DE LA CARRERA" << endl;
    exepcionValor ex2;
    pos2 = ex2.validar(1, escuelaAux->getCantCarreras());
    carreraAux = escuelaAux->recuperarCarreraPro(pos2);
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                    PLAN DE ESTUDIOS DE LA CARRERA SELECCIONADA" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << carreraAux->mostrarPlanEstudiosEspecial();
    cout << "------------------------------------------------------------------------------------" << endl;
    system("pause");
}

void Vista::creacionDeGrupos(universidad* uni)
{
    int pos, cantGrupos, cupo;
    int contador = 0;
    string codigo, codigocurso, dias, horaInicio, horaFinal, idProfe;
    bool bandera = true;
    bool bandera2 = true;
    bool bandera3 = true;
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                                    ESCOGER ESCUELA" << endl;                  
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << uni->mostarEscuelas();
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "Ingrese la posicion de la escuela... " << endl;
    exepcionValor a;
    pos = a.validar(1, uni->getCantEscuelas());
    escuela* escuelaAux = uni->recuperarEscuelaPosicion(pos);
    do {


        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                                 ESCOGER LA CARRERA" << endl;                  
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << escuelaAux->mostrarCarreras();
        cout << "------------------------------------------------------------------------------------" << endl;
        verificarLista(escuelaAux->getTodasCarrerasEscuela());
        cout << "Ingrese el codigo de la carrera... "; getline(cin, codigo);
        carrera* carrerraAux = escuelaAux->getTodasCarrerasEscuela()->buscarPorString(codigo);
        if (carrerraAux) {
            bandera = false;
           
            do {
                system("cls");
                cout << "------------------------------------------------------------------------------------" << endl;
                cout << "                                  ESCOGER CURSO" << endl;                  
                cout << "------------------------------------------------------------------------------------" << endl << endl;
                cout << carrerraAux->mostrarPlanEstudios();
                cout << "------------------------------------------------------------------------------------" << endl;
                verificarLista(carrerraAux->getTodosCursos());
                cout << "Ingrese el codigo del curso "; getline(cin, codigocurso);
                curso* cursoAux = carrerraAux->getTodosCursos()->buscarPorString(codigocurso);
                if (cursoAux) {
                    bandera2 = false;
                    system("cls");
                    cout << "------------------------------------------------------------------------------------" << endl;
                    cout << "    ACTUALMENTE EXISTEN LOS SIGUIENTES GRUPOS DEL CURSO " << cursoAux->getNombreCurso() << endl;
                    cout << "------------------------------------------------------------------------------------" << endl << endl;
                    cout << cursoAux->mostrarGruposAsignados();
                    cout << "------------------------------------------------------------------------------------" << endl;
                    
                    cantGrupos = verificarDato("Cuantos grupos desea crear ?", 1, 100);
                    int numeroDeGrupo = 1;
                    do {
                        system("cls");
                        cout << "------------------------------------------------------------------------------------" << endl;
                        cout << "                                   CREAR GRUPO #" <<numeroDeGrupo++<< endl;
                        cout << "------------------------------------------------------------------------------------" << endl << endl;
                        cout << "\tIngrese el cupo " << endl;
                        exepcionValor e;
                        cupo = e.validar(1, 30);
                        //mejorar horario
                        string diaI;
                        string diaF;
                        cout << "Ingrese la INICIAL del dia de inicio : "; getline(cin, diaI);
                        cout << "Ingrese la INICIAL del dia final "; getline(cin, diaF);

                        stringstream _dias;

                        _dias << diaI << "-" << diaF;

                        dias = _dias.str();
                        //cout << "Ingrese los dias de clase ejemplo -> ( L- J) "; getline(cin, dias);
                        cout << "Ingrese la hora de inicio (# : # #) "; getline(cin, horaInicio);
                        cout << "Ingrese la hora de final (# : # #) "; getline(cin, horaFinal);

                        grupo* grupoAux = new grupo(cupo, dias, horaInicio, horaFinal, cursoAux);
                        grupoAux->setNRC();
                        grupoAux->setNumeroGrupo();
                        stringstream s;
                        s << dias << '\t' << horaInicio << "-" << horaFinal;
                        grupoAux->setHorario(s.str());

                        do {
                            system("cls");
                            cout << "------------------------------------------------------------------------------------" << endl;
                            cout << "                                      ESCOGER PROFESOR" << endl;
                            cout << "------------------------------------------------------------------------------------" << endl << endl;
                            cout << carrerraAux->mostrarProfesores();
                            cout << "------------------------------------------------------------------------------------" << endl;
                            verificarLista(carrerraAux->getTodosProfesores());
                            cout << endl;
                            cout << "Ingrese el id del profesor encargado "; getline(cin, idProfe);
                            profesor* profeAux = carrerraAux->getTodosProfesores()->buscarPorString(idProfe);

                            string auxHorario = grupoAux->getHorario();
                            if (profeAux) {


                                if (profeAux->validarCreacionGrupo(auxHorario) == false) {

                                    bandera3 = false;
                                    cout << profeAux->getnombreUsu() << endl;

                                    //seteo de partes
                                    profeAux->agregarGruposPro(grupoAux);
                                    cursoAux->agregaGrupoPro(grupoAux);
                                    grupoAux->setCurso(cursoAux);
                                    grupoAux->setProfesor(profeAux);
                                 
                                    //nuevo 08-04
                                    carrerraAux->agregarGrupoMatricula(grupoAux);
                                    //

                                    //
                                    //system("cls");
                                    //
                                    cout << "GRUPO CREADO EXITOSAMENTE !!" << endl;
                                    Sleep(1000);
                                }
                                else {


                                    cout << '\t' << "ERROR: EL PROFESOR TIENE UN CURSO A ESE HORARIO" << endl;
                                    Sleep(3000);
                                    bandera3 = false;

                                }
                            }
                            else {


                                cout << '\t' << "ERROR: EL ID ES INCORRECTO" << endl;
                                Sleep(4000);
                                bandera3 = true;

                            }

                        } while (bandera3 == true);








                        contador++;
                    } while (contador < cantGrupos);
                    //system("cls");
                    cout << "GRUPOS CREADOS EXITOSAMENTE !!" << endl;
                    cout << cursoAux->mostrarGruposAsignados();
                    system("pause");
                   

                }
                else {
                    cout << '\t' << "ERROR: Codigo Incorrecto " << endl;
                }
            } while (bandera2 == true);

        }
        else {
            cout << '\t' << "ERROR: Codigo Incorrecto " << endl;

        }
    } while (bandera == true);
}

void Vista::ingresoProfesores(universidad* uni)
{
    string cedula, codigo;
    int pos1;
    bool puerta = true;
    bool puerta2 = true;
    lista<usuario>* profes = uni->getUsuariosProfesor();
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                         MANTENIMIENTO ACADEMICOS" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << '\t' << "INGRESO DE PROFESORES" << endl << endl;
    do {
        cout << profes->toStringLista();
        verificarLista(profes);
        cout << '\t' << "INGRESE LA CEDULA DEL PROFESOR..."; getline(cin, cedula);
        usuario* a = uni->getTodosUsuarios()->buscarPorString(cedula);
        if (a) {
            puerta = false;
            profesor* profesorAux = exepcionCambioTipo::cambiarProfesor(a);
            cout << "SE RECUPERO A USUARIO DE LA BASE DATOS " << endl << endl;

            cout << '\t' << "Identificacion ->" << profesorAux->getidUsu() << endl;
            cout << '\t' << "Nombre ->" << profesorAux->getnombreUsu() << endl;
            cout << '\t' << "Telefono ->" << profesorAux->getCelular() << endl;
            cout << '\t' << "Grado Academico ->" << profesorAux->getGradoAcademico() << endl;
            Sleep(4000);
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                               ESCOGER ESCUELA" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << uni->mostarEscuelas();
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "DIGITE EL NUMERO DE LA ESCUELA DONDE QUIERE EMPADRONAR AL PROFESOR " << endl;
            exepcionValor exe1;
            pos1 = exe1.validar(1, uni->getCantEscuelas());

            escuela* escuelaAux = uni->recuperarEscuelaPosicion(pos1);
            do {

                system("cls");
                cout << "------------------------------------------------------------------------------------" << endl;
                cout << "                               ESCOGER CARRERA" << endl;
                cout << "------------------------------------------------------------------------------------" << endl << endl;
                cout << escuelaAux->mostrarCarreras();
                cout << "------------------------------------------------------------------------------------" << endl;
                verificarLista(escuelaAux->getTodasCarrerasEscuela());
                cout << "INGRESE EL CODIGO DE LA CARRERA "; getline(cin, codigo);
                carrera* carreraAux = escuelaAux->getTodasCarrerasEscuela()->buscarPorString(codigo);
                if (carreraAux) {
                    puerta2 = false;
                    carreraAux->agregarProfesorPro(profesorAux);
                    cout << endl << endl;
                    cout << '\t' << "EL profesor " << profesorAux->getnombreUsu() << " fue empadronado en :" << endl;
                    cout << '\t' << "CARRERA -> " << carreraAux->getNombreCarrera() << endl;
                    cout << '\t' << "ESCUELA-> " << escuelaAux->getNombreEscuela() << endl;
                    system("pause");


                }
                else {
                    cout << '\t' << "ERROR: Codigo Incorrecto " << endl;
                    Sleep(2000);
                }
            } while (puerta2 == true);
        }
        else
        {
            cout << "ERROR: Usuario no registrado en la base de datos" << endl;
        }
    } while (puerta == true);
}

void Vista::consultaGeneralMatricula(universidad* uni)
{
    int pos1, a�o;
    string codigoCarrera, periocidad, codigoCurso, nrc;
    bool flag1 = true;
    bool flag2 = true;
    bool flag3 = true;
    bool flag4 = true;
    ciclo* cicloAux = NULL;
    system("cls");
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                               ESCOGER ESCUELA" << endl;
    cout << "------------------------------------------------------------------------------------" << endl << endl;
    cout << uni->mostarEscuelas();
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << '\t' << "DIGITE EL NUMERO DE LA ESCUELA" << endl;
    exepcionValor exepcion1;
    pos1 = exepcion1.validar(1, uni->getCantEscuelas());
    escuela* escuelaAux = uni->recuperarEscuelaPosicion(pos1);

    do {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                               ESCOGER CARRERA" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << escuelaAux->mostrarCarreras();
        cout << "------------------------------------------------------------------------------------" << endl;
        verificarLista(escuelaAux->getTodasCarrerasEscuela());
        cout << endl << endl;
        cout << "INGRESE EL CODIGO DE LA CARRERA "; getline(cin, codigoCarrera);
        carrera* carreraAux = escuelaAux->getTodasCarrerasEscuela()->buscarPorString(codigoCarrera);
        if (carreraAux) {
            flag1 = false;
            do {
                system("cls");
                cout << "------------------------------------------------------------------------------------" << endl;
                cout << "                               ESCOGER CICLO" << endl;
                cout << "------------------------------------------------------------------------------------" << endl << endl;
                cout << uni->mostrarCiclos();
                cout << "------------------------------------------------------------------------------------" << endl;
                verificarLista(uni->getTodosCiclos());
                cout << endl << endl;
                cout << '\t' << "ESCOJA EN CUAL CICLO QUIERE MATRICULAR EL CURSO " << endl;
                cout << '\t' << "INGRESE LA EL PERIODO (I,II,III)...."; getline(cin, periocidad);
                a�o = verificarDato("\tINGRESE EL ANNIO DEL CICLO... ", 1970, 2050);
                cicloAux = uni->buscarCicloEspecifico(periocidad, a�o);
                if (cicloAux) {
                    flag2 = false;
                    do {
                        system("cls");
                        //cout << uni->mostrarCiclos();

                        cout << carreraAux->retornarCursoEspecificos(cicloAux->getAnio(), cicloAux->getPeriocidad());
                        cout << endl << endl;
                        cout << "Ingrese el CODIGO del curso "; getline(cin, codigoCurso);
                        curso* cursoAux = carreraAux->getTodosCursos()->buscarPorString(codigoCurso);
                        if (cursoAux) {
                            flag3 = false;
                            do {
                                system("cls");
                                cout << "------------------------------------------------------------------------------------" << endl;
                                cout << "                               ESCOGER CURSO" << endl;
                                cout << "------------------------------------------------------------------------------------" << endl << endl;
                                cout << cursoAux->mostrarGruposAsignados();
                                verificarLista(cursoAux->getTodosGrupos());
                                cout << endl << endl;
                                cout << "Ingrese el NRC del grupo "; getline(cin, nrc);
                                grupo* grupoAux = cursoAux->todosGrupos()->buscarPorString(nrc);
                                if (grupoAux) {
                                    flag4 = false;
                                    system("cls");
                                    cout << endl << endl;
                                    cout << "------------------------------------------------------------------------------------" << endl;
                                    cout << "                              ESTUDIANTES DEL GRUPO" << endl;
                                    cout << "------------------------------------------------------------------------------------" << endl << endl;
                                    cout << grupoAux->mostrarListadoEstudiantes();
                                    verificarLista(grupoAux->todosEstudiantes());
                                    system("pause");
                                    //fin
                                }
                                else {
                                    cout << "ERROR: NRC INCORRECTO" << endl;
                                    Sleep(2000);
                                }
                            } while (flag4 == true);

                        }
                        else {
                            cout << "ERROR: CODIGO CURSO INCORRECTO" << endl;
                            Sleep(2000);
                        }
                    } while (flag3 == true);



                }
                else {
                    cout << "ERROR: CODIGO INCORRECTO" << endl;
                    Sleep(2000);
                }
            } while (flag2 == true);

        }
        else
        {
            cout << '\t' << "ERROR: CODIGO INCORRECTO " << endl;
            Sleep(2000);
        }
    } while (flag1 == true);


}

void Vista::procesoMatricula(universidad* uni, usuario* aux)
{
    string iD, codigoCarrera;
    int pos1;
    bool flag1 = true;
    bool flag2 = true;
    if (aux->getIndentificador() == 1) {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                                  ESCOGER ESCUELA" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << uni->mostarEscuelas();
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << '\t' << "DIGITE EL NUMERO DE LA ESCUELA DONDE QUIERE MATRICULAR EL CURSO" << endl;
        exepcionValor exepcion1;
        pos1 = exepcion1.validar(1, uni->getCantEscuelas());
        escuela* escuelaAux = uni->recuperarEscuelaPosicion(pos1);
        do {
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                                  ESCOGER CARRERA" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << escuelaAux->mostrarCarreras();
            cout << "------------------------------------------------------------------------------------" << endl;
            verificarLista(escuelaAux->getTodasCarrerasEscuela());
            cout << endl << endl;
            cout << "INGRESE EL CODIGO DE LA CARRERA "; getline(cin, codigoCarrera);
            carrera* carreraAux = escuelaAux->getTodasCarrerasEscuela()->buscarPorString(codigoCarrera);
            if (carreraAux) {
                flag1 = false;
                do {
                    system("cls");
                    cout << "------------------------------------------------------------------------------------" << endl;
                    cout << "                            ESTUDIANTES EMPADRONADOS" << endl;
                    cout << "------------------------------------------------------------------------------------" << endl << endl;
                    cout << carreraAux->mostrarEstudiantesEmpadronados();
                    cout << "------------------------------------------------------------------------------------" << endl;
                    verificarLista(carreraAux->getTodosEstudiantes());
                    cout << "Ingrese el ID del estudiante ";  getline(cin, iD);
                    estudiante* estudianteAux = carreraAux->getTodosEstudiantes()->buscarPorString(iD);
                    if (estudianteAux) {
                        flag2 = false;
                        matricula::matricularEstudiante(uni, estudianteAux);
                    }
                    else {
                        cout << "ERROR: Id incorrecto" << endl;
                    }
                } while (flag2 == true);


            }
            else {
                cout << "Error : codigo equivocado" << endl;

            }
        } while (flag1 == true);


    }
    else {
        estudiante* estudianteAux = exepcionCambioTipo::cambiarEstudiante(aux);
        matricula::matricularEstudiante(uni, estudianteAux);
    }
}

void Vista::consultaMatriculaPorEstudiante(universidad* uni, usuario* aux)
{
    string iD, codigoCarrera;
    int pos1;
    bool flag1 = true;
    bool flag2 = true;
    if (aux->getIndentificador() == 1) {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                                 ESCOGER ESCUELA" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << uni->mostarEscuelas();
        cout << "------------------------------------------------------------------------------------" << endl;
        
        cout << '\t' << "DIGITE EL NUMERO DE LA ESCUELA DONDE QUIERE MATRICULAR EL CURSO" << endl;
        exepcionValor exepcion1;
        pos1 = exepcion1.validar(1, uni->getCantEscuelas());
        escuela* escuelaAux = uni->recuperarEscuelaPosicion(pos1);
        do {
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                                 ESCOGER CARRERA" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << escuelaAux->mostrarCarreras();
            cout << "------------------------------------------------------------------------------------" << endl;
            
            verificarLista(escuelaAux->getTodasCarrerasEscuela());
            cout << endl << endl;
            cout << "INGRESE EL CODIGO DE LA CARRERA "; getline(cin, codigoCarrera);
            carrera* carreraAux = escuelaAux->getTodasCarrerasEscuela()->buscarPorString(codigoCarrera);
            if (carreraAux) {
                flag1 = false;
                do {
                    system("cls");
                    cout << "------------------------------------------------------------------------------------" << endl;
                    cout << "                                 ESCOGER ESTUDIANTE" << endl;
                    cout << "------------------------------------------------------------------------------------" << endl << endl;
                    cout << carreraAux->mostrarEstudiantesEmpadronados();
                    cout << "------------------------------------------------------------------------------------" << endl;
                    
                    verificarLista(carreraAux->getTodosEstudiantes());
                    cout << "Ingrese el ID del estudiante ";  getline(cin, iD);
                    estudiante* estudianteAux = carreraAux->getTodosEstudiantes()->buscarPorString(iD);
                    if (estudianteAux) {
                        flag2 = false;
                        matricula::consultaGeneralMatricula(uni, estudianteAux);
                    }
                    else {
                        cout << "ERROR: Id incorrecto" << endl;
                    }
                } while (flag2 == true);


            }
            else {
                cout << "Error : codigo equivocado" << endl;

            }
        } while (flag1 == true);


    }
    else {
        estudiante* estudianteAux = exepcionCambioTipo::cambiarEstudiante(aux);
        matricula::consultaGeneralMatricula(uni, estudianteAux);
    }
}

void Vista::historialAcademicoPorEstudiante(universidad* uni, usuario* aux)
{
    string iD, codigoCarrera;
    int pos1;
    bool flag1 = true;
    bool flag2 = true;
    if (aux->getIndentificador() == 1) {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                                 ESCOGER ESCUELA" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << uni->mostarEscuelas();
        cout << "------------------------------------------------------------------------------------" << endl;
        
        cout << '\t' << "DIGITE EL NUMERO DE LA ESCUELA DONDE QUIERE MATRICULAR EL CURSO" << endl;
        exepcionValor exepcion1;
        pos1 = exepcion1.validar(1, uni->getCantEscuelas());
        escuela* escuelaAux = uni->recuperarEscuelaPosicion(pos1);
        do {
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                                 ESCOGER CARRERA" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << escuelaAux->mostrarCarreras();
            cout << "------------------------------------------------------------------------------------" << endl;
            
            verificarLista(escuelaAux->getTodasCarrerasEscuela());
            cout << endl << endl;
            cout << "INGRESE EL CODIGO DE LA CARRERA "; getline(cin, codigoCarrera);
            carrera* carreraAux = escuelaAux->getTodasCarrerasEscuela()->buscarPorString(codigoCarrera);
            if (carreraAux) {
                flag1 = false;
                do {
                    system("cls");
                    cout << carreraAux->mostrarEstudiantesEmpadronados();
                    verificarLista(carreraAux->getTodosEstudiantes());
                    cout << "Ingrese el ID del estudiante "; getline(cin, iD);
                    estudiante* estudianteAux = carreraAux->getTodosEstudiantes()->buscarPorString(iD);
                    if (estudianteAux) {
                        flag2 = false;
                        system("cls");
                        matricula::historialAcademicoEstudiante(estudianteAux);
                        system("pause");
                    }
                    else {
                        cout << "ERROR: Id incorrecto" << endl;
                    }
                } while (flag2 == true);
            }
            else {
                cout << "Error : codigo equivocado" << endl;

            }
        } while (flag1 == true);


    }
    else {
        estudiante* estudianteAux = exepcionCambioTipo::cambiarEstudiante(aux);
        system("cls");
        matricula::historialAcademicoEstudiante(estudianteAux);
        system("pause");
    }
}

void Vista::ingesarNotas(universidad* uni, usuario* aux)
{
    string iD, codigoCarrera;
    int pos1;
    bool flag1 = true;
    bool flag2 = true;
    if (aux->getIndentificador() == 1) {
        system("cls");
        cout << "------------------------------------------------------------------------------------" << endl;
        cout << "                                 ESCOGER ESCUELA" << endl;
        cout << "------------------------------------------------------------------------------------" << endl << endl;
        cout << uni->mostarEscuelas();
        cout << "------------------------------------------------------------------------------------" << endl;

        cout << '\t' << "DIGITE EL NUMERO DE LA ESCUELA DONDE QUIERE MATRICULAR EL CURSO" << endl;
        exepcionValor exepcion1;
        pos1 = exepcion1.validar(1, uni->getCantEscuelas());
        escuela* escuelaAux = uni->recuperarEscuelaPosicion(pos1);
        do {
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                                 ESCOGER ESCUELA" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << escuelaAux->mostrarCarreras();
            cout << "------------------------------------------------------------------------------------" << endl;
           
            verificarLista(escuelaAux->getTodasCarrerasEscuela());
            cout << endl << endl;
            cout << "INGRESE EL CODIGO DE LA CARRERA "; getline(cin, codigoCarrera);
            carrera* carreraAux = escuelaAux->getTodasCarrerasEscuela()->buscarPorString(codigoCarrera);
            if (carreraAux) {
                flag1 = false;
                do {
                    system("cls");
                    cout << "------------------------------------------------------------------------------------" << endl;
                    cout << "                              ESCOGER PROFESOR" << endl;
                    cout << "------------------------------------------------------------------------------------" << endl << endl;
                    cout << carreraAux->mostrarProfesores();
                    cout << "------------------------------------------------------------------------------------" << endl;
                    
                    verificarLista(carreraAux->getTodosProfesores());
                    cout << "Ingrese el ID del profesor "; getline(cin, iD);
                    profesor* profesorAux = carreraAux->getTodosProfesores()->buscarPorString(iD);
                    if (profesorAux) {
                        flag2 = false;
                        system("cls");


                        string periocidad, nrc;
                        int a�o;
                        float nota;
                        ciclo* cicloAux = NULL;
                        bool bandera1 = true;
                        do {
                            system("cls");
                            cout << "------------------------------------------------------------------------------------" << endl;
                            cout << "                              ESCOGER CICLO LECTIVO" << endl;
                            cout << "------------------------------------------------------------------------------------" << endl << endl;
                            cout << uni->mostrarCiclos();
                            cout << "------------------------------------------------------------------------------------" << endl;
                            
                            verificarLista(uni->getTodosCiclos());
                            cout << endl << endl;
                            cout << '\t' << "ESCOJA EN CUAL CICLO " << endl;
                            cout << '\t' << "INGRESE LA EL PERIODO (I,II,III)...."; getline(cin, periocidad);
                            a�o = verificarDato("\tINGRESE EL ANNIO DEL CICLO... ", 1970, 2050);
                            cicloAux = uni->buscarCicloEspecifico(periocidad, a�o);
                            if (cicloAux) {
                                bandera1 = false;
                                system("cls");
                                cout << "------------------------------------------------------------------------------------" << endl;
                                cout << "                                 SUS GRUPOS SON" << endl;
                                cout << "------------------------------------------------------------------------------------" << endl << endl;
                                cout << profesorAux->mostrarGruposEspecificos(a�o, periocidad);
                                cout << "------------------------------------------------------------------------------------" << endl;
                                //Valida la lista?
                      
                                cout << "INGRESE EL NRC DEL GRUPO "; getline(cin, nrc);
                                grupo* grupoAux = profesorAux->getTodosGruposAsigandos()->buscarPorString(nrc);
                                system("cls");
                                cout << "------------------------------------------------------------------------------------" << endl;
                                cout << "                         ESTUDIANTES DEL GRUPO" << endl;
                                cout << "------------------------------------------------------------------------------------" << endl << endl;
                                cout << grupoAux->mostrarListadoEstudiantes();
                                cout << "------------------------------------------------------------------------------------" << endl;
                                
                                verificarLista(grupoAux->todosEstudiantes());

                                string codigoCurso = grupoAux->getCursoAsociado()->getCodigoCurso();

                                int cant = grupoAux->todosEstudiantes()->getCant();
                                for (int i = 0; i < cant; i++) {
                                    estudiante* estudianteAux = grupoAux->todosEstudiantes()->recuperarElementoPorLugar(i + 1);


                                    curso* cursoAux = estudianteAux->getTodosCursosMatriculados()->buscarPorString(codigoCurso);


                                    string etiqueta = "\tIngrese la calificacion del estudiante n." + to_string(i + 1) + ": ";

                                    //cout << "Ingrese la calificacion del estudiante n." << i + 1 << ": "; cin >> nota;
                                    nota = verificarDatoFloat(etiqueta, 0,10);
                                    cursoAux->setNotaFinal(nota);
                                    estudianteAux->getHistorial()->agregarCursoAprobado(cursoAux);
                                }
                                system("cls");
                                cout << "Todas las notas fueron ingresadas correctamente !" << endl;
                                system("pause");

                            }
                            else {
                                cout << "ERROR: CICLO INCORRECTO" << endl;
                                Sleep(1000);
                            }
                        } while (bandera1 == true);
                        system("pause");
                    }
                    else {
                        cout << "ERROR: Id incorrecto" << endl;
                    }
                } while (flag2 == true);


            }
            else {
                cout << "Error : codigo equivocado" << endl;

            }
        } while (flag1 == true);




    }
    else {

        profesor* profesorAux = exepcionCambioTipo::cambiarProfesor(aux);
        string periocidad, nrc;
        int a�o, nota;
        ciclo* cicloAux = NULL;
        bool bandera1 = true;
        do {
            system("cls");
            cout << "------------------------------------------------------------------------------------" << endl;
            cout << "                               ESCOGER CICLO LECTIVO" << endl;
            cout << "------------------------------------------------------------------------------------" << endl << endl;
            cout << uni->mostrarCiclos();
            cout << "------------------------------------------------------------------------------------" << endl;
            
            verificarLista(uni->getTodosCiclos());
            cout << endl << endl;
            cout << '\t' << "ESCOJA EN CUAL CICLO " << endl;
            cout << '\t' << "INGRESE LA EL PERIODO (I,II,III)....";  getline(cin, periocidad);
            a�o = verificarDato("\tINGRESE EL ANNIO DEL CICLO... ", 1970, 2050);
            cicloAux = uni->buscarCicloEspecifico(periocidad, a�o);
            if (cicloAux) {
                bandera1 = false;
                system("cls");
                cout << "------------------------------------------------------------------------------------" << endl;
                cout << "                               ESCOGER GRUPO" << endl;
                cout << "------------------------------------------------------------------------------------" << endl << endl;
                cout << profesorAux->mostrarGruposEspecificos(a�o, periocidad);
                cout << "------------------------------------------------------------------------------------" << endl;
               
                cout << "INGRESE EL NRC DEL GRUPO "; getline(cin, nrc);
                grupo* grupoAux = profesorAux->getTodosGruposAsigandos()->buscarPorString(nrc);
                system("cls");
                cout << "------------------------------------------------------------------------------------" << endl;
                cout << "                              ESTUDIANTES DEL GRUPO" << endl;
                cout << "------------------------------------------------------------------------------------" << endl << endl;
                cout << grupoAux->mostrarListadoEstudiantes();
                cout << "------------------------------------------------------------------------------------" << endl;
                
                verificarLista(grupoAux->todosEstudiantes());

                string codigoCurso = grupoAux->getCursoAsociado()->getCodigoCurso();

                int cant = grupoAux->todosEstudiantes()->getCant();
                for (int i = 0; i < cant; i++) {
                    estudiante* estudianteAux = grupoAux->todosEstudiantes()->recuperarElementoPorLugar(i + 1);


                    curso* cursoAux = estudianteAux->getTodosCursosMatriculados()->buscarPorString(codigoCurso);



                    //cout << "Ingrese la calificacion del estudiante n." << i + 1 << ": "; cin >> nota;

                    string etiqueta = "\tIngrese la calificacion del estudiante n." + to_string(i + 1) + ": ";
                    nota = verificarDato(etiqueta, 0, 10);

                    cursoAux->setNotaFinal(nota);
                    estudianteAux->getHistorial()->agregarCursoAprobado(cursoAux);




                }
                //system("cls");
                cout << "Todas las notas fueron ingresadas correctamente !" << endl;
                system("pause");

            }
            else {
                cout << "ERROR: CICLO INCORRECTO" << endl;
                Sleep(1000);
            }
        } while (bandera1 == true);


    }





}

void Vista::dormir(int t)
{
    Sleep(t);
}

