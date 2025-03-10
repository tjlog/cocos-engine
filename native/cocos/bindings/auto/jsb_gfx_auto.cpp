
// clang-format off
#include "cocos/bindings/auto/jsb_gfx_auto.h"
#include "cocos/bindings/manual/jsb_conversions.h"
#include "cocos/bindings/manual/jsb_global.h"
#include "renderer/GFXDeviceManager.h"

#ifndef JSB_ALLOC
#define JSB_ALLOC(kls, ...) new (std::nothrow) kls(__VA_ARGS__)
#endif

#ifndef JSB_FREE
#define JSB_FREE(ptr) delete ptr
#endif

#if CC_DEBUG
static bool js_gfx_getter_return_true(se::State& s) // NOLINT(readability-identifier-naming)
{
    s.rval().setBoolean(true);
    return true;
}
SE_BIND_PROP_GET(js_gfx_getter_return_true)
#endif
se::Object* __jsb_cc_gfx_Size_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Size_class = nullptr;  // NOLINT

static bool js_gfx_Size_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Size>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Size, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Size& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Size_copy)

static bool js_gfx_Size_get_x(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Size>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->x, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->x, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Size_get_x)

static bool js_gfx_Size_set_x(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Size>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->x, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Size_set_x)

static bool js_gfx_Size_get_y(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Size>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->y, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->y, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Size_get_y)

static bool js_gfx_Size_set_y(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Size>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->y, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Size_set_y)

static bool js_gfx_Size_get_z(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Size>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->z, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->z, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Size_get_z)

static bool js_gfx_Size_set_z(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Size>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->z, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Size_set_z)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::Size * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::Size*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("x", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->x), ctx);
    }
    json->getProperty("y", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->y), ctx);
    }
    json->getProperty("z", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->z), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Size_finalize)

static bool js_gfx_Size_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Size);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Size);
        auto cobj = ptr->get<cc::gfx::Size>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Size);
    auto cobj = ptr->get<cc::gfx::Size>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->x), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->y), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->z), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_Size_constructor, __jsb_cc_gfx_Size_class, js_cc_gfx_Size_finalize)

static bool js_cc_gfx_Size_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Size_finalize)

bool js_register_gfx_Size(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Size", obj, nullptr, _SE(js_gfx_Size_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("x", _SE(js_gfx_Size_get_x), _SE(js_gfx_Size_set_x));
    cls->defineProperty("y", _SE(js_gfx_Size_get_y), _SE(js_gfx_Size_set_y));
    cls->defineProperty("z", _SE(js_gfx_Size_get_z), _SE(js_gfx_Size_set_z));
    cls->defineFunction("copy", _SE(js_gfx_Size_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Size_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Size>(cls);

    __jsb_cc_gfx_Size_proto = cls->getProto();
    __jsb_cc_gfx_Size_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DeviceCaps_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DeviceCaps_class = nullptr;  // NOLINT

static bool js_gfx_DeviceCaps_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DeviceCaps, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DeviceCaps& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DeviceCaps_copy)

static bool js_gfx_DeviceCaps_get_maxVertexAttributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxVertexAttributes, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxVertexAttributes, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxVertexAttributes)

static bool js_gfx_DeviceCaps_set_maxVertexAttributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxVertexAttributes, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxVertexAttributes)

static bool js_gfx_DeviceCaps_get_maxVertexUniformVectors(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxVertexUniformVectors, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxVertexUniformVectors, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxVertexUniformVectors)

static bool js_gfx_DeviceCaps_set_maxVertexUniformVectors(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxVertexUniformVectors, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxVertexUniformVectors)

static bool js_gfx_DeviceCaps_get_maxFragmentUniformVectors(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxFragmentUniformVectors, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxFragmentUniformVectors, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxFragmentUniformVectors)

static bool js_gfx_DeviceCaps_set_maxFragmentUniformVectors(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxFragmentUniformVectors, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxFragmentUniformVectors)

static bool js_gfx_DeviceCaps_get_maxTextureUnits(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxTextureUnits, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxTextureUnits, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxTextureUnits)

static bool js_gfx_DeviceCaps_set_maxTextureUnits(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxTextureUnits, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxTextureUnits)

static bool js_gfx_DeviceCaps_get_maxImageUnits(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxImageUnits, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxImageUnits, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxImageUnits)

static bool js_gfx_DeviceCaps_set_maxImageUnits(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxImageUnits, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxImageUnits)

static bool js_gfx_DeviceCaps_get_maxVertexTextureUnits(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxVertexTextureUnits, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxVertexTextureUnits, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxVertexTextureUnits)

static bool js_gfx_DeviceCaps_set_maxVertexTextureUnits(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxVertexTextureUnits, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxVertexTextureUnits)

static bool js_gfx_DeviceCaps_get_maxColorRenderTargets(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxColorRenderTargets, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxColorRenderTargets, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxColorRenderTargets)

static bool js_gfx_DeviceCaps_set_maxColorRenderTargets(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxColorRenderTargets, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxColorRenderTargets)

static bool js_gfx_DeviceCaps_get_maxShaderStorageBufferBindings(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxShaderStorageBufferBindings, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxShaderStorageBufferBindings, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxShaderStorageBufferBindings)

static bool js_gfx_DeviceCaps_set_maxShaderStorageBufferBindings(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxShaderStorageBufferBindings, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxShaderStorageBufferBindings)

static bool js_gfx_DeviceCaps_get_maxShaderStorageBlockSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxShaderStorageBlockSize, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxShaderStorageBlockSize, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxShaderStorageBlockSize)

static bool js_gfx_DeviceCaps_set_maxShaderStorageBlockSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxShaderStorageBlockSize, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxShaderStorageBlockSize)

static bool js_gfx_DeviceCaps_get_maxUniformBufferBindings(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxUniformBufferBindings, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxUniformBufferBindings, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxUniformBufferBindings)

static bool js_gfx_DeviceCaps_set_maxUniformBufferBindings(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxUniformBufferBindings, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxUniformBufferBindings)

static bool js_gfx_DeviceCaps_get_maxUniformBlockSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxUniformBlockSize, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxUniformBlockSize, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxUniformBlockSize)

static bool js_gfx_DeviceCaps_set_maxUniformBlockSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxUniformBlockSize, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxUniformBlockSize)

static bool js_gfx_DeviceCaps_get_maxTextureSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxTextureSize, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxTextureSize, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxTextureSize)

static bool js_gfx_DeviceCaps_set_maxTextureSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxTextureSize, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxTextureSize)

static bool js_gfx_DeviceCaps_get_maxCubeMapTextureSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxCubeMapTextureSize, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxCubeMapTextureSize, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxCubeMapTextureSize)

static bool js_gfx_DeviceCaps_set_maxCubeMapTextureSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxCubeMapTextureSize, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxCubeMapTextureSize)

static bool js_gfx_DeviceCaps_get_uboOffsetAlignment(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->uboOffsetAlignment, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->uboOffsetAlignment, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_uboOffsetAlignment)

static bool js_gfx_DeviceCaps_set_uboOffsetAlignment(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->uboOffsetAlignment, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_uboOffsetAlignment)

static bool js_gfx_DeviceCaps_get_maxComputeSharedMemorySize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxComputeSharedMemorySize, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxComputeSharedMemorySize, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxComputeSharedMemorySize)

static bool js_gfx_DeviceCaps_set_maxComputeSharedMemorySize(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxComputeSharedMemorySize, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxComputeSharedMemorySize)

static bool js_gfx_DeviceCaps_get_maxComputeWorkGroupInvocations(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxComputeWorkGroupInvocations, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxComputeWorkGroupInvocations, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxComputeWorkGroupInvocations)

static bool js_gfx_DeviceCaps_set_maxComputeWorkGroupInvocations(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxComputeWorkGroupInvocations, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxComputeWorkGroupInvocations)

static bool js_gfx_DeviceCaps_get_maxComputeWorkGroupSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxComputeWorkGroupSize, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxComputeWorkGroupSize, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxComputeWorkGroupSize)

static bool js_gfx_DeviceCaps_set_maxComputeWorkGroupSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxComputeWorkGroupSize, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxComputeWorkGroupSize)

static bool js_gfx_DeviceCaps_get_maxComputeWorkGroupCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxComputeWorkGroupCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxComputeWorkGroupCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_maxComputeWorkGroupCount)

static bool js_gfx_DeviceCaps_set_maxComputeWorkGroupCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxComputeWorkGroupCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_maxComputeWorkGroupCount)

static bool js_gfx_DeviceCaps_get_supportQuery(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->supportQuery, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->supportQuery, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_supportQuery)

static bool js_gfx_DeviceCaps_set_supportQuery(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->supportQuery, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_supportQuery)

static bool js_gfx_DeviceCaps_get_clipSpaceMinZ(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->clipSpaceMinZ, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->clipSpaceMinZ, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_clipSpaceMinZ)

static bool js_gfx_DeviceCaps_set_clipSpaceMinZ(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->clipSpaceMinZ, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_clipSpaceMinZ)

static bool js_gfx_DeviceCaps_get_screenSpaceSignY(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->screenSpaceSignY, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->screenSpaceSignY, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_screenSpaceSignY)

static bool js_gfx_DeviceCaps_set_screenSpaceSignY(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->screenSpaceSignY, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_screenSpaceSignY)

static bool js_gfx_DeviceCaps_get_clipSpaceSignY(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->clipSpaceSignY, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->clipSpaceSignY, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceCaps_get_clipSpaceSignY)

static bool js_gfx_DeviceCaps_set_clipSpaceSignY(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceCaps>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->clipSpaceSignY, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceCaps_set_clipSpaceSignY)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::DeviceCaps * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::DeviceCaps*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("maxVertexAttributes", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxVertexAttributes), ctx);
    }
    json->getProperty("maxVertexUniformVectors", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxVertexUniformVectors), ctx);
    }
    json->getProperty("maxFragmentUniformVectors", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxFragmentUniformVectors), ctx);
    }
    json->getProperty("maxTextureUnits", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxTextureUnits), ctx);
    }
    json->getProperty("maxImageUnits", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxImageUnits), ctx);
    }
    json->getProperty("maxVertexTextureUnits", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxVertexTextureUnits), ctx);
    }
    json->getProperty("maxColorRenderTargets", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxColorRenderTargets), ctx);
    }
    json->getProperty("maxShaderStorageBufferBindings", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxShaderStorageBufferBindings), ctx);
    }
    json->getProperty("maxShaderStorageBlockSize", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxShaderStorageBlockSize), ctx);
    }
    json->getProperty("maxUniformBufferBindings", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxUniformBufferBindings), ctx);
    }
    json->getProperty("maxUniformBlockSize", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxUniformBlockSize), ctx);
    }
    json->getProperty("maxTextureSize", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxTextureSize), ctx);
    }
    json->getProperty("maxCubeMapTextureSize", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxCubeMapTextureSize), ctx);
    }
    json->getProperty("uboOffsetAlignment", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->uboOffsetAlignment), ctx);
    }
    json->getProperty("maxComputeSharedMemorySize", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxComputeSharedMemorySize), ctx);
    }
    json->getProperty("maxComputeWorkGroupInvocations", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxComputeWorkGroupInvocations), ctx);
    }
    json->getProperty("maxComputeWorkGroupSize", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxComputeWorkGroupSize), ctx);
    }
    json->getProperty("maxComputeWorkGroupCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxComputeWorkGroupCount), ctx);
    }
    json->getProperty("supportQuery", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->supportQuery), ctx);
    }
    json->getProperty("clipSpaceMinZ", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->clipSpaceMinZ), ctx);
    }
    json->getProperty("screenSpaceSignY", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->screenSpaceSignY), ctx);
    }
    json->getProperty("clipSpaceSignY", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->clipSpaceSignY), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DeviceCaps_finalize)

static bool js_gfx_DeviceCaps_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DeviceCaps);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DeviceCaps);
        auto cobj = ptr->get<cc::gfx::DeviceCaps>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DeviceCaps);
    auto cobj = ptr->get<cc::gfx::DeviceCaps>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->maxVertexAttributes), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->maxVertexUniformVectors), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->maxFragmentUniformVectors), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->maxTextureUnits), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->maxImageUnits), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->maxVertexTextureUnits), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->maxColorRenderTargets), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->maxShaderStorageBufferBindings), nullptr);
    }
    if (argc > 8 && !args[8].isUndefined()) {
        ok &= sevalue_to_native(args[8], &(cobj->maxShaderStorageBlockSize), nullptr);
    }
    if (argc > 9 && !args[9].isUndefined()) {
        ok &= sevalue_to_native(args[9], &(cobj->maxUniformBufferBindings), nullptr);
    }
    if (argc > 10 && !args[10].isUndefined()) {
        ok &= sevalue_to_native(args[10], &(cobj->maxUniformBlockSize), nullptr);
    }
    if (argc > 11 && !args[11].isUndefined()) {
        ok &= sevalue_to_native(args[11], &(cobj->maxTextureSize), nullptr);
    }
    if (argc > 12 && !args[12].isUndefined()) {
        ok &= sevalue_to_native(args[12], &(cobj->maxCubeMapTextureSize), nullptr);
    }
    if (argc > 13 && !args[13].isUndefined()) {
        ok &= sevalue_to_native(args[13], &(cobj->uboOffsetAlignment), nullptr);
    }
    if (argc > 14 && !args[14].isUndefined()) {
        ok &= sevalue_to_native(args[14], &(cobj->maxComputeSharedMemorySize), nullptr);
    }
    if (argc > 15 && !args[15].isUndefined()) {
        ok &= sevalue_to_native(args[15], &(cobj->maxComputeWorkGroupInvocations), nullptr);
    }
    if (argc > 16 && !args[16].isUndefined()) {
        ok &= sevalue_to_native(args[16], &(cobj->maxComputeWorkGroupSize), nullptr);
    }
    if (argc > 17 && !args[17].isUndefined()) {
        ok &= sevalue_to_native(args[17], &(cobj->maxComputeWorkGroupCount), nullptr);
    }
    if (argc > 18 && !args[18].isUndefined()) {
        ok &= sevalue_to_native(args[18], &(cobj->supportQuery), nullptr);
    }
    if (argc > 19 && !args[19].isUndefined()) {
        ok &= sevalue_to_native(args[19], &(cobj->clipSpaceMinZ), nullptr);
    }
    if (argc > 20 && !args[20].isUndefined()) {
        ok &= sevalue_to_native(args[20], &(cobj->screenSpaceSignY), nullptr);
    }
    if (argc > 21 && !args[21].isUndefined()) {
        ok &= sevalue_to_native(args[21], &(cobj->clipSpaceSignY), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_DeviceCaps_constructor, __jsb_cc_gfx_DeviceCaps_class, js_cc_gfx_DeviceCaps_finalize)

static bool js_cc_gfx_DeviceCaps_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DeviceCaps_finalize)

bool js_register_gfx_DeviceCaps(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DeviceCaps", obj, nullptr, _SE(js_gfx_DeviceCaps_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("maxVertexAttributes", _SE(js_gfx_DeviceCaps_get_maxVertexAttributes), _SE(js_gfx_DeviceCaps_set_maxVertexAttributes));
    cls->defineProperty("maxVertexUniformVectors", _SE(js_gfx_DeviceCaps_get_maxVertexUniformVectors), _SE(js_gfx_DeviceCaps_set_maxVertexUniformVectors));
    cls->defineProperty("maxFragmentUniformVectors", _SE(js_gfx_DeviceCaps_get_maxFragmentUniformVectors), _SE(js_gfx_DeviceCaps_set_maxFragmentUniformVectors));
    cls->defineProperty("maxTextureUnits", _SE(js_gfx_DeviceCaps_get_maxTextureUnits), _SE(js_gfx_DeviceCaps_set_maxTextureUnits));
    cls->defineProperty("maxImageUnits", _SE(js_gfx_DeviceCaps_get_maxImageUnits), _SE(js_gfx_DeviceCaps_set_maxImageUnits));
    cls->defineProperty("maxVertexTextureUnits", _SE(js_gfx_DeviceCaps_get_maxVertexTextureUnits), _SE(js_gfx_DeviceCaps_set_maxVertexTextureUnits));
    cls->defineProperty("maxColorRenderTargets", _SE(js_gfx_DeviceCaps_get_maxColorRenderTargets), _SE(js_gfx_DeviceCaps_set_maxColorRenderTargets));
    cls->defineProperty("maxShaderStorageBufferBindings", _SE(js_gfx_DeviceCaps_get_maxShaderStorageBufferBindings), _SE(js_gfx_DeviceCaps_set_maxShaderStorageBufferBindings));
    cls->defineProperty("maxShaderStorageBlockSize", _SE(js_gfx_DeviceCaps_get_maxShaderStorageBlockSize), _SE(js_gfx_DeviceCaps_set_maxShaderStorageBlockSize));
    cls->defineProperty("maxUniformBufferBindings", _SE(js_gfx_DeviceCaps_get_maxUniformBufferBindings), _SE(js_gfx_DeviceCaps_set_maxUniformBufferBindings));
    cls->defineProperty("maxUniformBlockSize", _SE(js_gfx_DeviceCaps_get_maxUniformBlockSize), _SE(js_gfx_DeviceCaps_set_maxUniformBlockSize));
    cls->defineProperty("maxTextureSize", _SE(js_gfx_DeviceCaps_get_maxTextureSize), _SE(js_gfx_DeviceCaps_set_maxTextureSize));
    cls->defineProperty("maxCubeMapTextureSize", _SE(js_gfx_DeviceCaps_get_maxCubeMapTextureSize), _SE(js_gfx_DeviceCaps_set_maxCubeMapTextureSize));
    cls->defineProperty("uboOffsetAlignment", _SE(js_gfx_DeviceCaps_get_uboOffsetAlignment), _SE(js_gfx_DeviceCaps_set_uboOffsetAlignment));
    cls->defineProperty("maxComputeSharedMemorySize", _SE(js_gfx_DeviceCaps_get_maxComputeSharedMemorySize), _SE(js_gfx_DeviceCaps_set_maxComputeSharedMemorySize));
    cls->defineProperty("maxComputeWorkGroupInvocations", _SE(js_gfx_DeviceCaps_get_maxComputeWorkGroupInvocations), _SE(js_gfx_DeviceCaps_set_maxComputeWorkGroupInvocations));
    cls->defineProperty("maxComputeWorkGroupSize", _SE(js_gfx_DeviceCaps_get_maxComputeWorkGroupSize), _SE(js_gfx_DeviceCaps_set_maxComputeWorkGroupSize));
    cls->defineProperty("maxComputeWorkGroupCount", _SE(js_gfx_DeviceCaps_get_maxComputeWorkGroupCount), _SE(js_gfx_DeviceCaps_set_maxComputeWorkGroupCount));
    cls->defineProperty("supportQuery", _SE(js_gfx_DeviceCaps_get_supportQuery), _SE(js_gfx_DeviceCaps_set_supportQuery));
    cls->defineProperty("clipSpaceMinZ", _SE(js_gfx_DeviceCaps_get_clipSpaceMinZ), _SE(js_gfx_DeviceCaps_set_clipSpaceMinZ));
    cls->defineProperty("screenSpaceSignY", _SE(js_gfx_DeviceCaps_get_screenSpaceSignY), _SE(js_gfx_DeviceCaps_set_screenSpaceSignY));
    cls->defineProperty("clipSpaceSignY", _SE(js_gfx_DeviceCaps_get_clipSpaceSignY), _SE(js_gfx_DeviceCaps_set_clipSpaceSignY));
    cls->defineFunction("copy", _SE(js_gfx_DeviceCaps_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DeviceCaps_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DeviceCaps>(cls);

    __jsb_cc_gfx_DeviceCaps_proto = cls->getProto();
    __jsb_cc_gfx_DeviceCaps_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Offset_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Offset_class = nullptr;  // NOLINT

static bool js_gfx_Offset_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Offset>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Offset, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Offset& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Offset_copy)

static bool js_gfx_Offset_get_x(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Offset>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->x, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->x, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Offset_get_x)

static bool js_gfx_Offset_set_x(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Offset>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->x, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Offset_set_x)

static bool js_gfx_Offset_get_y(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Offset>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->y, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->y, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Offset_get_y)

static bool js_gfx_Offset_set_y(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Offset>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->y, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Offset_set_y)

static bool js_gfx_Offset_get_z(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Offset>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->z, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->z, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Offset_get_z)

static bool js_gfx_Offset_set_z(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Offset>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->z, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Offset_set_z)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::Offset * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::Offset*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("x", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->x), ctx);
    }
    json->getProperty("y", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->y), ctx);
    }
    json->getProperty("z", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->z), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Offset_finalize)

static bool js_gfx_Offset_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Offset);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Offset);
        auto cobj = ptr->get<cc::gfx::Offset>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Offset);
    auto cobj = ptr->get<cc::gfx::Offset>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->x), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->y), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->z), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_Offset_constructor, __jsb_cc_gfx_Offset_class, js_cc_gfx_Offset_finalize)

static bool js_cc_gfx_Offset_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Offset_finalize)

bool js_register_gfx_Offset(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Offset", obj, nullptr, _SE(js_gfx_Offset_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("x", _SE(js_gfx_Offset_get_x), _SE(js_gfx_Offset_set_x));
    cls->defineProperty("y", _SE(js_gfx_Offset_get_y), _SE(js_gfx_Offset_set_y));
    cls->defineProperty("z", _SE(js_gfx_Offset_get_z), _SE(js_gfx_Offset_set_z));
    cls->defineFunction("copy", _SE(js_gfx_Offset_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Offset_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Offset>(cls);

    __jsb_cc_gfx_Offset_proto = cls->getProto();
    __jsb_cc_gfx_Offset_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Rect_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Rect_class = nullptr;  // NOLINT

static bool js_gfx_Rect_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Rect>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Rect, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Rect& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Rect_copy)

static bool js_gfx_Rect_get_x(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Rect>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->x, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->x, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Rect_get_x)

static bool js_gfx_Rect_set_x(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Rect>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->x, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Rect_set_x)

static bool js_gfx_Rect_get_y(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Rect>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->y, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->y, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Rect_get_y)

static bool js_gfx_Rect_set_y(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Rect>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->y, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Rect_set_y)

static bool js_gfx_Rect_get_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Rect>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->width, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->width, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Rect_get_width)

static bool js_gfx_Rect_set_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Rect>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->width, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Rect_set_width)

static bool js_gfx_Rect_get_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Rect>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->height, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->height, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Rect_get_height)

static bool js_gfx_Rect_set_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Rect>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->height, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Rect_set_height)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::Rect * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::Rect*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("x", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->x), ctx);
    }
    json->getProperty("y", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->y), ctx);
    }
    json->getProperty("width", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->width), ctx);
    }
    json->getProperty("height", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->height), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Rect_finalize)

static bool js_gfx_Rect_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Rect);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Rect);
        auto cobj = ptr->get<cc::gfx::Rect>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Rect);
    auto cobj = ptr->get<cc::gfx::Rect>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->x), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->y), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->width), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->height), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_Rect_constructor, __jsb_cc_gfx_Rect_class, js_cc_gfx_Rect_finalize)

static bool js_cc_gfx_Rect_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Rect_finalize)

bool js_register_gfx_Rect(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Rect", obj, nullptr, _SE(js_gfx_Rect_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("x", _SE(js_gfx_Rect_get_x), _SE(js_gfx_Rect_set_x));
    cls->defineProperty("y", _SE(js_gfx_Rect_get_y), _SE(js_gfx_Rect_set_y));
    cls->defineProperty("width", _SE(js_gfx_Rect_get_width), _SE(js_gfx_Rect_set_width));
    cls->defineProperty("height", _SE(js_gfx_Rect_get_height), _SE(js_gfx_Rect_set_height));
    cls->defineFunction("copy", _SE(js_gfx_Rect_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Rect_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Rect>(cls);

    __jsb_cc_gfx_Rect_proto = cls->getProto();
    __jsb_cc_gfx_Rect_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Extent_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Extent_class = nullptr;  // NOLINT

static bool js_gfx_Extent_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Extent>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Extent, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Extent& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Extent_copy)

static bool js_gfx_Extent_get_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Extent>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->width, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->width, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Extent_get_width)

static bool js_gfx_Extent_set_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Extent>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->width, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Extent_set_width)

static bool js_gfx_Extent_get_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Extent>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->height, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->height, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Extent_get_height)

static bool js_gfx_Extent_set_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Extent>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->height, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Extent_set_height)

static bool js_gfx_Extent_get_depth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Extent>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depth, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depth, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Extent_get_depth)

static bool js_gfx_Extent_set_depth(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Extent>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depth, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Extent_set_depth)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::Extent * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::Extent*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("width", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->width), ctx);
    }
    json->getProperty("height", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->height), ctx);
    }
    json->getProperty("depth", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depth), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Extent_finalize)

static bool js_gfx_Extent_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Extent);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Extent);
        auto cobj = ptr->get<cc::gfx::Extent>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Extent);
    auto cobj = ptr->get<cc::gfx::Extent>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->width), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->height), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->depth), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_Extent_constructor, __jsb_cc_gfx_Extent_class, js_cc_gfx_Extent_finalize)

static bool js_cc_gfx_Extent_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Extent_finalize)

bool js_register_gfx_Extent(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Extent", obj, nullptr, _SE(js_gfx_Extent_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("width", _SE(js_gfx_Extent_get_width), _SE(js_gfx_Extent_set_width));
    cls->defineProperty("height", _SE(js_gfx_Extent_get_height), _SE(js_gfx_Extent_set_height));
    cls->defineProperty("depth", _SE(js_gfx_Extent_get_depth), _SE(js_gfx_Extent_set_depth));
    cls->defineFunction("copy", _SE(js_gfx_Extent_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Extent_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Extent>(cls);

    __jsb_cc_gfx_Extent_proto = cls->getProto();
    __jsb_cc_gfx_Extent_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_TextureSubresLayers_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_TextureSubresLayers_class = nullptr;  // NOLINT

static bool js_gfx_TextureSubresLayers_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresLayers>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::TextureSubresLayers, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::TextureSubresLayers& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureSubresLayers_copy)

static bool js_gfx_TextureSubresLayers_get_mipLevel(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresLayers>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->mipLevel, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->mipLevel, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureSubresLayers_get_mipLevel)

static bool js_gfx_TextureSubresLayers_set_mipLevel(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresLayers>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->mipLevel, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureSubresLayers_set_mipLevel)

static bool js_gfx_TextureSubresLayers_get_baseArrayLayer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresLayers>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->baseArrayLayer, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->baseArrayLayer, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureSubresLayers_get_baseArrayLayer)

static bool js_gfx_TextureSubresLayers_set_baseArrayLayer(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresLayers>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->baseArrayLayer, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureSubresLayers_set_baseArrayLayer)

static bool js_gfx_TextureSubresLayers_get_layerCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresLayers>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->layerCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->layerCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureSubresLayers_get_layerCount)

static bool js_gfx_TextureSubresLayers_set_layerCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresLayers>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->layerCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureSubresLayers_set_layerCount)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::TextureSubresLayers * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::TextureSubresLayers*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("mipLevel", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->mipLevel), ctx);
    }
    json->getProperty("baseArrayLayer", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->baseArrayLayer), ctx);
    }
    json->getProperty("layerCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->layerCount), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_TextureSubresLayers_finalize)

static bool js_gfx_TextureSubresLayers_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureSubresLayers);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureSubresLayers);
        auto cobj = ptr->get<cc::gfx::TextureSubresLayers>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureSubresLayers);
    auto cobj = ptr->get<cc::gfx::TextureSubresLayers>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->mipLevel), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->baseArrayLayer), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->layerCount), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_TextureSubresLayers_constructor, __jsb_cc_gfx_TextureSubresLayers_class, js_cc_gfx_TextureSubresLayers_finalize)

static bool js_cc_gfx_TextureSubresLayers_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_TextureSubresLayers_finalize)

bool js_register_gfx_TextureSubresLayers(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("TextureSubresLayers", obj, nullptr, _SE(js_gfx_TextureSubresLayers_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("mipLevel", _SE(js_gfx_TextureSubresLayers_get_mipLevel), _SE(js_gfx_TextureSubresLayers_set_mipLevel));
    cls->defineProperty("baseArrayLayer", _SE(js_gfx_TextureSubresLayers_get_baseArrayLayer), _SE(js_gfx_TextureSubresLayers_set_baseArrayLayer));
    cls->defineProperty("layerCount", _SE(js_gfx_TextureSubresLayers_get_layerCount), _SE(js_gfx_TextureSubresLayers_set_layerCount));
    cls->defineFunction("copy", _SE(js_gfx_TextureSubresLayers_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_TextureSubresLayers_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::TextureSubresLayers>(cls);

    __jsb_cc_gfx_TextureSubresLayers_proto = cls->getProto();
    __jsb_cc_gfx_TextureSubresLayers_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_TextureSubresRange_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_TextureSubresRange_class = nullptr;  // NOLINT

static bool js_gfx_TextureSubresRange_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresRange>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::TextureSubresRange, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::TextureSubresRange& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureSubresRange_copy)

static bool js_gfx_TextureSubresRange_get_baseMipLevel(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresRange>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->baseMipLevel, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->baseMipLevel, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureSubresRange_get_baseMipLevel)

static bool js_gfx_TextureSubresRange_set_baseMipLevel(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresRange>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->baseMipLevel, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureSubresRange_set_baseMipLevel)

static bool js_gfx_TextureSubresRange_get_levelCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresRange>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->levelCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->levelCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureSubresRange_get_levelCount)

static bool js_gfx_TextureSubresRange_set_levelCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresRange>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->levelCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureSubresRange_set_levelCount)

static bool js_gfx_TextureSubresRange_get_baseArrayLayer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresRange>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->baseArrayLayer, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->baseArrayLayer, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureSubresRange_get_baseArrayLayer)

static bool js_gfx_TextureSubresRange_set_baseArrayLayer(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresRange>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->baseArrayLayer, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureSubresRange_set_baseArrayLayer)

static bool js_gfx_TextureSubresRange_get_layerCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresRange>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->layerCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->layerCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureSubresRange_get_layerCount)

static bool js_gfx_TextureSubresRange_set_layerCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureSubresRange>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->layerCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureSubresRange_set_layerCount)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::TextureSubresRange * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::TextureSubresRange*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("baseMipLevel", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->baseMipLevel), ctx);
    }
    json->getProperty("levelCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->levelCount), ctx);
    }
    json->getProperty("baseArrayLayer", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->baseArrayLayer), ctx);
    }
    json->getProperty("layerCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->layerCount), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_TextureSubresRange_finalize)

static bool js_gfx_TextureSubresRange_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureSubresRange);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureSubresRange);
        auto cobj = ptr->get<cc::gfx::TextureSubresRange>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureSubresRange);
    auto cobj = ptr->get<cc::gfx::TextureSubresRange>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->baseMipLevel), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->levelCount), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->baseArrayLayer), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->layerCount), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_TextureSubresRange_constructor, __jsb_cc_gfx_TextureSubresRange_class, js_cc_gfx_TextureSubresRange_finalize)

static bool js_cc_gfx_TextureSubresRange_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_TextureSubresRange_finalize)

bool js_register_gfx_TextureSubresRange(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("TextureSubresRange", obj, nullptr, _SE(js_gfx_TextureSubresRange_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("baseMipLevel", _SE(js_gfx_TextureSubresRange_get_baseMipLevel), _SE(js_gfx_TextureSubresRange_set_baseMipLevel));
    cls->defineProperty("levelCount", _SE(js_gfx_TextureSubresRange_get_levelCount), _SE(js_gfx_TextureSubresRange_set_levelCount));
    cls->defineProperty("baseArrayLayer", _SE(js_gfx_TextureSubresRange_get_baseArrayLayer), _SE(js_gfx_TextureSubresRange_set_baseArrayLayer));
    cls->defineProperty("layerCount", _SE(js_gfx_TextureSubresRange_get_layerCount), _SE(js_gfx_TextureSubresRange_set_layerCount));
    cls->defineFunction("copy", _SE(js_gfx_TextureSubresRange_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_TextureSubresRange_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::TextureSubresRange>(cls);

    __jsb_cc_gfx_TextureSubresRange_proto = cls->getProto();
    __jsb_cc_gfx_TextureSubresRange_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_TextureCopy_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_TextureCopy_class = nullptr;  // NOLINT

static bool js_gfx_TextureCopy_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::TextureCopy, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::TextureCopy& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureCopy_copy)

static bool js_gfx_TextureCopy_get_srcSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->srcSubres, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->srcSubres, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureCopy_get_srcSubres)

static bool js_gfx_TextureCopy_set_srcSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->srcSubres, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureCopy_set_srcSubres)

static bool js_gfx_TextureCopy_get_srcOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->srcOffset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->srcOffset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureCopy_get_srcOffset)

static bool js_gfx_TextureCopy_set_srcOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->srcOffset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureCopy_set_srcOffset)

static bool js_gfx_TextureCopy_get_dstSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dstSubres, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dstSubres, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureCopy_get_dstSubres)

static bool js_gfx_TextureCopy_set_dstSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dstSubres, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureCopy_set_dstSubres)

static bool js_gfx_TextureCopy_get_dstOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dstOffset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dstOffset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureCopy_get_dstOffset)

static bool js_gfx_TextureCopy_set_dstOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dstOffset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureCopy_set_dstOffset)

static bool js_gfx_TextureCopy_get_extent(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->extent, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->extent, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureCopy_get_extent)

static bool js_gfx_TextureCopy_set_extent(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->extent, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureCopy_set_extent)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::TextureCopy * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::TextureCopy*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("srcSubres", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->srcSubres), ctx);
    }
    json->getProperty("srcOffset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->srcOffset), ctx);
    }
    json->getProperty("dstSubres", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dstSubres), ctx);
    }
    json->getProperty("dstOffset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dstOffset), ctx);
    }
    json->getProperty("extent", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->extent), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_TextureCopy_finalize)

static bool js_gfx_TextureCopy_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureCopy);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureCopy);
        auto cobj = ptr->get<cc::gfx::TextureCopy>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureCopy);
    auto cobj = ptr->get<cc::gfx::TextureCopy>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->srcSubres), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->srcOffset), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->dstSubres), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->dstOffset), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->extent), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_TextureCopy_constructor, __jsb_cc_gfx_TextureCopy_class, js_cc_gfx_TextureCopy_finalize)

static bool js_cc_gfx_TextureCopy_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_TextureCopy_finalize)

bool js_register_gfx_TextureCopy(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("TextureCopy", obj, nullptr, _SE(js_gfx_TextureCopy_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("srcSubres", _SE(js_gfx_TextureCopy_get_srcSubres), _SE(js_gfx_TextureCopy_set_srcSubres));
    cls->defineProperty("srcOffset", _SE(js_gfx_TextureCopy_get_srcOffset), _SE(js_gfx_TextureCopy_set_srcOffset));
    cls->defineProperty("dstSubres", _SE(js_gfx_TextureCopy_get_dstSubres), _SE(js_gfx_TextureCopy_set_dstSubres));
    cls->defineProperty("dstOffset", _SE(js_gfx_TextureCopy_get_dstOffset), _SE(js_gfx_TextureCopy_set_dstOffset));
    cls->defineProperty("extent", _SE(js_gfx_TextureCopy_get_extent), _SE(js_gfx_TextureCopy_set_extent));
    cls->defineFunction("copy", _SE(js_gfx_TextureCopy_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_TextureCopy_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::TextureCopy>(cls);

    __jsb_cc_gfx_TextureCopy_proto = cls->getProto();
    __jsb_cc_gfx_TextureCopy_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_TextureBlit_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_TextureBlit_class = nullptr;  // NOLINT

static bool js_gfx_TextureBlit_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::TextureBlit, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::TextureBlit& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureBlit_copy)

static bool js_gfx_TextureBlit_get_srcSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->srcSubres, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->srcSubres, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBlit_get_srcSubres)

static bool js_gfx_TextureBlit_set_srcSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->srcSubres, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBlit_set_srcSubres)

static bool js_gfx_TextureBlit_get_srcOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->srcOffset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->srcOffset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBlit_get_srcOffset)

static bool js_gfx_TextureBlit_set_srcOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->srcOffset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBlit_set_srcOffset)

static bool js_gfx_TextureBlit_get_srcExtent(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->srcExtent, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->srcExtent, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBlit_get_srcExtent)

static bool js_gfx_TextureBlit_set_srcExtent(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->srcExtent, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBlit_set_srcExtent)

static bool js_gfx_TextureBlit_get_dstSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dstSubres, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dstSubres, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBlit_get_dstSubres)

static bool js_gfx_TextureBlit_set_dstSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dstSubres, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBlit_set_dstSubres)

static bool js_gfx_TextureBlit_get_dstOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dstOffset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dstOffset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBlit_get_dstOffset)

static bool js_gfx_TextureBlit_set_dstOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dstOffset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBlit_set_dstOffset)

static bool js_gfx_TextureBlit_get_dstExtent(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dstExtent, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dstExtent, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBlit_get_dstExtent)

static bool js_gfx_TextureBlit_set_dstExtent(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBlit>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dstExtent, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBlit_set_dstExtent)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::TextureBlit * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::TextureBlit*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("srcSubres", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->srcSubres), ctx);
    }
    json->getProperty("srcOffset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->srcOffset), ctx);
    }
    json->getProperty("srcExtent", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->srcExtent), ctx);
    }
    json->getProperty("dstSubres", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dstSubres), ctx);
    }
    json->getProperty("dstOffset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dstOffset), ctx);
    }
    json->getProperty("dstExtent", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dstExtent), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_TextureBlit_finalize)

