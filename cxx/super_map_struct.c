/* nothing here */

#include <stdio.h>

#define BLOGS_MAP(XX)               \
    XX(MYBLOG, "This is MY Blog")           \
    XX(HISBLOG, "This is HIS Blog")           \

#define BLOGS_MAP_GEN(n, s) { "BLOG_"      \
    #n, s },

static struct {
    const char *name;
    const char *description;
} blogs[] = {
    BLOGS_MAP(BLOGS_MAP_GEN)
    { NULL}
};
#undef BLOGS_MAP_GEN


int 
main() {
    int len;

    for (len = 0;blogs[len].name; len++);

    for (len = len-1; len >=0; len--) {
        printf("name: %s\n", blogs[len].name);
        printf("description: %s\n", blogs[len].description);
        printf("----------------------------------\n");
    }

    return(0);
}
