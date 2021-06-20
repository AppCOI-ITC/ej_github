Buenas, como estan?
Para esta parte lo que van a tener que hacer es crear un programa
que haga titilar un led, pero va a tener que ser encendido de una forma 
rara (imaginen el video de la caja inutil aca),pueden o no, usar:

- Un fotoresistor
- Un boton
- Y por supollo, un arduino nano(<- si no usan esto me sorprenderia la verdad)

Una vez creado el programa van a tener que actualizar este repositorio
no van a poder actualizarlo por github, porque me voy a dar cuenta, y segundo
porque la idea es que lo suban directamente desde Visual Studio code o el CMD

bien antes de comenzar con el ejercicio van a tener que instalar GIT
https://git-scm.com/downloads ,una vez instalado, en VScode aparecera un simbolito 
nuevo entre el debugger y la lupa de busqueda, en ese lugar se mostraran las 
modificaciones a los archivos en otros editores de texto 

el comando que tendran que usar para poder clonar el repositorio desde el CMD es:
- git clone [url del repositorio]

una vez descargado se encontraran con el siguiente grupo de archivos:

- \intro\
- ..\intro.ino
- \README.md

dentro de la carpeta de \intro\ ustedes van a tener que agregar su programa y subirlo de nuevo al repositorio
usando los comandos:

- git add .
- git commit -m "[que es lo que hicieron en menos de 15 palabras]"
- git push origin main

una vez que todos terminen la actividad tienen que usar el siguiente comando:

- git pull origin main

para ver lo que todos subieron al repositorio
el primero que lo suba unicamente va a tener una programa
el que agarre la actividad un poco despues va a tener tal vez mas de un .ino
por eso la idea es que despues de que todos terminen la actividad lo actualizen

PD: 
- primero yo voy a dejar una version de mi idea de una forma random de prender un led
- segundo si quieren escribir como encender un led de la forma comun y corriente lo pueden hacer
pero la idea es que no sea un trabajo mecanico para que se lo acuerden de cierta forma