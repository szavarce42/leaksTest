#include "ft_printf.h"

int     main(void)
{	

    int t;
	t = 50;
	long long int lt;
    lt = -9223372036854775807;
   printf("%d - %lli\n", t, lt);
    ft_printf("%lli", 9223372036854775807ll);
	

   ft_printf("%d - %lli\n", t, lt);
	ft_printf("this %#x number", 17);

  int dest;
  	/* nuevos */
	ft_printf("%ux%uX%uX%x%x%x%X%x%X%X%X", -1u,-1u,-1u,-1u,10000,10000,10000,10000,10000,10000,10000);
	ft_printf("this % i number", 17);
	ft_printf("%.37i\n", -22337203685477l);
	ft_printf("%llu", 522337203685470ull);	
	ft_printf("%04i", 0);
	ft_printf("%d\n",ft_printf("%.3s%s","hola","joe"));
	ft_printf("% 07i", -54);
	ft_printf("% +05i", 432);
	ft_printf("%5.0i", 0);
	ft_printf("%+.0i", 0);
	ft_printf("%lx", 1234294967295lu);
	ft_printf("%x", 4294967295u);	
	char *a = NULL;
    ft_printf("%.p", a);
    ft_printf("%6.p", a);
    ft_printf("%.s", a);
	ft_printf("%2.9p", 1234);
	/* fin nuevos */

	/* test pft 2019 */
	ft_printf("%%-*.3s LYDI == |%-*.3s|", 5, "LYDI");
	ft_printf("%%*i 42 == |%*i|", 3, 42);
	ft_printf("PFp%d\n", ft_printf("%-5c", 0));
	ft_printf("%0*i", -7, -54);
	ft_printf("ft%-0*i", 7, -54);
	ft_printf("%p", NULL);
	ft_printf("%.p", NULL);
	char *axx = "hola";
	ft_printf("%p", &axx);	
	/* fin test pft 2019 */
	printf("1%d,%n1234\n",123, &dest);
    printf("result:%d\n", dest);



	ft_printf("p1 %.4s\n", "cccc");
	ft_printf("p2 %.10s\n", "cccc");
	ft_printf("p3 %.4s\n", NULL);
	ft_printf("p4 %.5s\n", "aaaaa");
    ft_printf("p5 %.2d\n", 1000);

	ft_printf("p6 %.0d\n", 1000);
	
	ft_printf("p7 %.4d\n", 100);
	ft_printf("p8 %.7d\n", 100);
	ft_printf("p9 %.40d\n", 100);
	ft_printf("p10 %.1d\n", 100);
	ft_printf("p11 %.3d\n", 100);
	ft_printf("p12 %.0d\n", 0);
	ft_printf("p13 %.3i\n", 100);
	ft_printf("p14 %.0i\n", 100);
	ft_printf("p15 %.4i\n", 100);
	ft_printf("p16 %.10i\n", 100);
	ft_printf("p17 %.50i\n", 100);
	ft_printf("p18 %.1i\n", 100);
	ft_printf("p19 %.3x\n", 100);
	ft_printf("p20 %.0x\n", 0);
	ft_printf("p21 %.3x\n", 100);
	ft_printf("p22 %.0x\n", 100);    
	ft_printf("p23 %.4x\n", 100);
	ft_printf("p24 %.10x\n", 100);
	ft_printf("p25 %.50x\n", 100);
	ft_printf("p26 %.1x\n", 100);
	ft_printf("p27 %.3x\n", 100);
	ft_printf("p28 %.0x\n", 0);
	ft_printf("p29 %.3u\n", 100);
	ft_printf("p30 %.0u\n", 100);
	ft_printf("p31 %.4u\n", 100);
	ft_printf("p32 %.10u\n", 100);
	ft_printf("p33 %.50u\n", 100);
	ft_printf("p34 %.1u\n", 100);
	ft_printf("p35 %.3u\n", 100);
	ft_printf("p36 %.0u\n", 0);
	ft_printf("%%\n");
	ft_printf("Hello 42 school! %s\n", NULL);
	ft_printf("%010%\n");
	ft_printf("%d\n", 2147483647);
	ft_printf("%x\n", 2147483647);
	ft_printf("%X\n", 2147483647);
	ft_printf("%x\n", 0);
	ft_printf("%010x\n", 0);
	ft_printf("%010x\n", 20);
	ft_printf("%010x\n", -20);
	ft_printf("%10x\n", 20);
	ft_printf("%10.2x\n", -20);
	ft_printf("50-------\n");
	ft_printf("%-10x\n", 50);
	ft_printf("%-15x\n", 0);
	ft_printf("%.1x\n", 500);
	ft_printf("%*.*x\n", 50, 10, 2);
	ft_printf("%x\n", -1);
	ft_printf("%40.50d\n", 50);
    ft_printf("%d\n", -589);
    ft_printf("%-4d\n", -2464);
    ft_printf("%.5d\n", -2372);
	ft_printf("%p\n", NULL);
	ft_printf("%15p\n", NULL);
	ft_printf("%-15p\n", NULL);
    ft_printf("ret = %d\n", ft_printf("%%p::[%010d]\n", -8473));
	ft_printf("60-------\n");
    ft_printf("ret = %d\n", ft_printf("%%p::[%10d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%010d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%10d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", 8473));
	ft_printf("%c\n", 'a');
	ft_printf("%10c\n", 't');
	ft_printf("%1c\n", 'y');
	ft_printf("%50.2s\n", "Coucou");
	ft_printf("%50.2s\n", NULL);
	ft_printf("%5.0s\n", "Hello");
	ft_printf("%.1s\n", "Test");
	ft_printf("%10s\n", NULL);
	ft_printf("%10s\n", "Ok");
	ft_printf("%d\n", ft_printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42));
	ft_printf("%d\n", ft_printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42));
	ft_printf("t1 %050d\n", 10);
	ft_printf("t2 %-50d\n", 10);
	ft_printf("t3 %50.0d\n", 10);
	ft_printf("t4 %50.50d\n", 10);
	ft_printf("t5 %50.10d\n", 10);
	ft_printf("t6 %*.*d\n", 50,  5, 10);
	ft_printf("t7 %1.50d\n", -10);
	ft_printf("t8 %1.50d\n", 10);
	ft_printf("t9 %2.2d\n", 10);
	ft_printf("t10 %2.2d\n", -10);
	ft_printf("t12 %.0d\n", 0);
	ft_printf("t13 %01d\n", -20);
	ft_printf("t14 %10d\n", 1000);
	ft_printf("%d\n", ft_printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42));
	ft_printf("%d\n", ft_printf("6chiffre 1 %012d chiffre 2 %012d\n", 42, -42));
	ft_printf("%d\n", ft_printf("8chiffre 1 %*d chiffre 2 %*d\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("15chiffre 1 %.d chiffre 2 %.d\n", 42, -42));
	ft_printf("%d\n", ft_printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	ft_printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
	ft_printf("%d\n", ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n", 42, -42));
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	ft_printf("%d\n", ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	ft_printf("%d\n", ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	ft_printf("%d\n", ft_printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	ft_printf("%d\n", ft_printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	ft_printf("%d\n", ft_printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	ft_printf("%d\n", ft_printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	ft_printf("%d\n", ft_printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	ft_printf("%d\n", ft_printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
	ft_printf("%d\n", ft_printf("%%\n")); 
	ft_printf("%d\n", ft_printf("%-.12u\n", -20000000));
	ft_printf("%d\n", ft_printf("%-.12i\n", -20000000));
	ft_printf("%d\n", ft_printf("truc\n"));
	ft_printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	ft_printf("31 This is an int : %.0d\n", 0);
	ft_printf("32 This is an int : %0d\n", 0);
	ft_printf("percent 1 %012%\n");
	ft_printf("percent 2 %12%\n");
	ft_printf("percent 3 %-12%\n");
	ft_printf("percent 4 %0%\n");

	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", ft_printf("1string 1 %s string 2 %s\n", "toto", "bonjour"));
	ft_printf("%d\n", ft_printf("4string 1 %12s string 2 %12s\n", "toto", "bonjour"));
	ft_printf("%d\n", ft_printf("4string 1 %-12s string 2 %-12s\n", "toto", "bonjour"));
	ft_printf("st1 %*.*d\n", 10, 10, 50);
	ft_printf("st2 %*.*d\n", 1, 50, 50);
	ft_printf("st3 %*.*d\n", 0, 0, 50);
	ft_printf("st4 %*.*d\n", 0, 50, 50);
	ft_printf("st5 %*.*d\n", 10, 0, 50);
	ft_printf("st6 %*.*d\n", 10, 10, 50);
	ft_printf("st12 %*d\n", 10, 50);
	ft_printf("st13 %*d\n", 0, 0);
	ft_printf("st14 %.*d\n", 0, 0);
	ft_printf("st15 %*d\n", 50, 5);
	ft_printf("st16 %0.*d\n", 50, 5);
	ft_printf("st17 %0.*d\n", 0, 0);
	ft_printf("st7 %*.*s\n", 1, 50, "hey");
	ft_printf("st8 %*.*s\n", 0, 0, "coucou");
	ft_printf("st9 %*.*s\n", 0, 50, "hey");
	ft_printf("st10 %*.*s\n", 10, 0, "dsa");
	ft_printf("st11 %*.*s\n", 10, 10, "hello");
	ft_printf("st8 %.*s\n", 0, "coucou");
	ft_printf("st9 %*s\n", 0, "hey");
	ft_printf("st10 %*s\n", 10, "dsa");
	ft_printf("st118 %*s\n", 100, "hello");
	ft_printf("st119 %*s\n", 1000, "hello");
	ft_printf("st120 %*s\n", 10000, "hello");
	ft_printf("st121 %*s\n", 100000, "hello");
	ft_printf("st118 %*d\n", 100, 0);
	ft_printf("st119 %*d\n", 1000, 10);
	ft_printf("st120 %*d\n", 10000, 467);
	ft_printf("st121 %*d\n", 100000, -589);
	ft_printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	ft_printf("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
	ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	ft_printf("ultimate5 %*.*u\n", 1, 50, 5000);
	ft_printf("neg1 %*s\n", -9, "coucou");
	ft_printf("neg2 %*.*s\n", -9, 4, "coucou");
	ft_printf("neg3 %*s\n", -9, NULL);
	ft_printf("neg4 %*.*s\n", 0, 0, "coucou");
	ft_printf("neg5 %*s\n", -100, "coucou");
	ft_printf("neg6 %*s\n", -156, "coucou");
	ft_printf("neg7 %*.*s\n", -1586, 15, "coucou");
	ft_printf("neg8 %*.*s\n", -1586, 15, "coucou");
	ft_printf("neg9 %*.*s\n", 15856, 155, "coucou");
	ft_printf("neg10 %*.*s\n", -15586, 15, "coucou");
	ft_printf("neg11 %*.*s\n", -15586, 15, "coucou");
	ft_printf("neg1 %*d\n", -9, 150);
	ft_printf("neg2 %*.*d\n", -9, 4, 1555);
	ft_printf("neg3 %*d\n", -9, -255);
	ft_printf("neg4 %*.*d\n", 0, 0, -30);
	ft_printf("neg5 %*d\n", -100, -589);
	ft_printf("neg6 %*d\n", -156, 15555);
	ft_printf("neg7 %*.*d\n", -1586, 15, 0);
	ft_printf("neg8 %*.*d\n", -1586, 15, 300);
	ft_printf("neg9 %*.*d\n", 15856, 155, -3000);
	ft_printf("neg10 %*.*d\n", -15586, 15, 150);
	ft_printf("neg11 %*.*d\n", -15586, 15, 0);
	ft_printf("***************%*s%*d**************%*u*************\n", 10, "coucou", 10, 10, -50, 20);
	ft_printf("taaa %100s\n", "hello");
	
	//  
ft_printf("this %i number", 17);
printf("this %i number", 17);
ft_printf("this %i number", -267);
printf("this %i number", -267);
ft_printf("this %i number", 0);
printf("this %i number", 0);
ft_printf("%i", 3);
printf("%i", 3);
ft_printf("%i", -1);
printf("%i", -1);
ft_printf("%i", 0);
printf("%i", 0);
ft_printf("this %d number", 17);
printf("this %d number", 17);
ft_printf("this %d number", -267);
printf("this %d number", -267);
ft_printf("this %d number", 0);
printf("this %d number", 0);
ft_printf("%i",  2147483647);
printf("%i",  2147483647);
ft_printf("%i", (int)(-2147483678));
printf("%i", (int)(-2147483678));
//Signed integers  field width
ft_printf("%7i", 33);
printf("%7i", 33);
ft_printf("%7i", -14);
printf("%7i", -14);
ft_printf("%3i", 0);
printf("%3i", 0);
ft_printf("%5i", 52625);
printf("%5i", 52625);
ft_printf("%5i", -2562);
printf("%5i", -2562);
ft_printf("%4i", 94827);
printf("%4i", 94827);
ft_printf("%4i", -2464);
printf("%4i", -2464);
ft_printf("%-7i", 33);
printf("%-7i", 33);
ft_printf("%-7i", -14);
ft_printf("%-3i", 0);
ft_printf("%-5i", 52625);
ft_printf("%-5i", -2562);
ft_printf("%-4i", 94827);
ft_printf("%-4i", -2464);
//signed integers with precision
ft_printf("%.5i", 2);
ft_printf("%.6i", -3);
//Signed integers with zero field width padding
ft_printf("%05i", 43);
ft_printf("%07i", -54);
//Signed integers with field width and precision
ft_printf("%8.5i", 34);
ft_printf("%10.5i", -216);
ft_printf("%8.5i", 0);
//Signed integers with field width and precision, left-justified
ft_printf("%-8.5i", 34);
ft_printf("%-10.5i", -216);
ft_printf("%-8.5i", 0);
//Signed integers with field width and precision with zeropadding
ft_printf("%08.5i", 34);
ft_printf("%010.5i", -216);
ft_printf("%08.5i", 0);
//Signed integers with field width and precision, left-justified with zeropadding
ft_printf("%0-8.5i", 34);
ft_printf("%0-10.5i", -216);
ft_printf("%0-8.5i", 0);
static int			i_pos_1 = 878023;

//Signed integers of varying size modifiers with some other modifiers
ft_printf("[%i] [%i]", i_pos_1, i_pos_1);
 //Signed integers - zero precision zero value
ft_printf("%.0i", 0);
ft_printf("%.i", 0);
ft_printf("%5.0i", 0);
ft_printf("%5.i", 0);
ft_printf("%-5.0i", 0);
ft_printf("%-5.i", 0);
system("leaks a.out");

}
