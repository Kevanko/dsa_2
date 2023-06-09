#pragma once

struct listnode {
  char *key;
  int value;

  struct listnode *next;
};

unsigned int JenkinsHash(char *s);
unsigned int hashtab_hash(char *key);
void hashtab_init(struct listnode **hashtab);
void hashtab_add_DJB(struct listnode **hashtab, char *key, int value);
void hashtab_add(struct listnode **hashtab, char *key, int value);
struct listnode *hashtab_lookup(struct listnode **hashtab, char *key);
struct listnode *hashtab_lookup_DJB(struct listnode **hashtab, char *key);
void hashtab_delete(struct listnode **hashtab, char *key);
void free_table(struct listnode **hashtab);
int get_collisions(struct listnode **hashtab);