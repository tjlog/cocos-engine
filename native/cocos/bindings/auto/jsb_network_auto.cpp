
// clang-format off
#include "cocos/bindings/auto/jsb_network_auto.h"
#include "cocos/bindings/manual/jsb_conversions.h"
#include "cocos/bindings/manual/jsb_global.h"
#include "network/Downloader.h"

#ifndef JSB_ALLOC
#define JSB_ALLOC(kls, ...) new (std::nothrow) kls(__VA_ARGS__)
#endif

#ifndef JSB_FREE
#define JSB_FREE(ptr) delete ptr
#endif

#if CC_DEBUG
static bool js_network_getter_return_true(se::State& s) // NOLINT(readability-identifier-naming)
{
    s.rval().setBoolean(true);
    return true;
}
SE_BIND_PROP_GET(js_network_getter_return_true)
#endif
se::Object* __jsb_cc_network_DownloaderHints_proto = nullptr; // NOLINT
se::Class* __jsb_cc_network_DownloaderHints_class = nullptr;  // NOLINT

static bool js_network_DownloaderHints_get_countOfMaxProcessingTasks(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->countOfMaxProcessingTasks, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->countOfMaxProcessingTasks, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_network_DownloaderHints_get_countOfMaxProcessingTasks)

static bool js_network_DownloaderHints_set_countOfMaxProcessingTasks(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->countOfMaxProcessingTasks, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_network_DownloaderHints_set_countOfMaxProcessingTasks)

static bool js_network_DownloaderHints_get_timeoutInSeconds(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->timeoutInSeconds, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->timeoutInSeconds, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_network_DownloaderHints_get_timeoutInSeconds)

static bool js_network_DownloaderHints_set_timeoutInSeconds(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->timeoutInSeconds, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_network_DownloaderHints_set_timeoutInSeconds)

static bool js_network_DownloaderHints_get_tempFileNameSuffix(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->tempFileNameSuffix, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->tempFileNameSuffix, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_network_DownloaderHints_get_tempFileNameSuffix)

static bool js_network_DownloaderHints_set_tempFileNameSuffix(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::network::DownloaderHints>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->tempFileNameSuffix, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_network_DownloaderHints_set_tempFileNameSuffix)


template<>
bool sevalue_to_native(const se::Value &from, cc::network::DownloaderHints * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::network::DownloaderHints*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("countOfMaxProcessingTasks", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->countOfMaxProcessingTasks), ctx);
    }
    json->getProperty("timeoutInSeconds", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->timeoutInSeconds), ctx);
    }
    json->getProperty("tempFileNameSuffix", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->tempFileNameSuffix), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_network_DownloaderHints_finalize)

static bool js_network_DownloaderHints_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::network::DownloaderHints);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::network::DownloaderHints);
        auto cobj = ptr->get<cc::network::DownloaderHints>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::network::DownloaderHints);
    auto cobj = ptr->get<cc::network::DownloaderHints>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->countOfMaxProcessingTasks), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->timeoutInSeconds), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->tempFileNameSuffix), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_network_DownloaderHints_constructor, __jsb_cc_network_DownloaderHints_class, js_cc_network_DownloaderHints_finalize)

static bool js_cc_network_DownloaderHints_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_network_DownloaderHints_finalize)

