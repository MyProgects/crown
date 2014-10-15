/*
Copyright (c) 2013 Daniele Bartolini, Michele Rossi
Copyright (c) 2012 Daniele Bartolini, Simone Boscaratto

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#include "types.h"
#include "resource.h"
#include "bundle.h"
#include "allocator.h"
#include "file.h"
#include "assert.h"
#include "log.h"

namespace crown
{

//-----------------------------------------------------------------------------
struct FontResource
{
	uint32_t version;
	uint32_t num_glyphs;
	uint32_t texture_size; // Font texture size -- pow of 2
	uint32_t font_size;
};

//-----------------------------------------------------------------------------
struct FontGlyphData
{
	uint32_t id;
	uint32_t x;
	uint32_t y;
	uint32_t width;
	uint32_t height;
	float x_offset;
	float y_offset;
	float x_advance;
};

namespace font_resource
{
	void compile(const char* path, CompileOptions& opts);
	void* load(Allocator& allocator, Bundle& bundle, ResourceId id);
	void online(StringId64 /*id*/, ResourceManager& /*rm*/);
	void offline(StringId64 /*id*/, ResourceManager& /*rm*/);
	void unload(Allocator& allocator, void* resource);

	uint32_t num_glyphs(const FontResource* fr);
	uint32_t texture_size(const FontResource* fr);
	uint32_t font_size(const FontResource* fr);
	const FontGlyphData* get_glyph(const FontResource* fr, uint32_t i);
} // namespace font_resource
} // namespace crown
