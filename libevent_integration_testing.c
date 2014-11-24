#include <pthread.h>
#include <stdio.h>
#include <websock/websock.h>

void *WebsockWait();

int main() {
    
    pthread_t one,two,three,four;
    int one1,two2,three3,four4;
    
    libwebsock_context *ctx = libwebsock_init(NULL,NULL,1024);
    libwebsock_context *ctx2 = libwebsock_init(ctx->base,NULL,1024);
    libwebsock_context *ctx3 = libwebsock_init(ctx->base,NULL,1024);
    libwebsock_context *ctx4 = libwebsock_init(ctx->base,NULL,1024);
    
    one1 = pthread_create(&one, NULL, WebsockWait, ctx);
    two2 = pthread_create(&two, NULL, WebsockWait, ctx2);
    three3 = pthread_create(&three, NULL, WebsockWait, ctx3);
    four4 = pthread_create(&four, NULL, WebsockWait, ctx4);
    
    pthread_join(one,NULL);
    
    return 0;
}

void *WebsockWait(void *arg) {
    
    libwebsock_context *ptr = arg;
    
    libwebsock_bind_socket(ptr, *ptr->socketfd);
    libwebsock_wait(ptr);
    
    return 0;
}