bool js_register_network_DownloaderHints(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DownloaderHints", obj, nullptr, _SE(js_network_DownloaderHints_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_network_getter_return_true), nullptr);
#endif
    cls->defineProperty("countOfMaxProcessingTasks", _SE(js_network_DownloaderHints_get_countOfMaxProcessingTasks), _SE(js_network_DownloaderHints_set_countOfMaxProcessingTasks));
    cls->defineProperty("timeoutInSeconds", _SE(js_network_DownloaderHints_get_timeoutInSeconds), _SE(js_network_DownloaderHints_set_timeoutInSeconds));
    cls->defineProperty("tempFileNameSuffix", _SE(js_network_DownloaderHints_get_tempFileNameSuffix), _SE(js_network_DownloaderHints_set_tempFileNameSuffix));
    cls->defineFinalizeFunction(_SE(js_cc_network_DownloaderHints_finalize));
    cls->install();
    JSBClassType::registerClass<cc::network::DownloaderHints>(cls);

    __jsb_cc_network_DownloaderHints_proto = cls->getProto();
    __jsb_cc_network_DownloaderHints_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_network_Downloader_proto = nullptr; // NOLINT
se::Class* __jsb_cc_network_Downloader_class = nullptr;  // NOLINT

static bool js_network_Downloader_setOnProgress(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::network::Downloader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<std::function<void (const cc::network::DownloadTask &, unsigned int, unsigned int, unsigned int)>, true> arg0 = {};
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto * thisObj = s.thisObject();
                auto lambda = [=](const cc::network::DownloadTask & larg0, unsigned int larg1, unsigned int larg2, unsigned int larg3) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(4);
                    ok &= nativevalue_to_se(larg0, args[0], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg1, args[1], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg2, args[2], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg3, args[3], nullptr /*ctx*/);
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
        cobj->setOnProgress(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_network_Downloader_setOnProgress)

static bool js_network_Downloader_setOnTaskProgress(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::network::Downloader>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<std::function<void (const cc::network::DownloadTask &, unsigned int, unsigned int, unsigned int)>, true> arg0 = {};
        do {
            if (args[0].isObject() && args[0].toObject()->isFunction())
            {
                se::Value jsThis(s.thisObject());
                se::Value jsFunc(args[0]);
                jsThis.toObject()->attachObject(jsFunc.toObject());
                auto * thisObj = s.thisObject();
                auto lambda = [=](const cc::network::DownloadTask & larg0, unsigned int larg1, unsigned int larg2, unsigned int larg3) -> void {
                    se::ScriptEngine::getInstance()->clearException();
                    se::AutoHandleScope hs;
        
                    CC_UNUSED bool ok = true;
                    se::ValueArray args;
                    args.resize(4);
                    ok &= nativevalue_to_se(larg0, args[0], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg1, args[1], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg2, args[2], nullptr /*ctx*/);
                    ok &= nativevalue_to_se(larg3, args[3], nullptr /*ctx*/);
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
        cobj->setOnTaskProgress(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_network_Downloader_setOnTaskProgress)

SE_DECLARE_FINALIZE_FUNC(js_cc_network_Downloader_finalize)

static bool js_network_Downloader_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor_overloaded.c
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 1) {
            HolderType<cc::network::DownloaderHints, true> arg0 = {};
            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::network::Downloader, arg0.value());
            s.thisObject()->setPrivateObject(ptr);
            return true;
        }
    } while(false);
    do {
        if (argc == 0) {
            auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::network::Downloader);
            s.thisObject()->setPrivateObject(ptr);
            return true;
        }
    } while(false);
    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_CTOR(js_network_Downloader_constructor, __jsb_cc_network_Downloader_class, js_cc_network_Downloader_finalize)

static bool js_cc_network_Downloader_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_network_Downloader_finalize)

bool js_register_network_Downloader(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("Downloader", obj, nullptr, _SE(js_network_Downloader_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_network_getter_return_true), nullptr);
#endif
    cls->defineProperty("onProgress", nullptr, _SE(js_network_Downloader_setOnProgress_asSetter));
    cls->defineFunction("setOnTaskProgress", _SE(js_network_Downloader_setOnTaskProgress));
    cls->defineFinalizeFunction(_SE(js_cc_network_Downloader_finalize));
    cls->install();
    JSBClassType::registerClass<cc::network::Downloader>(cls);

    __jsb_cc_network_Downloader_proto = cls->getProto();
    __jsb_cc_network_Downloader_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
bool register_all_network(se::Object* obj)    // NOLINT
{
    // Get the ns
    se::Value nsVal;
    if (!obj->getProperty("jsb", &nsVal, true))
    {
        se::HandleObject jsobj(se::Object::createPlainObject());
        nsVal.setObject(jsobj);
        obj->setProperty("jsb", nsVal);
    }
    se::Object* ns = nsVal.toObject();

    js_register_network_Downloader(ns);
    js_register_network_DownloaderHints(ns);
    return true;
}

// clang-format on