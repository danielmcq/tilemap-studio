#ifndef CONFIG_H
#define CONFIG_H

#include "utils.h"
#include "tilemap-format.h"

#define MIN_ZOOM 1
#define MAX_ZOOM 10
#define DEFAULT_ZOOM 2

class Config {
private:
	static Tilemap_Format _format;
	static int _zoom;
	static bool _grid, _rainbow_tiles, _bold_palettes;
	static bool _print_grid, _print_rainbow_tiles, _print_palettes, _print_bold_palettes;
	static uint16_t _highlight_id;
	static bool _show_attributes;
	static bool _auto_load_tileset;
public:
	inline static Tilemap_Format format(void) { return _format; }
	inline static void format(Tilemap_Format fmt) { _format = fmt; }
	inline static int zoom(void) { return _zoom; }
	inline static void zoom(int z) { _zoom = z; }
	inline static bool grid(void) { return _grid; }
	inline static void grid(bool g) { _grid = g; }
	inline static bool rainbow_tiles(void) { return _rainbow_tiles; }
	inline static void rainbow_tiles(bool r) { _rainbow_tiles = r; }
	inline static bool bold_palettes(void) { return _bold_palettes; }
	inline static void bold_palettes(bool b) { _bold_palettes = b; }
	inline static bool print_grid(void) { return _print_grid; }
	inline static void print_grid(bool g) { _print_grid = g; }
	inline static bool print_rainbow_tiles(void) { return _print_rainbow_tiles; }
	inline static void print_rainbow_tiles(bool r) { _print_rainbow_tiles = r; }
	inline static bool print_palettes(void) { return _print_palettes; }
	inline static void print_palettes(bool p) { _print_palettes = p; }
	inline static bool print_bold_palettes(void) { return _print_bold_palettes; }
	inline static void print_bold_palettes(bool b) { _print_bold_palettes = b; }
	inline static uint16_t highlight_id(void) { return _highlight_id; }
	inline static void highlight_id(uint16_t id) { _highlight_id = id; }
	inline static bool show_attributes(void) { return _show_attributes; }
	inline static void show_attributes(bool a) { _show_attributes = a; }
	inline static bool auto_load_tileset(void) { return _auto_load_tileset; }
	inline static void auto_load_tileset(bool a) { _auto_load_tileset = a; }
};

#endif
