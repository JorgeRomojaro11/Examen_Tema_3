# Examen_Tema_3

https://github.com/JorgeRomojaro11/Examen_Tema_3.git

Preguntas elección multiple:
1.¿Cuál es el propósito principal de la clase Variant en el lenguaje Tiny Lisp?

a) Gestionar la entrada y salida del usuario
b) Representar cualquier tipo de dato Lisp
c) Generar números aleatorios
d) Gestionar las operaciones de red

Respuesta: b

2.¿Qué representación se obtiene al utilizar el método to_string() en un objeto Variant?

a) Una cadena de texto que representa una instancia de Variant
b) Una representación binaria del objeto
c) Una representación hexadecimal del objeto
d) Un objeto JSON

Respuesta: a

3.¿Qué función cumple el método to_json_string() en la clase Variant?

a) Convierte una cadena JSON en un objeto Variant
b) Convierte un objeto Variant a una cadena JSON
c) Parsea un objeto JSON a un objeto Variant
d) Serializa un objeto Variant en una cadena binaria

Respuesta: b

4.¿Qué función cumple el método from_json_string() en la clase Variant?

a) Convierte una cadena JSON en un objeto Variant
b) Convierte un objeto Variant a una cadena JSON
c) Parsea un objeto JSON a un objeto Variant
d) Serializa un objeto Variant en una cadena binaria

Respuesta: c


Parte 2: Pregunta de desarrollo de código (80%):Sistema de Scripting para Motor de Videojuegos Indie

5.Integración con Variant:

Explica cómo la clase Environment trabaja en conjunto con Variant y demuestra su interacción mediante ejemplos prácticos.

La clase Environment trabaja junto con la clase Variant para gestionar un entorno de variables en el lenguaje Tiny Lisp. La misión principal de la clase Environment es almacenar y manipular símbolos y sus correspondientes valores en un diccionario llamado symbolTable. La clase Environment proporciona varios métodos para interactuar con el diccionario symbolTable y realizar operaciones como agregar, obtener o eliminar símbolos en el entorno. 
Algunos ejemplos prácticos de uso de la clase Enviroment pueden ser:

1-Obtener el valor de un símbolo del entorno:

Environment env;
Variant value = 42;
env.add("answer", value);

Variant result = env.get("answer");
std::cout << result.to_int() << std::endl;

En este ejemplo, agregamos el símbolo "answer" y su valor value al entorno. Luego, utilizamos el método get de la clase Environment para obtener el valor asociado al símbolo "answer". Finalmente, utilizamos el método to_int de la clase Variant para convertir el valor obtenido a un entero y lo imprimimos en la consola.

2-Eliminar un símbolo del entorno

Environment env;
Variant value = 42;
env.add("answer", value);

env.remove("answer");
bool exists = env.exists("answer");
std::cout << exists << std::endl;

En este ejemplo, agregamos el símbolo "answer" y su valor value al entorno. Luego, utilizamos el método remove de la clase Environment para eliminar el símbolo "answer" del entorno. Después, utilizamos el método "exists" de la clase Environment para verificar si el símbolo "answer" todavía existe en el entorno. Finalmente, imprimimos el resultado (que debería ser false) en la consola.

3-Agregar un símbolo y su valor al entorno

Environment env;
Variant value = 1;
env.add("answer", value);

En este ejemplo, creamos una instancia de la clase Environment llamada env. Luego, creamos una instancia de Variant llamada value y le asignamos el valor entero 11. Luego, utilizamos el método add de la clase Environment para agregar el símbolo "answer" y su valor value al entorno.

7.Casos de Uso:

Proporciona ejemplos de cómo un diseñador o desarrollador de videojuegos podría usar la clase Environment en conjunto con Variant para personalizar el comportamiento de un juego.

La clase Environment y Variant pueden ser muy útiles en el desarrollo de videojuegos para gestionar variables de juego y personalizar el comportamiento del juego. Alguno de estos ejemplos puede ser:

1-Personalización de personajes:

Environment characterAttributes;
characterAttributes.add("name", Variant("John"));
characterAttributes.add("class", Variant("warrior"));
characterAttributes.add("abilities", Variant(std::vector<std::string>{"attack", "defend"}));

 Puedes usar la clase Environment para almacenar las características de los personajes del juego, como el nombre, la clase, las habilidades, etc. Cada característica puede ser un símbolo en el Environment con un valor Variant asociado.

 2-Gestión de configuraciones del juego:

 Environment gameSettings;
gameSettings.add("sound_volume", Variant(0.5));
gameSettings.add("game_difficulty", Variant("hard"));

Puedes usar la clase Environment para almacenar las configuraciones del juego, como el volumen del sonido, la dificultad del juego, etc. Cada configuración puede ser un símbolo en el Environment con un valor Variant asociado.

3-Gestión de estados de jugador:

Environment playerState;
playerState.add("health", Variant(100));
playerState.add("score", Variant(0));
playerState.add("inventory", Variant(std::vector<std::string>{"sword", "shield"}));

Puedes usar la clase Environment para almacenar el estado del jugador, como la salud, la puntuación, el inventario, etc. Cada estado puede ser un símbolo en el Environment con un valor Variant asociado.


8.Reflexión y Mejoras:

Basándote en tu implementación, discute posibles mejoras o extensiones que podrían beneficiar al sistema de scripting en el futuro. Considera aspectos como la optimización, expansión de la tabla de símbolos, o la introducción de funciones más avanzadas
 
El sistema del scripting, al igual que la tecnología y los lenguajes de programación, puede evolucionar y beneficiarse de un sistema de scripting. Estos son varios de los ejemplos que pueden mejorar el sistema de scripting.

1-Expansión de la tabla de símbolos: Actualmente, la tabla de símbolos solo puede almacenar símbolos y sus valores correspondientes. Podría ser útil expandir la tabla de símbolos para almacenar más información sobre cada símbolo, como su tipo, su ámbito (global o local), etc.

2-Mejora de la gestión de errores: El sistema de scripting podría beneficiarse de una mejor gestión de errores, como la capacidad de manejar y reportar errores de sintaxis, errores de tiempo de ejecución, etc.

3-