static bool js_gfx_TextureBlit_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureBlit);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureBlit);
        auto cobj = ptr->get<cc::gfx::TextureBlit>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureBlit);
    auto cobj = ptr->get<cc::gfx::TextureBlit>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->srcSubres), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->srcOffset), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->srcExtent), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->dstSubres), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->dstOffset), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->dstExtent), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_TextureBlit_constructor, __jsb_cc_gfx_TextureBlit_class, js_cc_gfx_TextureBlit_finalize)

static bool js_cc_gfx_TextureBlit_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_TextureBlit_finalize)

bool js_register_gfx_TextureBlit(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("TextureBlit", obj, nullptr, _SE(js_gfx_TextureBlit_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("srcSubres", _SE(js_gfx_TextureBlit_get_srcSubres), _SE(js_gfx_TextureBlit_set_srcSubres));
    cls->defineProperty("srcOffset", _SE(js_gfx_TextureBlit_get_srcOffset), _SE(js_gfx_TextureBlit_set_srcOffset));
    cls->defineProperty("srcExtent", _SE(js_gfx_TextureBlit_get_srcExtent), _SE(js_gfx_TextureBlit_set_srcExtent));
    cls->defineProperty("dstSubres", _SE(js_gfx_TextureBlit_get_dstSubres), _SE(js_gfx_TextureBlit_set_dstSubres));
    cls->defineProperty("dstOffset", _SE(js_gfx_TextureBlit_get_dstOffset), _SE(js_gfx_TextureBlit_set_dstOffset));
    cls->defineProperty("dstExtent", _SE(js_gfx_TextureBlit_get_dstExtent), _SE(js_gfx_TextureBlit_set_dstExtent));
    cls->defineFunction("copy", _SE(js_gfx_TextureBlit_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_TextureBlit_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::TextureBlit>(cls);

    __jsb_cc_gfx_TextureBlit_proto = cls->getProto();
    __jsb_cc_gfx_TextureBlit_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_BufferTextureCopy_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_BufferTextureCopy_class = nullptr;  // NOLINT

static bool js_gfx_BufferTextureCopy_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BufferTextureCopy, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::BufferTextureCopy& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_BufferTextureCopy_copy)

static bool js_gfx_BufferTextureCopy_get_buffOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->buffOffset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->buffOffset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferTextureCopy_get_buffOffset)

static bool js_gfx_BufferTextureCopy_set_buffOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->buffOffset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferTextureCopy_set_buffOffset)

static bool js_gfx_BufferTextureCopy_get_buffStride(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->buffStride, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->buffStride, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferTextureCopy_get_buffStride)

static bool js_gfx_BufferTextureCopy_set_buffStride(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->buffStride, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferTextureCopy_set_buffStride)

static bool js_gfx_BufferTextureCopy_get_buffTexHeight(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->buffTexHeight, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->buffTexHeight, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferTextureCopy_get_buffTexHeight)

static bool js_gfx_BufferTextureCopy_set_buffTexHeight(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->buffTexHeight, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferTextureCopy_set_buffTexHeight)

static bool js_gfx_BufferTextureCopy_get_texOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->texOffset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->texOffset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferTextureCopy_get_texOffset)

static bool js_gfx_BufferTextureCopy_set_texOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->texOffset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferTextureCopy_set_texOffset)

static bool js_gfx_BufferTextureCopy_get_texExtent(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->texExtent, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->texExtent, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferTextureCopy_get_texExtent)

static bool js_gfx_BufferTextureCopy_set_texExtent(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->texExtent, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferTextureCopy_set_texExtent)

static bool js_gfx_BufferTextureCopy_get_texSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->texSubres, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->texSubres, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferTextureCopy_get_texSubres)

static bool js_gfx_BufferTextureCopy_set_texSubres(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferTextureCopy>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->texSubres, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferTextureCopy_set_texSubres)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::BufferTextureCopy * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::BufferTextureCopy*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("buffOffset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->buffOffset), ctx);
    }
    json->getProperty("buffStride", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->buffStride), ctx);
    }
    json->getProperty("buffTexHeight", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->buffTexHeight), ctx);
    }
    json->getProperty("texOffset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->texOffset), ctx);
    }
    json->getProperty("texExtent", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->texExtent), ctx);
    }
    json->getProperty("texSubres", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->texSubres), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_BufferTextureCopy_finalize)

static bool js_gfx_BufferTextureCopy_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferTextureCopy);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferTextureCopy);
        auto cobj = ptr->get<cc::gfx::BufferTextureCopy>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferTextureCopy);
    auto cobj = ptr->get<cc::gfx::BufferTextureCopy>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->buffOffset), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->buffStride), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->buffTexHeight), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->texOffset), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->texExtent), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->texSubres), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_BufferTextureCopy_constructor, __jsb_cc_gfx_BufferTextureCopy_class, js_cc_gfx_BufferTextureCopy_finalize)

static bool js_cc_gfx_BufferTextureCopy_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_BufferTextureCopy_finalize)

bool js_register_gfx_BufferTextureCopy(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BufferTextureCopy", obj, nullptr, _SE(js_gfx_BufferTextureCopy_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("buffOffset", _SE(js_gfx_BufferTextureCopy_get_buffOffset), _SE(js_gfx_BufferTextureCopy_set_buffOffset));
    cls->defineProperty("buffStride", _SE(js_gfx_BufferTextureCopy_get_buffStride), _SE(js_gfx_BufferTextureCopy_set_buffStride));
    cls->defineProperty("buffTexHeight", _SE(js_gfx_BufferTextureCopy_get_buffTexHeight), _SE(js_gfx_BufferTextureCopy_set_buffTexHeight));
    cls->defineProperty("texOffset", _SE(js_gfx_BufferTextureCopy_get_texOffset), _SE(js_gfx_BufferTextureCopy_set_texOffset));
    cls->defineProperty("texExtent", _SE(js_gfx_BufferTextureCopy_get_texExtent), _SE(js_gfx_BufferTextureCopy_set_texExtent));
    cls->defineProperty("texSubres", _SE(js_gfx_BufferTextureCopy_get_texSubres), _SE(js_gfx_BufferTextureCopy_set_texSubres));
    cls->defineFunction("copy", _SE(js_gfx_BufferTextureCopy_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_BufferTextureCopy_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::BufferTextureCopy>(cls);

    __jsb_cc_gfx_BufferTextureCopy_proto = cls->getProto();
    __jsb_cc_gfx_BufferTextureCopy_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Viewport_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Viewport_class = nullptr;  // NOLINT

static bool js_gfx_Viewport_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Viewport, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Viewport& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Viewport_copy)

static bool js_gfx_Viewport_get_left(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->left, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->left, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Viewport_get_left)

static bool js_gfx_Viewport_set_left(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->left, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Viewport_set_left)

static bool js_gfx_Viewport_get_top(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->top, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->top, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Viewport_get_top)

static bool js_gfx_Viewport_set_top(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->top, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Viewport_set_top)

static bool js_gfx_Viewport_get_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->width, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->width, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Viewport_get_width)

static bool js_gfx_Viewport_set_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->width, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Viewport_set_width)

static bool js_gfx_Viewport_get_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->height, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->height, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Viewport_get_height)

static bool js_gfx_Viewport_set_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->height, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Viewport_set_height)

static bool js_gfx_Viewport_get_minDepth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->minDepth, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->minDepth, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Viewport_get_minDepth)

static bool js_gfx_Viewport_set_minDepth(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->minDepth, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Viewport_set_minDepth)

static bool js_gfx_Viewport_get_maxDepth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxDepth, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxDepth, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Viewport_get_maxDepth)

static bool js_gfx_Viewport_set_maxDepth(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Viewport>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxDepth, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Viewport_set_maxDepth)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::Viewport * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::Viewport*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("left", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->left), ctx);
    }
    json->getProperty("top", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->top), ctx);
    }
    json->getProperty("width", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->width), ctx);
    }
    json->getProperty("height", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->height), ctx);
    }
    json->getProperty("minDepth", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->minDepth), ctx);
    }
    json->getProperty("maxDepth", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxDepth), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Viewport_finalize)

static bool js_gfx_Viewport_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Viewport);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Viewport);
        auto cobj = ptr->get<cc::gfx::Viewport>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Viewport);
    auto cobj = ptr->get<cc::gfx::Viewport>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->left), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->top), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->width), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->height), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->minDepth), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->maxDepth), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_Viewport_constructor, __jsb_cc_gfx_Viewport_class, js_cc_gfx_Viewport_finalize)

static bool js_cc_gfx_Viewport_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Viewport_finalize)

bool js_register_gfx_Viewport(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Viewport", obj, nullptr, _SE(js_gfx_Viewport_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("left", _SE(js_gfx_Viewport_get_left), _SE(js_gfx_Viewport_set_left));
    cls->defineProperty("top", _SE(js_gfx_Viewport_get_top), _SE(js_gfx_Viewport_set_top));
    cls->defineProperty("width", _SE(js_gfx_Viewport_get_width), _SE(js_gfx_Viewport_set_width));
    cls->defineProperty("height", _SE(js_gfx_Viewport_get_height), _SE(js_gfx_Viewport_set_height));
    cls->defineProperty("minDepth", _SE(js_gfx_Viewport_get_minDepth), _SE(js_gfx_Viewport_set_minDepth));
    cls->defineProperty("maxDepth", _SE(js_gfx_Viewport_get_maxDepth), _SE(js_gfx_Viewport_set_maxDepth));
    cls->defineFunction("copy", _SE(js_gfx_Viewport_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Viewport_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Viewport>(cls);

    __jsb_cc_gfx_Viewport_proto = cls->getProto();
    __jsb_cc_gfx_Viewport_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Color_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Color_class = nullptr;  // NOLINT

static bool js_gfx_Color_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Color>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Color, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Color& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Color_copy)

static bool js_gfx_Color_get_x(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Color>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->x, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->x, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Color_get_x)

static bool js_gfx_Color_set_x(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Color>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->x, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Color_set_x)

static bool js_gfx_Color_get_y(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Color>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->y, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->y, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Color_get_y)

static bool js_gfx_Color_set_y(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Color>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->y, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Color_set_y)

static bool js_gfx_Color_get_z(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Color>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->z, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->z, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Color_get_z)

static bool js_gfx_Color_set_z(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Color>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->z, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Color_set_z)

static bool js_gfx_Color_get_w(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Color>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->w, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->w, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Color_get_w)

static bool js_gfx_Color_set_w(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Color>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->w, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Color_set_w)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::Color * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::Color*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("x", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->x), ctx);
    }
    json->getProperty("y", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->y), ctx);
    }
    json->getProperty("z", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->z), ctx);
    }
    json->getProperty("w", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->w), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Color_finalize)

static bool js_gfx_Color_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Color);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Color);
        auto cobj = ptr->get<cc::gfx::Color>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Color);
    auto cobj = ptr->get<cc::gfx::Color>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->x), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->y), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->z), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->w), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_Color_constructor, __jsb_cc_gfx_Color_class, js_cc_gfx_Color_finalize)

static bool js_cc_gfx_Color_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Color_finalize)

bool js_register_gfx_Color(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Color", obj, nullptr, _SE(js_gfx_Color_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("x", _SE(js_gfx_Color_get_x), _SE(js_gfx_Color_set_x));
    cls->defineProperty("y", _SE(js_gfx_Color_get_y), _SE(js_gfx_Color_set_y));
    cls->defineProperty("z", _SE(js_gfx_Color_get_z), _SE(js_gfx_Color_set_z));
    cls->defineProperty("w", _SE(js_gfx_Color_get_w), _SE(js_gfx_Color_set_w));
    cls->defineFunction("copy", _SE(js_gfx_Color_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Color_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Color>(cls);

    __jsb_cc_gfx_Color_proto = cls->getProto();
    __jsb_cc_gfx_Color_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_BindingMappingInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_BindingMappingInfo_class = nullptr;  // NOLINT

static bool js_gfx_BindingMappingInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BindingMappingInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::BindingMappingInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_BindingMappingInfo_copy)

static bool js_gfx_BindingMappingInfo_get_maxBlockCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxBlockCounts, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxBlockCounts, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BindingMappingInfo_get_maxBlockCounts)

static bool js_gfx_BindingMappingInfo_set_maxBlockCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxBlockCounts, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BindingMappingInfo_set_maxBlockCounts)

static bool js_gfx_BindingMappingInfo_get_maxSamplerTextureCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxSamplerTextureCounts, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxSamplerTextureCounts, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BindingMappingInfo_get_maxSamplerTextureCounts)

static bool js_gfx_BindingMappingInfo_set_maxSamplerTextureCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxSamplerTextureCounts, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BindingMappingInfo_set_maxSamplerTextureCounts)

static bool js_gfx_BindingMappingInfo_get_maxSamplerCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxSamplerCounts, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxSamplerCounts, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BindingMappingInfo_get_maxSamplerCounts)

static bool js_gfx_BindingMappingInfo_set_maxSamplerCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxSamplerCounts, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BindingMappingInfo_set_maxSamplerCounts)

static bool js_gfx_BindingMappingInfo_get_maxTextureCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxTextureCounts, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxTextureCounts, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BindingMappingInfo_get_maxTextureCounts)

static bool js_gfx_BindingMappingInfo_set_maxTextureCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxTextureCounts, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BindingMappingInfo_set_maxTextureCounts)

static bool js_gfx_BindingMappingInfo_get_maxBufferCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxBufferCounts, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxBufferCounts, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BindingMappingInfo_get_maxBufferCounts)

static bool js_gfx_BindingMappingInfo_set_maxBufferCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxBufferCounts, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BindingMappingInfo_set_maxBufferCounts)

static bool js_gfx_BindingMappingInfo_get_maxImageCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxImageCounts, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxImageCounts, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BindingMappingInfo_get_maxImageCounts)

static bool js_gfx_BindingMappingInfo_set_maxImageCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxImageCounts, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BindingMappingInfo_set_maxImageCounts)

static bool js_gfx_BindingMappingInfo_get_maxSubpassInputCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxSubpassInputCounts, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxSubpassInputCounts, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BindingMappingInfo_get_maxSubpassInputCounts)

static bool js_gfx_BindingMappingInfo_set_maxSubpassInputCounts(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxSubpassInputCounts, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BindingMappingInfo_set_maxSubpassInputCounts)

static bool js_gfx_BindingMappingInfo_get_setIndices(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->setIndices, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->setIndices, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BindingMappingInfo_get_setIndices)

static bool js_gfx_BindingMappingInfo_set_setIndices(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BindingMappingInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->setIndices, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BindingMappingInfo_set_setIndices)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::BindingMappingInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::BindingMappingInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("maxBlockCounts", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxBlockCounts), ctx);
    }
    json->getProperty("maxSamplerTextureCounts", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxSamplerTextureCounts), ctx);
    }
    json->getProperty("maxSamplerCounts", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxSamplerCounts), ctx);
    }
    json->getProperty("maxTextureCounts", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxTextureCounts), ctx);
    }
    json->getProperty("maxBufferCounts", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxBufferCounts), ctx);
    }
    json->getProperty("maxImageCounts", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxImageCounts), ctx);
    }
    json->getProperty("maxSubpassInputCounts", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxSubpassInputCounts), ctx);
    }
    json->getProperty("setIndices", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->setIndices), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_BindingMappingInfo_finalize)

static bool js_gfx_BindingMappingInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BindingMappingInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BindingMappingInfo);
        auto cobj = ptr->get<cc::gfx::BindingMappingInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BindingMappingInfo);
    auto cobj = ptr->get<cc::gfx::BindingMappingInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->maxBlockCounts), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->maxSamplerTextureCounts), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->maxSamplerCounts), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->maxTextureCounts), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->maxBufferCounts), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->maxImageCounts), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->maxSubpassInputCounts), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->setIndices), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_BindingMappingInfo_constructor, __jsb_cc_gfx_BindingMappingInfo_class, js_cc_gfx_BindingMappingInfo_finalize)

static bool js_cc_gfx_BindingMappingInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_BindingMappingInfo_finalize)

bool js_register_gfx_BindingMappingInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BindingMappingInfo", obj, nullptr, _SE(js_gfx_BindingMappingInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("maxBlockCounts", _SE(js_gfx_BindingMappingInfo_get_maxBlockCounts), _SE(js_gfx_BindingMappingInfo_set_maxBlockCounts));
    cls->defineProperty("maxSamplerTextureCounts", _SE(js_gfx_BindingMappingInfo_get_maxSamplerTextureCounts), _SE(js_gfx_BindingMappingInfo_set_maxSamplerTextureCounts));
    cls->defineProperty("maxSamplerCounts", _SE(js_gfx_BindingMappingInfo_get_maxSamplerCounts), _SE(js_gfx_BindingMappingInfo_set_maxSamplerCounts));
    cls->defineProperty("maxTextureCounts", _SE(js_gfx_BindingMappingInfo_get_maxTextureCounts), _SE(js_gfx_BindingMappingInfo_set_maxTextureCounts));
    cls->defineProperty("maxBufferCounts", _SE(js_gfx_BindingMappingInfo_get_maxBufferCounts), _SE(js_gfx_BindingMappingInfo_set_maxBufferCounts));
    cls->defineProperty("maxImageCounts", _SE(js_gfx_BindingMappingInfo_get_maxImageCounts), _SE(js_gfx_BindingMappingInfo_set_maxImageCounts));
    cls->defineProperty("maxSubpassInputCounts", _SE(js_gfx_BindingMappingInfo_get_maxSubpassInputCounts), _SE(js_gfx_BindingMappingInfo_set_maxSubpassInputCounts));
    cls->defineProperty("setIndices", _SE(js_gfx_BindingMappingInfo_get_setIndices), _SE(js_gfx_BindingMappingInfo_set_setIndices));
    cls->defineFunction("copy", _SE(js_gfx_BindingMappingInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_BindingMappingInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::BindingMappingInfo>(cls);

    __jsb_cc_gfx_BindingMappingInfo_proto = cls->getProto();
    __jsb_cc_gfx_BindingMappingInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_SwapchainInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_SwapchainInfo_class = nullptr;  // NOLINT

static bool js_gfx_SwapchainInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SwapchainInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::SwapchainInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::SwapchainInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_SwapchainInfo_copy)

static bool js_gfx_SwapchainInfo_get_windowHandle(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SwapchainInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->windowHandle, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->windowHandle, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SwapchainInfo_get_windowHandle)

static bool js_gfx_SwapchainInfo_set_windowHandle(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SwapchainInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->windowHandle, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SwapchainInfo_set_windowHandle)

static bool js_gfx_SwapchainInfo_get_vsyncMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SwapchainInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->vsyncMode, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->vsyncMode, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SwapchainInfo_get_vsyncMode)

static bool js_gfx_SwapchainInfo_set_vsyncMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SwapchainInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->vsyncMode, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SwapchainInfo_set_vsyncMode)

static bool js_gfx_SwapchainInfo_get_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SwapchainInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->width, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->width, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SwapchainInfo_get_width)

static bool js_gfx_SwapchainInfo_set_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SwapchainInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->width, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SwapchainInfo_set_width)

static bool js_gfx_SwapchainInfo_get_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SwapchainInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->height, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->height, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SwapchainInfo_get_height)

static bool js_gfx_SwapchainInfo_set_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SwapchainInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->height, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SwapchainInfo_set_height)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::SwapchainInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::SwapchainInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("windowHandle", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->windowHandle), ctx);
    }
    json->getProperty("vsyncMode", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->vsyncMode), ctx);
    }
    json->getProperty("width", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->width), ctx);
    }
    json->getProperty("height", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->height), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_SwapchainInfo_finalize)

static bool js_gfx_SwapchainInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SwapchainInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SwapchainInfo);
        auto cobj = ptr->get<cc::gfx::SwapchainInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SwapchainInfo);
    auto cobj = ptr->get<cc::gfx::SwapchainInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->windowHandle), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->vsyncMode), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->width), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->height), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_SwapchainInfo_constructor, __jsb_cc_gfx_SwapchainInfo_class, js_cc_gfx_SwapchainInfo_finalize)

static bool js_cc_gfx_SwapchainInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_SwapchainInfo_finalize)

bool js_register_gfx_SwapchainInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("SwapchainInfo", obj, nullptr, _SE(js_gfx_SwapchainInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("windowHandle", _SE(js_gfx_SwapchainInfo_get_windowHandle), _SE(js_gfx_SwapchainInfo_set_windowHandle));
    cls->defineProperty("vsyncMode", _SE(js_gfx_SwapchainInfo_get_vsyncMode), _SE(js_gfx_SwapchainInfo_set_vsyncMode));
    cls->defineProperty("width", _SE(js_gfx_SwapchainInfo_get_width), _SE(js_gfx_SwapchainInfo_set_width));
    cls->defineProperty("height", _SE(js_gfx_SwapchainInfo_get_height), _SE(js_gfx_SwapchainInfo_set_height));
    cls->defineFunction("copy", _SE(js_gfx_SwapchainInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_SwapchainInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::SwapchainInfo>(cls);

    __jsb_cc_gfx_SwapchainInfo_proto = cls->getProto();
    __jsb_cc_gfx_SwapchainInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DeviceInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DeviceInfo_class = nullptr;  // NOLINT

static bool js_gfx_DeviceInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DeviceInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DeviceInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DeviceInfo_copy)

static bool js_gfx_DeviceInfo_get_bindingMappingInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->bindingMappingInfo, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->bindingMappingInfo, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DeviceInfo_get_bindingMappingInfo)

static bool js_gfx_DeviceInfo_set_bindingMappingInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DeviceInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->bindingMappingInfo, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DeviceInfo_set_bindingMappingInfo)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::DeviceInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::DeviceInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("bindingMappingInfo", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->bindingMappingInfo), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DeviceInfo_finalize)

static bool js_gfx_DeviceInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DeviceInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DeviceInfo);
    auto cobj = ptr->get<cc::gfx::DeviceInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->bindingMappingInfo), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_DeviceInfo_constructor, __jsb_cc_gfx_DeviceInfo_class, js_cc_gfx_DeviceInfo_finalize)

static bool js_cc_gfx_DeviceInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DeviceInfo_finalize)

bool js_register_gfx_DeviceInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DeviceInfo", obj, nullptr, _SE(js_gfx_DeviceInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("bindingMappingInfo", _SE(js_gfx_DeviceInfo_get_bindingMappingInfo), _SE(js_gfx_DeviceInfo_set_bindingMappingInfo));
    cls->defineFunction("copy", _SE(js_gfx_DeviceInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DeviceInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DeviceInfo>(cls);

    __jsb_cc_gfx_DeviceInfo_proto = cls->getProto();
    __jsb_cc_gfx_DeviceInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_BufferInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_BufferInfo_class = nullptr;  // NOLINT

static bool js_gfx_BufferInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BufferInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::BufferInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_BufferInfo_copy)

static bool js_gfx_BufferInfo_get_usage(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->usage, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->usage, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferInfo_get_usage)

static bool js_gfx_BufferInfo_set_usage(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->usage, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferInfo_set_usage)

static bool js_gfx_BufferInfo_get_memUsage(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->memUsage, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->memUsage, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferInfo_get_memUsage)

static bool js_gfx_BufferInfo_set_memUsage(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->memUsage, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferInfo_set_memUsage)

static bool js_gfx_BufferInfo_get_size(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->size, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->size, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferInfo_get_size)

static bool js_gfx_BufferInfo_set_size(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->size, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferInfo_set_size)

static bool js_gfx_BufferInfo_get_stride(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stride, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stride, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferInfo_get_stride)

static bool js_gfx_BufferInfo_set_stride(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stride, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferInfo_set_stride)

static bool js_gfx_BufferInfo_get_flags(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->flags, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->flags, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferInfo_get_flags)

static bool js_gfx_BufferInfo_set_flags(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->flags, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferInfo_set_flags)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::BufferInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::BufferInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("usage", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->usage), ctx);
    }
    json->getProperty("memUsage", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->memUsage), ctx);
    }
    json->getProperty("size", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->size), ctx);
    }
    json->getProperty("stride", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stride), ctx);
    }
    json->getProperty("flags", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->flags), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_BufferInfo_finalize)

static bool js_gfx_BufferInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferInfo);
        auto cobj = ptr->get<cc::gfx::BufferInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferInfo);
    auto cobj = ptr->get<cc::gfx::BufferInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->usage), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->memUsage), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->size), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->stride), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->flags), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_BufferInfo_constructor, __jsb_cc_gfx_BufferInfo_class, js_cc_gfx_BufferInfo_finalize)

static bool js_cc_gfx_BufferInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_BufferInfo_finalize)

bool js_register_gfx_BufferInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BufferInfo", obj, nullptr, _SE(js_gfx_BufferInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("usage", _SE(js_gfx_BufferInfo_get_usage), _SE(js_gfx_BufferInfo_set_usage));
    cls->defineProperty("memUsage", _SE(js_gfx_BufferInfo_get_memUsage), _SE(js_gfx_BufferInfo_set_memUsage));
    cls->defineProperty("size", _SE(js_gfx_BufferInfo_get_size), _SE(js_gfx_BufferInfo_set_size));
    cls->defineProperty("stride", _SE(js_gfx_BufferInfo_get_stride), _SE(js_gfx_BufferInfo_set_stride));
    cls->defineProperty("flags", _SE(js_gfx_BufferInfo_get_flags), _SE(js_gfx_BufferInfo_set_flags));
    cls->defineFunction("copy", _SE(js_gfx_BufferInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_BufferInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::BufferInfo>(cls);

    __jsb_cc_gfx_BufferInfo_proto = cls->getProto();
    __jsb_cc_gfx_BufferInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_BufferViewInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_BufferViewInfo_class = nullptr;  // NOLINT

static bool js_gfx_BufferViewInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BufferViewInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::BufferViewInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_BufferViewInfo_copy)

static bool js_gfx_BufferViewInfo_get_buffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->buffer, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->buffer, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferViewInfo_get_buffer)

static bool js_gfx_BufferViewInfo_set_buffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->buffer, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferViewInfo_set_buffer)

static bool js_gfx_BufferViewInfo_get_offset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->offset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->offset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferViewInfo_get_offset)

static bool js_gfx_BufferViewInfo_set_offset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->offset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferViewInfo_set_offset)

static bool js_gfx_BufferViewInfo_get_range(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->range, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->range, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferViewInfo_get_range)

static bool js_gfx_BufferViewInfo_set_range(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->range, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferViewInfo_set_range)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::BufferViewInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::BufferViewInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("buffer", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->buffer), ctx);
    }
    json->getProperty("offset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->offset), ctx);
    }
    json->getProperty("range", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->range), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_BufferViewInfo_finalize)

static bool js_gfx_BufferViewInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferViewInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferViewInfo);
        auto cobj = ptr->get<cc::gfx::BufferViewInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferViewInfo);
    auto cobj = ptr->get<cc::gfx::BufferViewInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->buffer), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->offset), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->range), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_BufferViewInfo_constructor, __jsb_cc_gfx_BufferViewInfo_class, js_cc_gfx_BufferViewInfo_finalize)

static bool js_cc_gfx_BufferViewInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_BufferViewInfo_finalize)

bool js_register_gfx_BufferViewInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BufferViewInfo", obj, nullptr, _SE(js_gfx_BufferViewInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("buffer", _SE(js_gfx_BufferViewInfo_get_buffer), _SE(js_gfx_BufferViewInfo_set_buffer));
    cls->defineProperty("offset", _SE(js_gfx_BufferViewInfo_get_offset), _SE(js_gfx_BufferViewInfo_set_offset));
    cls->defineProperty("range", _SE(js_gfx_BufferViewInfo_get_range), _SE(js_gfx_BufferViewInfo_set_range));
    cls->defineFunction("copy", _SE(js_gfx_BufferViewInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_BufferViewInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::BufferViewInfo>(cls);

    __jsb_cc_gfx_BufferViewInfo_proto = cls->getProto();
    __jsb_cc_gfx_BufferViewInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DrawInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DrawInfo_class = nullptr;  // NOLINT

static bool js_gfx_DrawInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DrawInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DrawInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DrawInfo_copy)

static bool js_gfx_DrawInfo_get_vertexCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->vertexCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->vertexCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DrawInfo_get_vertexCount)

static bool js_gfx_DrawInfo_set_vertexCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->vertexCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DrawInfo_set_vertexCount)

static bool js_gfx_DrawInfo_get_firstVertex(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->firstVertex, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->firstVertex, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DrawInfo_get_firstVertex)

static bool js_gfx_DrawInfo_set_firstVertex(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->firstVertex, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DrawInfo_set_firstVertex)

static bool js_gfx_DrawInfo_get_indexCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->indexCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->indexCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DrawInfo_get_indexCount)

static bool js_gfx_DrawInfo_set_indexCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->indexCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DrawInfo_set_indexCount)

static bool js_gfx_DrawInfo_get_firstIndex(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->firstIndex, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->firstIndex, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DrawInfo_get_firstIndex)

static bool js_gfx_DrawInfo_set_firstIndex(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->firstIndex, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DrawInfo_set_firstIndex)

static bool js_gfx_DrawInfo_get_vertexOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->vertexOffset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->vertexOffset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DrawInfo_get_vertexOffset)

static bool js_gfx_DrawInfo_set_vertexOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->vertexOffset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DrawInfo_set_vertexOffset)

static bool js_gfx_DrawInfo_get_instanceCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->instanceCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->instanceCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DrawInfo_get_instanceCount)

static bool js_gfx_DrawInfo_set_instanceCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->instanceCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DrawInfo_set_instanceCount)

static bool js_gfx_DrawInfo_get_firstInstance(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->firstInstance, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->firstInstance, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DrawInfo_get_firstInstance)

static bool js_gfx_DrawInfo_set_firstInstance(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DrawInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->firstInstance, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DrawInfo_set_firstInstance)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::DrawInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::DrawInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("vertexCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->vertexCount), ctx);
    }
    json->getProperty("firstVertex", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->firstVertex), ctx);
    }
    json->getProperty("indexCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->indexCount), ctx);
    }
    json->getProperty("firstIndex", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->firstIndex), ctx);
    }
    json->getProperty("vertexOffset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->vertexOffset), ctx);
    }
    json->getProperty("instanceCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->instanceCount), ctx);
    }
    json->getProperty("firstInstance", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->firstInstance), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DrawInfo_finalize)

static bool js_gfx_DrawInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DrawInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DrawInfo);
        auto cobj = ptr->get<cc::gfx::DrawInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DrawInfo);
    auto cobj = ptr->get<cc::gfx::DrawInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->vertexCount), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->firstVertex), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->indexCount), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->firstIndex), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->vertexOffset), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->instanceCount), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->firstInstance), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_DrawInfo_constructor, __jsb_cc_gfx_DrawInfo_class, js_cc_gfx_DrawInfo_finalize)

static bool js_cc_gfx_DrawInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DrawInfo_finalize)

bool js_register_gfx_DrawInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DrawInfo", obj, nullptr, _SE(js_gfx_DrawInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("vertexCount", _SE(js_gfx_DrawInfo_get_vertexCount), _SE(js_gfx_DrawInfo_set_vertexCount));
    cls->defineProperty("firstVertex", _SE(js_gfx_DrawInfo_get_firstVertex), _SE(js_gfx_DrawInfo_set_firstVertex));
    cls->defineProperty("indexCount", _SE(js_gfx_DrawInfo_get_indexCount), _SE(js_gfx_DrawInfo_set_indexCount));
    cls->defineProperty("firstIndex", _SE(js_gfx_DrawInfo_get_firstIndex), _SE(js_gfx_DrawInfo_set_firstIndex));
    cls->defineProperty("vertexOffset", _SE(js_gfx_DrawInfo_get_vertexOffset), _SE(js_gfx_DrawInfo_set_vertexOffset));
    cls->defineProperty("instanceCount", _SE(js_gfx_DrawInfo_get_instanceCount), _SE(js_gfx_DrawInfo_set_instanceCount));
    cls->defineProperty("firstInstance", _SE(js_gfx_DrawInfo_get_firstInstance), _SE(js_gfx_DrawInfo_set_firstInstance));
    cls->defineFunction("copy", _SE(js_gfx_DrawInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DrawInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DrawInfo>(cls);

    __jsb_cc_gfx_DrawInfo_proto = cls->getProto();
    __jsb_cc_gfx_DrawInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DispatchInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DispatchInfo_class = nullptr;  // NOLINT

static bool js_gfx_DispatchInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DispatchInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DispatchInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DispatchInfo_copy)

static bool js_gfx_DispatchInfo_get_groupCountX(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->groupCountX, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->groupCountX, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DispatchInfo_get_groupCountX)

static bool js_gfx_DispatchInfo_set_groupCountX(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->groupCountX, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DispatchInfo_set_groupCountX)

static bool js_gfx_DispatchInfo_get_groupCountY(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->groupCountY, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->groupCountY, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DispatchInfo_get_groupCountY)

static bool js_gfx_DispatchInfo_set_groupCountY(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->groupCountY, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DispatchInfo_set_groupCountY)

static bool js_gfx_DispatchInfo_get_groupCountZ(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->groupCountZ, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->groupCountZ, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DispatchInfo_get_groupCountZ)

static bool js_gfx_DispatchInfo_set_groupCountZ(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->groupCountZ, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DispatchInfo_set_groupCountZ)

static bool js_gfx_DispatchInfo_get_indirectBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->indirectBuffer, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->indirectBuffer, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DispatchInfo_get_indirectBuffer)

static bool js_gfx_DispatchInfo_set_indirectBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->indirectBuffer, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DispatchInfo_set_indirectBuffer)

static bool js_gfx_DispatchInfo_get_indirectOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->indirectOffset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->indirectOffset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DispatchInfo_get_indirectOffset)

static bool js_gfx_DispatchInfo_set_indirectOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DispatchInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->indirectOffset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DispatchInfo_set_indirectOffset)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::DispatchInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::DispatchInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("groupCountX", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->groupCountX), ctx);
    }
    json->getProperty("groupCountY", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->groupCountY), ctx);
    }
    json->getProperty("groupCountZ", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->groupCountZ), ctx);
    }
    json->getProperty("indirectBuffer", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->indirectBuffer), ctx);
    }
    json->getProperty("indirectOffset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->indirectOffset), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DispatchInfo_finalize)

static bool js_gfx_DispatchInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DispatchInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DispatchInfo);
        auto cobj = ptr->get<cc::gfx::DispatchInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DispatchInfo);
    auto cobj = ptr->get<cc::gfx::DispatchInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->groupCountX), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->groupCountY), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->groupCountZ), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->indirectBuffer), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->indirectOffset), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_DispatchInfo_constructor, __jsb_cc_gfx_DispatchInfo_class, js_cc_gfx_DispatchInfo_finalize)

static bool js_cc_gfx_DispatchInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DispatchInfo_finalize)

bool js_register_gfx_DispatchInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DispatchInfo", obj, nullptr, _SE(js_gfx_DispatchInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("groupCountX", _SE(js_gfx_DispatchInfo_get_groupCountX), _SE(js_gfx_DispatchInfo_set_groupCountX));
    cls->defineProperty("groupCountY", _SE(js_gfx_DispatchInfo_get_groupCountY), _SE(js_gfx_DispatchInfo_set_groupCountY));
    cls->defineProperty("groupCountZ", _SE(js_gfx_DispatchInfo_get_groupCountZ), _SE(js_gfx_DispatchInfo_set_groupCountZ));
    cls->defineProperty("indirectBuffer", _SE(js_gfx_DispatchInfo_get_indirectBuffer), _SE(js_gfx_DispatchInfo_set_indirectBuffer));
    cls->defineProperty("indirectOffset", _SE(js_gfx_DispatchInfo_get_indirectOffset), _SE(js_gfx_DispatchInfo_set_indirectOffset));
    cls->defineFunction("copy", _SE(js_gfx_DispatchInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DispatchInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DispatchInfo>(cls);

    __jsb_cc_gfx_DispatchInfo_proto = cls->getProto();
    __jsb_cc_gfx_DispatchInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_IndirectBuffer_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_IndirectBuffer_class = nullptr;  // NOLINT

static bool js_gfx_IndirectBuffer_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::IndirectBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::IndirectBuffer, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::IndirectBuffer& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_IndirectBuffer_copy)

static bool js_gfx_IndirectBuffer_get_drawInfos(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::IndirectBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->drawInfos, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->drawInfos, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_IndirectBuffer_get_drawInfos)

static bool js_gfx_IndirectBuffer_set_drawInfos(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::IndirectBuffer>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->drawInfos, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_IndirectBuffer_set_drawInfos)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::IndirectBuffer * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::IndirectBuffer*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("drawInfos", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->drawInfos), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_IndirectBuffer_finalize)

