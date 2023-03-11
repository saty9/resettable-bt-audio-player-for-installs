#ifndef __AUDIO_TONEURI_H__
#define __AUDIO_TONEURI_H__

extern const char* tone_uri[];

typedef enum {
    TONE_TYPE_CONNECTED,
    TONE_TYPE_DISCONNECTED,
    TONE_TYPE_READY_TO_CONNECT,
    TONE_TYPE_MAX,
} tone_type_t;

int get_tone_uri_num();

#endif
