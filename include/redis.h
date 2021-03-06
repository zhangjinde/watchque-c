#ifndef REDIS_H
#define REDIS_H

#include "watch.h"

ret_t r_sadd (redis_t *, watch_t *);
ret_t r_multi (redis_t *);
ret_t r_exec (redis_t *);
void *r_post (redis_t *, char *, char *, flags_t);
ret_t r_enqueue (redis_t *, watch_t *, struct inotify_event *, flags_t);
/* redisContext * */ ret_t r_connect (char *, int, int);

#endif