static bool js_gfx_IndirectBuffer_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::IndirectBuffer);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::IndirectBuffer);
    auto cobj = ptr->get<cc::gfx::IndirectBuffer>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->drawInfos), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_IndirectBuffer_constructor, __jsb_cc_gfx_IndirectBuffer_class, js_cc_gfx_IndirectBuffer_finalize)

static bool js_cc_gfx_IndirectBuffer_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_IndirectBuffer_finalize)

bool js_register_gfx_IndirectBuffer(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("IndirectBuffer", obj, nullptr, _SE(js_gfx_IndirectBuffer_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("drawInfos", _SE(js_gfx_IndirectBuffer_get_drawInfos), _SE(js_gfx_IndirectBuffer_set_drawInfos));
    cls->defineFunction("copy", _SE(js_gfx_IndirectBuffer_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_IndirectBuffer_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::IndirectBuffer>(cls);

    __jsb_cc_gfx_IndirectBuffer_proto = cls->getProto();
    __jsb_cc_gfx_IndirectBuffer_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_TextureInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_TextureInfo_class = nullptr;  // NOLINT

static bool js_gfx_TextureInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::TextureInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::TextureInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureInfo_copy)

static bool js_gfx_TextureInfo_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_type)

static bool js_gfx_TextureInfo_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_type)

static bool js_gfx_TextureInfo_get_usage(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->usage, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->usage, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_usage)

static bool js_gfx_TextureInfo_set_usage(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->usage, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_usage)

static bool js_gfx_TextureInfo_get_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->format, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->format, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_format)

static bool js_gfx_TextureInfo_set_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->format, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_format)

static bool js_gfx_TextureInfo_get_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->width, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->width, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_width)

static bool js_gfx_TextureInfo_set_width(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->width, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_width)

static bool js_gfx_TextureInfo_get_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->height, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->height, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_height)

static bool js_gfx_TextureInfo_set_height(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->height, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_height)

static bool js_gfx_TextureInfo_get_flags(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->flags, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->flags, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_flags)

static bool js_gfx_TextureInfo_set_flags(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->flags, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_flags)

static bool js_gfx_TextureInfo_get_layerCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->layerCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->layerCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_layerCount)

static bool js_gfx_TextureInfo_set_layerCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->layerCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_layerCount)

static bool js_gfx_TextureInfo_get_levelCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->levelCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->levelCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_levelCount)

static bool js_gfx_TextureInfo_set_levelCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->levelCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_levelCount)

static bool js_gfx_TextureInfo_get_samples(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->samples, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->samples, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_samples)

static bool js_gfx_TextureInfo_set_samples(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->samples, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_samples)

static bool js_gfx_TextureInfo_get_depth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depth, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depth, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_depth)

static bool js_gfx_TextureInfo_set_depth(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depth, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_depth)

static bool js_gfx_TextureInfo_get_externalRes(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->externalRes, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->externalRes, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureInfo_get_externalRes)

static bool js_gfx_TextureInfo_set_externalRes(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->externalRes, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureInfo_set_externalRes)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::TextureInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::TextureInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    json->getProperty("usage", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->usage), ctx);
    }
    json->getProperty("format", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->format), ctx);
    }
    json->getProperty("width", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->width), ctx);
    }
    json->getProperty("height", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->height), ctx);
    }
    json->getProperty("flags", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->flags), ctx);
    }
    json->getProperty("layerCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->layerCount), ctx);
    }
    json->getProperty("levelCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->levelCount), ctx);
    }
    json->getProperty("samples", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->samples), ctx);
    }
    json->getProperty("depth", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depth), ctx);
    }
    json->getProperty("externalRes", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->externalRes), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_TextureInfo_finalize)

static bool js_gfx_TextureInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureInfo);
        auto cobj = ptr->get<cc::gfx::TextureInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureInfo);
    auto cobj = ptr->get<cc::gfx::TextureInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->type), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->usage), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->format), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->width), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->height), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->flags), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->layerCount), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->levelCount), nullptr);
    }
    if (argc > 8 && !args[8].isUndefined()) {
        ok &= sevalue_to_native(args[8], &(cobj->samples), nullptr);
    }
    if (argc > 9 && !args[9].isUndefined()) {
        ok &= sevalue_to_native(args[9], &(cobj->depth), nullptr);
    }
    if (argc > 10 && !args[10].isUndefined()) {
        ok &= sevalue_to_native(args[10], &(cobj->externalRes), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_TextureInfo_constructor, __jsb_cc_gfx_TextureInfo_class, js_cc_gfx_TextureInfo_finalize)

static bool js_cc_gfx_TextureInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_TextureInfo_finalize)

bool js_register_gfx_TextureInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("TextureInfo", obj, nullptr, _SE(js_gfx_TextureInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("type", _SE(js_gfx_TextureInfo_get_type), _SE(js_gfx_TextureInfo_set_type));
    cls->defineProperty("usage", _SE(js_gfx_TextureInfo_get_usage), _SE(js_gfx_TextureInfo_set_usage));
    cls->defineProperty("format", _SE(js_gfx_TextureInfo_get_format), _SE(js_gfx_TextureInfo_set_format));
    cls->defineProperty("width", _SE(js_gfx_TextureInfo_get_width), _SE(js_gfx_TextureInfo_set_width));
    cls->defineProperty("height", _SE(js_gfx_TextureInfo_get_height), _SE(js_gfx_TextureInfo_set_height));
    cls->defineProperty("flags", _SE(js_gfx_TextureInfo_get_flags), _SE(js_gfx_TextureInfo_set_flags));
    cls->defineProperty("layerCount", _SE(js_gfx_TextureInfo_get_layerCount), _SE(js_gfx_TextureInfo_set_layerCount));
    cls->defineProperty("levelCount", _SE(js_gfx_TextureInfo_get_levelCount), _SE(js_gfx_TextureInfo_set_levelCount));
    cls->defineProperty("samples", _SE(js_gfx_TextureInfo_get_samples), _SE(js_gfx_TextureInfo_set_samples));
    cls->defineProperty("depth", _SE(js_gfx_TextureInfo_get_depth), _SE(js_gfx_TextureInfo_set_depth));
    cls->defineProperty("externalRes", _SE(js_gfx_TextureInfo_get_externalRes), _SE(js_gfx_TextureInfo_set_externalRes));
    cls->defineFunction("copy", _SE(js_gfx_TextureInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_TextureInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::TextureInfo>(cls);

    __jsb_cc_gfx_TextureInfo_proto = cls->getProto();
    __jsb_cc_gfx_TextureInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_TextureViewInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_TextureViewInfo_class = nullptr;  // NOLINT

static bool js_gfx_TextureViewInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::TextureViewInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::TextureViewInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureViewInfo_copy)

static bool js_gfx_TextureViewInfo_get_texture(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->texture, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->texture, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureViewInfo_get_texture)

static bool js_gfx_TextureViewInfo_set_texture(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->texture, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureViewInfo_set_texture)

static bool js_gfx_TextureViewInfo_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureViewInfo_get_type)

static bool js_gfx_TextureViewInfo_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureViewInfo_set_type)

static bool js_gfx_TextureViewInfo_get_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->format, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->format, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureViewInfo_get_format)

static bool js_gfx_TextureViewInfo_set_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->format, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureViewInfo_set_format)

static bool js_gfx_TextureViewInfo_get_baseLevel(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->baseLevel, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->baseLevel, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureViewInfo_get_baseLevel)

static bool js_gfx_TextureViewInfo_set_baseLevel(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->baseLevel, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureViewInfo_set_baseLevel)

static bool js_gfx_TextureViewInfo_get_levelCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->levelCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->levelCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureViewInfo_get_levelCount)

static bool js_gfx_TextureViewInfo_set_levelCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->levelCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureViewInfo_set_levelCount)

static bool js_gfx_TextureViewInfo_get_baseLayer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->baseLayer, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->baseLayer, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureViewInfo_get_baseLayer)

static bool js_gfx_TextureViewInfo_set_baseLayer(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->baseLayer, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureViewInfo_set_baseLayer)

static bool js_gfx_TextureViewInfo_get_layerCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->layerCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->layerCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureViewInfo_get_layerCount)

static bool js_gfx_TextureViewInfo_set_layerCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureViewInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->layerCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureViewInfo_set_layerCount)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::TextureViewInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::TextureViewInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("texture", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->texture), ctx);
    }
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    json->getProperty("format", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->format), ctx);
    }
    json->getProperty("baseLevel", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->baseLevel), ctx);
    }
    json->getProperty("levelCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->levelCount), ctx);
    }
    json->getProperty("baseLayer", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->baseLayer), ctx);
    }
    json->getProperty("layerCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->layerCount), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_TextureViewInfo_finalize)

static bool js_gfx_TextureViewInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureViewInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureViewInfo);
        auto cobj = ptr->get<cc::gfx::TextureViewInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureViewInfo);
    auto cobj = ptr->get<cc::gfx::TextureViewInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->texture), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->type), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->format), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->baseLevel), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->levelCount), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->baseLayer), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->layerCount), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_TextureViewInfo_constructor, __jsb_cc_gfx_TextureViewInfo_class, js_cc_gfx_TextureViewInfo_finalize)

static bool js_cc_gfx_TextureViewInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_TextureViewInfo_finalize)

bool js_register_gfx_TextureViewInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("TextureViewInfo", obj, nullptr, _SE(js_gfx_TextureViewInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("texture", _SE(js_gfx_TextureViewInfo_get_texture), _SE(js_gfx_TextureViewInfo_set_texture));
    cls->defineProperty("type", _SE(js_gfx_TextureViewInfo_get_type), _SE(js_gfx_TextureViewInfo_set_type));
    cls->defineProperty("format", _SE(js_gfx_TextureViewInfo_get_format), _SE(js_gfx_TextureViewInfo_set_format));
    cls->defineProperty("baseLevel", _SE(js_gfx_TextureViewInfo_get_baseLevel), _SE(js_gfx_TextureViewInfo_set_baseLevel));
    cls->defineProperty("levelCount", _SE(js_gfx_TextureViewInfo_get_levelCount), _SE(js_gfx_TextureViewInfo_set_levelCount));
    cls->defineProperty("baseLayer", _SE(js_gfx_TextureViewInfo_get_baseLayer), _SE(js_gfx_TextureViewInfo_set_baseLayer));
    cls->defineProperty("layerCount", _SE(js_gfx_TextureViewInfo_get_layerCount), _SE(js_gfx_TextureViewInfo_set_layerCount));
    cls->defineFunction("copy", _SE(js_gfx_TextureViewInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_TextureViewInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::TextureViewInfo>(cls);

    __jsb_cc_gfx_TextureViewInfo_proto = cls->getProto();
    __jsb_cc_gfx_TextureViewInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_SamplerInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_SamplerInfo_class = nullptr;  // NOLINT

static bool js_gfx_SamplerInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::SamplerInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::SamplerInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_SamplerInfo_copy)

static bool js_gfx_SamplerInfo_get_minFilter(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->minFilter, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->minFilter, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SamplerInfo_get_minFilter)

static bool js_gfx_SamplerInfo_set_minFilter(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->minFilter, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SamplerInfo_set_minFilter)

static bool js_gfx_SamplerInfo_get_magFilter(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->magFilter, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->magFilter, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SamplerInfo_get_magFilter)

static bool js_gfx_SamplerInfo_set_magFilter(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->magFilter, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SamplerInfo_set_magFilter)

static bool js_gfx_SamplerInfo_get_mipFilter(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->mipFilter, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->mipFilter, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SamplerInfo_get_mipFilter)

static bool js_gfx_SamplerInfo_set_mipFilter(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->mipFilter, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SamplerInfo_set_mipFilter)

static bool js_gfx_SamplerInfo_get_addressU(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->addressU, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->addressU, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SamplerInfo_get_addressU)

static bool js_gfx_SamplerInfo_set_addressU(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->addressU, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SamplerInfo_set_addressU)

static bool js_gfx_SamplerInfo_get_addressV(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->addressV, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->addressV, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SamplerInfo_get_addressV)

static bool js_gfx_SamplerInfo_set_addressV(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->addressV, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SamplerInfo_set_addressV)

static bool js_gfx_SamplerInfo_get_addressW(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->addressW, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->addressW, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SamplerInfo_get_addressW)

static bool js_gfx_SamplerInfo_set_addressW(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->addressW, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SamplerInfo_set_addressW)

static bool js_gfx_SamplerInfo_get_maxAnisotropy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxAnisotropy, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxAnisotropy, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SamplerInfo_get_maxAnisotropy)

static bool js_gfx_SamplerInfo_set_maxAnisotropy(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxAnisotropy, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SamplerInfo_set_maxAnisotropy)

static bool js_gfx_SamplerInfo_get_cmpFunc(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->cmpFunc, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->cmpFunc, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SamplerInfo_get_cmpFunc)

static bool js_gfx_SamplerInfo_set_cmpFunc(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SamplerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->cmpFunc, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SamplerInfo_set_cmpFunc)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::SamplerInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::SamplerInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("minFilter", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->minFilter), ctx);
    }
    json->getProperty("magFilter", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->magFilter), ctx);
    }
    json->getProperty("mipFilter", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->mipFilter), ctx);
    }
    json->getProperty("addressU", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->addressU), ctx);
    }
    json->getProperty("addressV", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->addressV), ctx);
    }
    json->getProperty("addressW", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->addressW), ctx);
    }
    json->getProperty("maxAnisotropy", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxAnisotropy), ctx);
    }
    json->getProperty("cmpFunc", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->cmpFunc), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_SamplerInfo_finalize)

static bool js_gfx_SamplerInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SamplerInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SamplerInfo);
        auto cobj = ptr->get<cc::gfx::SamplerInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SamplerInfo);
    auto cobj = ptr->get<cc::gfx::SamplerInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->minFilter), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->magFilter), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->mipFilter), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->addressU), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->addressV), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->addressW), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->maxAnisotropy), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->cmpFunc), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_SamplerInfo_constructor, __jsb_cc_gfx_SamplerInfo_class, js_cc_gfx_SamplerInfo_finalize)

static bool js_cc_gfx_SamplerInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_SamplerInfo_finalize)

bool js_register_gfx_SamplerInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("SamplerInfo", obj, nullptr, _SE(js_gfx_SamplerInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("minFilter", _SE(js_gfx_SamplerInfo_get_minFilter), _SE(js_gfx_SamplerInfo_set_minFilter));
    cls->defineProperty("magFilter", _SE(js_gfx_SamplerInfo_get_magFilter), _SE(js_gfx_SamplerInfo_set_magFilter));
    cls->defineProperty("mipFilter", _SE(js_gfx_SamplerInfo_get_mipFilter), _SE(js_gfx_SamplerInfo_set_mipFilter));
    cls->defineProperty("addressU", _SE(js_gfx_SamplerInfo_get_addressU), _SE(js_gfx_SamplerInfo_set_addressU));
    cls->defineProperty("addressV", _SE(js_gfx_SamplerInfo_get_addressV), _SE(js_gfx_SamplerInfo_set_addressV));
    cls->defineProperty("addressW", _SE(js_gfx_SamplerInfo_get_addressW), _SE(js_gfx_SamplerInfo_set_addressW));
    cls->defineProperty("maxAnisotropy", _SE(js_gfx_SamplerInfo_get_maxAnisotropy), _SE(js_gfx_SamplerInfo_set_maxAnisotropy));
    cls->defineProperty("cmpFunc", _SE(js_gfx_SamplerInfo_get_cmpFunc), _SE(js_gfx_SamplerInfo_set_cmpFunc));
    cls->defineFunction("copy", _SE(js_gfx_SamplerInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_SamplerInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::SamplerInfo>(cls);

    __jsb_cc_gfx_SamplerInfo_proto = cls->getProto();
    __jsb_cc_gfx_SamplerInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Uniform_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Uniform_class = nullptr;  // NOLINT

static bool js_gfx_Uniform_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Uniform>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Uniform, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Uniform& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Uniform_copy)

static bool js_gfx_Uniform_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Uniform>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Uniform_get_name)

static bool js_gfx_Uniform_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Uniform>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Uniform_set_name)

static bool js_gfx_Uniform_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Uniform>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Uniform_get_type)

static bool js_gfx_Uniform_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Uniform>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Uniform_set_type)

static bool js_gfx_Uniform_get_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Uniform>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->count, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->count, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Uniform_get_count)

static bool js_gfx_Uniform_set_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Uniform>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->count, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Uniform_set_count)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::Uniform * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::Uniform*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    json->getProperty("count", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->count), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Uniform_finalize)

static bool js_gfx_Uniform_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Uniform);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Uniform);
        auto cobj = ptr->get<cc::gfx::Uniform>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Uniform);
    auto cobj = ptr->get<cc::gfx::Uniform>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->name), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->type), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->count), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_Uniform_constructor, __jsb_cc_gfx_Uniform_class, js_cc_gfx_Uniform_finalize)

static bool js_cc_gfx_Uniform_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Uniform_finalize)

bool js_register_gfx_Uniform(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Uniform", obj, nullptr, _SE(js_gfx_Uniform_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("name", _SE(js_gfx_Uniform_get_name), _SE(js_gfx_Uniform_set_name));
    cls->defineProperty("type", _SE(js_gfx_Uniform_get_type), _SE(js_gfx_Uniform_set_type));
    cls->defineProperty("count", _SE(js_gfx_Uniform_get_count), _SE(js_gfx_Uniform_set_count));
    cls->defineFunction("copy", _SE(js_gfx_Uniform_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Uniform_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Uniform>(cls);

    __jsb_cc_gfx_Uniform_proto = cls->getProto();
    __jsb_cc_gfx_Uniform_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_UniformBlock_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_UniformBlock_class = nullptr;  // NOLINT

static bool js_gfx_UniformBlock_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::UniformBlock, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::UniformBlock& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_UniformBlock_copy)

static bool js_gfx_UniformBlock_get_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->set, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->set, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformBlock_get_set)

static bool js_gfx_UniformBlock_set_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->set, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformBlock_set_set)

static bool js_gfx_UniformBlock_get_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->binding, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->binding, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformBlock_get_binding)

static bool js_gfx_UniformBlock_set_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->binding, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformBlock_set_binding)

static bool js_gfx_UniformBlock_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformBlock_get_name)

static bool js_gfx_UniformBlock_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformBlock_set_name)

static bool js_gfx_UniformBlock_get_members(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->members, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->members, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformBlock_get_members)

static bool js_gfx_UniformBlock_set_members(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->members, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformBlock_set_members)

static bool js_gfx_UniformBlock_get_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->count, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->count, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformBlock_get_count)

static bool js_gfx_UniformBlock_set_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformBlock>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->count, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformBlock_set_count)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::UniformBlock * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::UniformBlock*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("set", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->set), ctx);
    }
    json->getProperty("binding", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->binding), ctx);
    }
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("members", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->members), ctx);
    }
    json->getProperty("count", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->count), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_UniformBlock_finalize)

static bool js_gfx_UniformBlock_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformBlock);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformBlock);
        auto cobj = ptr->get<cc::gfx::UniformBlock>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformBlock);
    auto cobj = ptr->get<cc::gfx::UniformBlock>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->set), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->binding), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->name), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->members), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->count), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_UniformBlock_constructor, __jsb_cc_gfx_UniformBlock_class, js_cc_gfx_UniformBlock_finalize)

static bool js_cc_gfx_UniformBlock_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_UniformBlock_finalize)

bool js_register_gfx_UniformBlock(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("UniformBlock", obj, nullptr, _SE(js_gfx_UniformBlock_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("set", _SE(js_gfx_UniformBlock_get_set), _SE(js_gfx_UniformBlock_set_set));
    cls->defineProperty("binding", _SE(js_gfx_UniformBlock_get_binding), _SE(js_gfx_UniformBlock_set_binding));
    cls->defineProperty("name", _SE(js_gfx_UniformBlock_get_name), _SE(js_gfx_UniformBlock_set_name));
    cls->defineProperty("members", _SE(js_gfx_UniformBlock_get_members), _SE(js_gfx_UniformBlock_set_members));
    cls->defineProperty("count", _SE(js_gfx_UniformBlock_get_count), _SE(js_gfx_UniformBlock_set_count));
    cls->defineFunction("copy", _SE(js_gfx_UniformBlock_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_UniformBlock_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::UniformBlock>(cls);

    __jsb_cc_gfx_UniformBlock_proto = cls->getProto();
    __jsb_cc_gfx_UniformBlock_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_UniformSamplerTexture_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_UniformSamplerTexture_class = nullptr;  // NOLINT

static bool js_gfx_UniformSamplerTexture_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::UniformSamplerTexture, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::UniformSamplerTexture& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_UniformSamplerTexture_copy)

static bool js_gfx_UniformSamplerTexture_get_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->set, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->set, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformSamplerTexture_get_set)

static bool js_gfx_UniformSamplerTexture_set_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->set, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformSamplerTexture_set_set)

static bool js_gfx_UniformSamplerTexture_get_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->binding, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->binding, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformSamplerTexture_get_binding)

static bool js_gfx_UniformSamplerTexture_set_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->binding, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformSamplerTexture_set_binding)

static bool js_gfx_UniformSamplerTexture_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformSamplerTexture_get_name)

static bool js_gfx_UniformSamplerTexture_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformSamplerTexture_set_name)

static bool js_gfx_UniformSamplerTexture_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformSamplerTexture_get_type)

static bool js_gfx_UniformSamplerTexture_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformSamplerTexture_set_type)

static bool js_gfx_UniformSamplerTexture_get_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->count, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->count, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformSamplerTexture_get_count)

static bool js_gfx_UniformSamplerTexture_set_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSamplerTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->count, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformSamplerTexture_set_count)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::UniformSamplerTexture * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::UniformSamplerTexture*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("set", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->set), ctx);
    }
    json->getProperty("binding", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->binding), ctx);
    }
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    json->getProperty("count", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->count), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_UniformSamplerTexture_finalize)

static bool js_gfx_UniformSamplerTexture_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformSamplerTexture);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformSamplerTexture);
        auto cobj = ptr->get<cc::gfx::UniformSamplerTexture>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformSamplerTexture);
    auto cobj = ptr->get<cc::gfx::UniformSamplerTexture>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->set), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->binding), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->name), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->type), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->count), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_UniformSamplerTexture_constructor, __jsb_cc_gfx_UniformSamplerTexture_class, js_cc_gfx_UniformSamplerTexture_finalize)

static bool js_cc_gfx_UniformSamplerTexture_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_UniformSamplerTexture_finalize)

bool js_register_gfx_UniformSamplerTexture(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("UniformSamplerTexture", obj, nullptr, _SE(js_gfx_UniformSamplerTexture_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("set", _SE(js_gfx_UniformSamplerTexture_get_set), _SE(js_gfx_UniformSamplerTexture_set_set));
    cls->defineProperty("binding", _SE(js_gfx_UniformSamplerTexture_get_binding), _SE(js_gfx_UniformSamplerTexture_set_binding));
    cls->defineProperty("name", _SE(js_gfx_UniformSamplerTexture_get_name), _SE(js_gfx_UniformSamplerTexture_set_name));
    cls->defineProperty("type", _SE(js_gfx_UniformSamplerTexture_get_type), _SE(js_gfx_UniformSamplerTexture_set_type));
    cls->defineProperty("count", _SE(js_gfx_UniformSamplerTexture_get_count), _SE(js_gfx_UniformSamplerTexture_set_count));
    cls->defineFunction("copy", _SE(js_gfx_UniformSamplerTexture_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_UniformSamplerTexture_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::UniformSamplerTexture>(cls);

    __jsb_cc_gfx_UniformSamplerTexture_proto = cls->getProto();
    __jsb_cc_gfx_UniformSamplerTexture_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_UniformSampler_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_UniformSampler_class = nullptr;  // NOLINT

static bool js_gfx_UniformSampler_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSampler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::UniformSampler, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::UniformSampler& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_UniformSampler_copy)

static bool js_gfx_UniformSampler_get_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSampler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->set, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->set, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformSampler_get_set)

static bool js_gfx_UniformSampler_set_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSampler>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->set, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformSampler_set_set)

static bool js_gfx_UniformSampler_get_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSampler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->binding, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->binding, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformSampler_get_binding)

static bool js_gfx_UniformSampler_set_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSampler>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->binding, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformSampler_set_binding)

static bool js_gfx_UniformSampler_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSampler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformSampler_get_name)

static bool js_gfx_UniformSampler_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSampler>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformSampler_set_name)

static bool js_gfx_UniformSampler_get_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSampler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->count, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->count, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformSampler_get_count)

static bool js_gfx_UniformSampler_set_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformSampler>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->count, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformSampler_set_count)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::UniformSampler * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::UniformSampler*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("set", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->set), ctx);
    }
    json->getProperty("binding", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->binding), ctx);
    }
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("count", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->count), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_UniformSampler_finalize)

static bool js_gfx_UniformSampler_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformSampler);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformSampler);
        auto cobj = ptr->get<cc::gfx::UniformSampler>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformSampler);
    auto cobj = ptr->get<cc::gfx::UniformSampler>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->set), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->binding), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->name), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->count), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_UniformSampler_constructor, __jsb_cc_gfx_UniformSampler_class, js_cc_gfx_UniformSampler_finalize)

static bool js_cc_gfx_UniformSampler_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_UniformSampler_finalize)

bool js_register_gfx_UniformSampler(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("UniformSampler", obj, nullptr, _SE(js_gfx_UniformSampler_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("set", _SE(js_gfx_UniformSampler_get_set), _SE(js_gfx_UniformSampler_set_set));
    cls->defineProperty("binding", _SE(js_gfx_UniformSampler_get_binding), _SE(js_gfx_UniformSampler_set_binding));
    cls->defineProperty("name", _SE(js_gfx_UniformSampler_get_name), _SE(js_gfx_UniformSampler_set_name));
    cls->defineProperty("count", _SE(js_gfx_UniformSampler_get_count), _SE(js_gfx_UniformSampler_set_count));
    cls->defineFunction("copy", _SE(js_gfx_UniformSampler_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_UniformSampler_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::UniformSampler>(cls);

    __jsb_cc_gfx_UniformSampler_proto = cls->getProto();
    __jsb_cc_gfx_UniformSampler_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_UniformTexture_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_UniformTexture_class = nullptr;  // NOLINT

static bool js_gfx_UniformTexture_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::UniformTexture, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::UniformTexture& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_UniformTexture_copy)

static bool js_gfx_UniformTexture_get_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->set, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->set, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformTexture_get_set)

static bool js_gfx_UniformTexture_set_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->set, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformTexture_set_set)

static bool js_gfx_UniformTexture_get_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->binding, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->binding, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformTexture_get_binding)

static bool js_gfx_UniformTexture_set_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->binding, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformTexture_set_binding)

static bool js_gfx_UniformTexture_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformTexture_get_name)

static bool js_gfx_UniformTexture_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformTexture_set_name)

static bool js_gfx_UniformTexture_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformTexture_get_type)

static bool js_gfx_UniformTexture_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformTexture_set_type)

static bool js_gfx_UniformTexture_get_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->count, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->count, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformTexture_get_count)

static bool js_gfx_UniformTexture_set_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformTexture>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->count, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformTexture_set_count)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::UniformTexture * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::UniformTexture*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("set", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->set), ctx);
    }
    json->getProperty("binding", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->binding), ctx);
    }
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    json->getProperty("count", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->count), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_UniformTexture_finalize)

static bool js_gfx_UniformTexture_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformTexture);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformTexture);
        auto cobj = ptr->get<cc::gfx::UniformTexture>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformTexture);
    auto cobj = ptr->get<cc::gfx::UniformTexture>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->set), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->binding), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->name), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->type), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->count), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_UniformTexture_constructor, __jsb_cc_gfx_UniformTexture_class, js_cc_gfx_UniformTexture_finalize)

static bool js_cc_gfx_UniformTexture_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_UniformTexture_finalize)

bool js_register_gfx_UniformTexture(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("UniformTexture", obj, nullptr, _SE(js_gfx_UniformTexture_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("set", _SE(js_gfx_UniformTexture_get_set), _SE(js_gfx_UniformTexture_set_set));
    cls->defineProperty("binding", _SE(js_gfx_UniformTexture_get_binding), _SE(js_gfx_UniformTexture_set_binding));
    cls->defineProperty("name", _SE(js_gfx_UniformTexture_get_name), _SE(js_gfx_UniformTexture_set_name));
    cls->defineProperty("type", _SE(js_gfx_UniformTexture_get_type), _SE(js_gfx_UniformTexture_set_type));
    cls->defineProperty("count", _SE(js_gfx_UniformTexture_get_count), _SE(js_gfx_UniformTexture_set_count));
    cls->defineFunction("copy", _SE(js_gfx_UniformTexture_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_UniformTexture_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::UniformTexture>(cls);

    __jsb_cc_gfx_UniformTexture_proto = cls->getProto();
    __jsb_cc_gfx_UniformTexture_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_UniformStorageImage_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_UniformStorageImage_class = nullptr;  // NOLINT

static bool js_gfx_UniformStorageImage_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::UniformStorageImage, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::UniformStorageImage& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_UniformStorageImage_copy)

static bool js_gfx_UniformStorageImage_get_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->set, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->set, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageImage_get_set)

static bool js_gfx_UniformStorageImage_set_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->set, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageImage_set_set)

static bool js_gfx_UniformStorageImage_get_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->binding, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->binding, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageImage_get_binding)

static bool js_gfx_UniformStorageImage_set_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->binding, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageImage_set_binding)

static bool js_gfx_UniformStorageImage_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageImage_get_name)

static bool js_gfx_UniformStorageImage_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageImage_set_name)

static bool js_gfx_UniformStorageImage_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageImage_get_type)

static bool js_gfx_UniformStorageImage_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageImage_set_type)

static bool js_gfx_UniformStorageImage_get_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->count, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->count, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageImage_get_count)

static bool js_gfx_UniformStorageImage_set_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->count, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageImage_set_count)

static bool js_gfx_UniformStorageImage_get_memoryAccess(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->memoryAccess, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->memoryAccess, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageImage_get_memoryAccess)

static bool js_gfx_UniformStorageImage_set_memoryAccess(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageImage>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->memoryAccess, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageImage_set_memoryAccess)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::UniformStorageImage * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::UniformStorageImage*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("set", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->set), ctx);
    }
    json->getProperty("binding", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->binding), ctx);
    }
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    json->getProperty("count", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->count), ctx);
    }
    json->getProperty("memoryAccess", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->memoryAccess), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_UniformStorageImage_finalize)

static bool js_gfx_UniformStorageImage_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformStorageImage);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformStorageImage);
        auto cobj = ptr->get<cc::gfx::UniformStorageImage>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformStorageImage);
    auto cobj = ptr->get<cc::gfx::UniformStorageImage>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->set), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->binding), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->name), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->type), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->count), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->memoryAccess), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_UniformStorageImage_constructor, __jsb_cc_gfx_UniformStorageImage_class, js_cc_gfx_UniformStorageImage_finalize)

static bool js_cc_gfx_UniformStorageImage_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_UniformStorageImage_finalize)

bool js_register_gfx_UniformStorageImage(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("UniformStorageImage", obj, nullptr, _SE(js_gfx_UniformStorageImage_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("set", _SE(js_gfx_UniformStorageImage_get_set), _SE(js_gfx_UniformStorageImage_set_set));
    cls->defineProperty("binding", _SE(js_gfx_UniformStorageImage_get_binding), _SE(js_gfx_UniformStorageImage_set_binding));
    cls->defineProperty("name", _SE(js_gfx_UniformStorageImage_get_name), _SE(js_gfx_UniformStorageImage_set_name));
    cls->defineProperty("type", _SE(js_gfx_UniformStorageImage_get_type), _SE(js_gfx_UniformStorageImage_set_type));
    cls->defineProperty("count", _SE(js_gfx_UniformStorageImage_get_count), _SE(js_gfx_UniformStorageImage_set_count));
    cls->defineProperty("memoryAccess", _SE(js_gfx_UniformStorageImage_get_memoryAccess), _SE(js_gfx_UniformStorageImage_set_memoryAccess));
    cls->defineFunction("copy", _SE(js_gfx_UniformStorageImage_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_UniformStorageImage_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::UniformStorageImage>(cls);

    __jsb_cc_gfx_UniformStorageImage_proto = cls->getProto();
    __jsb_cc_gfx_UniformStorageImage_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_UniformStorageBuffer_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_UniformStorageBuffer_class = nullptr;  // NOLINT

static bool js_gfx_UniformStorageBuffer_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::UniformStorageBuffer, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::UniformStorageBuffer& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_UniformStorageBuffer_copy)

static bool js_gfx_UniformStorageBuffer_get_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->set, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->set, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageBuffer_get_set)

static bool js_gfx_UniformStorageBuffer_set_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->set, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageBuffer_set_set)

static bool js_gfx_UniformStorageBuffer_get_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->binding, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->binding, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageBuffer_get_binding)

static bool js_gfx_UniformStorageBuffer_set_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->binding, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageBuffer_set_binding)

static bool js_gfx_UniformStorageBuffer_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageBuffer_get_name)

static bool js_gfx_UniformStorageBuffer_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageBuffer_set_name)

static bool js_gfx_UniformStorageBuffer_get_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->count, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->count, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageBuffer_get_count)

static bool js_gfx_UniformStorageBuffer_set_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->count, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageBuffer_set_count)

static bool js_gfx_UniformStorageBuffer_get_memoryAccess(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->memoryAccess, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->memoryAccess, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformStorageBuffer_get_memoryAccess)

static bool js_gfx_UniformStorageBuffer_set_memoryAccess(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformStorageBuffer>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->memoryAccess, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformStorageBuffer_set_memoryAccess)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::UniformStorageBuffer * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::UniformStorageBuffer*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("set", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->set), ctx);
    }
    json->getProperty("binding", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->binding), ctx);
    }
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("count", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->count), ctx);
    }
    json->getProperty("memoryAccess", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->memoryAccess), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_UniformStorageBuffer_finalize)

static bool js_gfx_UniformStorageBuffer_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformStorageBuffer);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformStorageBuffer);
        auto cobj = ptr->get<cc::gfx::UniformStorageBuffer>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformStorageBuffer);
    auto cobj = ptr->get<cc::gfx::UniformStorageBuffer>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->set), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->binding), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->name), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->count), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->memoryAccess), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_UniformStorageBuffer_constructor, __jsb_cc_gfx_UniformStorageBuffer_class, js_cc_gfx_UniformStorageBuffer_finalize)

static bool js_cc_gfx_UniformStorageBuffer_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_UniformStorageBuffer_finalize)

bool js_register_gfx_UniformStorageBuffer(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("UniformStorageBuffer", obj, nullptr, _SE(js_gfx_UniformStorageBuffer_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("set", _SE(js_gfx_UniformStorageBuffer_get_set), _SE(js_gfx_UniformStorageBuffer_set_set));
    cls->defineProperty("binding", _SE(js_gfx_UniformStorageBuffer_get_binding), _SE(js_gfx_UniformStorageBuffer_set_binding));
    cls->defineProperty("name", _SE(js_gfx_UniformStorageBuffer_get_name), _SE(js_gfx_UniformStorageBuffer_set_name));
    cls->defineProperty("count", _SE(js_gfx_UniformStorageBuffer_get_count), _SE(js_gfx_UniformStorageBuffer_set_count));
    cls->defineProperty("memoryAccess", _SE(js_gfx_UniformStorageBuffer_get_memoryAccess), _SE(js_gfx_UniformStorageBuffer_set_memoryAccess));
    cls->defineFunction("copy", _SE(js_gfx_UniformStorageBuffer_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_UniformStorageBuffer_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::UniformStorageBuffer>(cls);

    __jsb_cc_gfx_UniformStorageBuffer_proto = cls->getProto();
    __jsb_cc_gfx_UniformStorageBuffer_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_UniformInputAttachment_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_UniformInputAttachment_class = nullptr;  // NOLINT

static bool js_gfx_UniformInputAttachment_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformInputAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::UniformInputAttachment, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::UniformInputAttachment& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_UniformInputAttachment_copy)

static bool js_gfx_UniformInputAttachment_get_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformInputAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->set, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->set, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformInputAttachment_get_set)

static bool js_gfx_UniformInputAttachment_set_set(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformInputAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->set, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformInputAttachment_set_set)

static bool js_gfx_UniformInputAttachment_get_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformInputAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->binding, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->binding, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformInputAttachment_get_binding)

static bool js_gfx_UniformInputAttachment_set_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformInputAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->binding, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformInputAttachment_set_binding)

static bool js_gfx_UniformInputAttachment_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformInputAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformInputAttachment_get_name)

static bool js_gfx_UniformInputAttachment_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformInputAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformInputAttachment_set_name)

static bool js_gfx_UniformInputAttachment_get_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformInputAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->count, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->count, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_UniformInputAttachment_get_count)

static bool js_gfx_UniformInputAttachment_set_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::UniformInputAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->count, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_UniformInputAttachment_set_count)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::UniformInputAttachment * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::UniformInputAttachment*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("set", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->set), ctx);
    }
    json->getProperty("binding", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->binding), ctx);
    }
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("count", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->count), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_UniformInputAttachment_finalize)

