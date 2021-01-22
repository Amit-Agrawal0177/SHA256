/**
 * @file       SHA256.h
 * @author     Amit Agrawal
 * @date       Dec 2020
 */
 
 #include <string.h>

typedef struct {
  uint8_t data[64];
  uint32_t datalen;
  unsigned long long bitlen;
  uint32_t state[8];
} SHA256_CTX;

void sha256_init(SHA256_CTX *ctx);
void sha256_update(SHA256_CTX *ctx, const uint8_t data[], size_t len);
void sha256_final(SHA256_CTX *ctx, uint8_t hash[]);
void sha256_transform(SHA256_CTX *ctx, const uint8_t data[]);
String SHA256(String data);
char *btoh(char *dest, uint8_t *src, int len);

