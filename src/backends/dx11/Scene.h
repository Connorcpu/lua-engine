#pragma once

#include <backends/common/renderer.h>

extern "C" scene *rd_create_scene(device *device);
extern "C" void rd_free_scene(scene *scene);

extern "C" sprite_handle rd_create_sprite(scene *scene, sprite_params *params);
extern "C" void rd_destroy_sprite(scene *scene, sprite_handle sprite);

extern "C" void rd_get_sprite_uv(scene *scene, sprite_handle sprite, vec2 *topleft, vec2 *topright);
extern "C" void rd_set_sprite_uv(scene *scene, sprite_handle sprite, const vec2 *topleft, const vec2 *topright);

extern "C" float rd_get_sprite_layer(scene *scene, sprite_handle sprite);
extern "C" void rd_set_sprite_layer(scene *scene, sprite_handle sprite, float layer);

extern "C" texture *rd_get_sprite_texture(scene *scene, sprite_handle sprite);
extern "C" void rd_set_sprite_texture(scene *scene, sprite_handle sprite, texture *tex);

extern "C" void rd_get_sprite_transform(scene *scene, sprite_handle sprite, matrix2d *transform);
extern "C" void rd_set_sprite_transform(scene *scene, sprite_handle sprite, const matrix2d *transform);

extern "C" void rd_get_sprite_tint(scene *scene, sprite_handle sprite, color *tint);
extern "C" void rd_set_sprite_tint(scene *scene, sprite_handle sprite, const color *tint);