static bool js_gfx_UniformInputAttachment_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformInputAttachment);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformInputAttachment);
        auto cobj = ptr->get<cc::gfx::UniformInputAttachment>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::UniformInputAttachment);
    auto cobj = ptr->get<cc::gfx::UniformInputAttachment>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->set), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->binding), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->name), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->count), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_UniformInputAttachment_constructor, __jsb_cc_gfx_UniformInputAttachment_class, js_cc_gfx_UniformInputAttachment_finalize)

static bool js_cc_gfx_UniformInputAttachment_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_UniformInputAttachment_finalize)

bool js_register_gfx_UniformInputAttachment(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("UniformInputAttachment", obj, nullptr, _SE(js_gfx_UniformInputAttachment_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("set", _SE(js_gfx_UniformInputAttachment_get_set), _SE(js_gfx_UniformInputAttachment_set_set));
    cls->defineProperty("binding", _SE(js_gfx_UniformInputAttachment_get_binding), _SE(js_gfx_UniformInputAttachment_set_binding));
    cls->defineProperty("name", _SE(js_gfx_UniformInputAttachment_get_name), _SE(js_gfx_UniformInputAttachment_set_name));
    cls->defineProperty("count", _SE(js_gfx_UniformInputAttachment_get_count), _SE(js_gfx_UniformInputAttachment_set_count));
    cls->defineFunction("copy", _SE(js_gfx_UniformInputAttachment_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_UniformInputAttachment_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::UniformInputAttachment>(cls);

    __jsb_cc_gfx_UniformInputAttachment_proto = cls->getProto();
    __jsb_cc_gfx_UniformInputAttachment_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_ShaderStage_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_ShaderStage_class = nullptr;  // NOLINT

static bool js_gfx_ShaderStage_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::ShaderStage, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::ShaderStage& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_ShaderStage_copy)

static bool js_gfx_ShaderStage_get_stage(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stage, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stage, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderStage_get_stage)

static bool js_gfx_ShaderStage_set_stage(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderStage>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stage, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderStage_set_stage)

static bool js_gfx_ShaderStage_get_source(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->source, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->source, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderStage_get_source)

static bool js_gfx_ShaderStage_set_source(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderStage>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->source, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderStage_set_source)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::ShaderStage * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::ShaderStage*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("stage", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stage), ctx);
    }
    json->getProperty("source", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->source), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_ShaderStage_finalize)

static bool js_gfx_ShaderStage_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::ShaderStage);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::ShaderStage);
        auto cobj = ptr->get<cc::gfx::ShaderStage>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::ShaderStage);
    auto cobj = ptr->get<cc::gfx::ShaderStage>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->stage), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->source), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_ShaderStage_constructor, __jsb_cc_gfx_ShaderStage_class, js_cc_gfx_ShaderStage_finalize)

static bool js_cc_gfx_ShaderStage_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_ShaderStage_finalize)

bool js_register_gfx_ShaderStage(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("ShaderStage", obj, nullptr, _SE(js_gfx_ShaderStage_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("stage", _SE(js_gfx_ShaderStage_get_stage), _SE(js_gfx_ShaderStage_set_stage));
    cls->defineProperty("source", _SE(js_gfx_ShaderStage_get_source), _SE(js_gfx_ShaderStage_set_source));
    cls->defineFunction("copy", _SE(js_gfx_ShaderStage_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_ShaderStage_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::ShaderStage>(cls);

    __jsb_cc_gfx_ShaderStage_proto = cls->getProto();
    __jsb_cc_gfx_ShaderStage_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Attribute_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Attribute_class = nullptr;  // NOLINT

static bool js_gfx_Attribute_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Attribute, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Attribute& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Attribute_copy)

static bool js_gfx_Attribute_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Attribute_get_name)

static bool js_gfx_Attribute_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Attribute_set_name)

static bool js_gfx_Attribute_get_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->format, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->format, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Attribute_get_format)

static bool js_gfx_Attribute_set_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->format, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Attribute_set_format)

static bool js_gfx_Attribute_get_isNormalized(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isNormalized, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isNormalized, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Attribute_get_isNormalized)

static bool js_gfx_Attribute_set_isNormalized(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isNormalized, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Attribute_set_isNormalized)

static bool js_gfx_Attribute_get_stream(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stream, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stream, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Attribute_get_stream)

static bool js_gfx_Attribute_set_stream(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stream, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Attribute_set_stream)

static bool js_gfx_Attribute_get_isInstanced(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isInstanced, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isInstanced, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Attribute_get_isInstanced)

static bool js_gfx_Attribute_set_isInstanced(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isInstanced, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Attribute_set_isInstanced)

static bool js_gfx_Attribute_get_location(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->location, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->location, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_Attribute_get_location)

static bool js_gfx_Attribute_set_location(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Attribute>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->location, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_Attribute_set_location)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::Attribute * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::Attribute*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("format", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->format), ctx);
    }
    json->getProperty("isNormalized", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isNormalized), ctx);
    }
    json->getProperty("stream", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stream), ctx);
    }
    json->getProperty("isInstanced", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isInstanced), ctx);
    }
    json->getProperty("location", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->location), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Attribute_finalize)

static bool js_gfx_Attribute_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Attribute);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Attribute);
        auto cobj = ptr->get<cc::gfx::Attribute>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::Attribute);
    auto cobj = ptr->get<cc::gfx::Attribute>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->name), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->format), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->isNormalized), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->stream), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->isInstanced), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->location), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_Attribute_constructor, __jsb_cc_gfx_Attribute_class, js_cc_gfx_Attribute_finalize)

static bool js_cc_gfx_Attribute_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Attribute_finalize)

bool js_register_gfx_Attribute(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Attribute", obj, nullptr, _SE(js_gfx_Attribute_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("name", _SE(js_gfx_Attribute_get_name), _SE(js_gfx_Attribute_set_name));
    cls->defineProperty("format", _SE(js_gfx_Attribute_get_format), _SE(js_gfx_Attribute_set_format));
    cls->defineProperty("isNormalized", _SE(js_gfx_Attribute_get_isNormalized), _SE(js_gfx_Attribute_set_isNormalized));
    cls->defineProperty("stream", _SE(js_gfx_Attribute_get_stream), _SE(js_gfx_Attribute_set_stream));
    cls->defineProperty("isInstanced", _SE(js_gfx_Attribute_get_isInstanced), _SE(js_gfx_Attribute_set_isInstanced));
    cls->defineProperty("location", _SE(js_gfx_Attribute_get_location), _SE(js_gfx_Attribute_set_location));
    cls->defineFunction("copy", _SE(js_gfx_Attribute_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Attribute_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Attribute>(cls);

    __jsb_cc_gfx_Attribute_proto = cls->getProto();
    __jsb_cc_gfx_Attribute_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_ShaderInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_ShaderInfo_class = nullptr;  // NOLINT

static bool js_gfx_ShaderInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::ShaderInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::ShaderInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_ShaderInfo_copy)

static bool js_gfx_ShaderInfo_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_name)

static bool js_gfx_ShaderInfo_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_name)

static bool js_gfx_ShaderInfo_get_stages(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stages, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stages, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_stages)

static bool js_gfx_ShaderInfo_set_stages(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stages, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_stages)

static bool js_gfx_ShaderInfo_get_attributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->attributes, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->attributes, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_attributes)

static bool js_gfx_ShaderInfo_set_attributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->attributes, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_attributes)

static bool js_gfx_ShaderInfo_get_blocks(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blocks, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blocks, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_blocks)

static bool js_gfx_ShaderInfo_set_blocks(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blocks, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_blocks)

static bool js_gfx_ShaderInfo_get_buffers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->buffers, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->buffers, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_buffers)

static bool js_gfx_ShaderInfo_set_buffers(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->buffers, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_buffers)

static bool js_gfx_ShaderInfo_get_samplerTextures(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->samplerTextures, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->samplerTextures, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_samplerTextures)

static bool js_gfx_ShaderInfo_set_samplerTextures(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->samplerTextures, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_samplerTextures)

static bool js_gfx_ShaderInfo_get_samplers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->samplers, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->samplers, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_samplers)

static bool js_gfx_ShaderInfo_set_samplers(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->samplers, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_samplers)

static bool js_gfx_ShaderInfo_get_textures(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->textures, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->textures, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_textures)

static bool js_gfx_ShaderInfo_set_textures(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->textures, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_textures)

static bool js_gfx_ShaderInfo_get_images(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->images, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->images, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_images)

static bool js_gfx_ShaderInfo_set_images(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->images, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_images)

static bool js_gfx_ShaderInfo_get_subpassInputs(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->subpassInputs, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->subpassInputs, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ShaderInfo_get_subpassInputs)

static bool js_gfx_ShaderInfo_set_subpassInputs(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ShaderInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->subpassInputs, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ShaderInfo_set_subpassInputs)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::ShaderInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::ShaderInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("name", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->name), ctx);
    }
    json->getProperty("stages", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stages), ctx);
    }
    json->getProperty("attributes", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->attributes), ctx);
    }
    json->getProperty("blocks", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blocks), ctx);
    }
    json->getProperty("buffers", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->buffers), ctx);
    }
    json->getProperty("samplerTextures", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->samplerTextures), ctx);
    }
    json->getProperty("samplers", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->samplers), ctx);
    }
    json->getProperty("textures", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->textures), ctx);
    }
    json->getProperty("images", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->images), ctx);
    }
    json->getProperty("subpassInputs", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->subpassInputs), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_ShaderInfo_finalize)

static bool js_gfx_ShaderInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::ShaderInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::ShaderInfo);
        auto cobj = ptr->get<cc::gfx::ShaderInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::ShaderInfo);
    auto cobj = ptr->get<cc::gfx::ShaderInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->name), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->stages), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->attributes), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->blocks), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->buffers), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->samplerTextures), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->samplers), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->textures), nullptr);
    }
    if (argc > 8 && !args[8].isUndefined()) {
        ok &= sevalue_to_native(args[8], &(cobj->images), nullptr);
    }
    if (argc > 9 && !args[9].isUndefined()) {
        ok &= sevalue_to_native(args[9], &(cobj->subpassInputs), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_ShaderInfo_constructor, __jsb_cc_gfx_ShaderInfo_class, js_cc_gfx_ShaderInfo_finalize)

static bool js_cc_gfx_ShaderInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_ShaderInfo_finalize)

bool js_register_gfx_ShaderInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("ShaderInfo", obj, nullptr, _SE(js_gfx_ShaderInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("name", _SE(js_gfx_ShaderInfo_get_name), _SE(js_gfx_ShaderInfo_set_name));
    cls->defineProperty("stages", _SE(js_gfx_ShaderInfo_get_stages), _SE(js_gfx_ShaderInfo_set_stages));
    cls->defineProperty("attributes", _SE(js_gfx_ShaderInfo_get_attributes), _SE(js_gfx_ShaderInfo_set_attributes));
    cls->defineProperty("blocks", _SE(js_gfx_ShaderInfo_get_blocks), _SE(js_gfx_ShaderInfo_set_blocks));
    cls->defineProperty("buffers", _SE(js_gfx_ShaderInfo_get_buffers), _SE(js_gfx_ShaderInfo_set_buffers));
    cls->defineProperty("samplerTextures", _SE(js_gfx_ShaderInfo_get_samplerTextures), _SE(js_gfx_ShaderInfo_set_samplerTextures));
    cls->defineProperty("samplers", _SE(js_gfx_ShaderInfo_get_samplers), _SE(js_gfx_ShaderInfo_set_samplers));
    cls->defineProperty("textures", _SE(js_gfx_ShaderInfo_get_textures), _SE(js_gfx_ShaderInfo_set_textures));
    cls->defineProperty("images", _SE(js_gfx_ShaderInfo_get_images), _SE(js_gfx_ShaderInfo_set_images));
    cls->defineProperty("subpassInputs", _SE(js_gfx_ShaderInfo_get_subpassInputs), _SE(js_gfx_ShaderInfo_set_subpassInputs));
    cls->defineFunction("copy", _SE(js_gfx_ShaderInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_ShaderInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::ShaderInfo>(cls);

    __jsb_cc_gfx_ShaderInfo_proto = cls->getProto();
    __jsb_cc_gfx_ShaderInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_InputAssemblerInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_InputAssemblerInfo_class = nullptr;  // NOLINT

static bool js_gfx_InputAssemblerInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssemblerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::InputAssemblerInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::InputAssemblerInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_InputAssemblerInfo_copy)

static bool js_gfx_InputAssemblerInfo_get_attributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssemblerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->attributes, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->attributes, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_InputAssemblerInfo_get_attributes)

static bool js_gfx_InputAssemblerInfo_set_attributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssemblerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->attributes, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_InputAssemblerInfo_set_attributes)

static bool js_gfx_InputAssemblerInfo_get_vertexBuffers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssemblerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->vertexBuffers, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->vertexBuffers, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_InputAssemblerInfo_get_vertexBuffers)

static bool js_gfx_InputAssemblerInfo_set_vertexBuffers(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssemblerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->vertexBuffers, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_InputAssemblerInfo_set_vertexBuffers)

static bool js_gfx_InputAssemblerInfo_get_indexBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssemblerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->indexBuffer, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->indexBuffer, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_InputAssemblerInfo_get_indexBuffer)

static bool js_gfx_InputAssemblerInfo_set_indexBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssemblerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->indexBuffer, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_InputAssemblerInfo_set_indexBuffer)

static bool js_gfx_InputAssemblerInfo_get_indirectBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssemblerInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->indirectBuffer, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->indirectBuffer, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_InputAssemblerInfo_get_indirectBuffer)

static bool js_gfx_InputAssemblerInfo_set_indirectBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssemblerInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->indirectBuffer, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_InputAssemblerInfo_set_indirectBuffer)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::InputAssemblerInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::InputAssemblerInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("attributes", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->attributes), ctx);
    }
    json->getProperty("vertexBuffers", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->vertexBuffers), ctx);
    }
    json->getProperty("indexBuffer", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->indexBuffer), ctx);
    }
    json->getProperty("indirectBuffer", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->indirectBuffer), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_InputAssemblerInfo_finalize)

static bool js_gfx_InputAssemblerInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::InputAssemblerInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::InputAssemblerInfo);
        auto cobj = ptr->get<cc::gfx::InputAssemblerInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::InputAssemblerInfo);
    auto cobj = ptr->get<cc::gfx::InputAssemblerInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->attributes), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->vertexBuffers), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->indexBuffer), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->indirectBuffer), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_InputAssemblerInfo_constructor, __jsb_cc_gfx_InputAssemblerInfo_class, js_cc_gfx_InputAssemblerInfo_finalize)

static bool js_cc_gfx_InputAssemblerInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_InputAssemblerInfo_finalize)

bool js_register_gfx_InputAssemblerInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("InputAssemblerInfo", obj, nullptr, _SE(js_gfx_InputAssemblerInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("attributes", _SE(js_gfx_InputAssemblerInfo_get_attributes), _SE(js_gfx_InputAssemblerInfo_set_attributes));
    cls->defineProperty("vertexBuffers", _SE(js_gfx_InputAssemblerInfo_get_vertexBuffers), _SE(js_gfx_InputAssemblerInfo_set_vertexBuffers));
    cls->defineProperty("indexBuffer", _SE(js_gfx_InputAssemblerInfo_get_indexBuffer), _SE(js_gfx_InputAssemblerInfo_set_indexBuffer));
    cls->defineProperty("indirectBuffer", _SE(js_gfx_InputAssemblerInfo_get_indirectBuffer), _SE(js_gfx_InputAssemblerInfo_set_indirectBuffer));
    cls->defineFunction("copy", _SE(js_gfx_InputAssemblerInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_InputAssemblerInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::InputAssemblerInfo>(cls);

    __jsb_cc_gfx_InputAssemblerInfo_proto = cls->getProto();
    __jsb_cc_gfx_InputAssemblerInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_ColorAttachment_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_ColorAttachment_class = nullptr;  // NOLINT

static bool js_gfx_ColorAttachment_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::ColorAttachment, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::ColorAttachment& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_ColorAttachment_copy)

static bool js_gfx_ColorAttachment_get_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->format, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->format, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ColorAttachment_get_format)

static bool js_gfx_ColorAttachment_set_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->format, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ColorAttachment_set_format)

static bool js_gfx_ColorAttachment_get_sampleCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->sampleCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->sampleCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ColorAttachment_get_sampleCount)

static bool js_gfx_ColorAttachment_set_sampleCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->sampleCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ColorAttachment_set_sampleCount)

static bool js_gfx_ColorAttachment_get_loadOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->loadOp, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->loadOp, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ColorAttachment_get_loadOp)

static bool js_gfx_ColorAttachment_set_loadOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->loadOp, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ColorAttachment_set_loadOp)

static bool js_gfx_ColorAttachment_get_storeOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->storeOp, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->storeOp, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ColorAttachment_get_storeOp)

static bool js_gfx_ColorAttachment_set_storeOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->storeOp, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ColorAttachment_set_storeOp)

static bool js_gfx_ColorAttachment_get_barrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->barrier, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->barrier, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ColorAttachment_get_barrier)

static bool js_gfx_ColorAttachment_set_barrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->barrier, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ColorAttachment_set_barrier)

static bool js_gfx_ColorAttachment_get_isGeneralLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isGeneralLayout, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isGeneralLayout, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_ColorAttachment_get_isGeneralLayout)

static bool js_gfx_ColorAttachment_set_isGeneralLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::ColorAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isGeneralLayout, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_ColorAttachment_set_isGeneralLayout)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::ColorAttachment * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::ColorAttachment*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("format", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->format), ctx);
    }
    json->getProperty("sampleCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->sampleCount), ctx);
    }
    json->getProperty("loadOp", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->loadOp), ctx);
    }
    json->getProperty("storeOp", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->storeOp), ctx);
    }
    json->getProperty("barrier", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->barrier), ctx);
    }
    json->getProperty("isGeneralLayout", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isGeneralLayout), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_ColorAttachment_finalize)

static bool js_gfx_ColorAttachment_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::ColorAttachment);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::ColorAttachment);
        auto cobj = ptr->get<cc::gfx::ColorAttachment>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::ColorAttachment);
    auto cobj = ptr->get<cc::gfx::ColorAttachment>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->format), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->sampleCount), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->loadOp), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->storeOp), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->barrier), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->isGeneralLayout), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_ColorAttachment_constructor, __jsb_cc_gfx_ColorAttachment_class, js_cc_gfx_ColorAttachment_finalize)

static bool js_cc_gfx_ColorAttachment_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_ColorAttachment_finalize)

bool js_register_gfx_ColorAttachment(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("ColorAttachment", obj, nullptr, _SE(js_gfx_ColorAttachment_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("format", _SE(js_gfx_ColorAttachment_get_format), _SE(js_gfx_ColorAttachment_set_format));
    cls->defineProperty("sampleCount", _SE(js_gfx_ColorAttachment_get_sampleCount), _SE(js_gfx_ColorAttachment_set_sampleCount));
    cls->defineProperty("loadOp", _SE(js_gfx_ColorAttachment_get_loadOp), _SE(js_gfx_ColorAttachment_set_loadOp));
    cls->defineProperty("storeOp", _SE(js_gfx_ColorAttachment_get_storeOp), _SE(js_gfx_ColorAttachment_set_storeOp));
    cls->defineProperty("barrier", _SE(js_gfx_ColorAttachment_get_barrier), _SE(js_gfx_ColorAttachment_set_barrier));
    cls->defineProperty("isGeneralLayout", _SE(js_gfx_ColorAttachment_get_isGeneralLayout), _SE(js_gfx_ColorAttachment_set_isGeneralLayout));
    cls->defineFunction("copy", _SE(js_gfx_ColorAttachment_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_ColorAttachment_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::ColorAttachment>(cls);

    __jsb_cc_gfx_ColorAttachment_proto = cls->getProto();
    __jsb_cc_gfx_ColorAttachment_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DepthStencilAttachment_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DepthStencilAttachment_class = nullptr;  // NOLINT

static bool js_gfx_DepthStencilAttachment_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DepthStencilAttachment, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DepthStencilAttachment& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DepthStencilAttachment_copy)

static bool js_gfx_DepthStencilAttachment_get_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->format, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->format, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilAttachment_get_format)

static bool js_gfx_DepthStencilAttachment_set_format(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->format, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilAttachment_set_format)

static bool js_gfx_DepthStencilAttachment_get_sampleCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->sampleCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->sampleCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilAttachment_get_sampleCount)

static bool js_gfx_DepthStencilAttachment_set_sampleCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->sampleCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilAttachment_set_sampleCount)

static bool js_gfx_DepthStencilAttachment_get_depthLoadOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthLoadOp, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthLoadOp, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilAttachment_get_depthLoadOp)

static bool js_gfx_DepthStencilAttachment_set_depthLoadOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthLoadOp, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilAttachment_set_depthLoadOp)

static bool js_gfx_DepthStencilAttachment_get_depthStoreOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthStoreOp, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthStoreOp, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilAttachment_get_depthStoreOp)

static bool js_gfx_DepthStencilAttachment_set_depthStoreOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthStoreOp, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilAttachment_set_depthStoreOp)

static bool js_gfx_DepthStencilAttachment_get_stencilLoadOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilLoadOp, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilLoadOp, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilAttachment_get_stencilLoadOp)

static bool js_gfx_DepthStencilAttachment_set_stencilLoadOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilLoadOp, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilAttachment_set_stencilLoadOp)

static bool js_gfx_DepthStencilAttachment_get_stencilStoreOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilStoreOp, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilStoreOp, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilAttachment_get_stencilStoreOp)

static bool js_gfx_DepthStencilAttachment_set_stencilStoreOp(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilStoreOp, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilAttachment_set_stencilStoreOp)

static bool js_gfx_DepthStencilAttachment_get_barrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->barrier, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->barrier, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilAttachment_get_barrier)

static bool js_gfx_DepthStencilAttachment_set_barrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->barrier, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilAttachment_set_barrier)

static bool js_gfx_DepthStencilAttachment_get_isGeneralLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isGeneralLayout, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isGeneralLayout, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilAttachment_get_isGeneralLayout)

static bool js_gfx_DepthStencilAttachment_set_isGeneralLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilAttachment>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isGeneralLayout, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilAttachment_set_isGeneralLayout)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::DepthStencilAttachment * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::DepthStencilAttachment*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("format", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->format), ctx);
    }
    json->getProperty("sampleCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->sampleCount), ctx);
    }
    json->getProperty("depthLoadOp", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthLoadOp), ctx);
    }
    json->getProperty("depthStoreOp", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthStoreOp), ctx);
    }
    json->getProperty("stencilLoadOp", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilLoadOp), ctx);
    }
    json->getProperty("stencilStoreOp", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilStoreOp), ctx);
    }
    json->getProperty("barrier", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->barrier), ctx);
    }
    json->getProperty("isGeneralLayout", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isGeneralLayout), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DepthStencilAttachment_finalize)

static bool js_gfx_DepthStencilAttachment_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DepthStencilAttachment);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DepthStencilAttachment);
        auto cobj = ptr->get<cc::gfx::DepthStencilAttachment>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DepthStencilAttachment);
    auto cobj = ptr->get<cc::gfx::DepthStencilAttachment>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->format), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->sampleCount), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->depthLoadOp), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->depthStoreOp), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->stencilLoadOp), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->stencilStoreOp), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->barrier), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->isGeneralLayout), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_DepthStencilAttachment_constructor, __jsb_cc_gfx_DepthStencilAttachment_class, js_cc_gfx_DepthStencilAttachment_finalize)

static bool js_cc_gfx_DepthStencilAttachment_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DepthStencilAttachment_finalize)

bool js_register_gfx_DepthStencilAttachment(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DepthStencilAttachment", obj, nullptr, _SE(js_gfx_DepthStencilAttachment_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("format", _SE(js_gfx_DepthStencilAttachment_get_format), _SE(js_gfx_DepthStencilAttachment_set_format));
    cls->defineProperty("sampleCount", _SE(js_gfx_DepthStencilAttachment_get_sampleCount), _SE(js_gfx_DepthStencilAttachment_set_sampleCount));
    cls->defineProperty("depthLoadOp", _SE(js_gfx_DepthStencilAttachment_get_depthLoadOp), _SE(js_gfx_DepthStencilAttachment_set_depthLoadOp));
    cls->defineProperty("depthStoreOp", _SE(js_gfx_DepthStencilAttachment_get_depthStoreOp), _SE(js_gfx_DepthStencilAttachment_set_depthStoreOp));
    cls->defineProperty("stencilLoadOp", _SE(js_gfx_DepthStencilAttachment_get_stencilLoadOp), _SE(js_gfx_DepthStencilAttachment_set_stencilLoadOp));
    cls->defineProperty("stencilStoreOp", _SE(js_gfx_DepthStencilAttachment_get_stencilStoreOp), _SE(js_gfx_DepthStencilAttachment_set_stencilStoreOp));
    cls->defineProperty("barrier", _SE(js_gfx_DepthStencilAttachment_get_barrier), _SE(js_gfx_DepthStencilAttachment_set_barrier));
    cls->defineProperty("isGeneralLayout", _SE(js_gfx_DepthStencilAttachment_get_isGeneralLayout), _SE(js_gfx_DepthStencilAttachment_set_isGeneralLayout));
    cls->defineFunction("copy", _SE(js_gfx_DepthStencilAttachment_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DepthStencilAttachment_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DepthStencilAttachment>(cls);

    __jsb_cc_gfx_DepthStencilAttachment_proto = cls->getProto();
    __jsb_cc_gfx_DepthStencilAttachment_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_SubpassInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_SubpassInfo_class = nullptr;  // NOLINT

static bool js_gfx_SubpassInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::SubpassInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::SubpassInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_SubpassInfo_copy)

static bool js_gfx_SubpassInfo_get_inputs(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->inputs, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->inputs, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassInfo_get_inputs)

static bool js_gfx_SubpassInfo_set_inputs(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->inputs, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassInfo_set_inputs)

static bool js_gfx_SubpassInfo_get_colors(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->colors, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->colors, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassInfo_get_colors)

static bool js_gfx_SubpassInfo_set_colors(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->colors, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassInfo_set_colors)

static bool js_gfx_SubpassInfo_get_resolves(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->resolves, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->resolves, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassInfo_get_resolves)

static bool js_gfx_SubpassInfo_set_resolves(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->resolves, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassInfo_set_resolves)

static bool js_gfx_SubpassInfo_get_preserves(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->preserves, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->preserves, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassInfo_get_preserves)

static bool js_gfx_SubpassInfo_set_preserves(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->preserves, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassInfo_set_preserves)

static bool js_gfx_SubpassInfo_get_depthStencil(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthStencil, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthStencil, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassInfo_get_depthStencil)

static bool js_gfx_SubpassInfo_set_depthStencil(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthStencil, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassInfo_set_depthStencil)

static bool js_gfx_SubpassInfo_get_depthStencilResolve(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthStencilResolve, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthStencilResolve, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassInfo_get_depthStencilResolve)

static bool js_gfx_SubpassInfo_set_depthStencilResolve(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthStencilResolve, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassInfo_set_depthStencilResolve)

static bool js_gfx_SubpassInfo_get_depthResolveMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthResolveMode, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthResolveMode, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassInfo_get_depthResolveMode)

static bool js_gfx_SubpassInfo_set_depthResolveMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthResolveMode, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassInfo_set_depthResolveMode)

static bool js_gfx_SubpassInfo_get_stencilResolveMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilResolveMode, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilResolveMode, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassInfo_get_stencilResolveMode)

static bool js_gfx_SubpassInfo_set_stencilResolveMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilResolveMode, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassInfo_set_stencilResolveMode)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::SubpassInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::SubpassInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("inputs", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->inputs), ctx);
    }
    json->getProperty("colors", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->colors), ctx);
    }
    json->getProperty("resolves", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->resolves), ctx);
    }
    json->getProperty("preserves", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->preserves), ctx);
    }
    json->getProperty("depthStencil", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthStencil), ctx);
    }
    json->getProperty("depthStencilResolve", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthStencilResolve), ctx);
    }
    json->getProperty("depthResolveMode", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthResolveMode), ctx);
    }
    json->getProperty("stencilResolveMode", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilResolveMode), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_SubpassInfo_finalize)

static bool js_gfx_SubpassInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SubpassInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SubpassInfo);
        auto cobj = ptr->get<cc::gfx::SubpassInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SubpassInfo);
    auto cobj = ptr->get<cc::gfx::SubpassInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->inputs), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->colors), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->resolves), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->preserves), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->depthStencil), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->depthStencilResolve), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->depthResolveMode), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->stencilResolveMode), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_SubpassInfo_constructor, __jsb_cc_gfx_SubpassInfo_class, js_cc_gfx_SubpassInfo_finalize)

static bool js_cc_gfx_SubpassInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_SubpassInfo_finalize)

bool js_register_gfx_SubpassInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("SubpassInfo", obj, nullptr, _SE(js_gfx_SubpassInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("inputs", _SE(js_gfx_SubpassInfo_get_inputs), _SE(js_gfx_SubpassInfo_set_inputs));
    cls->defineProperty("colors", _SE(js_gfx_SubpassInfo_get_colors), _SE(js_gfx_SubpassInfo_set_colors));
    cls->defineProperty("resolves", _SE(js_gfx_SubpassInfo_get_resolves), _SE(js_gfx_SubpassInfo_set_resolves));
    cls->defineProperty("preserves", _SE(js_gfx_SubpassInfo_get_preserves), _SE(js_gfx_SubpassInfo_set_preserves));
    cls->defineProperty("depthStencil", _SE(js_gfx_SubpassInfo_get_depthStencil), _SE(js_gfx_SubpassInfo_set_depthStencil));
    cls->defineProperty("depthStencilResolve", _SE(js_gfx_SubpassInfo_get_depthStencilResolve), _SE(js_gfx_SubpassInfo_set_depthStencilResolve));
    cls->defineProperty("depthResolveMode", _SE(js_gfx_SubpassInfo_get_depthResolveMode), _SE(js_gfx_SubpassInfo_set_depthResolveMode));
    cls->defineProperty("stencilResolveMode", _SE(js_gfx_SubpassInfo_get_stencilResolveMode), _SE(js_gfx_SubpassInfo_set_stencilResolveMode));
    cls->defineFunction("copy", _SE(js_gfx_SubpassInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_SubpassInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::SubpassInfo>(cls);

    __jsb_cc_gfx_SubpassInfo_proto = cls->getProto();
    __jsb_cc_gfx_SubpassInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_SubpassDependency_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_SubpassDependency_class = nullptr;  // NOLINT

static bool js_gfx_SubpassDependency_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::SubpassDependency, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::SubpassDependency& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_SubpassDependency_copy)

static bool js_gfx_SubpassDependency_get_srcSubpass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->srcSubpass, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->srcSubpass, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassDependency_get_srcSubpass)

static bool js_gfx_SubpassDependency_set_srcSubpass(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->srcSubpass, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassDependency_set_srcSubpass)

static bool js_gfx_SubpassDependency_get_dstSubpass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dstSubpass, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dstSubpass, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassDependency_get_dstSubpass)

static bool js_gfx_SubpassDependency_set_dstSubpass(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dstSubpass, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassDependency_set_dstSubpass)

static bool js_gfx_SubpassDependency_get_generalBarrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->generalBarrier, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->generalBarrier, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassDependency_get_generalBarrier)

static bool js_gfx_SubpassDependency_set_generalBarrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->generalBarrier, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassDependency_set_generalBarrier)

static bool js_gfx_SubpassDependency_get_bufferBarriers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->bufferBarriers, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->bufferBarriers, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassDependency_get_bufferBarriers)

static bool js_gfx_SubpassDependency_set_bufferBarriers(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->bufferBarriers, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassDependency_set_bufferBarriers)

static bool js_gfx_SubpassDependency_get_buffers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->buffers, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->buffers, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassDependency_get_buffers)

static bool js_gfx_SubpassDependency_set_buffers(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->buffers, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassDependency_set_buffers)

static bool js_gfx_SubpassDependency_get_bufferBarrierCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->bufferBarrierCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->bufferBarrierCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassDependency_get_bufferBarrierCount)

static bool js_gfx_SubpassDependency_set_bufferBarrierCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->bufferBarrierCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassDependency_set_bufferBarrierCount)

static bool js_gfx_SubpassDependency_get_textureBarriers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->textureBarriers, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->textureBarriers, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassDependency_get_textureBarriers)

static bool js_gfx_SubpassDependency_set_textureBarriers(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->textureBarriers, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassDependency_set_textureBarriers)

static bool js_gfx_SubpassDependency_get_textures(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->textures, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->textures, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassDependency_get_textures)

static bool js_gfx_SubpassDependency_set_textures(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->textures, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassDependency_set_textures)

static bool js_gfx_SubpassDependency_get_textureBarrierCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->textureBarrierCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->textureBarrierCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_SubpassDependency_get_textureBarrierCount)

static bool js_gfx_SubpassDependency_set_textureBarrierCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::SubpassDependency>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->textureBarrierCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_SubpassDependency_set_textureBarrierCount)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::SubpassDependency * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::SubpassDependency*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("srcSubpass", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->srcSubpass), ctx);
    }
    json->getProperty("dstSubpass", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dstSubpass), ctx);
    }
    json->getProperty("generalBarrier", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->generalBarrier), ctx);
    }
    json->getProperty("bufferBarriers", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->bufferBarriers), ctx);
    }
    json->getProperty("buffers", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->buffers), ctx);
    }
    json->getProperty("bufferBarrierCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->bufferBarrierCount), ctx);
    }
    json->getProperty("textureBarriers", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->textureBarriers), ctx);
    }
    json->getProperty("textures", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->textures), ctx);
    }
    json->getProperty("textureBarrierCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->textureBarrierCount), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_SubpassDependency_finalize)

static bool js_gfx_SubpassDependency_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SubpassDependency);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SubpassDependency);
        auto cobj = ptr->get<cc::gfx::SubpassDependency>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::SubpassDependency);
    auto cobj = ptr->get<cc::gfx::SubpassDependency>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->srcSubpass), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->dstSubpass), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->generalBarrier), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->bufferBarriers), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->buffers), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->bufferBarrierCount), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->textureBarriers), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->textures), nullptr);
    }
    if (argc > 8 && !args[8].isUndefined()) {
        ok &= sevalue_to_native(args[8], &(cobj->textureBarrierCount), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_SubpassDependency_constructor, __jsb_cc_gfx_SubpassDependency_class, js_cc_gfx_SubpassDependency_finalize)

static bool js_cc_gfx_SubpassDependency_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_SubpassDependency_finalize)

bool js_register_gfx_SubpassDependency(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("SubpassDependency", obj, nullptr, _SE(js_gfx_SubpassDependency_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("srcSubpass", _SE(js_gfx_SubpassDependency_get_srcSubpass), _SE(js_gfx_SubpassDependency_set_srcSubpass));
    cls->defineProperty("dstSubpass", _SE(js_gfx_SubpassDependency_get_dstSubpass), _SE(js_gfx_SubpassDependency_set_dstSubpass));
    cls->defineProperty("generalBarrier", _SE(js_gfx_SubpassDependency_get_generalBarrier), _SE(js_gfx_SubpassDependency_set_generalBarrier));
    cls->defineProperty("bufferBarriers", _SE(js_gfx_SubpassDependency_get_bufferBarriers), _SE(js_gfx_SubpassDependency_set_bufferBarriers));
    cls->defineProperty("buffers", _SE(js_gfx_SubpassDependency_get_buffers), _SE(js_gfx_SubpassDependency_set_buffers));
    cls->defineProperty("bufferBarrierCount", _SE(js_gfx_SubpassDependency_get_bufferBarrierCount), _SE(js_gfx_SubpassDependency_set_bufferBarrierCount));
    cls->defineProperty("textureBarriers", _SE(js_gfx_SubpassDependency_get_textureBarriers), _SE(js_gfx_SubpassDependency_set_textureBarriers));
    cls->defineProperty("textures", _SE(js_gfx_SubpassDependency_get_textures), _SE(js_gfx_SubpassDependency_set_textures));
    cls->defineProperty("textureBarrierCount", _SE(js_gfx_SubpassDependency_get_textureBarrierCount), _SE(js_gfx_SubpassDependency_set_textureBarrierCount));
    cls->defineFunction("copy", _SE(js_gfx_SubpassDependency_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_SubpassDependency_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::SubpassDependency>(cls);

    __jsb_cc_gfx_SubpassDependency_proto = cls->getProto();
    __jsb_cc_gfx_SubpassDependency_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_RenderPassInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_RenderPassInfo_class = nullptr;  // NOLINT

static bool js_gfx_RenderPassInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::RenderPassInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::RenderPassInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_RenderPassInfo_copy)

static bool js_gfx_RenderPassInfo_get_colorAttachments(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->colorAttachments, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->colorAttachments, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RenderPassInfo_get_colorAttachments)

static bool js_gfx_RenderPassInfo_set_colorAttachments(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->colorAttachments, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RenderPassInfo_set_colorAttachments)

static bool js_gfx_RenderPassInfo_get_depthStencilAttachment(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthStencilAttachment, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthStencilAttachment, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RenderPassInfo_get_depthStencilAttachment)

static bool js_gfx_RenderPassInfo_set_depthStencilAttachment(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthStencilAttachment, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RenderPassInfo_set_depthStencilAttachment)

static bool js_gfx_RenderPassInfo_get_subpasses(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->subpasses, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->subpasses, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RenderPassInfo_get_subpasses)

static bool js_gfx_RenderPassInfo_set_subpasses(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->subpasses, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RenderPassInfo_set_subpasses)

static bool js_gfx_RenderPassInfo_get_dependencies(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPassInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dependencies, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dependencies, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RenderPassInfo_get_dependencies)

static bool js_gfx_RenderPassInfo_set_dependencies(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPassInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dependencies, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RenderPassInfo_set_dependencies)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::RenderPassInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::RenderPassInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("colorAttachments", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->colorAttachments), ctx);
    }
    json->getProperty("depthStencilAttachment", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthStencilAttachment), ctx);
    }
    json->getProperty("subpasses", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->subpasses), ctx);
    }
    json->getProperty("dependencies", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dependencies), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_RenderPassInfo_finalize)

