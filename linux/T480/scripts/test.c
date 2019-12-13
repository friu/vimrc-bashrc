#include <stdio.h>
#include <stdlib.h>

/*
 * int main() {
 *     for (unsigned int a = 0; a < 10; a += 1) {
 *         printf("1: %d\t%d\t\t", a, ~a);
 *         printf("2: %d\t%d\n", a, !a);
 *     }
 * }
 */

/*
 * #include <stdbool.h>
 * int main() {
 *     bool a = 98;
 *     printf("%d\n", a);
 * }
 */


/*
 * #include <stdlib.h>
 * #include <assert.h>
 * 
 * #include <xkbcommon/xkbcommon-compose.h>
 * 
 * 
 * int main(void) {
 *     const char *locale = getenv("LC_ALL");
 *     if (!locale)
 *         locale = getenv("LC_CTYPE");
 *     if (!locale)
 *         locale = getenv("LANG");
 *     if (!locale) {
 *         locale = "C";
 *     }
 * 
 *     printf("locale: %s\n", locale);
 * 
 *     struct xkb_context *ctx = xkb_context_new(0);
 *     assert(ctx);
 *     struct xkb_compose_table *table = xkb_compose_table_new_from_locale(ctx, locale, 0);
 *     printf("table: %p\n", table);
 * 
 *     return 0;
 * }
 */


/*
 * #include <stdio.h>
 * #include <string.h>
 * 
 * #define WIDTH (100)
 * #define HEIGHT 200    
 * void main() {
 *     char *asdf;
 *     [> printf("%s\t%s\n",add_penguin(HEIGHT), add_penguin(WIDTH)); <]
 *     memset (asdf, 0, 100);
 * }
 */

/*
 * int main() {
 *     int count = 0;
 *     char *a = (char *)calloc(200, sizeof(char));
 *     snprintf(a, 200*sizeof(char), "Timer call %d", ++count);
 *     printf("a: %s\n", a);
 *     free(a);
 * }
 */

/*
 * #include <string.h>
 * int main() {
 *     char *s = "hello world!!!";
 *     char *ss = (char *)malloc(sizeof(char)*(strlen(s)+1));
 *     for (int i = 0; i < strlen(s); i += 1) {
 *         sprintf(ss+(2*i), "%02x", s[i]);
 *     }
 *     sprintf(ss+(2*strlen(s)+1), "%c", '\0');
 *     printf("%ld\t%ld\n", strlen(s), strlen(ss));
 * }
 */

/*
 * int main() {
 *     int a[3];
 *     for (int i = 0; i < 3; i += 1) {
 *         a[i] = i;
 *     }
 *     for (int i = 0; i < 16000; i += 1) {
 *         printf("%d  ", a[i]);
 *     }
 * }
 */

/*
 * #define a 10
 * int main() {
 *     printf("a: %d\n", a);
 * #define a 20
 *     printf("a new: %d\n", a);
 * }
 */


/*
 * #include "unistd.h"
 * 
 * #define f printf("\atum\n");
 * 
 * int main() {
 *     f
 *     usleep (2000000);
 *     f
 *     usleep (1500000);
 *     f
 *     sleep (2);
 *     f
 * }
 */

/*
 * int main() {
 *     u_int8_t data[31] = {0x04, 0x3e, 0x14, 0x02, 0x01, 0x00, 0x00, 0x96, 0x01, 0x9a, 0xbf, 0x71, 0x3c, 0x08, 0x02, 0x01, 0x06, 0x04, 0x09, 0x61, 0x62, 0x63, 0xe6};
 *     u_int8_t data_len = data[13];
 *     u_int8_t *data_ptr = &data[19]; 
 * 
 *     printf("data: ");
 *         printf("data_len: %d\n", data_len);
 *     for (u_int16_t i = 0; i < data_len-5; i++) {
 *         [> printf("%02x", *data_ptr++); <]
 *         printf("%c", *data_ptr++);
 *     }
 *     printf("\n");
 * }
 */

/*
 * int main () {
 *     u_int64_t data[] = {0x02, 0x01, 0x1a, 0x02, 0x0a, 0x0c, 0x0a, 0xff, 0x4c, 0x00, 0x10, 0x05, 0x13, 0x1c, 0x35, 0x99, 0xd9};
 *     for (int i = 0; i < sizeof(data)/sizeof(data[0]); i += 1) {
 *         printf("%ld ", data[i]);
 *     }
 *     printf("\n");
 * }
 */

