/*
 * Copyright © 2007-2018 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef _I915_DRM_EXT_H_
#define _I915_DRM_EXT_H_

#ifndef ANDROID

#else

struct drm_i915_gem_create_android {
    /**
     * Requested size for the object.
     *
     * The (page-aligned) allocated size for the object will be returned.
     */
    __u64 size;
    /**
     * Returned handle for the object.
     *
     * Object handles are nonzero.
     */
    __u32 handle;
    __u32 pad;
    __u32 flags;
};

struct drm_i915_gem_syncpt_driver_data {
        __u32 value;
        __u32 cycle;
        __u64 flags;
};

#endif

#endif /* _I915_DRM_EXT_H_ */