static bool js_gfx_RenderPassInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::RenderPassInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::RenderPassInfo);
        auto cobj = ptr->get<cc::gfx::RenderPassInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::RenderPassInfo);
    auto cobj = ptr->get<cc::gfx::RenderPassInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->colorAttachments), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->depthStencilAttachment), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->subpasses), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->dependencies), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_RenderPassInfo_constructor, __jsb_cc_gfx_RenderPassInfo_class, js_cc_gfx_RenderPassInfo_finalize)

static bool js_cc_gfx_RenderPassInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_RenderPassInfo_finalize)

bool js_register_gfx_RenderPassInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderPassInfo", obj, nullptr, _SE(js_gfx_RenderPassInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("colorAttachments", _SE(js_gfx_RenderPassInfo_get_colorAttachments), _SE(js_gfx_RenderPassInfo_set_colorAttachments));
    cls->defineProperty("depthStencilAttachment", _SE(js_gfx_RenderPassInfo_get_depthStencilAttachment), _SE(js_gfx_RenderPassInfo_set_depthStencilAttachment));
    cls->defineProperty("subpasses", _SE(js_gfx_RenderPassInfo_get_subpasses), _SE(js_gfx_RenderPassInfo_set_subpasses));
    cls->defineProperty("dependencies", _SE(js_gfx_RenderPassInfo_get_dependencies), _SE(js_gfx_RenderPassInfo_set_dependencies));
    cls->defineFunction("copy", _SE(js_gfx_RenderPassInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_RenderPassInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::RenderPassInfo>(cls);

    __jsb_cc_gfx_RenderPassInfo_proto = cls->getProto();
    __jsb_cc_gfx_RenderPassInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_GeneralBarrierInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_GeneralBarrierInfo_class = nullptr;  // NOLINT

static bool js_gfx_GeneralBarrierInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GeneralBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::GeneralBarrierInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::GeneralBarrierInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_GeneralBarrierInfo_copy)

static bool js_gfx_GeneralBarrierInfo_get_prevAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GeneralBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->prevAccesses, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->prevAccesses, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_GeneralBarrierInfo_get_prevAccesses)

static bool js_gfx_GeneralBarrierInfo_set_prevAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GeneralBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->prevAccesses, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_GeneralBarrierInfo_set_prevAccesses)

static bool js_gfx_GeneralBarrierInfo_get_nextAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GeneralBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->nextAccesses, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->nextAccesses, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_GeneralBarrierInfo_get_nextAccesses)

static bool js_gfx_GeneralBarrierInfo_set_nextAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GeneralBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->nextAccesses, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_GeneralBarrierInfo_set_nextAccesses)

static bool js_gfx_GeneralBarrierInfo_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GeneralBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_GeneralBarrierInfo_get_type)

static bool js_gfx_GeneralBarrierInfo_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GeneralBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_GeneralBarrierInfo_set_type)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::GeneralBarrierInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::GeneralBarrierInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("prevAccesses", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->prevAccesses), ctx);
    }
    json->getProperty("nextAccesses", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->nextAccesses), ctx);
    }
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_GeneralBarrierInfo_finalize)

static bool js_gfx_GeneralBarrierInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::GeneralBarrierInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::GeneralBarrierInfo);
        auto cobj = ptr->get<cc::gfx::GeneralBarrierInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::GeneralBarrierInfo);
    auto cobj = ptr->get<cc::gfx::GeneralBarrierInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->prevAccesses), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->nextAccesses), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->type), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_GeneralBarrierInfo_constructor, __jsb_cc_gfx_GeneralBarrierInfo_class, js_cc_gfx_GeneralBarrierInfo_finalize)

static bool js_cc_gfx_GeneralBarrierInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_GeneralBarrierInfo_finalize)

bool js_register_gfx_GeneralBarrierInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("GeneralBarrierInfo", obj, nullptr, _SE(js_gfx_GeneralBarrierInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("prevAccesses", _SE(js_gfx_GeneralBarrierInfo_get_prevAccesses), _SE(js_gfx_GeneralBarrierInfo_set_prevAccesses));
    cls->defineProperty("nextAccesses", _SE(js_gfx_GeneralBarrierInfo_get_nextAccesses), _SE(js_gfx_GeneralBarrierInfo_set_nextAccesses));
    cls->defineProperty("type", _SE(js_gfx_GeneralBarrierInfo_get_type), _SE(js_gfx_GeneralBarrierInfo_set_type));
    cls->defineFunction("copy", _SE(js_gfx_GeneralBarrierInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_GeneralBarrierInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::GeneralBarrierInfo>(cls);

    __jsb_cc_gfx_GeneralBarrierInfo_proto = cls->getProto();
    __jsb_cc_gfx_GeneralBarrierInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_TextureBarrierInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_TextureBarrierInfo_class = nullptr;  // NOLINT

static bool js_gfx_TextureBarrierInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::TextureBarrierInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::TextureBarrierInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureBarrierInfo_copy)

static bool js_gfx_TextureBarrierInfo_get_prevAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->prevAccesses, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->prevAccesses, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_prevAccesses)

static bool js_gfx_TextureBarrierInfo_set_prevAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->prevAccesses, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_prevAccesses)

static bool js_gfx_TextureBarrierInfo_get_nextAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->nextAccesses, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->nextAccesses, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_nextAccesses)

static bool js_gfx_TextureBarrierInfo_set_nextAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->nextAccesses, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_nextAccesses)

static bool js_gfx_TextureBarrierInfo_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_type)

static bool js_gfx_TextureBarrierInfo_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_type)

static bool js_gfx_TextureBarrierInfo_get_baseMipLevel(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->baseMipLevel, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->baseMipLevel, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_baseMipLevel)

static bool js_gfx_TextureBarrierInfo_set_baseMipLevel(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->baseMipLevel, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_baseMipLevel)

static bool js_gfx_TextureBarrierInfo_get_levelCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->levelCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->levelCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_levelCount)

static bool js_gfx_TextureBarrierInfo_set_levelCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->levelCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_levelCount)

static bool js_gfx_TextureBarrierInfo_get_baseSlice(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->baseSlice, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->baseSlice, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_baseSlice)

static bool js_gfx_TextureBarrierInfo_set_baseSlice(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->baseSlice, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_baseSlice)

static bool js_gfx_TextureBarrierInfo_get_sliceCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->sliceCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->sliceCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_sliceCount)

static bool js_gfx_TextureBarrierInfo_set_sliceCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->sliceCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_sliceCount)

static bool js_gfx_TextureBarrierInfo_get_discardContents(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->discardContents, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->discardContents, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_discardContents)

static bool js_gfx_TextureBarrierInfo_set_discardContents(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->discardContents, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_discardContents)

static bool js_gfx_TextureBarrierInfo_get_srcQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->srcQueue, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->srcQueue, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_srcQueue)

static bool js_gfx_TextureBarrierInfo_set_srcQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->srcQueue, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_srcQueue)

static bool js_gfx_TextureBarrierInfo_get_dstQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dstQueue, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dstQueue, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_TextureBarrierInfo_get_dstQueue)

static bool js_gfx_TextureBarrierInfo_set_dstQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dstQueue, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_TextureBarrierInfo_set_dstQueue)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::TextureBarrierInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::TextureBarrierInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("prevAccesses", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->prevAccesses), ctx);
    }
    json->getProperty("nextAccesses", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->nextAccesses), ctx);
    }
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    json->getProperty("baseMipLevel", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->baseMipLevel), ctx);
    }
    json->getProperty("levelCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->levelCount), ctx);
    }
    json->getProperty("baseSlice", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->baseSlice), ctx);
    }
    json->getProperty("sliceCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->sliceCount), ctx);
    }
    json->getProperty("discardContents", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->discardContents), ctx);
    }
    json->getProperty("srcQueue", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->srcQueue), ctx);
    }
    json->getProperty("dstQueue", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dstQueue), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_TextureBarrierInfo_finalize)

static bool js_gfx_TextureBarrierInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureBarrierInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureBarrierInfo);
        auto cobj = ptr->get<cc::gfx::TextureBarrierInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::TextureBarrierInfo);
    auto cobj = ptr->get<cc::gfx::TextureBarrierInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->prevAccesses), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->nextAccesses), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->type), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->baseMipLevel), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->levelCount), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->baseSlice), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->sliceCount), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->discardContents), nullptr);
    }
    if (argc > 8 && !args[8].isUndefined()) {
        ok &= sevalue_to_native(args[8], &(cobj->srcQueue), nullptr);
    }
    if (argc > 9 && !args[9].isUndefined()) {
        ok &= sevalue_to_native(args[9], &(cobj->dstQueue), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_TextureBarrierInfo_constructor, __jsb_cc_gfx_TextureBarrierInfo_class, js_cc_gfx_TextureBarrierInfo_finalize)

static bool js_cc_gfx_TextureBarrierInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_TextureBarrierInfo_finalize)

bool js_register_gfx_TextureBarrierInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("TextureBarrierInfo", obj, nullptr, _SE(js_gfx_TextureBarrierInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("prevAccesses", _SE(js_gfx_TextureBarrierInfo_get_prevAccesses), _SE(js_gfx_TextureBarrierInfo_set_prevAccesses));
    cls->defineProperty("nextAccesses", _SE(js_gfx_TextureBarrierInfo_get_nextAccesses), _SE(js_gfx_TextureBarrierInfo_set_nextAccesses));
    cls->defineProperty("type", _SE(js_gfx_TextureBarrierInfo_get_type), _SE(js_gfx_TextureBarrierInfo_set_type));
    cls->defineProperty("baseMipLevel", _SE(js_gfx_TextureBarrierInfo_get_baseMipLevel), _SE(js_gfx_TextureBarrierInfo_set_baseMipLevel));
    cls->defineProperty("levelCount", _SE(js_gfx_TextureBarrierInfo_get_levelCount), _SE(js_gfx_TextureBarrierInfo_set_levelCount));
    cls->defineProperty("baseSlice", _SE(js_gfx_TextureBarrierInfo_get_baseSlice), _SE(js_gfx_TextureBarrierInfo_set_baseSlice));
    cls->defineProperty("sliceCount", _SE(js_gfx_TextureBarrierInfo_get_sliceCount), _SE(js_gfx_TextureBarrierInfo_set_sliceCount));
    cls->defineProperty("discardContents", _SE(js_gfx_TextureBarrierInfo_get_discardContents), _SE(js_gfx_TextureBarrierInfo_set_discardContents));
    cls->defineProperty("srcQueue", _SE(js_gfx_TextureBarrierInfo_get_srcQueue), _SE(js_gfx_TextureBarrierInfo_set_srcQueue));
    cls->defineProperty("dstQueue", _SE(js_gfx_TextureBarrierInfo_get_dstQueue), _SE(js_gfx_TextureBarrierInfo_set_dstQueue));
    cls->defineFunction("copy", _SE(js_gfx_TextureBarrierInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_TextureBarrierInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::TextureBarrierInfo>(cls);

    __jsb_cc_gfx_TextureBarrierInfo_proto = cls->getProto();
    __jsb_cc_gfx_TextureBarrierInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_BufferBarrierInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_BufferBarrierInfo_class = nullptr;  // NOLINT

static bool js_gfx_BufferBarrierInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BufferBarrierInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::BufferBarrierInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_BufferBarrierInfo_copy)

static bool js_gfx_BufferBarrierInfo_get_prevAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->prevAccesses, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->prevAccesses, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferBarrierInfo_get_prevAccesses)

static bool js_gfx_BufferBarrierInfo_set_prevAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->prevAccesses, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferBarrierInfo_set_prevAccesses)

static bool js_gfx_BufferBarrierInfo_get_nextAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->nextAccesses, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->nextAccesses, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferBarrierInfo_get_nextAccesses)

static bool js_gfx_BufferBarrierInfo_set_nextAccesses(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->nextAccesses, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferBarrierInfo_set_nextAccesses)

static bool js_gfx_BufferBarrierInfo_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferBarrierInfo_get_type)

static bool js_gfx_BufferBarrierInfo_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferBarrierInfo_set_type)

static bool js_gfx_BufferBarrierInfo_get_offset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->offset, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->offset, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferBarrierInfo_get_offset)

static bool js_gfx_BufferBarrierInfo_set_offset(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->offset, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferBarrierInfo_set_offset)

static bool js_gfx_BufferBarrierInfo_get_size(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->size, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->size, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferBarrierInfo_get_size)

static bool js_gfx_BufferBarrierInfo_set_size(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->size, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferBarrierInfo_set_size)

static bool js_gfx_BufferBarrierInfo_get_discardContents(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->discardContents, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->discardContents, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferBarrierInfo_get_discardContents)

static bool js_gfx_BufferBarrierInfo_set_discardContents(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->discardContents, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferBarrierInfo_set_discardContents)

static bool js_gfx_BufferBarrierInfo_get_srcQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->srcQueue, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->srcQueue, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferBarrierInfo_get_srcQueue)

static bool js_gfx_BufferBarrierInfo_set_srcQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->srcQueue, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferBarrierInfo_set_srcQueue)

static bool js_gfx_BufferBarrierInfo_get_dstQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dstQueue, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dstQueue, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BufferBarrierInfo_get_dstQueue)

static bool js_gfx_BufferBarrierInfo_set_dstQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrierInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dstQueue, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BufferBarrierInfo_set_dstQueue)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::BufferBarrierInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::BufferBarrierInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("prevAccesses", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->prevAccesses), ctx);
    }
    json->getProperty("nextAccesses", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->nextAccesses), ctx);
    }
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    json->getProperty("offset", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->offset), ctx);
    }
    json->getProperty("size", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->size), ctx);
    }
    json->getProperty("discardContents", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->discardContents), ctx);
    }
    json->getProperty("srcQueue", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->srcQueue), ctx);
    }
    json->getProperty("dstQueue", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dstQueue), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_BufferBarrierInfo_finalize)

static bool js_gfx_BufferBarrierInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferBarrierInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferBarrierInfo);
        auto cobj = ptr->get<cc::gfx::BufferBarrierInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BufferBarrierInfo);
    auto cobj = ptr->get<cc::gfx::BufferBarrierInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->prevAccesses), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->nextAccesses), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->type), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->offset), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->size), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->discardContents), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->srcQueue), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->dstQueue), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_BufferBarrierInfo_constructor, __jsb_cc_gfx_BufferBarrierInfo_class, js_cc_gfx_BufferBarrierInfo_finalize)

static bool js_cc_gfx_BufferBarrierInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_BufferBarrierInfo_finalize)

bool js_register_gfx_BufferBarrierInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BufferBarrierInfo", obj, nullptr, _SE(js_gfx_BufferBarrierInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("prevAccesses", _SE(js_gfx_BufferBarrierInfo_get_prevAccesses), _SE(js_gfx_BufferBarrierInfo_set_prevAccesses));
    cls->defineProperty("nextAccesses", _SE(js_gfx_BufferBarrierInfo_get_nextAccesses), _SE(js_gfx_BufferBarrierInfo_set_nextAccesses));
    cls->defineProperty("type", _SE(js_gfx_BufferBarrierInfo_get_type), _SE(js_gfx_BufferBarrierInfo_set_type));
    cls->defineProperty("offset", _SE(js_gfx_BufferBarrierInfo_get_offset), _SE(js_gfx_BufferBarrierInfo_set_offset));
    cls->defineProperty("size", _SE(js_gfx_BufferBarrierInfo_get_size), _SE(js_gfx_BufferBarrierInfo_set_size));
    cls->defineProperty("discardContents", _SE(js_gfx_BufferBarrierInfo_get_discardContents), _SE(js_gfx_BufferBarrierInfo_set_discardContents));
    cls->defineProperty("srcQueue", _SE(js_gfx_BufferBarrierInfo_get_srcQueue), _SE(js_gfx_BufferBarrierInfo_set_srcQueue));
    cls->defineProperty("dstQueue", _SE(js_gfx_BufferBarrierInfo_get_dstQueue), _SE(js_gfx_BufferBarrierInfo_set_dstQueue));
    cls->defineFunction("copy", _SE(js_gfx_BufferBarrierInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_BufferBarrierInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::BufferBarrierInfo>(cls);

    __jsb_cc_gfx_BufferBarrierInfo_proto = cls->getProto();
    __jsb_cc_gfx_BufferBarrierInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_FramebufferInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_FramebufferInfo_class = nullptr;  // NOLINT

static bool js_gfx_FramebufferInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::FramebufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::FramebufferInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::FramebufferInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_FramebufferInfo_copy)

static bool js_gfx_FramebufferInfo_get_renderPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::FramebufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->renderPass, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->renderPass, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_FramebufferInfo_get_renderPass)

static bool js_gfx_FramebufferInfo_set_renderPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::FramebufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->renderPass, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_FramebufferInfo_set_renderPass)

static bool js_gfx_FramebufferInfo_get_colorTextures(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::FramebufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->colorTextures, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->colorTextures, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_FramebufferInfo_get_colorTextures)

static bool js_gfx_FramebufferInfo_set_colorTextures(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::FramebufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->colorTextures, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_FramebufferInfo_set_colorTextures)

static bool js_gfx_FramebufferInfo_get_depthStencilTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::FramebufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthStencilTexture, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthStencilTexture, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_FramebufferInfo_get_depthStencilTexture)

static bool js_gfx_FramebufferInfo_set_depthStencilTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::FramebufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthStencilTexture, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_FramebufferInfo_set_depthStencilTexture)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::FramebufferInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::FramebufferInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("renderPass", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->renderPass), ctx);
    }
    json->getProperty("colorTextures", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->colorTextures), ctx);
    }
    json->getProperty("depthStencilTexture", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthStencilTexture), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_FramebufferInfo_finalize)

static bool js_gfx_FramebufferInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::FramebufferInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::FramebufferInfo);
        auto cobj = ptr->get<cc::gfx::FramebufferInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::FramebufferInfo);
    auto cobj = ptr->get<cc::gfx::FramebufferInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->renderPass), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->colorTextures), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->depthStencilTexture), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_FramebufferInfo_constructor, __jsb_cc_gfx_FramebufferInfo_class, js_cc_gfx_FramebufferInfo_finalize)

static bool js_cc_gfx_FramebufferInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_FramebufferInfo_finalize)

bool js_register_gfx_FramebufferInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("FramebufferInfo", obj, nullptr, _SE(js_gfx_FramebufferInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("renderPass", _SE(js_gfx_FramebufferInfo_get_renderPass), _SE(js_gfx_FramebufferInfo_set_renderPass));
    cls->defineProperty("colorTextures", _SE(js_gfx_FramebufferInfo_get_colorTextures), _SE(js_gfx_FramebufferInfo_set_colorTextures));
    cls->defineProperty("depthStencilTexture", _SE(js_gfx_FramebufferInfo_get_depthStencilTexture), _SE(js_gfx_FramebufferInfo_set_depthStencilTexture));
    cls->defineFunction("copy", _SE(js_gfx_FramebufferInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_FramebufferInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::FramebufferInfo>(cls);

    __jsb_cc_gfx_FramebufferInfo_proto = cls->getProto();
    __jsb_cc_gfx_FramebufferInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DescriptorSetLayoutBinding_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DescriptorSetLayoutBinding_class = nullptr;  // NOLINT

static bool js_gfx_DescriptorSetLayoutBinding_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DescriptorSetLayoutBinding, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DescriptorSetLayoutBinding& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSetLayoutBinding_copy)

static bool js_gfx_DescriptorSetLayoutBinding_get_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->binding, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->binding, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DescriptorSetLayoutBinding_get_binding)

static bool js_gfx_DescriptorSetLayoutBinding_set_binding(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->binding, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DescriptorSetLayoutBinding_set_binding)

static bool js_gfx_DescriptorSetLayoutBinding_get_descriptorType(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->descriptorType, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->descriptorType, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DescriptorSetLayoutBinding_get_descriptorType)

static bool js_gfx_DescriptorSetLayoutBinding_set_descriptorType(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->descriptorType, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DescriptorSetLayoutBinding_set_descriptorType)

static bool js_gfx_DescriptorSetLayoutBinding_get_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->count, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->count, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DescriptorSetLayoutBinding_get_count)

static bool js_gfx_DescriptorSetLayoutBinding_set_count(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->count, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DescriptorSetLayoutBinding_set_count)

static bool js_gfx_DescriptorSetLayoutBinding_get_stageFlags(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stageFlags, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stageFlags, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DescriptorSetLayoutBinding_get_stageFlags)

static bool js_gfx_DescriptorSetLayoutBinding_set_stageFlags(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stageFlags, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DescriptorSetLayoutBinding_set_stageFlags)

static bool js_gfx_DescriptorSetLayoutBinding_get_immutableSamplers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->immutableSamplers, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->immutableSamplers, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DescriptorSetLayoutBinding_get_immutableSamplers)

static bool js_gfx_DescriptorSetLayoutBinding_set_immutableSamplers(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutBinding>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->immutableSamplers, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DescriptorSetLayoutBinding_set_immutableSamplers)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::DescriptorSetLayoutBinding * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::DescriptorSetLayoutBinding*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("binding", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->binding), ctx);
    }
    json->getProperty("descriptorType", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->descriptorType), ctx);
    }
    json->getProperty("count", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->count), ctx);
    }
    json->getProperty("stageFlags", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stageFlags), ctx);
    }
    json->getProperty("immutableSamplers", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->immutableSamplers), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DescriptorSetLayoutBinding_finalize)

static bool js_gfx_DescriptorSetLayoutBinding_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DescriptorSetLayoutBinding);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DescriptorSetLayoutBinding);
        auto cobj = ptr->get<cc::gfx::DescriptorSetLayoutBinding>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DescriptorSetLayoutBinding);
    auto cobj = ptr->get<cc::gfx::DescriptorSetLayoutBinding>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->binding), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->descriptorType), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->count), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->stageFlags), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->immutableSamplers), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_DescriptorSetLayoutBinding_constructor, __jsb_cc_gfx_DescriptorSetLayoutBinding_class, js_cc_gfx_DescriptorSetLayoutBinding_finalize)

static bool js_cc_gfx_DescriptorSetLayoutBinding_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DescriptorSetLayoutBinding_finalize)

bool js_register_gfx_DescriptorSetLayoutBinding(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DescriptorSetLayoutBinding", obj, nullptr, _SE(js_gfx_DescriptorSetLayoutBinding_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("binding", _SE(js_gfx_DescriptorSetLayoutBinding_get_binding), _SE(js_gfx_DescriptorSetLayoutBinding_set_binding));
    cls->defineProperty("descriptorType", _SE(js_gfx_DescriptorSetLayoutBinding_get_descriptorType), _SE(js_gfx_DescriptorSetLayoutBinding_set_descriptorType));
    cls->defineProperty("count", _SE(js_gfx_DescriptorSetLayoutBinding_get_count), _SE(js_gfx_DescriptorSetLayoutBinding_set_count));
    cls->defineProperty("stageFlags", _SE(js_gfx_DescriptorSetLayoutBinding_get_stageFlags), _SE(js_gfx_DescriptorSetLayoutBinding_set_stageFlags));
    cls->defineProperty("immutableSamplers", _SE(js_gfx_DescriptorSetLayoutBinding_get_immutableSamplers), _SE(js_gfx_DescriptorSetLayoutBinding_set_immutableSamplers));
    cls->defineFunction("copy", _SE(js_gfx_DescriptorSetLayoutBinding_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DescriptorSetLayoutBinding_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DescriptorSetLayoutBinding>(cls);

    __jsb_cc_gfx_DescriptorSetLayoutBinding_proto = cls->getProto();
    __jsb_cc_gfx_DescriptorSetLayoutBinding_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DescriptorSetLayoutInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DescriptorSetLayoutInfo_class = nullptr;  // NOLINT

static bool js_gfx_DescriptorSetLayoutInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DescriptorSetLayoutInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DescriptorSetLayoutInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSetLayoutInfo_copy)

static bool js_gfx_DescriptorSetLayoutInfo_get_bindings(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->bindings, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->bindings, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DescriptorSetLayoutInfo_get_bindings)

static bool js_gfx_DescriptorSetLayoutInfo_set_bindings(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayoutInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->bindings, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DescriptorSetLayoutInfo_set_bindings)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::DescriptorSetLayoutInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::DescriptorSetLayoutInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("bindings", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->bindings), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DescriptorSetLayoutInfo_finalize)

static bool js_gfx_DescriptorSetLayoutInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DescriptorSetLayoutInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DescriptorSetLayoutInfo);
    auto cobj = ptr->get<cc::gfx::DescriptorSetLayoutInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->bindings), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_DescriptorSetLayoutInfo_constructor, __jsb_cc_gfx_DescriptorSetLayoutInfo_class, js_cc_gfx_DescriptorSetLayoutInfo_finalize)

static bool js_cc_gfx_DescriptorSetLayoutInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DescriptorSetLayoutInfo_finalize)

bool js_register_gfx_DescriptorSetLayoutInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DescriptorSetLayoutInfo", obj, nullptr, _SE(js_gfx_DescriptorSetLayoutInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("bindings", _SE(js_gfx_DescriptorSetLayoutInfo_get_bindings), _SE(js_gfx_DescriptorSetLayoutInfo_set_bindings));
    cls->defineFunction("copy", _SE(js_gfx_DescriptorSetLayoutInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DescriptorSetLayoutInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DescriptorSetLayoutInfo>(cls);

    __jsb_cc_gfx_DescriptorSetLayoutInfo_proto = cls->getProto();
    __jsb_cc_gfx_DescriptorSetLayoutInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DescriptorSetInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DescriptorSetInfo_class = nullptr;  // NOLINT

static bool js_gfx_DescriptorSetInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DescriptorSetInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DescriptorSetInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSetInfo_copy)

static bool js_gfx_DescriptorSetInfo_get_layout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->layout, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->layout, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DescriptorSetInfo_get_layout)

static bool js_gfx_DescriptorSetInfo_set_layout(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->layout, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DescriptorSetInfo_set_layout)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::DescriptorSetInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::DescriptorSetInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("layout", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->layout), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DescriptorSetInfo_finalize)

static bool js_gfx_DescriptorSetInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DescriptorSetInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DescriptorSetInfo);
    auto cobj = ptr->get<cc::gfx::DescriptorSetInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->layout), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_DescriptorSetInfo_constructor, __jsb_cc_gfx_DescriptorSetInfo_class, js_cc_gfx_DescriptorSetInfo_finalize)

static bool js_cc_gfx_DescriptorSetInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DescriptorSetInfo_finalize)

bool js_register_gfx_DescriptorSetInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DescriptorSetInfo", obj, nullptr, _SE(js_gfx_DescriptorSetInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("layout", _SE(js_gfx_DescriptorSetInfo_get_layout), _SE(js_gfx_DescriptorSetInfo_set_layout));
    cls->defineFunction("copy", _SE(js_gfx_DescriptorSetInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DescriptorSetInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DescriptorSetInfo>(cls);

    __jsb_cc_gfx_DescriptorSetInfo_proto = cls->getProto();
    __jsb_cc_gfx_DescriptorSetInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_PipelineLayoutInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_PipelineLayoutInfo_class = nullptr;  // NOLINT

static bool js_gfx_PipelineLayoutInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineLayoutInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::PipelineLayoutInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::PipelineLayoutInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_PipelineLayoutInfo_copy)

static bool js_gfx_PipelineLayoutInfo_get_setLayouts(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineLayoutInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->setLayouts, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->setLayouts, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineLayoutInfo_get_setLayouts)

static bool js_gfx_PipelineLayoutInfo_set_setLayouts(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineLayoutInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->setLayouts, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineLayoutInfo_set_setLayouts)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::PipelineLayoutInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::PipelineLayoutInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("setLayouts", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->setLayouts), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_PipelineLayoutInfo_finalize)

static bool js_gfx_PipelineLayoutInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::PipelineLayoutInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::PipelineLayoutInfo);
    auto cobj = ptr->get<cc::gfx::PipelineLayoutInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->setLayouts), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_PipelineLayoutInfo_constructor, __jsb_cc_gfx_PipelineLayoutInfo_class, js_cc_gfx_PipelineLayoutInfo_finalize)

static bool js_cc_gfx_PipelineLayoutInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_PipelineLayoutInfo_finalize)

bool js_register_gfx_PipelineLayoutInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("PipelineLayoutInfo", obj, nullptr, _SE(js_gfx_PipelineLayoutInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("setLayouts", _SE(js_gfx_PipelineLayoutInfo_get_setLayouts), _SE(js_gfx_PipelineLayoutInfo_set_setLayouts));
    cls->defineFunction("copy", _SE(js_gfx_PipelineLayoutInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_PipelineLayoutInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::PipelineLayoutInfo>(cls);

    __jsb_cc_gfx_PipelineLayoutInfo_proto = cls->getProto();
    __jsb_cc_gfx_PipelineLayoutInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_InputState_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_InputState_class = nullptr;  // NOLINT

static bool js_gfx_InputState_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::InputState, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::InputState& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_InputState_copy)

static bool js_gfx_InputState_get_attributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->attributes, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->attributes, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_InputState_get_attributes)

static bool js_gfx_InputState_set_attributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->attributes, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_InputState_set_attributes)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::InputState * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::InputState*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("attributes", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->attributes), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_InputState_finalize)

static bool js_gfx_InputState_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::InputState);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::InputState);
    auto cobj = ptr->get<cc::gfx::InputState>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->attributes), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_InputState_constructor, __jsb_cc_gfx_InputState_class, js_cc_gfx_InputState_finalize)

static bool js_cc_gfx_InputState_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_InputState_finalize)

bool js_register_gfx_InputState(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("InputState", obj, nullptr, _SE(js_gfx_InputState_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("attributes", _SE(js_gfx_InputState_get_attributes), _SE(js_gfx_InputState_set_attributes));
    cls->defineFunction("copy", _SE(js_gfx_InputState_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_InputState_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::InputState>(cls);

    __jsb_cc_gfx_InputState_proto = cls->getProto();
    __jsb_cc_gfx_InputState_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_RasterizerState_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_RasterizerState_class = nullptr;  // NOLINT

static bool js_gfx_RasterizerState_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::RasterizerState, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::RasterizerState& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_RasterizerState_copy)

static bool js_gfx_RasterizerState_reset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->reset();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_RasterizerState_reset)

static bool js_gfx_RasterizerState_get_isDiscard(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isDiscard, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isDiscard, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_isDiscard)

static bool js_gfx_RasterizerState_set_isDiscard(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isDiscard, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_isDiscard)

static bool js_gfx_RasterizerState_get_polygonMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->polygonMode, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->polygonMode, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_polygonMode)

static bool js_gfx_RasterizerState_set_polygonMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->polygonMode, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_polygonMode)

static bool js_gfx_RasterizerState_get_shadeModel(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->shadeModel, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->shadeModel, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_shadeModel)

static bool js_gfx_RasterizerState_set_shadeModel(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->shadeModel, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_shadeModel)

static bool js_gfx_RasterizerState_get_cullMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->cullMode, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->cullMode, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_cullMode)

static bool js_gfx_RasterizerState_set_cullMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->cullMode, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_cullMode)

static bool js_gfx_RasterizerState_get_isFrontFaceCCW(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isFrontFaceCCW, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isFrontFaceCCW, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_isFrontFaceCCW)

static bool js_gfx_RasterizerState_set_isFrontFaceCCW(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isFrontFaceCCW, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_isFrontFaceCCW)

static bool js_gfx_RasterizerState_get_depthBiasEnabled(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthBiasEnabled, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthBiasEnabled, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_depthBiasEnabled)

static bool js_gfx_RasterizerState_set_depthBiasEnabled(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthBiasEnabled, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_depthBiasEnabled)

static bool js_gfx_RasterizerState_get_depthBias(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthBias, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthBias, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_depthBias)

static bool js_gfx_RasterizerState_set_depthBias(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthBias, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_depthBias)

static bool js_gfx_RasterizerState_get_depthBiasClamp(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthBiasClamp, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthBiasClamp, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_depthBiasClamp)

static bool js_gfx_RasterizerState_set_depthBiasClamp(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthBiasClamp, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_depthBiasClamp)

static bool js_gfx_RasterizerState_get_depthBiasSlop(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthBiasSlop, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthBiasSlop, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_depthBiasSlop)

static bool js_gfx_RasterizerState_set_depthBiasSlop(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthBiasSlop, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_depthBiasSlop)

static bool js_gfx_RasterizerState_get_isDepthClip(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isDepthClip, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isDepthClip, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_isDepthClip)

static bool js_gfx_RasterizerState_set_isDepthClip(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isDepthClip, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_isDepthClip)

static bool js_gfx_RasterizerState_get_isMultisample(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isMultisample, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isMultisample, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_isMultisample)

static bool js_gfx_RasterizerState_set_isMultisample(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isMultisample, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_isMultisample)

static bool js_gfx_RasterizerState_get_lineWidth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->lineWidth, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->lineWidth, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_RasterizerState_get_lineWidth)

static bool js_gfx_RasterizerState_set_lineWidth(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RasterizerState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->lineWidth, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_RasterizerState_set_lineWidth)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::RasterizerState * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::RasterizerState*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("isDiscard", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isDiscard), ctx);
    }
    json->getProperty("polygonMode", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->polygonMode), ctx);
    }
    json->getProperty("shadeModel", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->shadeModel), ctx);
    }
    json->getProperty("cullMode", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->cullMode), ctx);
    }
    json->getProperty("isFrontFaceCCW", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isFrontFaceCCW), ctx);
    }
    json->getProperty("depthBiasEnabled", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthBiasEnabled), ctx);
    }
    json->getProperty("depthBias", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthBias), ctx);
    }
    json->getProperty("depthBiasClamp", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthBiasClamp), ctx);
    }
    json->getProperty("depthBiasSlop", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthBiasSlop), ctx);
    }
    json->getProperty("isDepthClip", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isDepthClip), ctx);
    }
    json->getProperty("isMultisample", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isMultisample), ctx);
    }
    json->getProperty("lineWidth", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->lineWidth), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_RasterizerState_finalize)

static bool js_gfx_RasterizerState_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::RasterizerState);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::RasterizerState);
        auto cobj = ptr->get<cc::gfx::RasterizerState>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::RasterizerState);
    auto cobj = ptr->get<cc::gfx::RasterizerState>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->isDiscard), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->polygonMode), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->shadeModel), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->cullMode), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->isFrontFaceCCW), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->depthBiasEnabled), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->depthBias), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->depthBiasClamp), nullptr);
    }
    if (argc > 8 && !args[8].isUndefined()) {
        ok &= sevalue_to_native(args[8], &(cobj->depthBiasSlop), nullptr);
    }
    if (argc > 9 && !args[9].isUndefined()) {
        ok &= sevalue_to_native(args[9], &(cobj->isDepthClip), nullptr);
    }
    if (argc > 10 && !args[10].isUndefined()) {
        ok &= sevalue_to_native(args[10], &(cobj->isMultisample), nullptr);
    }
    if (argc > 11 && !args[11].isUndefined()) {
        ok &= sevalue_to_native(args[11], &(cobj->lineWidth), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_RasterizerState_constructor, __jsb_cc_gfx_RasterizerState_class, js_cc_gfx_RasterizerState_finalize)

static bool js_cc_gfx_RasterizerState_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_RasterizerState_finalize)

