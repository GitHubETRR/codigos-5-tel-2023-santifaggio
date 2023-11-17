Algoritmo contador_basketball
	simple1 <- 0
	doble1 <- 0
	triple1 <- 0
	simple2 <- 0
	doble2 <- 0
	triple2 <- 0
	porcentaje_Simple_1 <- 0
	porcentaje_Simple_2 <- 0
	porcentaje_Doble_1 <- 0
	porcentaje_Doble_2 <- 0
	porcentaje_Triple_1 <- 0
	porcentaje_Triple_2 <- 0
	Valorequipo1 <- 0
	Valorequipo2 <- 0
	Repetir
		Repetir
			Escribir 'Escribe el número de equipo'
			Leer Equipos
		Mientras Que Equipos<>0 Y Equipos<>1 Y Equipos<>2
		Si Equipos=1 Entonces
			Repetir
				Escribir 'Escribe la cantidad de puntos metidos'
				Leer Puntos1
			Mientras Que Puntos1<0 O Puntos1>3
			Segun Puntos1  Hacer
				1:
					simple1 <- simple1+1
				2:
					doble1 <- doble1+1
				De Otro Modo:
					triple1 <- triple1+1
			FinSegun
			Valorequipo1 <- Valorequipo1+Puntos1
		SiNo
			Si Equipos=2 Entonces
				Repetir
					Escribir 'Escribe la cantidad de puntos metidos'
					Leer Puntos2
				Mientras Que Puntos2<0 O Puntos2>3
				Segun Puntos2  Hacer
					1:
						simple2 <- simple2+1
					2:
						doble2 <- doble2+1
					3:
						triple2 <- triple2+1
				FinSegun
				Valorequipo2 <- Valorequipo2+Puntos2
			FinSi
		FinSi
		Si Valorequipo1>Valorequipo2 Entonces
			n <- Valorequipo1-Valorequipo2
			Escribir 'El equipo 1 va ganando por ',n,' puntos'
		SiNo
			Si Valorequipo2>Valorequipo1 Entonces
				n <- Valorequipo2-Valorequipo1
				Escribir 'El equipo 2 va ganando por ',n,' puntos'
			SiNo
				Escribir 'Los equipos están empatados en ',Valorequipo1,' puntos'
			FinSi
		FinSi
	Mientras Que Equipos<>0
	Escribir ''
	Si Valorequipo1=Valorequipo2 Entonces
		Escribir 'El resultado fue un empate'
	SiNo
		Si Valorequipo1>Valorequipo2 Entonces
			Escribir 'Equipo 1 gana'
		SiNo
			Escribir 'Equipo 2 gana'
		FinSi
	FinSi
	Si Valorequipo1<>0 Entonces
		porcentaje_Doble_1 <- REDON((doble1*2*100)/Valorequipo1)
		porcentaje_Simple_1 <- REDON((simple1*100)/Valorequipo1)
		porcentaje_Triple_1 <- REDON((triple1*3*100)/Valorequipo1)
	FinSi
	Si Valorequipo2<>0 Entonces
		porcentaje_Simple_2 <- REDON((simple2*100)/Valorequipo2)
		porcentaje_Doble_2 <- REDON((doble2*2*100)/Valorequipo2)
		porcentaje_Triple_2 <- REDON((triple2*3*100)/Valorequipo2)
	FinSi
	Escribir 'Datos del equipo 1:'
	Escribir 'La cantidad de simples fue de ',simple1
	Escribir 'La cantidad de dobles fue de ',doble1
	Escribir 'La cantidad de triples fue de ',triple1
	Escribir 'EL porcentaje de simples es de ',porcentaje_Simple_1,'%'
	Escribir 'El porcentaje de dobles es de ',porcentaje_Doble_1,'%'
	Escribir 'El porcentaje de triples es de ',porcentaje_Triple_1,'%'
	Escribir 'Datos del equipo 2:'
	Escribir 'La cantidad de simples fue de ',simple2
	Escribir 'La cantidad de doble fue de ',doble2
	Escribir 'La cantidad de triples fue de ',triple2
	Escribir 'El porcentaje de simples es de ',porcentaje_Simple_2,'%'
	Escribir 'El porcentaje de dobles es de ',porcentaje_Doble_2,'%'
	Escribir 'El porcentaje de triples es de ',porcentaje_Triple_2,'%'
	Escribir ''
	Escribir 'EL valor total del equipo 1 es de: ',Valorequipo1,' puntos'
	Escribir 'El valor total del equipo 2 es de: ',Valorequipo2,' puntos'
FinAlgoritmo
