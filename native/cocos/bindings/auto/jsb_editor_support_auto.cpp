
// clang-format off
#include "cocos/bindings/auto/jsb_editor_support_auto.h"
#include "cocos/bindings/manual/jsb_conversions.h"
#include "cocos/bindings/manual/jsb_global.h"
#include "editor-support/middleware-adapter.h"
#include "editor-support/MiddlewareManager.h"
#include "editor-support/SharedBufferManager.h"

#ifndef JSB_ALLOC
#define JSB_ALLOC(kls, ...) new (std::nothrow) kls(__VA_ARGS__)
#endif

#ifndef JSB_FREE
#define JSB_FREE(ptr) delete ptr
#endif

#if CC_DEBUG
static bool js_editor_support_getter_return_true(se::State& s) // NOLINT(readability-identifier-naming)
{
    s.rval().setBoolean(true);
    return true;
}
SE_BIND_PROP_GET(js_editor_support_getter_return_true)
#endif
se::Object* __jsb_cc_middleware_Texture2D_proto = nullptr; // NOLINT
se::Class* __jsb_cc_middleware_Texture2D_class = nullptr;  // NOLINT

static bool js_editor_support_Texture2D_getPixelsHigh(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::Texture2D>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getPixelsHigh();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_Texture2D_getPixelsHigh)

static bool js_editor_support_Texture2D_getPixelsWide(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::Texture2D>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getPixelsWide();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_Texture2D_getPixelsWide)

static bool js_editor_support_Texture2D_getRealTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::Texture2D>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        void* result = cobj->getRealTexture();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_Texture2D_getRealTexture)

static bool js_editor_support_Texture2D_getRealTextureIndex(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::Texture2D>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getRealTextureIndex();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_Texture2D_getRealTextureIndex)

static bool js_editor_support_Texture2D_setPixelsHigh(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::Texture2D>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setPixelsHigh(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_editor_support_Texture2D_setPixelsHigh)

static bool js_editor_support_Texture2D_setPixelsWide(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::Texture2D>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setPixelsWide(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_editor_support_Texture2D_setPixelsWide)

static bool js_editor_support_Texture2D_setRealTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::Texture2D>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<void*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setRealTexture(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_editor_support_Texture2D_setRealTexture)

static bool js_editor_support_Texture2D_setRealTextureIndex(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::Texture2D>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setRealTextureIndex(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_editor_support_Texture2D_setRealTextureIndex)

static bool js_editor_support_Texture2D_setTexParamCallback(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::Texture2D>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<std::function<void (int, unsigned int, unsigned int, unsigned int, unsigned int)>, true> arg0 = {};
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto * thisObj = s.thisObject();
                auto lambda = [=](int larg0, unsigned int larg1, unsigned int larg2, unsigned int larg3, unsigned int larg4) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(5);
                    ok &= nativevalue_to_se(larg0, args[0], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg1, args[1], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg2, args[2], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg3, args[3], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg4, args[4], nullptr /*ctx*/);
                    se::Value rval;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(args, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0.data = lambda;
            }
            else
            {
                arg0.data = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setTexParamCallback(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_editor_support_Texture2D_setTexParamCallback)

SE_DECLARE_FINALIZE_FUNC(js_cc_middleware_Texture2D_finalize)

static bool js_editor_support_Texture2D_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::middleware::Texture2D);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_editor_support_Texture2D_constructor, __jsb_cc_middleware_Texture2D_class, js_cc_middleware_Texture2D_finalize)

static bool js_cc_middleware_Texture2D_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_middleware_Texture2D_finalize)

bool js_register_editor_support_Texture2D(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Texture2D", obj, nullptr, _SE(js_editor_support_Texture2D_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_editor_support_getter_return_true), nullptr);
#endif
    cls->defineFunction("getPixelsHigh", _SE(js_editor_support_Texture2D_getPixelsHigh));
    cls->defineFunction("getPixelsWide", _SE(js_editor_support_Texture2D_getPixelsWide));
    cls->defineFunction("getRealTexture", _SE(js_editor_support_Texture2D_getRealTexture));
    cls->defineFunction("getRealTextureIndex", _SE(js_editor_support_Texture2D_getRealTextureIndex));
    cls->defineFunction("setPixelsHigh", _SE(js_editor_support_Texture2D_setPixelsHigh));
    cls->defineFunction("setPixelsWide", _SE(js_editor_support_Texture2D_setPixelsWide));
    cls->defineFunction("setRealTexture", _SE(js_editor_support_Texture2D_setRealTexture));
    cls->defineFunction("setRealTextureIndex", _SE(js_editor_support_Texture2D_setRealTextureIndex));
    cls->defineFunction("setTexParamCallback", _SE(js_editor_support_Texture2D_setTexParamCallback));
    cls->defineFinalizeFunction(_SE(js_cc_middleware_Texture2D_finalize));
    cls->install();
    JSBClassType::registerClass<cc::middleware::Texture2D>(cls);

    __jsb_cc_middleware_Texture2D_proto = cls->getProto();
    __jsb_cc_middleware_Texture2D_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_middleware_SharedBufferManager_proto = nullptr; // NOLINT
se::Class* __jsb_cc_middleware_SharedBufferManager_class = nullptr;  // NOLINT

static bool js_editor_support_SharedBufferManager_getSharedBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::SharedBufferManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        se::Object* result = cobj->getSharedBuffer();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_SharedBufferManager_getSharedBuffer)

static bool js_editor_support_SharedBufferManager_setResizeCallback(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::SharedBufferManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<std::function<void ()>, false> arg0 = {};
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto * thisObj = s.thisObject();
                auto lambda = [=]() -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    se::Value rval;
                    se::Object* funcObj = jsFunc.toObject();
                    bool succeed = funcObj->call(se::EmptyValueArray, thisObj, &rval);
                    if (!succeed) {
                        se::ScriptEngine::getInstance()->clearException();
                    }
                };
                arg0.data = lambda;
            }
            else
            {
                arg0.data = nullptr;
            }
        } while(false)
        ;
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setResizeCallback(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_editor_support_SharedBufferManager_setResizeCallback)

