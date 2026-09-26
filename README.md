# Transformaciones Lineales — C++/CLI Windows Forms

Proyecto para Visual Studio 2022 creado como aplicación vacía CLR sobre .NET Framework 4.8.

## Abrir y ejecutar

1. Instala en Visual Studio la carga de trabajo **Desarrollo para el escritorio con C++** y el componente **Compatibilidad con C++/CLI para herramientas de compilación v143**.
2. Abre `TransformacionesLinealesCPP.sln`.
3. Selecciona `Debug | x64` y ejecuta con `Ctrl+F5`.

La configuración solicitada ya está guardada en el proyecto:

- Subsistema: `Windows`.
- Punto de entrada: `main`.
- Formulario principal: `MyForm`, declarado en `MyForm.h`.
- Framework de destino: `.NET Framework 4.8`.

El botón **Aplicar** usa la matriz escrita por el usuario. **Aceptar** carga y aplica la transformación seleccionada. La gráfica ajusta automáticamente su escala cuando un vector sale del intervalo inicial de -10 a 10.
# Transformaciones lineales — formulario editable

El formulario está creado con controles estándar de Windows Forms dentro de `InitializeComponent`, por lo que se puede ver y editar visualmente.

## Cómo abrir el diseño

1. Abra `TransformacionesLinealesCPP.sln` en Visual Studio.
2. En el Explorador de soluciones, abra **Archivos de encabezado**.
3. Haga clic derecho en `MyForm.h` y seleccione **Ver diseñador**.
4. Se abrirá la pestaña `MyForm.h [Diseño]` con todos los controles visibles.

Incluye ingreso del vector X/Y, matriz 2×2, transformaciones predefinidas, rotación por grados, cálculo del resultado, plano cartesiano, Graficar, Limpiar y Regresar.

Requiere Visual Studio con **Desarrollo para el escritorio con C++**, **C++/CLI** y .NET Framework 4.8.
