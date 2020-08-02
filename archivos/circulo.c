#define PI 3.1416

main() {
	float area, radio;

	radio = 10;
	area = PI * (radio * radio);
	printf("Circulo.\n");
	printf("%s%f\n\n", "Area de un circulo de radio 10: ", area);
}
