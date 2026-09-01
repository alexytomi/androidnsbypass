// SPDX-License-Identifier: MIT
// Copyright (c) 2026 alexytomi
#pragma once

#ifndef NSBYPASS_NSBYPASS_DLFCN_H
#define NSBYPASS_NSBYPASS_DLFCN_H

#ifdef __cplusplus
extern "C" {
#endif

int nsbypass_dlclose(void *handle);
void *nsbypass_dlopen(const char *libPath, int flags);
void *nsbypass_dlsym(void *handle, const char *name);

typedef int (*dlclose_function)(
        void *handle);

typedef void *(*dlopen_function)(
        const char *libpath,
        int flags);

typedef void *(*dlsym_function)(
        void *handle,
        const char *name);

#ifdef __cplusplus
}
#endif

#endif //AMETHYST_NSBYPASS_DLFCN_H
