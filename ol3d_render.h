#ifndef _OL3D_RENDER_H_
#define _OL3D_RENDER_H_

// Screen
#define SCREEN_SIZE             128
#define PIXEL_SIZE              2
#define BUFFER_SIZE             SCREEN_SIZE*SCREEN_SIZE*PIXEL_SIZE

// Format : RRRR RGGG GGGB BBBB
#define COLOR_CHANNEL_RANGE_R   31
#define COLOR_CHANNEL_RANGE_G   63
#define COLOR_CHANNEL_RANGE_B   31

// typedef unsigned char ol3d_pixel_t;

// typedef ol3d_pixel_t ol3d_buffer_t[BUFFER_SIZE];

extern unsigned char render_buffer[BUFFER_SIZE];
extern unsigned char *render_target;

extern void ol3d_draw_Pixel(unsigned char *target ,const ol3d_Vector3_t *color, const unsigned int x, const unsigned int y);
extern void ol3d_draw_Triangle(unsigned char *target, const ol3d_Vector3_t *a, const ol3d_Vector3_t *b, const ol3d_Vector3_t *c, const ol3d_Vector3_t *color);
extern void ol3d_clean_buffer(unsigned char *target);

#endif