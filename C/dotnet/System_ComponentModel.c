// this file is automatically generated with SourceGear Bridge

#include <stdint.h>

#include "System_ComponentModel.h"

extern void (*_sg_resolve_jumptable)(const char*, int, void*);

struct {
    TYP (* _Nonnull  _fp_System_IServiceProvider_get_type_handle)(void);
    SG_HNDL_NULLABLE (* _Nonnull  _fp_System_IServiceProvider_Object__GetService_0__1__Type)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL serviceType);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_IServiceProvider_cast)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);
    TYP (* _Nonnull  _fp_System_ComponentModel_CancelEventArgs_get_type_handle)(void);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_ComponentModel_CancelEventArgs_ctor_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_ComponentModel_CancelEventArgs_ctor_0__1__bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t cancel);
    int32_t (* _Nonnull  _fp_System_ComponentModel_CancelEventArgs_bool__get_Cancel_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_ComponentModel_CancelEventArgs_void__set_Cancel_0__1__bool)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_ComponentModel_CancelEventArgs_cast)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);
    TYP (* _Nonnull  _fp_System_ComponentModel_IChangeTracking_get_type_handle)(void);
    void (* _Nonnull  _fp_System_ComponentModel_IChangeTracking_void__AcceptChanges_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    int32_t (* _Nonnull  _fp_System_ComponentModel_IChangeTracking_bool__get_IsChanged_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_ComponentModel_IChangeTracking_cast)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);
    TYP (* _Nonnull  _fp_System_ComponentModel_IEditableObject_get_type_handle)(void);
    void (* _Nonnull  _fp_System_ComponentModel_IEditableObject_void__BeginEdit_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_ComponentModel_IEditableObject_void__CancelEdit_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    void (* _Nonnull  _fp_System_ComponentModel_IEditableObject_void__EndEdit_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_ComponentModel_IEditableObject_cast)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);
    TYP (* _Nonnull  _fp_System_ComponentModel_IRevertibleChangeTracking_get_type_handle)(void);
    void (* _Nonnull  _fp_System_ComponentModel_IRevertibleChangeTracking_void__RejectChanges_0__0)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);
    SG_HNDL_NONNULL (* _Nonnull  _fp_System_ComponentModel_IRevertibleChangeTracking_cast)(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);
} _g_System_ComponentModel;

static void my_init() {
    _sg_resolve_jumptable("System_ComponentModel", 21, &_g_System_ComponentModel);
}

TYP System_IServiceProvider_get_type_handle(void) {
    if (!_g_System_ComponentModel._fp_System_IServiceProvider_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_ComponentModel._fp_System_IServiceProvider_get_type_handle();
    return ret;
}

SG_HNDL_NULLABLE System_IServiceProvider_Object__GetService_0__1__Type(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL serviceType) {
    if (!_g_System_ComponentModel._fp_System_IServiceProvider_Object__GetService_0__1__Type) {
        my_init();
    }
    SG_HNDL_NULLABLE ret = _g_System_ComponentModel._fp_System_IServiceProvider_Object__GetService_0__1__Type(__thrown, __self_h, serviceType);
    return ret;
}

SG_HNDL_NONNULL System_IServiceProvider_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h) {
    if (!_g_System_ComponentModel._fp_System_IServiceProvider_cast) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_ComponentModel._fp_System_IServiceProvider_cast(__thrown, __h);
    return ret;
}

TYP System_ComponentModel_CancelEventArgs_get_type_handle(void) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_get_type_handle();
    return ret;
}

SG_HNDL_NONNULL System_ComponentModel_CancelEventArgs_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_ctor_0__0) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_ctor_0__0(__thrown);
    return ret;
}

SG_HNDL_NONNULL System_ComponentModel_CancelEventArgs_ctor_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t cancel) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_ctor_0__1__bool) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_ctor_0__1__bool(__thrown, cancel);
    return ret;
}

int32_t System_ComponentModel_CancelEventArgs_bool__get_Cancel_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_bool__get_Cancel_0__0) {
        my_init();
    }
    int32_t ret = _g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_bool__get_Cancel_0__0(__thrown, __self_h);
    return ret;
}

void System_ComponentModel_CancelEventArgs_void__set_Cancel_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_void__set_Cancel_0__1__bool) {
        my_init();
    }
    _g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_void__set_Cancel_0__1__bool(__thrown, __self_h, value);
}

SG_HNDL_NONNULL System_ComponentModel_CancelEventArgs_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_cast) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_ComponentModel._fp_System_ComponentModel_CancelEventArgs_cast(__thrown, __h);
    return ret;
}

TYP System_ComponentModel_IChangeTracking_get_type_handle(void) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IChangeTracking_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_ComponentModel._fp_System_ComponentModel_IChangeTracking_get_type_handle();
    return ret;
}

void System_ComponentModel_IChangeTracking_void__AcceptChanges_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IChangeTracking_void__AcceptChanges_0__0) {
        my_init();
    }
    _g_System_ComponentModel._fp_System_ComponentModel_IChangeTracking_void__AcceptChanges_0__0(__thrown, __self_h);
}

int32_t System_ComponentModel_IChangeTracking_bool__get_IsChanged_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IChangeTracking_bool__get_IsChanged_0__0) {
        my_init();
    }
    int32_t ret = _g_System_ComponentModel._fp_System_ComponentModel_IChangeTracking_bool__get_IsChanged_0__0(__thrown, __self_h);
    return ret;
}

SG_HNDL_NONNULL System_ComponentModel_IChangeTracking_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IChangeTracking_cast) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_ComponentModel._fp_System_ComponentModel_IChangeTracking_cast(__thrown, __h);
    return ret;
}

TYP System_ComponentModel_IEditableObject_get_type_handle(void) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_get_type_handle();
    return ret;
}

void System_ComponentModel_IEditableObject_void__BeginEdit_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_void__BeginEdit_0__0) {
        my_init();
    }
    _g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_void__BeginEdit_0__0(__thrown, __self_h);
}

void System_ComponentModel_IEditableObject_void__CancelEdit_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_void__CancelEdit_0__0) {
        my_init();
    }
    _g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_void__CancelEdit_0__0(__thrown, __self_h);
}

void System_ComponentModel_IEditableObject_void__EndEdit_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_void__EndEdit_0__0) {
        my_init();
    }
    _g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_void__EndEdit_0__0(__thrown, __self_h);
}

SG_HNDL_NONNULL System_ComponentModel_IEditableObject_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_cast) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_ComponentModel._fp_System_ComponentModel_IEditableObject_cast(__thrown, __h);
    return ret;
}

TYP System_ComponentModel_IRevertibleChangeTracking_get_type_handle(void) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IRevertibleChangeTracking_get_type_handle) {
        my_init();
    }
    TYP ret = _g_System_ComponentModel._fp_System_ComponentModel_IRevertibleChangeTracking_get_type_handle();
    return ret;
}

void System_ComponentModel_IRevertibleChangeTracking_void__RejectChanges_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IRevertibleChangeTracking_void__RejectChanges_0__0) {
        my_init();
    }
    _g_System_ComponentModel._fp_System_ComponentModel_IRevertibleChangeTracking_void__RejectChanges_0__0(__thrown, __self_h);
}

SG_HNDL_NONNULL System_ComponentModel_IRevertibleChangeTracking_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h) {
    if (!_g_System_ComponentModel._fp_System_ComponentModel_IRevertibleChangeTracking_cast) {
        my_init();
    }
    SG_HNDL_NONNULL ret = _g_System_ComponentModel._fp_System_ComponentModel_IRevertibleChangeTracking_cast(__thrown, __h);
    return ret;
}