bool js_register_gfx_RasterizerState(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RasterizerState", obj, nullptr, _SE(js_gfx_RasterizerState_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("isDiscard", _SE(js_gfx_RasterizerState_get_isDiscard), _SE(js_gfx_RasterizerState_set_isDiscard));
    cls->defineProperty("polygonMode", _SE(js_gfx_RasterizerState_get_polygonMode), _SE(js_gfx_RasterizerState_set_polygonMode));
    cls->defineProperty("shadeModel", _SE(js_gfx_RasterizerState_get_shadeModel), _SE(js_gfx_RasterizerState_set_shadeModel));
    cls->defineProperty("cullMode", _SE(js_gfx_RasterizerState_get_cullMode), _SE(js_gfx_RasterizerState_set_cullMode));
    cls->defineProperty("isFrontFaceCCW", _SE(js_gfx_RasterizerState_get_isFrontFaceCCW), _SE(js_gfx_RasterizerState_set_isFrontFaceCCW));
    cls->defineProperty("depthBiasEnabled", _SE(js_gfx_RasterizerState_get_depthBiasEnabled), _SE(js_gfx_RasterizerState_set_depthBiasEnabled));
    cls->defineProperty("depthBias", _SE(js_gfx_RasterizerState_get_depthBias), _SE(js_gfx_RasterizerState_set_depthBias));
    cls->defineProperty("depthBiasClamp", _SE(js_gfx_RasterizerState_get_depthBiasClamp), _SE(js_gfx_RasterizerState_set_depthBiasClamp));
    cls->defineProperty("depthBiasSlop", _SE(js_gfx_RasterizerState_get_depthBiasSlop), _SE(js_gfx_RasterizerState_set_depthBiasSlop));
    cls->defineProperty("isDepthClip", _SE(js_gfx_RasterizerState_get_isDepthClip), _SE(js_gfx_RasterizerState_set_isDepthClip));
    cls->defineProperty("isMultisample", _SE(js_gfx_RasterizerState_get_isMultisample), _SE(js_gfx_RasterizerState_set_isMultisample));
    cls->defineProperty("lineWidth", _SE(js_gfx_RasterizerState_get_lineWidth), _SE(js_gfx_RasterizerState_set_lineWidth));
    cls->defineFunction("copy", _SE(js_gfx_RasterizerState_copy));
    cls->defineFunction("reset", _SE(js_gfx_RasterizerState_reset));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_RasterizerState_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::RasterizerState>(cls);

    __jsb_cc_gfx_RasterizerState_proto = cls->getProto();
    __jsb_cc_gfx_RasterizerState_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DepthStencilState_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DepthStencilState_class = nullptr;  // NOLINT

static bool js_gfx_DepthStencilState_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DepthStencilState, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DepthStencilState& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DepthStencilState_copy)

static bool js_gfx_DepthStencilState_reset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->reset();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_DepthStencilState_reset)

static bool js_gfx_DepthStencilState_get_depthTest(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthTest, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthTest, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_depthTest)

static bool js_gfx_DepthStencilState_set_depthTest(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthTest, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_depthTest)

static bool js_gfx_DepthStencilState_get_depthWrite(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthWrite, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthWrite, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_depthWrite)

static bool js_gfx_DepthStencilState_set_depthWrite(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthWrite, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_depthWrite)

static bool js_gfx_DepthStencilState_get_depthFunc(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthFunc, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthFunc, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_depthFunc)

static bool js_gfx_DepthStencilState_set_depthFunc(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthFunc, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_depthFunc)

static bool js_gfx_DepthStencilState_get_stencilTestFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilTestFront, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilTestFront, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilTestFront)

static bool js_gfx_DepthStencilState_set_stencilTestFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilTestFront, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilTestFront)

static bool js_gfx_DepthStencilState_get_stencilFuncFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilFuncFront, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilFuncFront, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilFuncFront)

static bool js_gfx_DepthStencilState_set_stencilFuncFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilFuncFront, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilFuncFront)

static bool js_gfx_DepthStencilState_get_stencilReadMaskFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilReadMaskFront, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilReadMaskFront, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilReadMaskFront)

static bool js_gfx_DepthStencilState_set_stencilReadMaskFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilReadMaskFront, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilReadMaskFront)

static bool js_gfx_DepthStencilState_get_stencilWriteMaskFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilWriteMaskFront, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilWriteMaskFront, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilWriteMaskFront)

static bool js_gfx_DepthStencilState_set_stencilWriteMaskFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilWriteMaskFront, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilWriteMaskFront)

static bool js_gfx_DepthStencilState_get_stencilFailOpFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilFailOpFront, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilFailOpFront, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilFailOpFront)

static bool js_gfx_DepthStencilState_set_stencilFailOpFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilFailOpFront, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilFailOpFront)

static bool js_gfx_DepthStencilState_get_stencilZFailOpFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilZFailOpFront, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilZFailOpFront, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilZFailOpFront)

static bool js_gfx_DepthStencilState_set_stencilZFailOpFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilZFailOpFront, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilZFailOpFront)

static bool js_gfx_DepthStencilState_get_stencilPassOpFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilPassOpFront, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilPassOpFront, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilPassOpFront)

static bool js_gfx_DepthStencilState_set_stencilPassOpFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilPassOpFront, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilPassOpFront)

static bool js_gfx_DepthStencilState_get_stencilRefFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilRefFront, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilRefFront, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilRefFront)

static bool js_gfx_DepthStencilState_set_stencilRefFront(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilRefFront, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilRefFront)

static bool js_gfx_DepthStencilState_get_stencilTestBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilTestBack, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilTestBack, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilTestBack)

static bool js_gfx_DepthStencilState_set_stencilTestBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilTestBack, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilTestBack)

static bool js_gfx_DepthStencilState_get_stencilFuncBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilFuncBack, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilFuncBack, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilFuncBack)

static bool js_gfx_DepthStencilState_set_stencilFuncBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilFuncBack, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilFuncBack)

static bool js_gfx_DepthStencilState_get_stencilReadMaskBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilReadMaskBack, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilReadMaskBack, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilReadMaskBack)

static bool js_gfx_DepthStencilState_set_stencilReadMaskBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilReadMaskBack, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilReadMaskBack)

static bool js_gfx_DepthStencilState_get_stencilWriteMaskBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilWriteMaskBack, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilWriteMaskBack, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilWriteMaskBack)

static bool js_gfx_DepthStencilState_set_stencilWriteMaskBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilWriteMaskBack, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilWriteMaskBack)

static bool js_gfx_DepthStencilState_get_stencilFailOpBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilFailOpBack, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilFailOpBack, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilFailOpBack)

static bool js_gfx_DepthStencilState_set_stencilFailOpBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilFailOpBack, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilFailOpBack)

static bool js_gfx_DepthStencilState_get_stencilZFailOpBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilZFailOpBack, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilZFailOpBack, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilZFailOpBack)

static bool js_gfx_DepthStencilState_set_stencilZFailOpBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilZFailOpBack, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilZFailOpBack)

static bool js_gfx_DepthStencilState_get_stencilPassOpBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilPassOpBack, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilPassOpBack, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilPassOpBack)

static bool js_gfx_DepthStencilState_set_stencilPassOpBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilPassOpBack, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilPassOpBack)

static bool js_gfx_DepthStencilState_get_stencilRefBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stencilRefBack, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stencilRefBack, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_DepthStencilState_get_stencilRefBack)

static bool js_gfx_DepthStencilState_set_stencilRefBack(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DepthStencilState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stencilRefBack, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_DepthStencilState_set_stencilRefBack)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::DepthStencilState * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::DepthStencilState*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("depthTest", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthTest), ctx);
    }
    json->getProperty("depthWrite", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthWrite), ctx);
    }
    json->getProperty("depthFunc", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthFunc), ctx);
    }
    json->getProperty("stencilTestFront", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilTestFront), ctx);
    }
    json->getProperty("stencilFuncFront", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilFuncFront), ctx);
    }
    json->getProperty("stencilReadMaskFront", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilReadMaskFront), ctx);
    }
    json->getProperty("stencilWriteMaskFront", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilWriteMaskFront), ctx);
    }
    json->getProperty("stencilFailOpFront", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilFailOpFront), ctx);
    }
    json->getProperty("stencilZFailOpFront", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilZFailOpFront), ctx);
    }
    json->getProperty("stencilPassOpFront", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilPassOpFront), ctx);
    }
    json->getProperty("stencilRefFront", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilRefFront), ctx);
    }
    json->getProperty("stencilTestBack", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilTestBack), ctx);
    }
    json->getProperty("stencilFuncBack", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilFuncBack), ctx);
    }
    json->getProperty("stencilReadMaskBack", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilReadMaskBack), ctx);
    }
    json->getProperty("stencilWriteMaskBack", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilWriteMaskBack), ctx);
    }
    json->getProperty("stencilFailOpBack", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilFailOpBack), ctx);
    }
    json->getProperty("stencilZFailOpBack", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilZFailOpBack), ctx);
    }
    json->getProperty("stencilPassOpBack", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilPassOpBack), ctx);
    }
    json->getProperty("stencilRefBack", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stencilRefBack), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DepthStencilState_finalize)

static bool js_gfx_DepthStencilState_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DepthStencilState);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DepthStencilState);
        auto cobj = ptr->get<cc::gfx::DepthStencilState>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::DepthStencilState);
    auto cobj = ptr->get<cc::gfx::DepthStencilState>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->depthTest), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->depthWrite), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->depthFunc), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->stencilTestFront), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->stencilFuncFront), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->stencilReadMaskFront), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->stencilWriteMaskFront), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->stencilFailOpFront), nullptr);
    }
    if (argc > 8 && !args[8].isUndefined()) {
        ok &= sevalue_to_native(args[8], &(cobj->stencilZFailOpFront), nullptr);
    }
    if (argc > 9 && !args[9].isUndefined()) {
        ok &= sevalue_to_native(args[9], &(cobj->stencilPassOpFront), nullptr);
    }
    if (argc > 10 && !args[10].isUndefined()) {
        ok &= sevalue_to_native(args[10], &(cobj->stencilRefFront), nullptr);
    }
    if (argc > 11 && !args[11].isUndefined()) {
        ok &= sevalue_to_native(args[11], &(cobj->stencilTestBack), nullptr);
    }
    if (argc > 12 && !args[12].isUndefined()) {
        ok &= sevalue_to_native(args[12], &(cobj->stencilFuncBack), nullptr);
    }
    if (argc > 13 && !args[13].isUndefined()) {
        ok &= sevalue_to_native(args[13], &(cobj->stencilReadMaskBack), nullptr);
    }
    if (argc > 14 && !args[14].isUndefined()) {
        ok &= sevalue_to_native(args[14], &(cobj->stencilWriteMaskBack), nullptr);
    }
    if (argc > 15 && !args[15].isUndefined()) {
        ok &= sevalue_to_native(args[15], &(cobj->stencilFailOpBack), nullptr);
    }
    if (argc > 16 && !args[16].isUndefined()) {
        ok &= sevalue_to_native(args[16], &(cobj->stencilZFailOpBack), nullptr);
    }
    if (argc > 17 && !args[17].isUndefined()) {
        ok &= sevalue_to_native(args[17], &(cobj->stencilPassOpBack), nullptr);
    }
    if (argc > 18 && !args[18].isUndefined()) {
        ok &= sevalue_to_native(args[18], &(cobj->stencilRefBack), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_DepthStencilState_constructor, __jsb_cc_gfx_DepthStencilState_class, js_cc_gfx_DepthStencilState_finalize)

static bool js_cc_gfx_DepthStencilState_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DepthStencilState_finalize)

bool js_register_gfx_DepthStencilState(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DepthStencilState", obj, nullptr, _SE(js_gfx_DepthStencilState_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("depthTest", _SE(js_gfx_DepthStencilState_get_depthTest), _SE(js_gfx_DepthStencilState_set_depthTest));
    cls->defineProperty("depthWrite", _SE(js_gfx_DepthStencilState_get_depthWrite), _SE(js_gfx_DepthStencilState_set_depthWrite));
    cls->defineProperty("depthFunc", _SE(js_gfx_DepthStencilState_get_depthFunc), _SE(js_gfx_DepthStencilState_set_depthFunc));
    cls->defineProperty("stencilTestFront", _SE(js_gfx_DepthStencilState_get_stencilTestFront), _SE(js_gfx_DepthStencilState_set_stencilTestFront));
    cls->defineProperty("stencilFuncFront", _SE(js_gfx_DepthStencilState_get_stencilFuncFront), _SE(js_gfx_DepthStencilState_set_stencilFuncFront));
    cls->defineProperty("stencilReadMaskFront", _SE(js_gfx_DepthStencilState_get_stencilReadMaskFront), _SE(js_gfx_DepthStencilState_set_stencilReadMaskFront));
    cls->defineProperty("stencilWriteMaskFront", _SE(js_gfx_DepthStencilState_get_stencilWriteMaskFront), _SE(js_gfx_DepthStencilState_set_stencilWriteMaskFront));
    cls->defineProperty("stencilFailOpFront", _SE(js_gfx_DepthStencilState_get_stencilFailOpFront), _SE(js_gfx_DepthStencilState_set_stencilFailOpFront));
    cls->defineProperty("stencilZFailOpFront", _SE(js_gfx_DepthStencilState_get_stencilZFailOpFront), _SE(js_gfx_DepthStencilState_set_stencilZFailOpFront));
    cls->defineProperty("stencilPassOpFront", _SE(js_gfx_DepthStencilState_get_stencilPassOpFront), _SE(js_gfx_DepthStencilState_set_stencilPassOpFront));
    cls->defineProperty("stencilRefFront", _SE(js_gfx_DepthStencilState_get_stencilRefFront), _SE(js_gfx_DepthStencilState_set_stencilRefFront));
    cls->defineProperty("stencilTestBack", _SE(js_gfx_DepthStencilState_get_stencilTestBack), _SE(js_gfx_DepthStencilState_set_stencilTestBack));
    cls->defineProperty("stencilFuncBack", _SE(js_gfx_DepthStencilState_get_stencilFuncBack), _SE(js_gfx_DepthStencilState_set_stencilFuncBack));
    cls->defineProperty("stencilReadMaskBack", _SE(js_gfx_DepthStencilState_get_stencilReadMaskBack), _SE(js_gfx_DepthStencilState_set_stencilReadMaskBack));
    cls->defineProperty("stencilWriteMaskBack", _SE(js_gfx_DepthStencilState_get_stencilWriteMaskBack), _SE(js_gfx_DepthStencilState_set_stencilWriteMaskBack));
    cls->defineProperty("stencilFailOpBack", _SE(js_gfx_DepthStencilState_get_stencilFailOpBack), _SE(js_gfx_DepthStencilState_set_stencilFailOpBack));
    cls->defineProperty("stencilZFailOpBack", _SE(js_gfx_DepthStencilState_get_stencilZFailOpBack), _SE(js_gfx_DepthStencilState_set_stencilZFailOpBack));
    cls->defineProperty("stencilPassOpBack", _SE(js_gfx_DepthStencilState_get_stencilPassOpBack), _SE(js_gfx_DepthStencilState_set_stencilPassOpBack));
    cls->defineProperty("stencilRefBack", _SE(js_gfx_DepthStencilState_get_stencilRefBack), _SE(js_gfx_DepthStencilState_set_stencilRefBack));
    cls->defineFunction("copy", _SE(js_gfx_DepthStencilState_copy));
    cls->defineFunction("reset", _SE(js_gfx_DepthStencilState_reset));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DepthStencilState_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DepthStencilState>(cls);

    __jsb_cc_gfx_DepthStencilState_proto = cls->getProto();
    __jsb_cc_gfx_DepthStencilState_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_BlendTarget_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_BlendTarget_class = nullptr;  // NOLINT

static bool js_gfx_BlendTarget_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BlendTarget, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::BlendTarget& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_BlendTarget_copy)

static bool js_gfx_BlendTarget_reset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->reset();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_BlendTarget_reset)

static bool js_gfx_BlendTarget_get_blend(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blend, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blend, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendTarget_get_blend)

static bool js_gfx_BlendTarget_set_blend(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blend, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendTarget_set_blend)

static bool js_gfx_BlendTarget_get_blendSrc(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blendSrc, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blendSrc, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendTarget_get_blendSrc)

static bool js_gfx_BlendTarget_set_blendSrc(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blendSrc, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendTarget_set_blendSrc)

static bool js_gfx_BlendTarget_get_blendDst(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blendDst, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blendDst, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendTarget_get_blendDst)

static bool js_gfx_BlendTarget_set_blendDst(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blendDst, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendTarget_set_blendDst)

static bool js_gfx_BlendTarget_get_blendEq(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blendEq, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blendEq, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendTarget_get_blendEq)

static bool js_gfx_BlendTarget_set_blendEq(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blendEq, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendTarget_set_blendEq)

static bool js_gfx_BlendTarget_get_blendSrcAlpha(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blendSrcAlpha, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blendSrcAlpha, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendTarget_get_blendSrcAlpha)

static bool js_gfx_BlendTarget_set_blendSrcAlpha(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blendSrcAlpha, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendTarget_set_blendSrcAlpha)

static bool js_gfx_BlendTarget_get_blendDstAlpha(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blendDstAlpha, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blendDstAlpha, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendTarget_get_blendDstAlpha)

static bool js_gfx_BlendTarget_set_blendDstAlpha(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blendDstAlpha, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendTarget_set_blendDstAlpha)

static bool js_gfx_BlendTarget_get_blendAlphaEq(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blendAlphaEq, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blendAlphaEq, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendTarget_get_blendAlphaEq)

static bool js_gfx_BlendTarget_set_blendAlphaEq(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blendAlphaEq, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendTarget_set_blendAlphaEq)

static bool js_gfx_BlendTarget_get_blendColorMask(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blendColorMask, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blendColorMask, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendTarget_get_blendColorMask)

static bool js_gfx_BlendTarget_set_blendColorMask(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendTarget>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blendColorMask, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendTarget_set_blendColorMask)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::BlendTarget * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::BlendTarget*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("blend", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blend), ctx);
    }
    json->getProperty("blendSrc", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blendSrc), ctx);
    }
    json->getProperty("blendDst", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blendDst), ctx);
    }
    json->getProperty("blendEq", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blendEq), ctx);
    }
    json->getProperty("blendSrcAlpha", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blendSrcAlpha), ctx);
    }
    json->getProperty("blendDstAlpha", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blendDstAlpha), ctx);
    }
    json->getProperty("blendAlphaEq", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blendAlphaEq), ctx);
    }
    json->getProperty("blendColorMask", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blendColorMask), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_BlendTarget_finalize)

static bool js_gfx_BlendTarget_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BlendTarget);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BlendTarget);
        auto cobj = ptr->get<cc::gfx::BlendTarget>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BlendTarget);
    auto cobj = ptr->get<cc::gfx::BlendTarget>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->blend), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->blendSrc), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->blendDst), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->blendEq), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->blendSrcAlpha), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->blendDstAlpha), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->blendAlphaEq), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->blendColorMask), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_BlendTarget_constructor, __jsb_cc_gfx_BlendTarget_class, js_cc_gfx_BlendTarget_finalize)

static bool js_cc_gfx_BlendTarget_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_BlendTarget_finalize)

bool js_register_gfx_BlendTarget(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BlendTarget", obj, nullptr, _SE(js_gfx_BlendTarget_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("blend", _SE(js_gfx_BlendTarget_get_blend), _SE(js_gfx_BlendTarget_set_blend));
    cls->defineProperty("blendSrc", _SE(js_gfx_BlendTarget_get_blendSrc), _SE(js_gfx_BlendTarget_set_blendSrc));
    cls->defineProperty("blendDst", _SE(js_gfx_BlendTarget_get_blendDst), _SE(js_gfx_BlendTarget_set_blendDst));
    cls->defineProperty("blendEq", _SE(js_gfx_BlendTarget_get_blendEq), _SE(js_gfx_BlendTarget_set_blendEq));
    cls->defineProperty("blendSrcAlpha", _SE(js_gfx_BlendTarget_get_blendSrcAlpha), _SE(js_gfx_BlendTarget_set_blendSrcAlpha));
    cls->defineProperty("blendDstAlpha", _SE(js_gfx_BlendTarget_get_blendDstAlpha), _SE(js_gfx_BlendTarget_set_blendDstAlpha));
    cls->defineProperty("blendAlphaEq", _SE(js_gfx_BlendTarget_get_blendAlphaEq), _SE(js_gfx_BlendTarget_set_blendAlphaEq));
    cls->defineProperty("blendColorMask", _SE(js_gfx_BlendTarget_get_blendColorMask), _SE(js_gfx_BlendTarget_set_blendColorMask));
    cls->defineFunction("copy", _SE(js_gfx_BlendTarget_copy));
    cls->defineFunction("reset", _SE(js_gfx_BlendTarget_reset));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_BlendTarget_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::BlendTarget>(cls);

    __jsb_cc_gfx_BlendTarget_proto = cls->getProto();
    __jsb_cc_gfx_BlendTarget_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_BlendState_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_BlendState_class = nullptr;  // NOLINT

static bool js_gfx_BlendState_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BlendState, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::BlendState& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_BlendState_copy)

static bool js_gfx_BlendState_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_BlendState_destroy)

static bool js_gfx_BlendState_reset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->reset();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_BlendState_reset)

static bool js_gfx_BlendState_setTarget(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<int, false> arg0 = {};
        HolderType<cc::gfx::BlendTarget, true> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setTarget(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_gfx_BlendState_setTarget)

static bool js_gfx_BlendState_get_isA2C(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isA2C, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isA2C, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendState_get_isA2C)

static bool js_gfx_BlendState_set_isA2C(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isA2C, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendState_set_isA2C)

static bool js_gfx_BlendState_get_isIndepend(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isIndepend, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isIndepend, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendState_get_isIndepend)

static bool js_gfx_BlendState_set_isIndepend(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isIndepend, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendState_set_isIndepend)

static bool js_gfx_BlendState_get_blendColor(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blendColor, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blendColor, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendState_get_blendColor)

static bool js_gfx_BlendState_set_blendColor(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blendColor, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendState_set_blendColor)

static bool js_gfx_BlendState_get_targets(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->targets, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->targets, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_BlendState_get_targets)

static bool js_gfx_BlendState_set_targets(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BlendState>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->targets, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_BlendState_set_targets)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::BlendState * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::BlendState*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("isA2C", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isA2C), ctx);
    }
    json->getProperty("isIndepend", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isIndepend), ctx);
    }
    json->getProperty("blendColor", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blendColor), ctx);
    }
    json->getProperty("targets", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->targets), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_BlendState_finalize)

static bool js_gfx_BlendState_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BlendState);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BlendState);
        auto cobj = ptr->get<cc::gfx::BlendState>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::BlendState);
    auto cobj = ptr->get<cc::gfx::BlendState>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->isA2C), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->isIndepend), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->blendColor), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->targets), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_BlendState_constructor, __jsb_cc_gfx_BlendState_class, js_cc_gfx_BlendState_finalize)

static bool js_cc_gfx_BlendState_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_BlendState_finalize)

bool js_register_gfx_BlendState(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BlendState", obj, nullptr, _SE(js_gfx_BlendState_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("isA2C", _SE(js_gfx_BlendState_get_isA2C), _SE(js_gfx_BlendState_set_isA2C));
    cls->defineProperty("isIndepend", _SE(js_gfx_BlendState_get_isIndepend), _SE(js_gfx_BlendState_set_isIndepend));
    cls->defineProperty("blendColor", _SE(js_gfx_BlendState_get_blendColor), _SE(js_gfx_BlendState_set_blendColor));
    cls->defineProperty("targets", _SE(js_gfx_BlendState_get_targets), _SE(js_gfx_BlendState_set_targets));
    cls->defineFunction("copy", _SE(js_gfx_BlendState_copy));
    cls->defineFunction("destroy", _SE(js_gfx_BlendState_destroy));
    cls->defineFunction("reset", _SE(js_gfx_BlendState_reset));
    cls->defineFunction("setTarget", _SE(js_gfx_BlendState_setTarget));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_BlendState_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::BlendState>(cls);

    __jsb_cc_gfx_BlendState_proto = cls->getProto();
    __jsb_cc_gfx_BlendState_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_PipelineStateInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_PipelineStateInfo_class = nullptr;  // NOLINT

static bool js_gfx_PipelineStateInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::PipelineStateInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::PipelineStateInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_PipelineStateInfo_copy)

static bool js_gfx_PipelineStateInfo_get_shader(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->shader, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->shader, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_shader)

static bool js_gfx_PipelineStateInfo_set_shader(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->shader, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_shader)

static bool js_gfx_PipelineStateInfo_get_pipelineLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->pipelineLayout, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->pipelineLayout, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_pipelineLayout)

static bool js_gfx_PipelineStateInfo_set_pipelineLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->pipelineLayout, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_pipelineLayout)

static bool js_gfx_PipelineStateInfo_get_renderPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->renderPass, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->renderPass, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_renderPass)

static bool js_gfx_PipelineStateInfo_set_renderPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->renderPass, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_renderPass)

static bool js_gfx_PipelineStateInfo_get_inputState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->inputState, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->inputState, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_inputState)

static bool js_gfx_PipelineStateInfo_set_inputState(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->inputState, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_inputState)

static bool js_gfx_PipelineStateInfo_get_rasterizerState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->rasterizerState, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->rasterizerState, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_rasterizerState)

static bool js_gfx_PipelineStateInfo_set_rasterizerState(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->rasterizerState, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_rasterizerState)

static bool js_gfx_PipelineStateInfo_get_depthStencilState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depthStencilState, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depthStencilState, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_depthStencilState)

static bool js_gfx_PipelineStateInfo_set_depthStencilState(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depthStencilState, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_depthStencilState)

static bool js_gfx_PipelineStateInfo_get_blendState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->blendState, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->blendState, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_blendState)

static bool js_gfx_PipelineStateInfo_set_blendState(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->blendState, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_blendState)

static bool js_gfx_PipelineStateInfo_get_primitive(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->primitive, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->primitive, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_primitive)

static bool js_gfx_PipelineStateInfo_set_primitive(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->primitive, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_primitive)

static bool js_gfx_PipelineStateInfo_get_dynamicStates(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->dynamicStates, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->dynamicStates, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_dynamicStates)

static bool js_gfx_PipelineStateInfo_set_dynamicStates(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->dynamicStates, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_dynamicStates)

static bool js_gfx_PipelineStateInfo_get_bindPoint(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->bindPoint, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->bindPoint, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_bindPoint)

static bool js_gfx_PipelineStateInfo_set_bindPoint(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->bindPoint, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_bindPoint)

static bool js_gfx_PipelineStateInfo_get_subpass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->subpass, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->subpass, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_PipelineStateInfo_get_subpass)

static bool js_gfx_PipelineStateInfo_set_subpass(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineStateInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->subpass, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_PipelineStateInfo_set_subpass)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::PipelineStateInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::PipelineStateInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("shader", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->shader), ctx);
    }
    json->getProperty("pipelineLayout", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->pipelineLayout), ctx);
    }
    json->getProperty("renderPass", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->renderPass), ctx);
    }
    json->getProperty("inputState", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->inputState), ctx);
    }
    json->getProperty("rasterizerState", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->rasterizerState), ctx);
    }
    json->getProperty("depthStencilState", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depthStencilState), ctx);
    }
    json->getProperty("blendState", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->blendState), ctx);
    }
    json->getProperty("primitive", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->primitive), ctx);
    }
    json->getProperty("dynamicStates", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->dynamicStates), ctx);
    }
    json->getProperty("bindPoint", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->bindPoint), ctx);
    }
    json->getProperty("subpass", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->subpass), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_PipelineStateInfo_finalize)

static bool js_gfx_PipelineStateInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::PipelineStateInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::PipelineStateInfo);
        auto cobj = ptr->get<cc::gfx::PipelineStateInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::PipelineStateInfo);
    auto cobj = ptr->get<cc::gfx::PipelineStateInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->shader), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->pipelineLayout), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->renderPass), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->inputState), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->rasterizerState), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->depthStencilState), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->blendState), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->primitive), nullptr);
    }
    if (argc > 8 && !args[8].isUndefined()) {
        ok &= sevalue_to_native(args[8], &(cobj->dynamicStates), nullptr);
    }
    if (argc > 9 && !args[9].isUndefined()) {
        ok &= sevalue_to_native(args[9], &(cobj->bindPoint), nullptr);
    }
    if (argc > 10 && !args[10].isUndefined()) {
        ok &= sevalue_to_native(args[10], &(cobj->subpass), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_PipelineStateInfo_constructor, __jsb_cc_gfx_PipelineStateInfo_class, js_cc_gfx_PipelineStateInfo_finalize)

static bool js_cc_gfx_PipelineStateInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_PipelineStateInfo_finalize)

bool js_register_gfx_PipelineStateInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("PipelineStateInfo", obj, nullptr, _SE(js_gfx_PipelineStateInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("shader", _SE(js_gfx_PipelineStateInfo_get_shader), _SE(js_gfx_PipelineStateInfo_set_shader));
    cls->defineProperty("pipelineLayout", _SE(js_gfx_PipelineStateInfo_get_pipelineLayout), _SE(js_gfx_PipelineStateInfo_set_pipelineLayout));
    cls->defineProperty("renderPass", _SE(js_gfx_PipelineStateInfo_get_renderPass), _SE(js_gfx_PipelineStateInfo_set_renderPass));
    cls->defineProperty("inputState", _SE(js_gfx_PipelineStateInfo_get_inputState), _SE(js_gfx_PipelineStateInfo_set_inputState));
    cls->defineProperty("rasterizerState", _SE(js_gfx_PipelineStateInfo_get_rasterizerState), _SE(js_gfx_PipelineStateInfo_set_rasterizerState));
    cls->defineProperty("depthStencilState", _SE(js_gfx_PipelineStateInfo_get_depthStencilState), _SE(js_gfx_PipelineStateInfo_set_depthStencilState));
    cls->defineProperty("blendState", _SE(js_gfx_PipelineStateInfo_get_blendState), _SE(js_gfx_PipelineStateInfo_set_blendState));
    cls->defineProperty("primitive", _SE(js_gfx_PipelineStateInfo_get_primitive), _SE(js_gfx_PipelineStateInfo_set_primitive));
    cls->defineProperty("dynamicStates", _SE(js_gfx_PipelineStateInfo_get_dynamicStates), _SE(js_gfx_PipelineStateInfo_set_dynamicStates));
    cls->defineProperty("bindPoint", _SE(js_gfx_PipelineStateInfo_get_bindPoint), _SE(js_gfx_PipelineStateInfo_set_bindPoint));
    cls->defineProperty("subpass", _SE(js_gfx_PipelineStateInfo_get_subpass), _SE(js_gfx_PipelineStateInfo_set_subpass));
    cls->defineFunction("copy", _SE(js_gfx_PipelineStateInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_PipelineStateInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::PipelineStateInfo>(cls);

    __jsb_cc_gfx_PipelineStateInfo_proto = cls->getProto();
    __jsb_cc_gfx_PipelineStateInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_CommandBufferInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_CommandBufferInfo_class = nullptr;  // NOLINT

static bool js_gfx_CommandBufferInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::CommandBufferInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::CommandBufferInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBufferInfo_copy)

static bool js_gfx_CommandBufferInfo_get_queue(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->queue, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->queue, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_CommandBufferInfo_get_queue)

static bool js_gfx_CommandBufferInfo_set_queue(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->queue, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_CommandBufferInfo_set_queue)

static bool js_gfx_CommandBufferInfo_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBufferInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_CommandBufferInfo_get_type)

static bool js_gfx_CommandBufferInfo_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBufferInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_CommandBufferInfo_set_type)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::CommandBufferInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::CommandBufferInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("queue", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->queue), ctx);
    }
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_CommandBufferInfo_finalize)

static bool js_gfx_CommandBufferInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::CommandBufferInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::CommandBufferInfo);
        auto cobj = ptr->get<cc::gfx::CommandBufferInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::CommandBufferInfo);
    auto cobj = ptr->get<cc::gfx::CommandBufferInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->queue), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->type), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_CommandBufferInfo_constructor, __jsb_cc_gfx_CommandBufferInfo_class, js_cc_gfx_CommandBufferInfo_finalize)

static bool js_cc_gfx_CommandBufferInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_CommandBufferInfo_finalize)

bool js_register_gfx_CommandBufferInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("CommandBufferInfo", obj, nullptr, _SE(js_gfx_CommandBufferInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("queue", _SE(js_gfx_CommandBufferInfo_get_queue), _SE(js_gfx_CommandBufferInfo_set_queue));
    cls->defineProperty("type", _SE(js_gfx_CommandBufferInfo_get_type), _SE(js_gfx_CommandBufferInfo_set_type));
    cls->defineFunction("copy", _SE(js_gfx_CommandBufferInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_CommandBufferInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::CommandBufferInfo>(cls);

    __jsb_cc_gfx_CommandBufferInfo_proto = cls->getProto();
    __jsb_cc_gfx_CommandBufferInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_QueueInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_QueueInfo_class = nullptr;  // NOLINT

static bool js_gfx_QueueInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueueInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::QueueInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::QueueInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_QueueInfo_copy)

static bool js_gfx_QueueInfo_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueueInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_QueueInfo_get_type)

static bool js_gfx_QueueInfo_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueueInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_QueueInfo_set_type)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::QueueInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::QueueInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_QueueInfo_finalize)

static bool js_gfx_QueueInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::QueueInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::QueueInfo);
    auto cobj = ptr->get<cc::gfx::QueueInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->type), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_QueueInfo_constructor, __jsb_cc_gfx_QueueInfo_class, js_cc_gfx_QueueInfo_finalize)

static bool js_cc_gfx_QueueInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_QueueInfo_finalize)

bool js_register_gfx_QueueInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("QueueInfo", obj, nullptr, _SE(js_gfx_QueueInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("type", _SE(js_gfx_QueueInfo_get_type), _SE(js_gfx_QueueInfo_set_type));
    cls->defineFunction("copy", _SE(js_gfx_QueueInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_QueueInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::QueueInfo>(cls);

    __jsb_cc_gfx_QueueInfo_proto = cls->getProto();
    __jsb_cc_gfx_QueueInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_QueryPoolInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_QueryPoolInfo_class = nullptr;  // NOLINT

static bool js_gfx_QueryPoolInfo_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPoolInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::QueryPoolInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::QueryPoolInfo& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_QueryPoolInfo_copy)

static bool js_gfx_QueryPoolInfo_get_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPoolInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->type, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->type, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_QueryPoolInfo_get_type)

static bool js_gfx_QueryPoolInfo_set_type(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPoolInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->type, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_QueryPoolInfo_set_type)

static bool js_gfx_QueryPoolInfo_get_maxQueryObjects(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPoolInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->maxQueryObjects, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->maxQueryObjects, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_QueryPoolInfo_get_maxQueryObjects)

static bool js_gfx_QueryPoolInfo_set_maxQueryObjects(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPoolInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->maxQueryObjects, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_QueryPoolInfo_set_maxQueryObjects)

static bool js_gfx_QueryPoolInfo_get_forceWait(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPoolInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->forceWait, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->forceWait, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_QueryPoolInfo_get_forceWait)

static bool js_gfx_QueryPoolInfo_set_forceWait(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPoolInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->forceWait, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_QueryPoolInfo_set_forceWait)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::QueryPoolInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::QueryPoolInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("type", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->type), ctx);
    }
    json->getProperty("maxQueryObjects", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->maxQueryObjects), ctx);
    }
    json->getProperty("forceWait", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->forceWait), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_QueryPoolInfo_finalize)

static bool js_gfx_QueryPoolInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::QueryPoolInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::QueryPoolInfo);
        auto cobj = ptr->get<cc::gfx::QueryPoolInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::QueryPoolInfo);
    auto cobj = ptr->get<cc::gfx::QueryPoolInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->type), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->maxQueryObjects), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->forceWait), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_QueryPoolInfo_constructor, __jsb_cc_gfx_QueryPoolInfo_class, js_cc_gfx_QueryPoolInfo_finalize)

static bool js_cc_gfx_QueryPoolInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_QueryPoolInfo_finalize)

bool js_register_gfx_QueryPoolInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("QueryPoolInfo", obj, nullptr, _SE(js_gfx_QueryPoolInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("type", _SE(js_gfx_QueryPoolInfo_get_type), _SE(js_gfx_QueryPoolInfo_set_type));
    cls->defineProperty("maxQueryObjects", _SE(js_gfx_QueryPoolInfo_get_maxQueryObjects), _SE(js_gfx_QueryPoolInfo_set_maxQueryObjects));
    cls->defineProperty("forceWait", _SE(js_gfx_QueryPoolInfo_get_forceWait), _SE(js_gfx_QueryPoolInfo_set_forceWait));
    cls->defineFunction("copy", _SE(js_gfx_QueryPoolInfo_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_QueryPoolInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::QueryPoolInfo>(cls);

    __jsb_cc_gfx_QueryPoolInfo_proto = cls->getProto();
    __jsb_cc_gfx_QueryPoolInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_MemoryStatus_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_MemoryStatus_class = nullptr;  // NOLINT

static bool js_gfx_MemoryStatus_copy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::MemoryStatus>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::MemoryStatus, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::MemoryStatus& result = cobj->copy(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_MemoryStatus_copy)

static bool js_gfx_MemoryStatus_get_bufferSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::MemoryStatus>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->bufferSize, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->bufferSize, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_MemoryStatus_get_bufferSize)

static bool js_gfx_MemoryStatus_set_bufferSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::MemoryStatus>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->bufferSize, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_MemoryStatus_set_bufferSize)

static bool js_gfx_MemoryStatus_get_textureSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::MemoryStatus>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->textureSize, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->textureSize, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_gfx_MemoryStatus_get_textureSize)

static bool js_gfx_MemoryStatus_set_textureSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::gfx::MemoryStatus>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->textureSize, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_gfx_MemoryStatus_set_textureSize)