SE_DECLARE_FINALIZE_FUNC(js_cc_middleware_SharedBufferManager_finalize)

static bool js_editor_support_SharedBufferManager_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    se::Object::TypedArrayType arg0;
    ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::middleware::SharedBufferManager, arg0);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_editor_support_SharedBufferManager_constructor, __jsb_cc_middleware_SharedBufferManager_class, js_cc_middleware_SharedBufferManager_finalize)

static bool js_cc_middleware_SharedBufferManager_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_middleware_SharedBufferManager_finalize)

bool js_register_editor_support_SharedBufferManager(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("SharedBufferManager", obj, nullptr, _SE(js_editor_support_SharedBufferManager_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_editor_support_getter_return_true), nullptr);
#endif
    cls->defineFunction("getSharedBuffer", _SE(js_editor_support_SharedBufferManager_getSharedBuffer));
    cls->defineFunction("setResizeCallback", _SE(js_editor_support_SharedBufferManager_setResizeCallback));
    cls->defineFinalizeFunction(_SE(js_cc_middleware_SharedBufferManager_finalize));
    cls->install();
    JSBClassType::registerClass<cc::middleware::SharedBufferManager>(cls);

    __jsb_cc_middleware_SharedBufferManager_proto = cls->getProto();
    __jsb_cc_middleware_SharedBufferManager_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_middleware_MiddlewareManager_proto = nullptr; // NOLINT
se::Class* __jsb_cc_middleware_MiddlewareManager_class = nullptr;  // NOLINT

static bool js_editor_support_MiddlewareManager_getAttachInfoMgr(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::MiddlewareManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::middleware::SharedBufferManager* result = cobj->getAttachInfoMgr();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_getAttachInfoMgr)

static bool js_editor_support_MiddlewareManager_getBufferCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::MiddlewareManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        size_t result = cobj->getBufferCount(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_getBufferCount)

static bool js_editor_support_MiddlewareManager_getIBTypedArray(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::MiddlewareManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<int, false> arg0 = {};
        HolderType<int, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        se::Object* result = cobj->getIBTypedArray(arg0.value(), arg1.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_getIBTypedArray)

static bool js_editor_support_MiddlewareManager_getIBTypedArrayLength(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::MiddlewareManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<int, false> arg0 = {};
        HolderType<size_t, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        size_t result = cobj->getIBTypedArrayLength(arg0.value(), arg1.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_getIBTypedArrayLength)

static bool js_editor_support_MiddlewareManager_getRenderInfoMgr(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::MiddlewareManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::middleware::SharedBufferManager* result = cobj->getRenderInfoMgr();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_getRenderInfoMgr)

static bool js_editor_support_MiddlewareManager_getVBTypedArray(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::MiddlewareManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<int, false> arg0 = {};
        HolderType<int, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        se::Object* result = cobj->getVBTypedArray(arg0.value(), arg1.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_getVBTypedArray)

static bool js_editor_support_MiddlewareManager_getVBTypedArrayLength(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::MiddlewareManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<int, false> arg0 = {};
        HolderType<size_t, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        size_t result = cobj->getVBTypedArrayLength(arg0.value(), arg1.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_getVBTypedArrayLength)

static bool js_editor_support_MiddlewareManager_render(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::MiddlewareManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<float, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->render(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_render)

static bool js_editor_support_MiddlewareManager_update(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::middleware::MiddlewareManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<float, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->update(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_update)

static bool js_editor_support_MiddlewareManager_destroyInstance_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cc::middleware::MiddlewareManager::destroyInstance();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_destroyInstance_static)

static bool js_editor_support_MiddlewareManager_generateModuleID_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        uint8_t result = cc::middleware::MiddlewareManager::generateModuleID();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_generateModuleID_static)

static bool js_editor_support_MiddlewareManager_getInstance_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::middleware::MiddlewareManager* result = cc::middleware::MiddlewareManager::getInstance();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_editor_support_MiddlewareManager_getInstance_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_middleware_MiddlewareManager_finalize)

static bool js_editor_support_MiddlewareManager_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::middleware::MiddlewareManager);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_editor_support_MiddlewareManager_constructor, __jsb_cc_middleware_MiddlewareManager_class, js_cc_middleware_MiddlewareManager_finalize)

static bool js_cc_middleware_MiddlewareManager_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_middleware_MiddlewareManager_finalize)

bool js_register_editor_support_MiddlewareManager(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("MiddlewareManager", obj, nullptr, _SE(js_editor_support_MiddlewareManager_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_editor_support_getter_return_true), nullptr);
#endif
    cls->defineFunction("getAttachInfoMgr", _SE(js_editor_support_MiddlewareManager_getAttachInfoMgr));
    cls->defineFunction("getBufferCount", _SE(js_editor_support_MiddlewareManager_getBufferCount));
    cls->defineFunction("getIBTypedArray", _SE(js_editor_support_MiddlewareManager_getIBTypedArray));
    cls->defineFunction("getIBTypedArrayLength", _SE(js_editor_support_MiddlewareManager_getIBTypedArrayLength));
    cls->defineFunction("getRenderInfoMgr", _SE(js_editor_support_MiddlewareManager_getRenderInfoMgr));
    cls->defineFunction("getVBTypedArray", _SE(js_editor_support_MiddlewareManager_getVBTypedArray));
    cls->defineFunction("getVBTypedArrayLength", _SE(js_editor_support_MiddlewareManager_getVBTypedArrayLength));
    cls->defineFunction("render", _SE(js_editor_support_MiddlewareManager_render));
    cls->defineFunction("update", _SE(js_editor_support_MiddlewareManager_update));
    cls->defineStaticFunction("destroyInstance", _SE(js_editor_support_MiddlewareManager_destroyInstance_static));
    cls->defineStaticFunction("generateModuleID", _SE(js_editor_support_MiddlewareManager_generateModuleID_static));
    cls->defineStaticFunction("getInstance", _SE(js_editor_support_MiddlewareManager_getInstance_static));
    cls->defineFinalizeFunction(_SE(js_cc_middleware_MiddlewareManager_finalize));
    cls->install();
    JSBClassType::registerClass<cc::middleware::MiddlewareManager>(cls);

    __jsb_cc_middleware_MiddlewareManager_proto = cls->getProto();
    __jsb_cc_middleware_MiddlewareManager_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
bool register_all_editor_support(se::Object* obj)    // NOLINT
{
    // Get the ns
    se::Value nsVal;
    if (!obj->getProperty("middleware", &nsVal, true))
    {
        se::HandleObject jsobj(se::Object::createPlainObject());
        nsVal.setObject(jsobj);
        obj->setProperty("middleware", nsVal);
    }
    se::Object* ns = nsVal.toObject();

    js_register_editor_support_MiddlewareManager(ns);
    js_register_editor_support_SharedBufferManager(ns);
    js_register_editor_support_Texture2D(ns);
    return true;
}

// clang-format on