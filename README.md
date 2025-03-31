 # Investigamdo el archivo _.gitignore_

## ¿Que es un archivo _.gitignore_?
El archivo .gitignore es una herramienta muy útil en Git para especificar qué archivos o directorios deben ser ignorados por el sistema de control de versiones. Esto evita que archivos innecesarios, temporales o sensibles sean rastreados y añadidos al repositorio.

#### ¿Por qué es conveniente incluirlo?
Incluir un archivo .gitignore es altamente conveniente por varias razones que mejoran tanto la calidad como la eficiencia del desarrollo de proyectos en Git:

1. **Evitar desorden en el repositorio**
El archivo .gitignore permite que el repositorio contenga solo archivos esenciales para el proyecto, excluyendo archivos temporales, binarios generados automáticamente o carpetas grandes como node_modules. Esto hace que el proyecto sea más fácil de mantener y menos pesado.

2. **Mejorar la seguridad**
Previene que información sensible como claves privadas, configuraciones locales (.env), o credenciales sean accidentalmente rastreadas y subidas al repositorio.

3. **Facilitar el trabajo colaborativo**
Un archivo .gitignore bien configurado asegura que todos los colaboradores trabajen con los mismos estándares, ignorando archivos innecesarios que podrían provocar conflictos.

4. **Optimizar tiempos de desarrollo**
Reduce la cantidad de archivos a rastrear, haciendo que las operaciones como git status o git commit sean más rápidas y eficientes.

#### ¿Cuándo se debe hacer?
El archivo .gitignore debe crearse preferiblemente al inicio del proyecto, antes de empezar a realizar commits. Esto asegura que desde el principio Git ignore los archivos innecesarios y no se rastreen elementos que no deberían estar en el repositorio. Aquí tienes algunos escenarios en los que es importante incluirlo:

1. **Al crear el repositorio**
Cuando estás iniciando un proyecto nuevo y defines qué archivos son relevantes para el repositorio.

2. **Antes de compartir el repositorio**
Si vas a trabajar en equipo o compartir el código con otros, el .gitignore previene subir archivos temporales, grandes, o sensibles que puedan afectar el trabajo colaborativo o ralentizar el repositorio.

3. **Cuando trabajas con tecnologías específicas**
Al usar frameworks, lenguajes o herramientas que generan muchos archivos temporales (por ejemplo, node_modules, archivos de compilación o caché). Esto se puede automatizar con herramientas como gitignore.io que generan un archivo adaptado al entorno.

4. **Si notas desorden en tu repositorio**
Si detectas que Git está rastreando archivos innecesarios, puedes añadir un .gitignore en cualquier momento.

#### ¿Cómo configuraría el archivo .gitignore?
El archivo .gitignore se utiliza para especificar los archivos y directorios que Git debe ignorar al realizar un seguimiento de los cambios. Porlo que agregar _.extencion_ seria faltible para ignorar los archivos requeridos.
ej:
**Ignorar archivos binarios o compilados**
*.exe
*.dll
*.so
*.class

**Ignorar archivos temporales de sistema**
.DS_Store
Thumbs.db

**Ignorar configuraciones específicas del editor**
.vscode/
.idea/
*.swp

**Ignorar dependencias instaladas**
node_modules/
vendor/

**Ignorar archivos sensibles y de configuración**
.env
credentials.json