template<>
bool sevalue_to_native(const se::Value &from, cc::gfx::MemoryStatus * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::gfx::MemoryStatus*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("bufferSize", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->bufferSize), ctx);
    }
    json->getProperty("textureSize", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->textureSize), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_MemoryStatus_finalize)

static bool js_gfx_MemoryStatus_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::MemoryStatus);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::MemoryStatus);
        auto cobj = ptr->get<cc::gfx::MemoryStatus>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::MemoryStatus);
    auto cobj = ptr->get<cc::gfx::MemoryStatus>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->bufferSize), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->textureSize), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_MemoryStatus_constructor, __jsb_cc_gfx_MemoryStatus_class, js_cc_gfx_MemoryStatus_finalize)

static bool js_cc_gfx_MemoryStatus_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_MemoryStatus_finalize)

bool js_register_gfx_MemoryStatus(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("MemoryStatus", obj, nullptr, _SE(js_gfx_MemoryStatus_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("bufferSize", _SE(js_gfx_MemoryStatus_get_bufferSize), _SE(js_gfx_MemoryStatus_set_bufferSize));
    cls->defineProperty("textureSize", _SE(js_gfx_MemoryStatus_get_textureSize), _SE(js_gfx_MemoryStatus_set_textureSize));
    cls->defineFunction("copy", _SE(js_gfx_MemoryStatus_copy));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_MemoryStatus_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::MemoryStatus>(cls);

    __jsb_cc_gfx_MemoryStatus_proto = cls->getProto();
    __jsb_cc_gfx_MemoryStatus_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_GFXObject_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_GFXObject_class = nullptr;  // NOLINT

static bool js_gfx_GFXObject_getObjectID(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GFXObject>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getObjectID();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_GFXObject_getObjectID)

static bool js_gfx_GFXObject_getObjectType(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GFXObject>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getObjectType());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_GFXObject_getObjectType)

static bool js_gfx_GFXObject_getTypedID(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GFXObject>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getTypedID();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_GFXObject_getTypedID)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_GFXObject_finalize)

static bool js_gfx_GFXObject_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    cc::gfx::ObjectType arg0;
    ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::gfx::GFXObject, arg0);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_gfx_GFXObject_constructor, __jsb_cc_gfx_GFXObject_class, js_cc_gfx_GFXObject_finalize)

static bool js_cc_gfx_GFXObject_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_GFXObject_finalize)

bool js_register_gfx_GFXObject(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("GFXObject", obj, nullptr, _SE(js_gfx_GFXObject_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("objectType", _SE(js_gfx_GFXObject_getObjectType_asGetter), nullptr);
    cls->defineProperty("objectID", _SE(js_gfx_GFXObject_getObjectID_asGetter), nullptr);
    cls->defineProperty("typedID", _SE(js_gfx_GFXObject_getTypedID_asGetter), nullptr);
    cls->defineFinalizeFunction(_SE(js_cc_gfx_GFXObject_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::GFXObject>(cls);

    __jsb_cc_gfx_GFXObject_proto = cls->getProto();
    __jsb_cc_gfx_GFXObject_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Buffer_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Buffer_class = nullptr;  // NOLINT

static bool js_gfx_Buffer_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Buffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Buffer_destroy)

static bool js_gfx_Buffer_getCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Buffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getCount();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Buffer_getCount)

static bool js_gfx_Buffer_getFlags(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Buffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getFlags());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Buffer_getFlags)

static bool js_gfx_Buffer_getMemUsage(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Buffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getMemUsage());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Buffer_getMemUsage)

static bool js_gfx_Buffer_getSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Buffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getSize();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Buffer_getSize)

static bool js_gfx_Buffer_getStride(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Buffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getStride();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Buffer_getStride)

static bool js_gfx_Buffer_getUsage(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Buffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getUsage());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Buffer_getUsage)

static bool js_gfx_Buffer_isBufferView(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Buffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isBufferView();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Buffer_isBufferView)

static bool js_gfx_Buffer_resize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Buffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->resize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Buffer_resize)

static bool js_gfx_Buffer_computeHash_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BufferInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, nullptr);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        unsigned int result = cc::gfx::Buffer::computeHash(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Buffer_computeHash_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Buffer_finalize)

static bool js_gfx_Buffer_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::Buffer: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::Buffer constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_Buffer_constructor, __jsb_cc_gfx_Buffer_class, js_cc_gfx_Buffer_finalize)

static bool js_cc_gfx_Buffer_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Buffer_finalize)

bool js_register_gfx_Buffer(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Buffer", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_Buffer_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("usage", _SE(js_gfx_Buffer_getUsage_asGetter), nullptr);
    cls->defineProperty("memUsage", _SE(js_gfx_Buffer_getMemUsage_asGetter), nullptr);
    cls->defineProperty("stride", _SE(js_gfx_Buffer_getStride_asGetter), nullptr);
    cls->defineProperty("count", _SE(js_gfx_Buffer_getCount_asGetter), nullptr);
    cls->defineProperty("size", _SE(js_gfx_Buffer_getSize_asGetter), nullptr);
    cls->defineProperty("flags", _SE(js_gfx_Buffer_getFlags_asGetter), nullptr);
    cls->defineFunction("destroy", _SE(js_gfx_Buffer_destroy));
    cls->defineFunction("isBufferView", _SE(js_gfx_Buffer_isBufferView));
    cls->defineFunction("resize", _SE(js_gfx_Buffer_resize));
    cls->defineStaticFunction("computeHash", _SE(js_gfx_Buffer_computeHash_static));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Buffer_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Buffer>(cls);

    __jsb_cc_gfx_Buffer_proto = cls->getProto();
    __jsb_cc_gfx_Buffer_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_InputAssembler_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_InputAssembler_class = nullptr;  // NOLINT

static bool js_gfx_InputAssembler_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_InputAssembler_destroy)

static bool js_gfx_InputAssembler_getAttributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::Attribute>& result = cobj->getAttributes();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getAttributes)

static bool js_gfx_InputAssembler_getAttributesHash(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getAttributesHash();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getAttributesHash)

static bool js_gfx_InputAssembler_getDrawInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::DrawInfo& result = cobj->getDrawInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getDrawInfo)

static bool js_gfx_InputAssembler_getFirstIndex(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getFirstIndex();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getFirstIndex)

static bool js_gfx_InputAssembler_getFirstInstance(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getFirstInstance();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getFirstInstance)

static bool js_gfx_InputAssembler_getFirstVertex(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getFirstVertex();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getFirstVertex)

static bool js_gfx_InputAssembler_getIndexBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Buffer* result = cobj->getIndexBuffer();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getIndexBuffer)

static bool js_gfx_InputAssembler_getIndexCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getIndexCount();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getIndexCount)

static bool js_gfx_InputAssembler_getIndirectBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Buffer* result = cobj->getIndirectBuffer();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getIndirectBuffer)

static bool js_gfx_InputAssembler_getInstanceCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getInstanceCount();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getInstanceCount)

static bool js_gfx_InputAssembler_getVertexBuffers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::Buffer *>& result = cobj->getVertexBuffers();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getVertexBuffers)

static bool js_gfx_InputAssembler_getVertexCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getVertexCount();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getVertexCount)

static bool js_gfx_InputAssembler_getVertexOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getVertexOffset();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_InputAssembler_getVertexOffset)

static bool js_gfx_InputAssembler_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::InputAssemblerInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_InputAssembler_initialize)

static bool js_gfx_InputAssembler_setDrawInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DrawInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setDrawInfo(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_gfx_InputAssembler_setDrawInfo)

static bool js_gfx_InputAssembler_setFirstIndex(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setFirstIndex(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_gfx_InputAssembler_setFirstIndex)

static bool js_gfx_InputAssembler_setFirstInstance(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setFirstInstance(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_gfx_InputAssembler_setFirstInstance)

static bool js_gfx_InputAssembler_setFirstVertex(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setFirstVertex(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_gfx_InputAssembler_setFirstVertex)

static bool js_gfx_InputAssembler_setIndexCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setIndexCount(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_gfx_InputAssembler_setIndexCount)

static bool js_gfx_InputAssembler_setInstanceCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setInstanceCount(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_gfx_InputAssembler_setInstanceCount)

static bool js_gfx_InputAssembler_setVertexCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setVertexCount(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_gfx_InputAssembler_setVertexCount)

static bool js_gfx_InputAssembler_setVertexOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::InputAssembler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<int32_t, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setVertexOffset(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_gfx_InputAssembler_setVertexOffset)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_InputAssembler_finalize)

static bool js_gfx_InputAssembler_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::InputAssembler: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::InputAssembler constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_InputAssembler_constructor, __jsb_cc_gfx_InputAssembler_class, js_cc_gfx_InputAssembler_finalize)

static bool js_cc_gfx_InputAssembler_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_InputAssembler_finalize)

bool js_register_gfx_InputAssembler(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("InputAssembler", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_InputAssembler_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("vertexBuffers", _SE(js_gfx_InputAssembler_getVertexBuffers_asGetter), nullptr);
    cls->defineProperty("attributes", _SE(js_gfx_InputAssembler_getAttributes_asGetter), nullptr);
    cls->defineProperty("indexBuffer", _SE(js_gfx_InputAssembler_getIndexBuffer_asGetter), nullptr);
    cls->defineProperty("indirectBuffer", _SE(js_gfx_InputAssembler_getIndirectBuffer_asGetter), nullptr);
    cls->defineProperty("attributesHash", _SE(js_gfx_InputAssembler_getAttributesHash_asGetter), nullptr);
    cls->defineProperty("drawInfo", _SE(js_gfx_InputAssembler_getDrawInfo_asGetter), _SE(js_gfx_InputAssembler_setDrawInfo_asSetter));
    cls->defineProperty("vertexCount", _SE(js_gfx_InputAssembler_getVertexCount_asGetter), _SE(js_gfx_InputAssembler_setVertexCount_asSetter));
    cls->defineProperty("firstVertex", _SE(js_gfx_InputAssembler_getFirstVertex_asGetter), _SE(js_gfx_InputAssembler_setFirstVertex_asSetter));
    cls->defineProperty("indexCount", _SE(js_gfx_InputAssembler_getIndexCount_asGetter), _SE(js_gfx_InputAssembler_setIndexCount_asSetter));
    cls->defineProperty("firstIndex", _SE(js_gfx_InputAssembler_getFirstIndex_asGetter), _SE(js_gfx_InputAssembler_setFirstIndex_asSetter));
    cls->defineProperty("vertexOffset", _SE(js_gfx_InputAssembler_getVertexOffset_asGetter), _SE(js_gfx_InputAssembler_setVertexOffset_asSetter));
    cls->defineProperty("instanceCount", _SE(js_gfx_InputAssembler_getInstanceCount_asGetter), _SE(js_gfx_InputAssembler_setInstanceCount_asSetter));
    cls->defineProperty("firstInstance", _SE(js_gfx_InputAssembler_getFirstInstance_asGetter), _SE(js_gfx_InputAssembler_setFirstInstance_asSetter));
    cls->defineFunction("destroy", _SE(js_gfx_InputAssembler_destroy));
    cls->defineFunction("initialize", _SE(js_gfx_InputAssembler_initialize));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_InputAssembler_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::InputAssembler>(cls);

    __jsb_cc_gfx_InputAssembler_proto = cls->getProto();
    __jsb_cc_gfx_InputAssembler_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_CommandBuffer_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_CommandBuffer_class = nullptr;  // NOLINT

static bool js_gfx_CommandBuffer_begin(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 0) {

            cobj->begin();
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            HolderType<cc::gfx::RenderPass*, false> arg0 = {};
            HolderType<unsigned int, false> arg1 = {};
            HolderType<cc::gfx::Framebuffer*, false> arg2 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->begin(arg0.value(), arg1.value(), arg2.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 1) {
            HolderType<cc::gfx::RenderPass*, false> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->begin(arg0.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            HolderType<cc::gfx::RenderPass*, false> arg0 = {};
            HolderType<unsigned int, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->begin(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_begin)

static bool js_gfx_CommandBuffer_beginQuery(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<cc::gfx::QueryPool*, false> arg0 = {};
        HolderType<unsigned int, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->beginQuery(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_beginQuery)

static bool js_gfx_CommandBuffer_beginRenderPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 7) {
            HolderType<cc::gfx::RenderPass*, false> arg0 = {};
            HolderType<cc::gfx::Framebuffer*, false> arg1 = {};
            HolderType<cc::gfx::Rect, true> arg2 = {};
            HolderType<std::vector<cc::gfx::Color>, true> arg3 = {};
            HolderType<float, false> arg4 = {};
            HolderType<unsigned int, false> arg5 = {};
            HolderType<std::vector<cc::gfx::CommandBuffer *>, true> arg6 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->beginRenderPass(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 8) {
            HolderType<cc::gfx::RenderPass*, false> arg0 = {};
            HolderType<cc::gfx::Framebuffer*, false> arg1 = {};
            HolderType<cc::gfx::Rect, true> arg2 = {};
            HolderType<cc::gfx::Color*, false> arg3 = {};
            HolderType<float, false> arg4 = {};
            HolderType<unsigned int, false> arg5 = {};
            HolderType<cc::gfx::CommandBuffer**, false> arg6 = {};
            HolderType<unsigned int, false> arg7 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->beginRenderPass(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 6) {
            HolderType<cc::gfx::RenderPass*, false> arg0 = {};
            HolderType<cc::gfx::Framebuffer*, false> arg1 = {};
            HolderType<cc::gfx::Rect, true> arg2 = {};
            HolderType<std::vector<cc::gfx::Color>, true> arg3 = {};
            HolderType<float, false> arg4 = {};
            HolderType<unsigned int, false> arg5 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->beginRenderPass(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 6) {
            HolderType<cc::gfx::RenderPass*, false> arg0 = {};
            HolderType<cc::gfx::Framebuffer*, false> arg1 = {};
            HolderType<cc::gfx::Rect, true> arg2 = {};
            HolderType<cc::gfx::Color*, false> arg3 = {};
            HolderType<float, false> arg4 = {};
            HolderType<unsigned int, false> arg5 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->beginRenderPass(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_beginRenderPass)

static bool js_gfx_CommandBuffer_bindDescriptorSet(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<cc::gfx::DescriptorSet*, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->bindDescriptorSet(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 4) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<cc::gfx::DescriptorSet*, false> arg1 = {};
            HolderType<unsigned int, false> arg2 = {};
            HolderType<unsigned int*, false> arg3 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->bindDescriptorSet(arg0.value(), arg1.value(), arg2.value(), arg3.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<cc::gfx::DescriptorSet*, false> arg1 = {};
            HolderType<std::vector<unsigned int>, true> arg2 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->bindDescriptorSet(arg0.value(), arg1.value(), arg2.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_bindDescriptorSet)

static bool js_gfx_CommandBuffer_bindInputAssembler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::InputAssembler*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->bindInputAssembler(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_bindInputAssembler)

static bool js_gfx_CommandBuffer_bindPipelineState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::PipelineState*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->bindPipelineState(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_bindPipelineState)

static bool js_gfx_CommandBuffer_blitTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 4) {
            HolderType<cc::gfx::Texture*, false> arg0 = {};
            HolderType<cc::gfx::Texture*, false> arg1 = {};
            HolderType<std::vector<cc::gfx::TextureBlit>, true> arg2 = {};
            HolderType<cc::gfx::Filter, false> arg3 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->blitTexture(arg0.value(), arg1.value(), arg2.value(), arg3.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 5) {
            HolderType<cc::gfx::Texture*, false> arg0 = {};
            HolderType<cc::gfx::Texture*, false> arg1 = {};
            HolderType<cc::gfx::TextureBlit*, false> arg2 = {};
            HolderType<unsigned int, false> arg3 = {};
            HolderType<cc::gfx::Filter, false> arg4 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->blitTexture(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_blitTexture)

static bool js_gfx_CommandBuffer_completeQueryPool(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::QueryPool*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->completeQueryPool(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_completeQueryPool)

static bool js_gfx_CommandBuffer_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_destroy)

static bool js_gfx_CommandBuffer_dispatch(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DispatchInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->dispatch(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_dispatch)

static bool js_gfx_CommandBuffer_draw(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<cc::gfx::InputAssembler*, false> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->draw(arg0.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 1) {
            HolderType<cc::gfx::DrawInfo, true> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->draw(arg0.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_draw)

static bool js_gfx_CommandBuffer_end(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->end();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_end)

static bool js_gfx_CommandBuffer_endQuery(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<cc::gfx::QueryPool*, false> arg0 = {};
        HolderType<unsigned int, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->endQuery(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_endQuery)

static bool js_gfx_CommandBuffer_endRenderPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->endRenderPass();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_endRenderPass)

static bool js_gfx_CommandBuffer_getNumDrawCalls(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getNumDrawCalls();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_CommandBuffer_getNumDrawCalls)

static bool js_gfx_CommandBuffer_getNumInstances(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getNumInstances();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_CommandBuffer_getNumInstances)

static bool js_gfx_CommandBuffer_getNumTris(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getNumTris();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_CommandBuffer_getNumTris)

static bool js_gfx_CommandBuffer_getQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Queue* result = cobj->getQueue();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_CommandBuffer_getQueue)

static bool js_gfx_CommandBuffer_getType(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getType());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_CommandBuffer_getType)

static bool js_gfx_CommandBuffer_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::CommandBufferInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_initialize)

static bool js_gfx_CommandBuffer_nextSubpass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->nextSubpass();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_nextSubpass)

static bool js_gfx_CommandBuffer_pipelineBarrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<cc::gfx::GeneralBarrier*, false> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->pipelineBarrier(arg0.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 7) {
            HolderType<cc::gfx::GeneralBarrier*, false> arg0 = {};
            HolderType<cc::gfx::BufferBarrier**, false> arg1 = {};
            HolderType<cc::gfx::Buffer**, false> arg2 = {};
            HolderType<unsigned int, false> arg3 = {};
            HolderType<cc::gfx::TextureBarrier**, false> arg4 = {};
            HolderType<cc::gfx::Texture**, false> arg5 = {};
            HolderType<unsigned int, false> arg6 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->pipelineBarrier(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 5) {
            HolderType<cc::gfx::GeneralBarrier*, false> arg0 = {};
            HolderType<std::vector<cc::gfx::BufferBarrier *>, true> arg1 = {};
            HolderType<std::vector<cc::gfx::Buffer *>, true> arg2 = {};
            HolderType<std::vector<cc::gfx::TextureBarrier *>, true> arg3 = {};
            HolderType<std::vector<cc::gfx::Texture *>, true> arg4 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->pipelineBarrier(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_pipelineBarrier)

static bool js_gfx_CommandBuffer_resetQueryPool(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::QueryPool*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->resetQueryPool(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_resetQueryPool)

static bool js_gfx_CommandBuffer_setBlendConstants(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Color, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setBlendConstants(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_setBlendConstants)

static bool js_gfx_CommandBuffer_setDepthBias(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<float, false> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setDepthBias(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_setDepthBias)

static bool js_gfx_CommandBuffer_setDepthBound(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<float, false> arg0 = {};
        HolderType<float, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setDepthBound(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_setDepthBound)

static bool js_gfx_CommandBuffer_setLineWidth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<float, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setLineWidth(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_setLineWidth)

static bool js_gfx_CommandBuffer_setScissor(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Rect, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setScissor(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_setScissor)

static bool js_gfx_CommandBuffer_setStencilCompareMask(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::gfx::StencilFace, false> arg0 = {};
        HolderType<unsigned int, false> arg1 = {};
        HolderType<unsigned int, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setStencilCompareMask(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_setStencilCompareMask)

static bool js_gfx_CommandBuffer_setStencilWriteMask(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<cc::gfx::StencilFace, false> arg0 = {};
        HolderType<unsigned int, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setStencilWriteMask(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_setStencilWriteMask)

static bool js_gfx_CommandBuffer_setViewport(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::CommandBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Viewport, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setViewport(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_CommandBuffer_setViewport)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_CommandBuffer_finalize)

static bool js_gfx_CommandBuffer_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::CommandBuffer: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::CommandBuffer constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_CommandBuffer_constructor, __jsb_cc_gfx_CommandBuffer_class, js_cc_gfx_CommandBuffer_finalize)

static bool js_cc_gfx_CommandBuffer_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_CommandBuffer_finalize)

bool js_register_gfx_CommandBuffer(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("CommandBuffer", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_CommandBuffer_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("type", _SE(js_gfx_CommandBuffer_getType_asGetter), nullptr);
    cls->defineProperty("queue", _SE(js_gfx_CommandBuffer_getQueue_asGetter), nullptr);
    cls->defineProperty("numDrawCalls", _SE(js_gfx_CommandBuffer_getNumDrawCalls_asGetter), nullptr);
    cls->defineProperty("numInstances", _SE(js_gfx_CommandBuffer_getNumInstances_asGetter), nullptr);
    cls->defineProperty("numTris", _SE(js_gfx_CommandBuffer_getNumTris_asGetter), nullptr);
    cls->defineFunction("begin", _SE(js_gfx_CommandBuffer_begin));
    cls->defineFunction("beginQuery", _SE(js_gfx_CommandBuffer_beginQuery));
    cls->defineFunction("beginRenderPass", _SE(js_gfx_CommandBuffer_beginRenderPass));
    cls->defineFunction("bindDescriptorSet", _SE(js_gfx_CommandBuffer_bindDescriptorSet));
    cls->defineFunction("bindInputAssembler", _SE(js_gfx_CommandBuffer_bindInputAssembler));
    cls->defineFunction("bindPipelineState", _SE(js_gfx_CommandBuffer_bindPipelineState));
    cls->defineFunction("blitTexture", _SE(js_gfx_CommandBuffer_blitTexture));
    cls->defineFunction("completeQueryPool", _SE(js_gfx_CommandBuffer_completeQueryPool));
    cls->defineFunction("destroy", _SE(js_gfx_CommandBuffer_destroy));
    cls->defineFunction("dispatch", _SE(js_gfx_CommandBuffer_dispatch));
    cls->defineFunction("draw", _SE(js_gfx_CommandBuffer_draw));
    cls->defineFunction("end", _SE(js_gfx_CommandBuffer_end));
    cls->defineFunction("endQuery", _SE(js_gfx_CommandBuffer_endQuery));
    cls->defineFunction("endRenderPass", _SE(js_gfx_CommandBuffer_endRenderPass));
    cls->defineFunction("initialize", _SE(js_gfx_CommandBuffer_initialize));
    cls->defineFunction("nextSubpass", _SE(js_gfx_CommandBuffer_nextSubpass));
    cls->defineFunction("pipelineBarrier", _SE(js_gfx_CommandBuffer_pipelineBarrier));
    cls->defineFunction("resetQueryPool", _SE(js_gfx_CommandBuffer_resetQueryPool));
    cls->defineFunction("setBlendConstants", _SE(js_gfx_CommandBuffer_setBlendConstants));
    cls->defineFunction("setDepthBias", _SE(js_gfx_CommandBuffer_setDepthBias));
    cls->defineFunction("setDepthBound", _SE(js_gfx_CommandBuffer_setDepthBound));
    cls->defineFunction("setLineWidth", _SE(js_gfx_CommandBuffer_setLineWidth));
    cls->defineFunction("setScissor", _SE(js_gfx_CommandBuffer_setScissor));
    cls->defineFunction("setStencilCompareMask", _SE(js_gfx_CommandBuffer_setStencilCompareMask));
    cls->defineFunction("setStencilWriteMask", _SE(js_gfx_CommandBuffer_setStencilWriteMask));
    cls->defineFunction("setViewport", _SE(js_gfx_CommandBuffer_setViewport));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_CommandBuffer_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::CommandBuffer>(cls);

    __jsb_cc_gfx_CommandBuffer_proto = cls->getProto();
    __jsb_cc_gfx_CommandBuffer_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DescriptorSet_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DescriptorSet_class = nullptr;  // NOLINT

static bool js_gfx_DescriptorSet_bindBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<cc::gfx::Buffer*, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->bindBuffer(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<cc::gfx::Buffer*, false> arg1 = {};
            HolderType<unsigned int, false> arg2 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->bindBuffer(arg0.value(), arg1.value(), arg2.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_bindBuffer)

static bool js_gfx_DescriptorSet_bindBufferJSB(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<unsigned int, false> arg0 = {};
        HolderType<cc::gfx::Buffer*, false> arg1 = {};
        HolderType<unsigned int, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        bool result = cobj->bindBufferJSB(arg0.value(), arg1.value(), arg2.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_bindBufferJSB)

static bool js_gfx_DescriptorSet_bindSampler(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<cc::gfx::Sampler*, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->bindSampler(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<cc::gfx::Sampler*, false> arg1 = {};
            HolderType<unsigned int, false> arg2 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->bindSampler(arg0.value(), arg1.value(), arg2.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_bindSampler)

static bool js_gfx_DescriptorSet_bindSamplerJSB(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<unsigned int, false> arg0 = {};
        HolderType<cc::gfx::Sampler*, false> arg1 = {};
        HolderType<unsigned int, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        bool result = cobj->bindSamplerJSB(arg0.value(), arg1.value(), arg2.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_bindSamplerJSB)

static bool js_gfx_DescriptorSet_bindTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<cc::gfx::Texture*, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->bindTexture(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 3) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<cc::gfx::Texture*, false> arg1 = {};
            HolderType<unsigned int, false> arg2 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->bindTexture(arg0.value(), arg1.value(), arg2.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_bindTexture)

static bool js_gfx_DescriptorSet_bindTextureJSB(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<unsigned int, false> arg0 = {};
        HolderType<cc::gfx::Texture*, false> arg1 = {};
        HolderType<unsigned int, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        bool result = cobj->bindTextureJSB(arg0.value(), arg1.value(), arg2.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_bindTextureJSB)

static bool js_gfx_DescriptorSet_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_destroy)

static bool js_gfx_DescriptorSet_getBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<unsigned int, false> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cc::gfx::Buffer* result = cobj->getBuffer(arg0.value());
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<unsigned int, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cc::gfx::Buffer* result = cobj->getBuffer(arg0.value(), arg1.value());
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_getBuffer)

static bool js_gfx_DescriptorSet_getLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::DescriptorSetLayout* result = cobj->getLayout();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_DescriptorSet_getLayout)

static bool js_gfx_DescriptorSet_getSampler(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<unsigned int, false> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cc::gfx::Sampler* result = cobj->getSampler(arg0.value());
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<unsigned int, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cc::gfx::Sampler* result = cobj->getSampler(arg0.value(), arg1.value());
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_getSampler)

static bool js_gfx_DescriptorSet_getTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<unsigned int, false> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cc::gfx::Texture* result = cobj->getTexture(arg0.value());
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            HolderType<unsigned int, false> arg0 = {};
            HolderType<unsigned int, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cc::gfx::Texture* result = cobj->getTexture(arg0.value(), arg1.value());
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_getTexture)

static bool js_gfx_DescriptorSet_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DescriptorSetInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_initialize)

static bool js_gfx_DescriptorSet_update(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSet>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->update();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSet_update)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DescriptorSet_finalize)

static bool js_gfx_DescriptorSet_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::DescriptorSet: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::DescriptorSet constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_DescriptorSet_constructor, __jsb_cc_gfx_DescriptorSet_class, js_cc_gfx_DescriptorSet_finalize)

static bool js_cc_gfx_DescriptorSet_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DescriptorSet_finalize)

bool js_register_gfx_DescriptorSet(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DescriptorSet", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_DescriptorSet_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("layout", _SE(js_gfx_DescriptorSet_getLayout_asGetter), nullptr);
    cls->defineFunction("bindBuffer", _SE(js_gfx_DescriptorSet_bindBuffer));
    cls->defineFunction("bindBufferJSB", _SE(js_gfx_DescriptorSet_bindBufferJSB));
    cls->defineFunction("bindSampler", _SE(js_gfx_DescriptorSet_bindSampler));
    cls->defineFunction("bindSamplerJSB", _SE(js_gfx_DescriptorSet_bindSamplerJSB));
    cls->defineFunction("bindTexture", _SE(js_gfx_DescriptorSet_bindTexture));
    cls->defineFunction("bindTextureJSB", _SE(js_gfx_DescriptorSet_bindTextureJSB));
    cls->defineFunction("destroy", _SE(js_gfx_DescriptorSet_destroy));
    cls->defineFunction("getBuffer", _SE(js_gfx_DescriptorSet_getBuffer));
    cls->defineFunction("getSampler", _SE(js_gfx_DescriptorSet_getSampler));
    cls->defineFunction("getTexture", _SE(js_gfx_DescriptorSet_getTexture));
    cls->defineFunction("initialize", _SE(js_gfx_DescriptorSet_initialize));
    cls->defineFunction("update", _SE(js_gfx_DescriptorSet_update));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DescriptorSet_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DescriptorSet>(cls);

    __jsb_cc_gfx_DescriptorSet_proto = cls->getProto();
    __jsb_cc_gfx_DescriptorSet_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DescriptorSetLayout_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DescriptorSetLayout_class = nullptr;  // NOLINT

static bool js_gfx_DescriptorSetLayout_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayout>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSetLayout_destroy)

static bool js_gfx_DescriptorSetLayout_getBindings(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayout>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::DescriptorSetLayoutBinding>& result = cobj->getBindings();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSetLayout_getBindings)

static bool js_gfx_DescriptorSetLayout_getDescriptorCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayout>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getDescriptorCount();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSetLayout_getDescriptorCount)

static bool js_gfx_DescriptorSetLayout_getDynamicBindings(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayout>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<unsigned int>& result = cobj->getDynamicBindings();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSetLayout_getDynamicBindings)

static bool js_gfx_DescriptorSetLayout_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::DescriptorSetLayout>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DescriptorSetLayoutInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_DescriptorSetLayout_initialize)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_DescriptorSetLayout_finalize)

static bool js_gfx_DescriptorSetLayout_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::DescriptorSetLayout: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::DescriptorSetLayout constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_DescriptorSetLayout_constructor, __jsb_cc_gfx_DescriptorSetLayout_class, js_cc_gfx_DescriptorSetLayout_finalize)

static bool js_cc_gfx_DescriptorSetLayout_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DescriptorSetLayout_finalize)

bool js_register_gfx_DescriptorSetLayout(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DescriptorSetLayout", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_DescriptorSetLayout_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineFunction("destroy", _SE(js_gfx_DescriptorSetLayout_destroy));
    cls->defineFunction("getBindings", _SE(js_gfx_DescriptorSetLayout_getBindings));
    cls->defineFunction("getDescriptorCount", _SE(js_gfx_DescriptorSetLayout_getDescriptorCount));
    cls->defineFunction("getDynamicBindings", _SE(js_gfx_DescriptorSetLayout_getDynamicBindings));
    cls->defineFunction("initialize", _SE(js_gfx_DescriptorSetLayout_initialize));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DescriptorSetLayout_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DescriptorSetLayout>(cls);

    __jsb_cc_gfx_DescriptorSetLayout_proto = cls->getProto();
    __jsb_cc_gfx_DescriptorSetLayout_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Framebuffer_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Framebuffer_class = nullptr;  // NOLINT

static bool js_gfx_Framebuffer_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Framebuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Framebuffer_destroy)

static bool js_gfx_Framebuffer_getColorTextures(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Framebuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::Texture *>& result = cobj->getColorTextures();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Framebuffer_getColorTextures)

static bool js_gfx_Framebuffer_getDepthStencilTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Framebuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Texture* result = cobj->getDepthStencilTexture();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Framebuffer_getDepthStencilTexture)

static bool js_gfx_Framebuffer_getRenderPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Framebuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::RenderPass* result = cobj->getRenderPass();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Framebuffer_getRenderPass)

static bool js_gfx_Framebuffer_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Framebuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::FramebufferInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Framebuffer_initialize)

static bool js_gfx_Framebuffer_computeHash_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::FramebufferInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, nullptr);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        unsigned int result = cc::gfx::Framebuffer::computeHash(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Framebuffer_computeHash_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Framebuffer_finalize)

static bool js_gfx_Framebuffer_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::Framebuffer: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::Framebuffer constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_Framebuffer_constructor, __jsb_cc_gfx_Framebuffer_class, js_cc_gfx_Framebuffer_finalize)

static bool js_cc_gfx_Framebuffer_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Framebuffer_finalize)

bool js_register_gfx_Framebuffer(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Framebuffer", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_Framebuffer_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("renderPass", _SE(js_gfx_Framebuffer_getRenderPass_asGetter), nullptr);
    cls->defineProperty("colorTextures", _SE(js_gfx_Framebuffer_getColorTextures_asGetter), nullptr);
    cls->defineProperty("depthStencilTexture", _SE(js_gfx_Framebuffer_getDepthStencilTexture_asGetter), nullptr);
    cls->defineFunction("destroy", _SE(js_gfx_Framebuffer_destroy));
    cls->defineFunction("initialize", _SE(js_gfx_Framebuffer_initialize));
    cls->defineStaticFunction("computeHash", _SE(js_gfx_Framebuffer_computeHash_static));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Framebuffer_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Framebuffer>(cls);

    __jsb_cc_gfx_Framebuffer_proto = cls->getProto();
    __jsb_cc_gfx_Framebuffer_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_PipelineLayout_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_PipelineLayout_class = nullptr;  // NOLINT

static bool js_gfx_PipelineLayout_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineLayout>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_PipelineLayout_destroy)

static bool js_gfx_PipelineLayout_getSetLayouts(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineLayout>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::DescriptorSetLayout *>& result = cobj->getSetLayouts();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_PipelineLayout_getSetLayouts)

static bool js_gfx_PipelineLayout_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineLayout>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::PipelineLayoutInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_PipelineLayout_initialize)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_PipelineLayout_finalize)

static bool js_gfx_PipelineLayout_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::PipelineLayout: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::PipelineLayout constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_PipelineLayout_constructor, __jsb_cc_gfx_PipelineLayout_class, js_cc_gfx_PipelineLayout_finalize)

static bool js_cc_gfx_PipelineLayout_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_PipelineLayout_finalize)

bool js_register_gfx_PipelineLayout(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("PipelineLayout", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_PipelineLayout_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineFunction("destroy", _SE(js_gfx_PipelineLayout_destroy));
    cls->defineFunction("getSetLayouts", _SE(js_gfx_PipelineLayout_getSetLayouts));
    cls->defineFunction("initialize", _SE(js_gfx_PipelineLayout_initialize));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_PipelineLayout_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::PipelineLayout>(cls);

    __jsb_cc_gfx_PipelineLayout_proto = cls->getProto();
    __jsb_cc_gfx_PipelineLayout_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_PipelineState_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_PipelineState_class = nullptr;  // NOLINT

static bool js_gfx_PipelineState_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_PipelineState_destroy)

static bool js_gfx_PipelineState_getBindPoint(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getBindPoint());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_PipelineState_getBindPoint)

static bool js_gfx_PipelineState_getBlendState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::BlendState& result = cobj->getBlendState();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_PipelineState_getBlendState)

static bool js_gfx_PipelineState_getDepthStencilState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::DepthStencilState& result = cobj->getDepthStencilState();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_PipelineState_getDepthStencilState)

static bool js_gfx_PipelineState_getDynamicStates(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getDynamicStates());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_PipelineState_getDynamicStates)

static bool js_gfx_PipelineState_getInputState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::InputState& result = cobj->getInputState();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_PipelineState_getInputState)

static bool js_gfx_PipelineState_getPipelineLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::PipelineLayout* result = cobj->getPipelineLayout();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_PipelineState_getPipelineLayout)

static bool js_gfx_PipelineState_getPrimitive(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getPrimitive());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_PipelineState_getPrimitive)

static bool js_gfx_PipelineState_getRasterizerState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::RasterizerState& result = cobj->getRasterizerState();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_PipelineState_getRasterizerState)

static bool js_gfx_PipelineState_getRenderPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::RenderPass* result = cobj->getRenderPass();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_PipelineState_getRenderPass)

static bool js_gfx_PipelineState_getShader(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Shader* result = cobj->getShader();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_PipelineState_getShader)

static bool js_gfx_PipelineState_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::PipelineState>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::PipelineStateInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_PipelineState_initialize)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_PipelineState_finalize)

static bool js_gfx_PipelineState_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::PipelineState: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::PipelineState constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_PipelineState_constructor, __jsb_cc_gfx_PipelineState_class, js_cc_gfx_PipelineState_finalize)

static bool js_cc_gfx_PipelineState_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_PipelineState_finalize)