/*
 * #include "time.h"
 * char *foo() {
 *     srand(time(0));
 *     char *a = "Hello World!!!";
 *     if (rand()%2 == 0) {
 *         return a;
 *     } else {
 *         return NULL;
 *     }
 * }
 * 
 * int main() {
 *     (foo() == NULL) ? printf("true\n") : printf("false\n");
 * }
 */

/*
 * typedef struct {
 *     char asdf;
 *     long int foo;
 * } tp;
 * #include "string.h"
 * int main() {
 *     char a[27];
 *     tp temp;
 *     memset(a, 0, sizeof(a));
 *     memset(&temp, 0, sizeof(temp));
 *     printf("size: %ld\ttp: %c\t%ld\n",sizeof(temp), temp.asdf, temp.foo);
 *     printf("a size: %ld\na: %s\n", sizeof(a), a);
 * }
 */

/*
 * void foo(int *a, int b)
 * {
 *     printf("arr: ");
 *     for (int i = 0;i < b; i += 1) {
 *         printf("%d ", a[i]);
 *     }
 *     printf("\n");
 * }
 */

/*
 * typedef struct {
 *     u_int8_t data_buf[1027];
 *     u_int16_t buf_len;
 * } host_rcv_data_t;
 * 
 * typedef struct {
 *     long int a;
 *     [> char hello[3]; <]
 *     [> int aasdf[3]; <]
 * }temp;
 * 
 * int main() {
 *     printf("%ld\n", sizeof(temp));
 * }
 */

/*
 * int main() {
 *     int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
 *     int *b;
 *     b = a;
 *     printf("b: ");
 *     for (int i = 0; i < 8; i += 1) {
 *         printf("%d ", b[i]);
 *     }
 *     printf("\n");
 * }
 */

/*
 * int main() {
 *     u_int8_t a[] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09};
 *     u_int16_t b = 0x1234;
 *     a[3] = b >> 8;
 *     a[4] = b & 0x00ff;
 *     printf("a: ");
 *     for (int i = 0; i < 10; i += 1) {
 *         printf("0x%02x ", a[i]);
 *     }
 *     printf("\n$$$$\n");
 * }
 */

/*
 * int main () {
 *     for (int i = 0; i < 10; i += 1) {
 *         MAX(i)      i;
 *     }
 * #define MAX(x) MAX_ ## x
 *     int a[MAX(4)];
 *     printf("a: ");
 *     for (int i = 0; i < 10; i += 1) {
 *         printf("%d ", a[i]);
 *     }
 *     printf("\n");
 * }
 */

/*
 * typedef struct {
 *     char a;
 *     int b;
 * } st;
 * int main () {
 *     printf("sz: %ld\n", sizeof(st));
 * }
 */

/*
 * int main() {
 *     int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, *b;
 *     b = a;
 *     printf("b: ");
 *     for (int i = 0; i < 10; i += 1) {
 *         printf("%d ", b[i]);
 *     }
 *     printf("\n");
 * }
 */

/*
 * #include "assert.h"
 * void hw ()
 * {
 *     printf("Inside hw\n");
 *     for (int a = 0; a < 1; a += 1) {
 *         printf("a/a: %d\n", 4/a);
 *     }
 * }
 * 
 * int main()
 * {
 *     assert(0 && "Hi bro");
 *     hw();
 * }
 */

/*
 * void itoa(int n)
 * {
 *     while (n) {
 *         if (n & 1)
 *             printf("1");
 *         else
 *             printf("0");
 * 
 *         n >>= 1;
 *     }
 *     printf("\n");
 * }
 * 
 * int main()
 * {
 *   char buffer [33];
 *   int i = 0b1 ^
 *           0b1;
 *   itoa (i);
 * }
 */

/*
 * static void inline test_inline_func1(int a, int b) {
 *     printf ("a=%d and b=%d\n", a, b);
 * }
 * 
 * static int inline test_inline_func2(int x) {
 *     return x*x;
 * }
 * 
 * int main() {
 * 
 *     int tmp;
 * 
 *     test_inline_func1(2,4);
 *     tmp = test_inline_func2(5);
 * 
 *     printf("square val=%d\n", tmp);
 * 
 *     return 0;
 * }
 */

typedef struct {
    int n;
} in;

int main() {
    in foo;
    (foo.n == NULL) ? printf("NULL is true\n") : printf("not NULL\n");
}