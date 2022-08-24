void setup()
{
DDRB = DDRB | B10000000; // Data Direction Register B: Inputs 0-6, Output 7
}
void loop()
{
asm (
"inicio: \n\t" // etiqueta de inicio
"sbi 0x05,0x07 \n\t" // se pone el bit 7 del registro 5 en I/O
"call tiempo \n\t" // se llama la función tiempo
"cbi 0x05,0x07 \n\t" // se libera el bit 7 del registro 5
"call tiempo \n\t" // se llama la función tiempo
"jmp main \n\t" // se llama la etiqueta main
"tiempo: \n\t" // etiqueta tiempo
"LDI r22, 45 \n\t" // se carga el valor 45 al registro 22
"LOOP_3: \n\t" // etiqueta de loop_3
"LDI r21, 255 \n\t" // se carga el valor 255 al registro 21
"LOOP_2: \n\t" // etiqueta de loop_2
"LDI r20, 255 \n\t" // se carga el valor 255 al registro 20
"LOOP_1: \n\t" // etiqueta de loop_1
"DEC r20 \n\t" // se decrementa en 1 el valor del registro 20
"BRNE LOOP_1 \n\t" // si el valor es 0, el programa continua, si no se regresa a loop_1
"DEC r21 \n\t" // se decrementa el valor del registro 21 en 1
"BRNE LOOP_2 \n\t" // si el valor es 0, el programa continua, si no se regresa a loop_2
"DEC r22 \n\t" // se decrementa el valor del registro 22 en 1
"BRNE LOOP_3 \n\t" // si el valor es 0, el programa continua, si no se regresa a loop_3
"ret \n\t" // termina la subrutina
);
}