bool js_register_gfx_PipelineState(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("PipelineState", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_PipelineState_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("shader", _SE(js_gfx_PipelineState_getShader_asGetter), nullptr);
    cls->defineProperty("primitive", _SE(js_gfx_PipelineState_getPrimitive_asGetter), nullptr);
    cls->defineProperty("bindPoint", _SE(js_gfx_PipelineState_getBindPoint_asGetter), nullptr);
    cls->defineProperty("inputState", _SE(js_gfx_PipelineState_getInputState_asGetter), nullptr);
    cls->defineProperty("rasterizerState", _SE(js_gfx_PipelineState_getRasterizerState_asGetter), nullptr);
    cls->defineProperty("depthStencilState", _SE(js_gfx_PipelineState_getDepthStencilState_asGetter), nullptr);
    cls->defineProperty("blendState", _SE(js_gfx_PipelineState_getBlendState_asGetter), nullptr);
    cls->defineProperty("renderPass", _SE(js_gfx_PipelineState_getRenderPass_asGetter), nullptr);
    cls->defineFunction("destroy", _SE(js_gfx_PipelineState_destroy));
    cls->defineFunction("getDynamicStates", _SE(js_gfx_PipelineState_getDynamicStates));
    cls->defineFunction("getPipelineLayout", _SE(js_gfx_PipelineState_getPipelineLayout));
    cls->defineFunction("initialize", _SE(js_gfx_PipelineState_initialize));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_PipelineState_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::PipelineState>(cls);

    __jsb_cc_gfx_PipelineState_proto = cls->getProto();
    __jsb_cc_gfx_PipelineState_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_QueryPool_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_QueryPool_class = nullptr;  // NOLINT

static bool js_gfx_QueryPool_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPool>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_QueryPool_destroy)

static bool js_gfx_QueryPool_getForceWait(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPool>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->getForceWait();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_QueryPool_getForceWait)

static bool js_gfx_QueryPool_getMaxQueryObjects(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPool>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getMaxQueryObjects();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_QueryPool_getMaxQueryObjects)

static bool js_gfx_QueryPool_getResult(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPool>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        uint64_t result = cobj->getResult(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_QueryPool_getResult)

static bool js_gfx_QueryPool_getType(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPool>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getType());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_QueryPool_getType)

static bool js_gfx_QueryPool_hasResult(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPool>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        bool result = cobj->hasResult(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_QueryPool_hasResult)

static bool js_gfx_QueryPool_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::QueryPool>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::QueryPoolInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_QueryPool_initialize)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_QueryPool_finalize)

static bool js_gfx_QueryPool_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::QueryPool: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::QueryPool constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_QueryPool_constructor, __jsb_cc_gfx_QueryPool_class, js_cc_gfx_QueryPool_finalize)

static bool js_cc_gfx_QueryPool_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_QueryPool_finalize)

bool js_register_gfx_QueryPool(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("QueryPool", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_QueryPool_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineFunction("destroy", _SE(js_gfx_QueryPool_destroy));
    cls->defineFunction("getForceWait", _SE(js_gfx_QueryPool_getForceWait));
    cls->defineFunction("getMaxQueryObjects", _SE(js_gfx_QueryPool_getMaxQueryObjects));
    cls->defineFunction("getResult", _SE(js_gfx_QueryPool_getResult));
    cls->defineFunction("getType", _SE(js_gfx_QueryPool_getType));
    cls->defineFunction("hasResult", _SE(js_gfx_QueryPool_hasResult));
    cls->defineFunction("initialize", _SE(js_gfx_QueryPool_initialize));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_QueryPool_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::QueryPool>(cls);

    __jsb_cc_gfx_QueryPool_proto = cls->getProto();
    __jsb_cc_gfx_QueryPool_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Queue_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Queue_class = nullptr;  // NOLINT

static bool js_gfx_Queue_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Queue>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Queue_destroy)

static bool js_gfx_Queue_getType(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Queue>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getType());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Queue_getType)

static bool js_gfx_Queue_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Queue>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::QueueInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Queue_initialize)

static bool js_gfx_Queue_submit(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Queue>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<std::vector<cc::gfx::CommandBuffer *>, true> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->submit(arg0.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            HolderType<cc::gfx::CommandBuffer**, false> arg0 = {};
            HolderType<unsigned int, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->submit(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_Queue_submit)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Queue_finalize)

static bool js_gfx_Queue_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::Queue: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::Queue constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_Queue_constructor, __jsb_cc_gfx_Queue_class, js_cc_gfx_Queue_finalize)

static bool js_cc_gfx_Queue_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Queue_finalize)

bool js_register_gfx_Queue(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Queue", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_Queue_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("type", _SE(js_gfx_Queue_getType_asGetter), nullptr);
    cls->defineFunction("destroy", _SE(js_gfx_Queue_destroy));
    cls->defineFunction("initialize", _SE(js_gfx_Queue_initialize));
    cls->defineFunction("submit", _SE(js_gfx_Queue_submit));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Queue_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Queue>(cls);

    __jsb_cc_gfx_Queue_proto = cls->getProto();
    __jsb_cc_gfx_Queue_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_RenderPass_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_RenderPass_class = nullptr;  // NOLINT

static bool js_gfx_RenderPass_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPass>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_RenderPass_destroy)

static bool js_gfx_RenderPass_getDependencies(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPass>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::SubpassDependency>& result = cobj->getDependencies();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_RenderPass_getDependencies)

static bool js_gfx_RenderPass_getDepthStencilAttachment(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPass>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::DepthStencilAttachment& result = cobj->getDepthStencilAttachment();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_RenderPass_getDepthStencilAttachment)

static bool js_gfx_RenderPass_getHash(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPass>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getHash();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_RenderPass_getHash)

static bool js_gfx_RenderPass_getSubpasses(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPass>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::SubpassInfo>& result = cobj->getSubpasses();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_RenderPass_getSubpasses)

static bool js_gfx_RenderPass_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::RenderPass>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::RenderPassInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_RenderPass_initialize)

static bool js_gfx_RenderPass_computeHash_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::RenderPassInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, nullptr);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        unsigned int result = cc::gfx::RenderPass::computeHash(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_RenderPass_computeHash_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_RenderPass_finalize)

static bool js_gfx_RenderPass_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::RenderPass: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::RenderPass constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_RenderPass_constructor, __jsb_cc_gfx_RenderPass_class, js_cc_gfx_RenderPass_finalize)

static bool js_cc_gfx_RenderPass_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_RenderPass_finalize)

bool js_register_gfx_RenderPass(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderPass", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_RenderPass_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("hash", _SE(js_gfx_RenderPass_getHash_asGetter), nullptr);
    cls->defineFunction("destroy", _SE(js_gfx_RenderPass_destroy));
    cls->defineFunction("getDependencies", _SE(js_gfx_RenderPass_getDependencies));
    cls->defineFunction("getDepthStencilAttachment", _SE(js_gfx_RenderPass_getDepthStencilAttachment));
    cls->defineFunction("getSubpasses", _SE(js_gfx_RenderPass_getSubpasses));
    cls->defineFunction("initialize", _SE(js_gfx_RenderPass_initialize));
    cls->defineStaticFunction("computeHash", _SE(js_gfx_RenderPass_computeHash_static));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_RenderPass_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::RenderPass>(cls);

    __jsb_cc_gfx_RenderPass_proto = cls->getProto();
    __jsb_cc_gfx_RenderPass_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Shader_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Shader_class = nullptr;  // NOLINT

static bool js_gfx_Shader_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Shader_destroy)

static bool js_gfx_Shader_getAttributes(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::Attribute>& result = cobj->getAttributes();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Shader_getAttributes)

static bool js_gfx_Shader_getBlocks(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::UniformBlock>& result = cobj->getBlocks();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Shader_getBlocks)

static bool js_gfx_Shader_getBuffers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::UniformStorageBuffer>& result = cobj->getBuffers();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Shader_getBuffers)

static bool js_gfx_Shader_getImages(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::UniformStorageImage>& result = cobj->getImages();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Shader_getImages)

static bool js_gfx_Shader_getName(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::string& result = cobj->getName();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Shader_getName)

static bool js_gfx_Shader_getSamplerTextures(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::UniformSamplerTexture>& result = cobj->getSamplerTextures();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Shader_getSamplerTextures)

static bool js_gfx_Shader_getSamplers(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::UniformSampler>& result = cobj->getSamplers();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Shader_getSamplers)

static bool js_gfx_Shader_getStages(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::ShaderStage>& result = cobj->getStages();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Shader_getStages)

static bool js_gfx_Shader_getSubpassInputs(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::UniformInputAttachment>& result = cobj->getSubpassInputs();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Shader_getSubpassInputs)

static bool js_gfx_Shader_getTextures(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::UniformTexture>& result = cobj->getTextures();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Shader_getTextures)

static bool js_gfx_Shader_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Shader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::ShaderInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Shader_initialize)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Shader_finalize)

static bool js_gfx_Shader_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::Shader: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::Shader constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_Shader_constructor, __jsb_cc_gfx_Shader_class, js_cc_gfx_Shader_finalize)

static bool js_cc_gfx_Shader_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Shader_finalize)

bool js_register_gfx_Shader(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Shader", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_Shader_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("name", _SE(js_gfx_Shader_getName_asGetter), nullptr);
    cls->defineProperty("stages", _SE(js_gfx_Shader_getStages_asGetter), nullptr);
    cls->defineProperty("attributes", _SE(js_gfx_Shader_getAttributes_asGetter), nullptr);
    cls->defineProperty("blocks", _SE(js_gfx_Shader_getBlocks_asGetter), nullptr);
    cls->defineProperty("samplers", _SE(js_gfx_Shader_getSamplers_asGetter), nullptr);
    cls->defineFunction("destroy", _SE(js_gfx_Shader_destroy));
    cls->defineFunction("getBuffers", _SE(js_gfx_Shader_getBuffers));
    cls->defineFunction("getImages", _SE(js_gfx_Shader_getImages));
    cls->defineFunction("getSamplerTextures", _SE(js_gfx_Shader_getSamplerTextures));
    cls->defineFunction("getSubpassInputs", _SE(js_gfx_Shader_getSubpassInputs));
    cls->defineFunction("getTextures", _SE(js_gfx_Shader_getTextures));
    cls->defineFunction("initialize", _SE(js_gfx_Shader_initialize));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Shader_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Shader>(cls);

    __jsb_cc_gfx_Shader_proto = cls->getProto();
    __jsb_cc_gfx_Shader_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Texture_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Texture_class = nullptr;  // NOLINT

static bool js_gfx_Texture_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Texture_destroy)

static bool js_gfx_Texture_getFormat(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getFormat());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Texture_getFormat)

static bool js_gfx_Texture_getHash(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getHash();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Texture_getHash)

static bool js_gfx_Texture_getHeight(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getHeight();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Texture_getHeight)

static bool js_gfx_Texture_getInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::TextureInfo& result = cobj->getInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Texture_getInfo)

static bool js_gfx_Texture_getSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getSize();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Texture_getSize)

static bool js_gfx_Texture_getViewInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::TextureViewInfo& result = cobj->getViewInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Texture_getViewInfo)

static bool js_gfx_Texture_getWidth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getWidth();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Texture_getWidth)

static bool js_gfx_Texture_isTextureView(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isTextureView();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Texture_isTextureView)

static bool js_gfx_Texture_resize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Texture>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<unsigned int, false> arg0 = {};
        HolderType<unsigned int, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->resize(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_gfx_Texture_resize)

static bool js_gfx_Texture_computeHash_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<cc::gfx::TextureViewInfo, true> arg0 = {};
            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            unsigned int result = cc::gfx::Texture::computeHash(arg0.value());
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while (false);
    do {
        if (argc == 1) {
            HolderType<cc::gfx::TextureInfo, true> arg0 = {};
            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            unsigned int result = cc::gfx::Texture::computeHash(arg0.value());
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while (false);
    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_Texture_computeHash_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Texture_finalize)

static bool js_gfx_Texture_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::Texture: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::Texture constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_Texture_constructor, __jsb_cc_gfx_Texture_class, js_cc_gfx_Texture_finalize)

static bool js_cc_gfx_Texture_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Texture_finalize)

bool js_register_gfx_Texture(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Texture", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_Texture_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("info", _SE(js_gfx_Texture_getInfo_asGetter), nullptr);
    cls->defineProperty("viewInfo", _SE(js_gfx_Texture_getViewInfo_asGetter), nullptr);
    cls->defineProperty("width", _SE(js_gfx_Texture_getWidth_asGetter), nullptr);
    cls->defineProperty("height", _SE(js_gfx_Texture_getHeight_asGetter), nullptr);
    cls->defineProperty("format", _SE(js_gfx_Texture_getFormat_asGetter), nullptr);
    cls->defineProperty("size", _SE(js_gfx_Texture_getSize_asGetter), nullptr);
    cls->defineProperty("hash", _SE(js_gfx_Texture_getHash_asGetter), nullptr);
    cls->defineFunction("destroy", _SE(js_gfx_Texture_destroy));
    cls->defineFunction("isTextureView", _SE(js_gfx_Texture_isTextureView));
    cls->defineFunction("resize", _SE(js_gfx_Texture_resize));
    cls->defineStaticFunction("computeHash", _SE(js_gfx_Texture_computeHash_static));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Texture_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Texture>(cls);

    __jsb_cc_gfx_Texture_proto = cls->getProto();
    __jsb_cc_gfx_Texture_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Swapchain_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Swapchain_class = nullptr;  // NOLINT

static bool js_gfx_Swapchain_createSurface(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<void*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->createSurface(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Swapchain_createSurface)

static bool js_gfx_Swapchain_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Swapchain_destroy)

static bool js_gfx_Swapchain_destroySurface(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroySurface();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Swapchain_destroySurface)

static bool js_gfx_Swapchain_getColorTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Texture* result = cobj->getColorTexture();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Swapchain_getColorTexture)

static bool js_gfx_Swapchain_getDepthStencilTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Texture* result = cobj->getDepthStencilTexture();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Swapchain_getDepthStencilTexture)

static bool js_gfx_Swapchain_getHeight(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getHeight();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Swapchain_getHeight)

static bool js_gfx_Swapchain_getSurfaceTransform(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getSurfaceTransform());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Swapchain_getSurfaceTransform)

static bool js_gfx_Swapchain_getVSyncMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getVSyncMode());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Swapchain_getVSyncMode)

static bool js_gfx_Swapchain_getWidth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getWidth();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Swapchain_getWidth)

static bool js_gfx_Swapchain_getWindowHandle(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        void* result = cobj->getWindowHandle();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Swapchain_getWindowHandle)

static bool js_gfx_Swapchain_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::SwapchainInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->initialize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Swapchain_initialize)

static bool js_gfx_Swapchain_resize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Swapchain>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<unsigned int, false> arg0 = {};
        HolderType<unsigned int, false> arg1 = {};
        HolderType<cc::gfx::SurfaceTransform, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->resize(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_gfx_Swapchain_resize)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Swapchain_finalize)

static bool js_gfx_Swapchain_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::Swapchain: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::Swapchain constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_Swapchain_constructor, __jsb_cc_gfx_Swapchain_class, js_cc_gfx_Swapchain_finalize)

static bool js_cc_gfx_Swapchain_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Swapchain_finalize)

bool js_register_gfx_Swapchain(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Swapchain", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_Swapchain_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("width", _SE(js_gfx_Swapchain_getWidth_asGetter), nullptr);
    cls->defineProperty("height", _SE(js_gfx_Swapchain_getHeight_asGetter), nullptr);
    cls->defineProperty("surfaceTransform", _SE(js_gfx_Swapchain_getSurfaceTransform_asGetter), nullptr);
    cls->defineProperty("colorTexture", _SE(js_gfx_Swapchain_getColorTexture_asGetter), nullptr);
    cls->defineProperty("depthStencilTexture", _SE(js_gfx_Swapchain_getDepthStencilTexture_asGetter), nullptr);
    cls->defineFunction("createSurface", _SE(js_gfx_Swapchain_createSurface));
    cls->defineFunction("destroy", _SE(js_gfx_Swapchain_destroy));
    cls->defineFunction("destroySurface", _SE(js_gfx_Swapchain_destroySurface));
    cls->defineFunction("getVSyncMode", _SE(js_gfx_Swapchain_getVSyncMode));
    cls->defineFunction("getWindowHandle", _SE(js_gfx_Swapchain_getWindowHandle));
    cls->defineFunction("initialize", _SE(js_gfx_Swapchain_initialize));
    cls->defineFunction("resize", _SE(js_gfx_Swapchain_resize));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Swapchain_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Swapchain>(cls);

    __jsb_cc_gfx_Swapchain_proto = cls->getProto();
    __jsb_cc_gfx_Swapchain_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_BufferBarrier_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_BufferBarrier_class = nullptr;  // NOLINT

static bool js_gfx_BufferBarrier_getHash(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrier>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const unsigned int& result = cobj->getHash();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_BufferBarrier_getHash)

static bool js_gfx_BufferBarrier_getInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::BufferBarrier>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::BufferBarrierInfo& result = cobj->getInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_BufferBarrier_getInfo)

static bool js_gfx_BufferBarrier_computeHash_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BufferBarrierInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, nullptr);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        unsigned int result = cc::gfx::BufferBarrier::computeHash(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_BufferBarrier_computeHash_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_BufferBarrier_finalize)

static bool js_gfx_BufferBarrier_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::BufferBarrier: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::BufferBarrier constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_BufferBarrier_constructor, __jsb_cc_gfx_BufferBarrier_class, js_cc_gfx_BufferBarrier_finalize)

static bool js_cc_gfx_BufferBarrier_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_BufferBarrier_finalize)

bool js_register_gfx_BufferBarrier(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BufferBarrier", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_BufferBarrier_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineFunction("getHash", _SE(js_gfx_BufferBarrier_getHash));
    cls->defineFunction("getInfo", _SE(js_gfx_BufferBarrier_getInfo));
    cls->defineStaticFunction("computeHash", _SE(js_gfx_BufferBarrier_computeHash_static));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_BufferBarrier_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::BufferBarrier>(cls);

    __jsb_cc_gfx_BufferBarrier_proto = cls->getProto();
    __jsb_cc_gfx_BufferBarrier_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_GeneralBarrier_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_GeneralBarrier_class = nullptr;  // NOLINT

static bool js_gfx_GeneralBarrier_getHash(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GeneralBarrier>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const unsigned int& result = cobj->getHash();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_GeneralBarrier_getHash)

static bool js_gfx_GeneralBarrier_getInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::GeneralBarrier>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::GeneralBarrierInfo& result = cobj->getInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_GeneralBarrier_getInfo)

static bool js_gfx_GeneralBarrier_computeHash_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::GeneralBarrierInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, nullptr);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        unsigned int result = cc::gfx::GeneralBarrier::computeHash(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_GeneralBarrier_computeHash_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_GeneralBarrier_finalize)

static bool js_gfx_GeneralBarrier_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::GeneralBarrier: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::GeneralBarrier constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_GeneralBarrier_constructor, __jsb_cc_gfx_GeneralBarrier_class, js_cc_gfx_GeneralBarrier_finalize)

static bool js_cc_gfx_GeneralBarrier_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_GeneralBarrier_finalize)

bool js_register_gfx_GeneralBarrier(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("GeneralBarrier", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_GeneralBarrier_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineFunction("getHash", _SE(js_gfx_GeneralBarrier_getHash));
    cls->defineFunction("getInfo", _SE(js_gfx_GeneralBarrier_getInfo));
    cls->defineStaticFunction("computeHash", _SE(js_gfx_GeneralBarrier_computeHash_static));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_GeneralBarrier_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::GeneralBarrier>(cls);

    __jsb_cc_gfx_GeneralBarrier_proto = cls->getProto();
    __jsb_cc_gfx_GeneralBarrier_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Sampler_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Sampler_class = nullptr;  // NOLINT

static bool js_gfx_Sampler_getHash(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Sampler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const unsigned int& result = cobj->getHash();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Sampler_getHash)

static bool js_gfx_Sampler_getInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Sampler>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::SamplerInfo& result = cobj->getInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Sampler_getInfo)

static bool js_gfx_Sampler_computeHash_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::SamplerInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, nullptr);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        unsigned int result = cc::gfx::Sampler::computeHash(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Sampler_computeHash_static)

static bool js_gfx_Sampler_unpackFromHash_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<unsigned int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, nullptr);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::SamplerInfo result = cc::gfx::Sampler::unpackFromHash(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Sampler_unpackFromHash_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_Sampler_finalize)

static bool js_gfx_Sampler_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::Sampler: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::Sampler constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_Sampler_constructor, __jsb_cc_gfx_Sampler_class, js_cc_gfx_Sampler_finalize)

static bool js_cc_gfx_Sampler_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_Sampler_finalize)

bool js_register_gfx_Sampler(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Sampler", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_Sampler_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("info", _SE(js_gfx_Sampler_getInfo_asGetter), nullptr);
    cls->defineFunction("getHash", _SE(js_gfx_Sampler_getHash));
    cls->defineStaticFunction("computeHash", _SE(js_gfx_Sampler_computeHash_static));
    cls->defineStaticFunction("unpackFromHash", _SE(js_gfx_Sampler_unpackFromHash_static));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_Sampler_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Sampler>(cls);

    __jsb_cc_gfx_Sampler_proto = cls->getProto();
    __jsb_cc_gfx_Sampler_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_TextureBarrier_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_TextureBarrier_class = nullptr;  // NOLINT

static bool js_gfx_TextureBarrier_getHash(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrier>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const unsigned int& result = cobj->getHash();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureBarrier_getHash)

static bool js_gfx_TextureBarrier_getInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::TextureBarrier>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::TextureBarrierInfo& result = cobj->getInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureBarrier_getInfo)

static bool js_gfx_TextureBarrier_computeHash_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::TextureBarrierInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, nullptr);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        unsigned int result = cc::gfx::TextureBarrier::computeHash(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_TextureBarrier_computeHash_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_gfx_TextureBarrier_finalize)

static bool js_gfx_TextureBarrier_constructor(se::State& /*s*/) // NOLINT(readability-identifier-naming) constructor.c
{
    //#3 cc::gfx::TextureBarrier: is_skip_construtor True
    se::ScriptEngine::getInstance()->throwException("cc::gfx::TextureBarrier constructor is skipped");
    return false;
}
SE_BIND_CTOR(js_gfx_TextureBarrier_constructor, __jsb_cc_gfx_TextureBarrier_class, js_cc_gfx_TextureBarrier_finalize)

static bool js_cc_gfx_TextureBarrier_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_TextureBarrier_finalize)

bool js_register_gfx_TextureBarrier(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("TextureBarrier", obj, __jsb_cc_gfx_GFXObject_proto, _SE(js_gfx_TextureBarrier_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineFunction("getHash", _SE(js_gfx_TextureBarrier_getHash));
    cls->defineFunction("getInfo", _SE(js_gfx_TextureBarrier_getInfo));
    cls->defineStaticFunction("computeHash", _SE(js_gfx_TextureBarrier_computeHash_static));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_TextureBarrier_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::TextureBarrier>(cls);

    __jsb_cc_gfx_TextureBarrier_proto = cls->getProto();
    __jsb_cc_gfx_TextureBarrier_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_Device_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_Device_class = nullptr;  // NOLINT

static bool js_gfx_Device_acquire(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<std::vector<cc::gfx::Swapchain *>, true> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->acquire(arg0.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            HolderType<cc::gfx::Swapchain**, false> arg0 = {};
            HolderType<unsigned int, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->acquire(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_acquire)

static bool js_gfx_Device_bindingMappingInfo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::BindingMappingInfo& result = cobj->bindingMappingInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_bindingMappingInfo)

static bool js_gfx_Device_createCommandBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::CommandBufferInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::CommandBuffer* result = cobj->createCommandBuffer(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createCommandBuffer)

static bool js_gfx_Device_createDescriptorSet(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DescriptorSetInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DescriptorSet* result = cobj->createDescriptorSet(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createDescriptorSet)

static bool js_gfx_Device_createDescriptorSetLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DescriptorSetLayoutInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DescriptorSetLayout* result = cobj->createDescriptorSetLayout(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createDescriptorSetLayout)

static bool js_gfx_Device_createFramebuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::FramebufferInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Framebuffer* result = cobj->createFramebuffer(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createFramebuffer)

static bool js_gfx_Device_createInputAssembler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::InputAssemblerInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::InputAssembler* result = cobj->createInputAssembler(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createInputAssembler)

static bool js_gfx_Device_createPipelineLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::PipelineLayoutInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::PipelineLayout* result = cobj->createPipelineLayout(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createPipelineLayout)

static bool js_gfx_Device_createPipelineState(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::PipelineStateInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::PipelineState* result = cobj->createPipelineState(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createPipelineState)

static bool js_gfx_Device_createQueryPool(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::QueryPoolInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::QueryPool* result = cobj->createQueryPool(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createQueryPool)

static bool js_gfx_Device_createQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::QueueInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Queue* result = cobj->createQueue(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createQueue)

static bool js_gfx_Device_createRenderPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::RenderPassInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::RenderPass* result = cobj->createRenderPass(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createRenderPass)

static bool js_gfx_Device_createShader(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::ShaderInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Shader* result = cobj->createShader(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createShader)

static bool js_gfx_Device_createSwapchain(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::SwapchainInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Swapchain* result = cobj->createSwapchain(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        s.rval().toObject()->getPrivateObject()->tryAllowDestroyInGC();
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_createSwapchain)

static bool js_gfx_Device_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->destroy();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_destroy)

static bool js_gfx_Device_flushCommands(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<std::vector<cc::gfx::CommandBuffer *>, true> arg0 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->flushCommands(arg0.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            HolderType<cc::gfx::CommandBuffer**, false> arg0 = {};
            HolderType<unsigned int, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->flushCommands(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_flushCommands)

static bool js_gfx_Device_getBufferBarrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::BufferBarrierInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::BufferBarrier* result = cobj->getBufferBarrier(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_getBufferBarrier)

static bool js_gfx_Device_getCapabilities(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::gfx::DeviceCaps& result = cobj->getCapabilities();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getCapabilities)

static bool js_gfx_Device_getCommandBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::CommandBuffer* result = cobj->getCommandBuffer();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getCommandBuffer)

static bool js_gfx_Device_getDeviceName(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::string& result = cobj->getDeviceName();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getDeviceName)

static bool js_gfx_Device_getFormatFeatures(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Format, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        auto result = static_cast<int>(cobj->getFormatFeatures(arg0.value()));
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_getFormatFeatures)

static bool js_gfx_Device_getGeneralBarrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::GeneralBarrierInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::GeneralBarrier* result = cobj->getGeneralBarrier(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_getGeneralBarrier)

static bool js_gfx_Device_getGfxAPI(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        auto result = static_cast<int>(cobj->getGfxAPI());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getGfxAPI)

static bool js_gfx_Device_getMemoryStatus(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::MemoryStatus& result = cobj->getMemoryStatus();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getMemoryStatus)

static bool js_gfx_Device_getNumDrawCalls(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getNumDrawCalls();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getNumDrawCalls)

static bool js_gfx_Device_getNumInstances(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getNumInstances();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getNumInstances)

static bool js_gfx_Device_getNumTris(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getNumTris();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getNumTris)

static bool js_gfx_Device_getQueryPool(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::QueryPool* result = cobj->getQueryPool();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_getQueryPool)

static bool js_gfx_Device_getQueryPoolResults(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::QueryPool*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->getQueryPoolResults(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_getQueryPoolResults)

static bool js_gfx_Device_getQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Queue* result = cobj->getQueue();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getQueue)

static bool js_gfx_Device_getRenderer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::string& result = cobj->getRenderer();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getRenderer)

static bool js_gfx_Device_getSampler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::SamplerInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Sampler* result = cobj->getSampler(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_getSampler)

static bool js_gfx_Device_getSwapchains(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::Swapchain *>& result = cobj->getSwapchains();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_getSwapchains)

static bool js_gfx_Device_getTextureBarrier(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::TextureBarrierInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::TextureBarrier* result = cobj->getTextureBarrier(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_getTextureBarrier)

static bool js_gfx_Device_getVendor(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::string& result = cobj->getVendor();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_gfx_Device_getVendor)

static bool js_gfx_Device_hasFeature(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Feature, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        bool result = cobj->hasFeature(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_hasFeature)

static bool js_gfx_Device_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::DeviceInfo, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        bool result = cobj->initialize(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_initialize)

static bool js_gfx_Device_present(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::gfx::Device>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->present();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_gfx_Device_present)

bool js_register_gfx_Device(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Device", obj, nullptr, nullptr);

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineProperty("gfxAPI", _SE(js_gfx_Device_getGfxAPI_asGetter), nullptr);
    cls->defineProperty("deviceName", _SE(js_gfx_Device_getDeviceName_asGetter), nullptr);
    cls->defineProperty("memoryStatus", _SE(js_gfx_Device_getMemoryStatus_asGetter), nullptr);
    cls->defineProperty("queue", _SE(js_gfx_Device_getQueue_asGetter), nullptr);
    cls->defineProperty("commandBuffer", _SE(js_gfx_Device_getCommandBuffer_asGetter), nullptr);
    cls->defineProperty("renderer", _SE(js_gfx_Device_getRenderer_asGetter), nullptr);
    cls->defineProperty("vendor", _SE(js_gfx_Device_getVendor_asGetter), nullptr);
    cls->defineProperty("numDrawCalls", _SE(js_gfx_Device_getNumDrawCalls_asGetter), nullptr);
    cls->defineProperty("numInstances", _SE(js_gfx_Device_getNumInstances_asGetter), nullptr);
    cls->defineProperty("numTris", _SE(js_gfx_Device_getNumTris_asGetter), nullptr);
    cls->defineProperty("capabilities", _SE(js_gfx_Device_getCapabilities_asGetter), nullptr);
    cls->defineFunction("acquire", _SE(js_gfx_Device_acquire));
    cls->defineFunction("bindingMappingInfo", _SE(js_gfx_Device_bindingMappingInfo));
    cls->defineFunction("createCommandBuffer", _SE(js_gfx_Device_createCommandBuffer));
    cls->defineFunction("createDescriptorSet", _SE(js_gfx_Device_createDescriptorSet));
    cls->defineFunction("createDescriptorSetLayout", _SE(js_gfx_Device_createDescriptorSetLayout));
    cls->defineFunction("createFramebuffer", _SE(js_gfx_Device_createFramebuffer));
    cls->defineFunction("createInputAssembler", _SE(js_gfx_Device_createInputAssembler));
    cls->defineFunction("createPipelineLayout", _SE(js_gfx_Device_createPipelineLayout));
    cls->defineFunction("createPipelineState", _SE(js_gfx_Device_createPipelineState));
    cls->defineFunction("createQueryPool", _SE(js_gfx_Device_createQueryPool));
    cls->defineFunction("createQueue", _SE(js_gfx_Device_createQueue));
    cls->defineFunction("createRenderPass", _SE(js_gfx_Device_createRenderPass));
    cls->defineFunction("createShader", _SE(js_gfx_Device_createShader));
    cls->defineFunction("createSwapchain", _SE(js_gfx_Device_createSwapchain));
    cls->defineFunction("destroy", _SE(js_gfx_Device_destroy));
    cls->defineFunction("flushCommands", _SE(js_gfx_Device_flushCommands));
    cls->defineFunction("getBufferBarrier", _SE(js_gfx_Device_getBufferBarrier));
    cls->defineFunction("getFormatFeatures", _SE(js_gfx_Device_getFormatFeatures));
    cls->defineFunction("getGeneralBarrier", _SE(js_gfx_Device_getGeneralBarrier));
    cls->defineFunction("getQueryPool", _SE(js_gfx_Device_getQueryPool));
    cls->defineFunction("getQueryPoolResults", _SE(js_gfx_Device_getQueryPoolResults));
    cls->defineFunction("getSampler", _SE(js_gfx_Device_getSampler));
    cls->defineFunction("getSwapchains", _SE(js_gfx_Device_getSwapchains));
    cls->defineFunction("getTextureBarrier", _SE(js_gfx_Device_getTextureBarrier));
    cls->defineFunction("hasFeature", _SE(js_gfx_Device_hasFeature));
    cls->defineFunction("initialize", _SE(js_gfx_Device_initialize));
    cls->defineFunction("present", _SE(js_gfx_Device_present));
    cls->install();
    JSBClassType::registerClass<cc::gfx::Device>(cls);

    __jsb_cc_gfx_Device_proto = cls->getProto();
    __jsb_cc_gfx_Device_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_gfx_DeviceManager_proto = nullptr; // NOLINT
se::Class* __jsb_cc_gfx_DeviceManager_class = nullptr;  // NOLINT

static bool js_gfx_DeviceManager_create_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<cc::gfx::DeviceInfo, true> arg0 = {};
            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            cc::gfx::Device* result = cc::gfx::DeviceManager::create(arg0.value());
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while (false);
    do {
        if (argc == 0) {
            cc::gfx::Device* result = cc::gfx::DeviceManager::create();
            ok &= nativevalue_to_se(result, s.rval(), s.thisObject() /*ctx*/);
            SE_PRECONDITION2(ok, false, "Error processing arguments");
            SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
            return true;
        }
    } while (false);
    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_gfx_DeviceManager_create_static)
static bool js_cc_gfx_DeviceManager_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_gfx_DeviceManager_finalize)

bool js_register_gfx_DeviceManager(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DeviceManager", obj, nullptr, nullptr);

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_gfx_getter_return_true), nullptr);
#endif
    cls->defineStaticFunction("create", _SE(js_gfx_DeviceManager_create_static));
    cls->defineFinalizeFunction(_SE(js_cc_gfx_DeviceManager_finalize));
    cls->install();
    JSBClassType::registerClass<cc::gfx::DeviceManager>(cls);

    __jsb_cc_gfx_DeviceManager_proto = cls->getProto();
    __jsb_cc_gfx_DeviceManager_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
bool register_all_gfx(se::Object* obj)    // NOLINT
{
    // Get the ns
    se::Value nsVal;
    if (!obj->getProperty("gfx", &nsVal, true))
    {
        se::HandleObject jsobj(se::Object::createPlainObject());
        nsVal.setObject(jsobj);
        obj->setProperty("gfx", nsVal);
    }
    se::Object* ns = nsVal.toObject();

    js_register_gfx_Attribute(ns);
    js_register_gfx_BindingMappingInfo(ns);
    js_register_gfx_BlendState(ns);
    js_register_gfx_BlendTarget(ns);
    js_register_gfx_GFXObject(ns);
    js_register_gfx_Buffer(ns);
    js_register_gfx_BufferBarrier(ns);
    js_register_gfx_BufferBarrierInfo(ns);
    js_register_gfx_BufferInfo(ns);
    js_register_gfx_BufferTextureCopy(ns);
    js_register_gfx_BufferViewInfo(ns);
    js_register_gfx_Color(ns);
    js_register_gfx_ColorAttachment(ns);
    js_register_gfx_CommandBuffer(ns);
    js_register_gfx_CommandBufferInfo(ns);
    js_register_gfx_DepthStencilAttachment(ns);
    js_register_gfx_DepthStencilState(ns);
    js_register_gfx_DescriptorSet(ns);
    js_register_gfx_DescriptorSetInfo(ns);
    js_register_gfx_DescriptorSetLayout(ns);
    js_register_gfx_DescriptorSetLayoutBinding(ns);
    js_register_gfx_DescriptorSetLayoutInfo(ns);
    js_register_gfx_Device(ns);
    js_register_gfx_DeviceCaps(ns);
    js_register_gfx_DeviceInfo(ns);
    js_register_gfx_DeviceManager(ns);
    js_register_gfx_DispatchInfo(ns);
    js_register_gfx_DrawInfo(ns);
    js_register_gfx_Extent(ns);
    js_register_gfx_Framebuffer(ns);
    js_register_gfx_FramebufferInfo(ns);
    js_register_gfx_GeneralBarrier(ns);
    js_register_gfx_GeneralBarrierInfo(ns);
    js_register_gfx_IndirectBuffer(ns);
    js_register_gfx_InputAssembler(ns);
    js_register_gfx_InputAssemblerInfo(ns);
    js_register_gfx_InputState(ns);
    js_register_gfx_MemoryStatus(ns);
    js_register_gfx_Offset(ns);
    js_register_gfx_PipelineLayout(ns);
    js_register_gfx_PipelineLayoutInfo(ns);
    js_register_gfx_PipelineState(ns);
    js_register_gfx_PipelineStateInfo(ns);
    js_register_gfx_QueryPool(ns);
    js_register_gfx_QueryPoolInfo(ns);
    js_register_gfx_Queue(ns);
    js_register_gfx_QueueInfo(ns);
    js_register_gfx_RasterizerState(ns);
    js_register_gfx_Rect(ns);
    js_register_gfx_RenderPass(ns);
    js_register_gfx_RenderPassInfo(ns);
    js_register_gfx_Sampler(ns);
    js_register_gfx_SamplerInfo(ns);
    js_register_gfx_Shader(ns);
    js_register_gfx_ShaderInfo(ns);
    js_register_gfx_ShaderStage(ns);
    js_register_gfx_Size(ns);
    js_register_gfx_SubpassDependency(ns);
    js_register_gfx_SubpassInfo(ns);
    js_register_gfx_Swapchain(ns);
    js_register_gfx_SwapchainInfo(ns);
    js_register_gfx_Texture(ns);
    js_register_gfx_TextureBarrier(ns);
    js_register_gfx_TextureBarrierInfo(ns);
    js_register_gfx_TextureBlit(ns);
    js_register_gfx_TextureCopy(ns);
    js_register_gfx_TextureInfo(ns);
    js_register_gfx_TextureSubresLayers(ns);
    js_register_gfx_TextureSubresRange(ns);
    js_register_gfx_TextureViewInfo(ns);
    js_register_gfx_Uniform(ns);
    js_register_gfx_UniformBlock(ns);
    js_register_gfx_UniformInputAttachment(ns);
    js_register_gfx_UniformSampler(ns);
    js_register_gfx_UniformSamplerTexture(ns);
    js_register_gfx_UniformStorageBuffer(ns);
    js_register_gfx_UniformStorageImage(ns);
    js_register_gfx_UniformTexture(ns);
    js_register_gfx_Viewport(ns);
    return true;
}

// clang-format on