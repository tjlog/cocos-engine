
// clang-format off
#include "cocos/bindings/auto/jsb_pipeline_auto.h"
#include "cocos/bindings/manual/jsb_conversions.h"
#include "cocos/bindings/manual/jsb_global.h"
#include "renderer/pipeline/forward/ForwardPipeline.h"
#include "renderer/pipeline/forward/ForwardFlow.h"
#include "renderer/pipeline/forward/ForwardStage.h"
#include "renderer/pipeline/shadow/ShadowFlow.h"
#include "renderer/pipeline/shadow/ShadowStage.h"
#include "renderer/pipeline/shadow/CSMLayers.h"
#include "renderer/pipeline/RenderPipeline.h"
#include "renderer/pipeline/RenderFlow.h"
#include "renderer/pipeline/RenderStage.h"
#include "renderer/pipeline/Define.h"
#include "renderer/pipeline/GlobalDescriptorSetManager.h"
#include "renderer/pipeline/InstancedBuffer.h"
#include "renderer/pipeline/deferred/DeferredPipeline.h"
#include "renderer/pipeline/deferred/MainFlow.h"
#include "renderer/pipeline/deferred/GbufferStage.h"
#include "renderer/pipeline/deferred/LightingStage.h"
#include "renderer/pipeline/deferred/BloomStage.h"
#include "renderer/pipeline/deferred/PostProcessStage.h"
#include "renderer/pipeline/PipelineSceneData.h"
#include "renderer/pipeline/BatchedBuffer.h"
#include "renderer/pipeline/GeometryRenderer.h"
#include "cocos/renderer/gfx-base/GFXDevice.h"

#ifndef JSB_ALLOC
#define JSB_ALLOC(kls, ...) new (std::nothrow) kls(__VA_ARGS__)
#endif

#ifndef JSB_FREE
#define JSB_FREE(ptr) delete ptr
#endif

#if CC_DEBUG
static bool js_pipeline_getter_return_true(se::State& s) // NOLINT(readability-identifier-naming)
{
    s.rval().setBoolean(true);
    return true;
}
SE_BIND_PROP_GET(js_pipeline_getter_return_true)
#endif
se::Object* __jsb_cc_pipeline_RenderObject_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_RenderObject_class = nullptr;  // NOLINT

static bool js_pipeline_RenderObject_get_depth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderObject>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->depth, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->depth, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderObject_get_depth)

static bool js_pipeline_RenderObject_set_depth(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderObject>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->depth, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderObject_set_depth)

static bool js_pipeline_RenderObject_get_model(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderObject>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->model, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->model, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderObject_get_model)

static bool js_pipeline_RenderObject_set_model(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderObject>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->model, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderObject_set_model)


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderObject * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::pipeline::RenderObject*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("depth", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->depth), ctx);
    }
    json->getProperty("model", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->model), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_RenderObject_finalize)

static bool js_pipeline_RenderObject_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderObject);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderObject);
        auto cobj = ptr->get<cc::pipeline::RenderObject>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderObject);
    auto cobj = ptr->get<cc::pipeline::RenderObject>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->depth), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->model), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_RenderObject_constructor, __jsb_cc_pipeline_RenderObject_class, js_cc_pipeline_RenderObject_finalize)

static bool js_cc_pipeline_RenderObject_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_RenderObject_finalize)

bool js_register_pipeline_RenderObject(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderObject", obj, nullptr, _SE(js_pipeline_RenderObject_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineProperty("depth", _SE(js_pipeline_RenderObject_get_depth), _SE(js_pipeline_RenderObject_set_depth));
    cls->defineProperty("model", _SE(js_pipeline_RenderObject_get_model), _SE(js_pipeline_RenderObject_set_model));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_RenderObject_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::RenderObject>(cls);

    __jsb_cc_pipeline_RenderObject_proto = cls->getProto();
    __jsb_cc_pipeline_RenderObject_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_RenderQueueDesc_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_RenderQueueDesc_class = nullptr;  // NOLINT

static bool js_pipeline_RenderQueueDesc_get_isTransparent(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderQueueDesc>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->isTransparent, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->isTransparent, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderQueueDesc_get_isTransparent)

static bool js_pipeline_RenderQueueDesc_set_isTransparent(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderQueueDesc>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->isTransparent, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderQueueDesc_set_isTransparent)

static bool js_pipeline_RenderQueueDesc_get_sortMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderQueueDesc>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->sortMode, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->sortMode, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderQueueDesc_get_sortMode)

static bool js_pipeline_RenderQueueDesc_set_sortMode(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderQueueDesc>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->sortMode, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderQueueDesc_set_sortMode)

static bool js_pipeline_RenderQueueDesc_get_stages(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderQueueDesc>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stages, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stages, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderQueueDesc_get_stages)

static bool js_pipeline_RenderQueueDesc_set_stages(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderQueueDesc>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stages, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderQueueDesc_set_stages)


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderQueueDesc * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::pipeline::RenderQueueDesc*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("isTransparent", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->isTransparent), ctx);
    }
    json->getProperty("sortMode", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->sortMode), ctx);
    }
    json->getProperty("stages", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stages), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_RenderQueueDesc_finalize)

static bool js_pipeline_RenderQueueDesc_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderQueueDesc);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderQueueDesc);
        auto cobj = ptr->get<cc::pipeline::RenderQueueDesc>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderQueueDesc);
    auto cobj = ptr->get<cc::pipeline::RenderQueueDesc>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->isTransparent), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->sortMode), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->stages), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_RenderQueueDesc_constructor, __jsb_cc_pipeline_RenderQueueDesc_class, js_cc_pipeline_RenderQueueDesc_finalize)

static bool js_cc_pipeline_RenderQueueDesc_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_RenderQueueDesc_finalize)

bool js_register_pipeline_RenderQueueDesc(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderQueueDesc", obj, nullptr, _SE(js_pipeline_RenderQueueDesc_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineProperty("isTransparent", _SE(js_pipeline_RenderQueueDesc_get_isTransparent), _SE(js_pipeline_RenderQueueDesc_set_isTransparent));
    cls->defineProperty("sortMode", _SE(js_pipeline_RenderQueueDesc_get_sortMode), _SE(js_pipeline_RenderQueueDesc_set_sortMode));
    cls->defineProperty("stages", _SE(js_pipeline_RenderQueueDesc_get_stages), _SE(js_pipeline_RenderQueueDesc_set_stages));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_RenderQueueDesc_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::RenderQueueDesc>(cls);

    __jsb_cc_pipeline_RenderQueueDesc_proto = cls->getProto();
    __jsb_cc_pipeline_RenderQueueDesc_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_RenderStageInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_RenderStageInfo_class = nullptr;  // NOLINT

static bool js_pipeline_RenderStageInfo_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStageInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderStageInfo_get_name)

static bool js_pipeline_RenderStageInfo_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStageInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderStageInfo_set_name)

static bool js_pipeline_RenderStageInfo_get_priority(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStageInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->priority, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->priority, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderStageInfo_get_priority)

static bool js_pipeline_RenderStageInfo_set_priority(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStageInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->priority, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderStageInfo_set_priority)

static bool js_pipeline_RenderStageInfo_get_tag(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStageInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->tag, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->tag, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderStageInfo_get_tag)

static bool js_pipeline_RenderStageInfo_set_tag(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStageInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->tag, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderStageInfo_set_tag)

static bool js_pipeline_RenderStageInfo_get_renderQueues(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStageInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->renderQueues, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->renderQueues, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderStageInfo_get_renderQueues)

static bool js_pipeline_RenderStageInfo_set_renderQueues(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStageInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->renderQueues, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderStageInfo_set_renderQueues)


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderStageInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::pipeline::RenderStageInfo*>(json->getPrivateData());
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
    json->getProperty("priority", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->priority), ctx);
    }
    json->getProperty("tag", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->tag), ctx);
    }
    json->getProperty("renderQueues", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->renderQueues), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_RenderStageInfo_finalize)

static bool js_pipeline_RenderStageInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderStageInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderStageInfo);
        auto cobj = ptr->get<cc::pipeline::RenderStageInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderStageInfo);
    auto cobj = ptr->get<cc::pipeline::RenderStageInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->name), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->priority), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->tag), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->renderQueues), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_RenderStageInfo_constructor, __jsb_cc_pipeline_RenderStageInfo_class, js_cc_pipeline_RenderStageInfo_finalize)

static bool js_cc_pipeline_RenderStageInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_RenderStageInfo_finalize)

bool js_register_pipeline_RenderStageInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderStageInfo", obj, nullptr, _SE(js_pipeline_RenderStageInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineProperty("name", _SE(js_pipeline_RenderStageInfo_get_name), _SE(js_pipeline_RenderStageInfo_set_name));
    cls->defineProperty("priority", _SE(js_pipeline_RenderStageInfo_get_priority), _SE(js_pipeline_RenderStageInfo_set_priority));
    cls->defineProperty("tag", _SE(js_pipeline_RenderStageInfo_get_tag), _SE(js_pipeline_RenderStageInfo_set_tag));
    cls->defineProperty("renderQueues", _SE(js_pipeline_RenderStageInfo_get_renderQueues), _SE(js_pipeline_RenderStageInfo_set_renderQueues));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_RenderStageInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::RenderStageInfo>(cls);

    __jsb_cc_pipeline_RenderStageInfo_proto = cls->getProto();
    __jsb_cc_pipeline_RenderStageInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_RenderStage_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_RenderStage_class = nullptr;  // NOLINT

static bool js_pipeline_RenderStage_activate(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<cc::pipeline::RenderPipeline*, false> arg0 = {};
        HolderType<cc::pipeline::RenderFlow*, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->activate(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderStage_activate)

static bool js_pipeline_RenderStage_getFlow(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::pipeline::RenderFlow* result = cobj->getFlow();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderStage_getFlow)

static bool js_pipeline_RenderStage_getTag(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getTag();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderStage_getTag)

static bool js_pipeline_RenderStage_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::pipeline::RenderStageInfo, true> arg0 = {};
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
SE_BIND_FUNC(js_pipeline_RenderStage_initialize)

bool js_register_pipeline_RenderStage(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderStage", obj, nullptr, nullptr);

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFunction("activate", _SE(js_pipeline_RenderStage_activate));
    cls->defineFunction("getFlow", _SE(js_pipeline_RenderStage_getFlow));
    cls->defineFunction("getTag", _SE(js_pipeline_RenderStage_getTag));
    cls->defineFunction("initialize", _SE(js_pipeline_RenderStage_initialize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::RenderStage>(cls);

    __jsb_cc_pipeline_RenderStage_proto = cls->getProto();
    __jsb_cc_pipeline_RenderStage_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_RenderFlowInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_RenderFlowInfo_class = nullptr;  // NOLINT

static bool js_pipeline_RenderFlowInfo_get_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlowInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->name, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->name, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderFlowInfo_get_name)

static bool js_pipeline_RenderFlowInfo_set_name(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlowInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->name, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderFlowInfo_set_name)

static bool js_pipeline_RenderFlowInfo_get_priority(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlowInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->priority, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->priority, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderFlowInfo_get_priority)

static bool js_pipeline_RenderFlowInfo_set_priority(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlowInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->priority, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderFlowInfo_set_priority)

static bool js_pipeline_RenderFlowInfo_get_tag(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlowInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->tag, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->tag, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderFlowInfo_get_tag)

static bool js_pipeline_RenderFlowInfo_set_tag(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlowInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->tag, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderFlowInfo_set_tag)

static bool js_pipeline_RenderFlowInfo_get_stages(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlowInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->stages, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->stages, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderFlowInfo_get_stages)

static bool js_pipeline_RenderFlowInfo_set_stages(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlowInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->stages, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderFlowInfo_set_stages)


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderFlowInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::pipeline::RenderFlowInfo*>(json->getPrivateData());
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
    json->getProperty("priority", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->priority), ctx);
    }
    json->getProperty("tag", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->tag), ctx);
    }
    json->getProperty("stages", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->stages), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_RenderFlowInfo_finalize)

static bool js_pipeline_RenderFlowInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderFlowInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderFlowInfo);
        auto cobj = ptr->get<cc::pipeline::RenderFlowInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderFlowInfo);
    auto cobj = ptr->get<cc::pipeline::RenderFlowInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->name), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->priority), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->tag), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->stages), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_RenderFlowInfo_constructor, __jsb_cc_pipeline_RenderFlowInfo_class, js_cc_pipeline_RenderFlowInfo_finalize)

static bool js_cc_pipeline_RenderFlowInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_RenderFlowInfo_finalize)

bool js_register_pipeline_RenderFlowInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderFlowInfo", obj, nullptr, _SE(js_pipeline_RenderFlowInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineProperty("name", _SE(js_pipeline_RenderFlowInfo_get_name), _SE(js_pipeline_RenderFlowInfo_set_name));
    cls->defineProperty("priority", _SE(js_pipeline_RenderFlowInfo_get_priority), _SE(js_pipeline_RenderFlowInfo_set_priority));
    cls->defineProperty("tag", _SE(js_pipeline_RenderFlowInfo_get_tag), _SE(js_pipeline_RenderFlowInfo_set_tag));
    cls->defineProperty("stages", _SE(js_pipeline_RenderFlowInfo_get_stages), _SE(js_pipeline_RenderFlowInfo_set_stages));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_RenderFlowInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::RenderFlowInfo>(cls);

    __jsb_cc_pipeline_RenderFlowInfo_proto = cls->getProto();
    __jsb_cc_pipeline_RenderFlowInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_RenderFlow_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_RenderFlow_class = nullptr;  // NOLINT

static bool js_pipeline_RenderFlow_activate(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlow>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::pipeline::RenderPipeline*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->activate(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderFlow_activate)

static bool js_pipeline_RenderFlow_getRenderstageByName(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlow>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<std::string, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::pipeline::RenderStage* result = cobj->getRenderstageByName(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderFlow_getRenderstageByName)

static bool js_pipeline_RenderFlow_getTag(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlow>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        unsigned int result = cobj->getTag();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderFlow_getTag)

static bool js_pipeline_RenderFlow_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderFlow>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::pipeline::RenderFlowInfo, true> arg0 = {};
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
SE_BIND_FUNC(js_pipeline_RenderFlow_initialize)

bool js_register_pipeline_RenderFlow(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderFlow", obj, nullptr, nullptr);

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFunction("activate", _SE(js_pipeline_RenderFlow_activate));
    cls->defineFunction("getRenderstageByName", _SE(js_pipeline_RenderFlow_getRenderstageByName));
    cls->defineFunction("getTag", _SE(js_pipeline_RenderFlow_getTag));
    cls->defineFunction("initialize", _SE(js_pipeline_RenderFlow_initialize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::RenderFlow>(cls);

    __jsb_cc_pipeline_RenderFlow_proto = cls->getProto();
    __jsb_cc_pipeline_RenderFlow_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_RenderPipelineInfo_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_RenderPipelineInfo_class = nullptr;  // NOLINT

static bool js_pipeline_RenderPipelineInfo_get_tag(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipelineInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->tag, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->tag, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderPipelineInfo_get_tag)

static bool js_pipeline_RenderPipelineInfo_set_tag(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipelineInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->tag, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderPipelineInfo_set_tag)

static bool js_pipeline_RenderPipelineInfo_get_flows(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipelineInfo>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->flows, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->flows, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_RenderPipelineInfo_get_flows)

static bool js_pipeline_RenderPipelineInfo_set_flows(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipelineInfo>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->flows, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_RenderPipelineInfo_set_flows)


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::RenderPipelineInfo * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::pipeline::RenderPipelineInfo*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("tag", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->tag), ctx);
    }
    json->getProperty("flows", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->flows), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_RenderPipelineInfo_finalize)

static bool js_pipeline_RenderPipelineInfo_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderPipelineInfo);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderPipelineInfo);
        auto cobj = ptr->get<cc::pipeline::RenderPipelineInfo>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::RenderPipelineInfo);
    auto cobj = ptr->get<cc::pipeline::RenderPipelineInfo>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->tag), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->flows), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_RenderPipelineInfo_constructor, __jsb_cc_pipeline_RenderPipelineInfo_class, js_cc_pipeline_RenderPipelineInfo_finalize)

static bool js_cc_pipeline_RenderPipelineInfo_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_RenderPipelineInfo_finalize)

bool js_register_pipeline_RenderPipelineInfo(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderPipelineInfo", obj, nullptr, _SE(js_pipeline_RenderPipelineInfo_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineProperty("tag", _SE(js_pipeline_RenderPipelineInfo_get_tag), _SE(js_pipeline_RenderPipelineInfo_set_tag));
    cls->defineProperty("flows", _SE(js_pipeline_RenderPipelineInfo_get_flows), _SE(js_pipeline_RenderPipelineInfo_set_flows));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_RenderPipelineInfo_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::RenderPipelineInfo>(cls);

    __jsb_cc_pipeline_RenderPipelineInfo_proto = cls->getProto();
    __jsb_cc_pipeline_RenderPipelineInfo_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_RenderPipeline_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_RenderPipeline_class = nullptr;  // NOLINT

static bool js_pipeline_RenderPipeline_activate(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Swapchain*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        bool result = cobj->activate(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_activate)

static bool js_pipeline_RenderPipeline_createQuadInputAssembler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::gfx::Buffer*, false> arg0 = {};
        HolderType<cc::gfx::Buffer**, false> arg1 = {};
        HolderType<cc::gfx::InputAssembler**, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        bool result = cobj->createQuadInputAssembler(arg0.value(), arg1.value(), arg2.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_createQuadInputAssembler)

static bool js_pipeline_RenderPipeline_ensureEnoughSize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<std::vector<cc::scene::Camera *>, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->ensureEnoughSize(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_ensureEnoughSize)

static bool js_pipeline_RenderPipeline_genQuadVertexData(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<cc::Vec4, true> arg0 = {};
        HolderType<float*, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->genQuadVertexData(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_genQuadVertexData)

static bool js_pipeline_RenderPipeline_getClearcolor(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::scene::Camera*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Color result = cobj->getClearcolor(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_getClearcolor)

static bool js_pipeline_RenderPipeline_getConstantMacros(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::string& result = cobj->getConstantMacros();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_RenderPipeline_getConstantMacros)

static bool js_pipeline_RenderPipeline_getDescriptorSet(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::DescriptorSet* result = cobj->getDescriptorSet();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_RenderPipeline_getDescriptorSet)

static bool js_pipeline_RenderPipeline_getDescriptorSetLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::DescriptorSetLayout* result = cobj->getDescriptorSetLayout();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_RenderPipeline_getDescriptorSetLayout)

static bool js_pipeline_RenderPipeline_getDevice(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Device* result = cobj->getDevice();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_getDevice)

static bool js_pipeline_RenderPipeline_getGeometryRenderer(se::State& s) // NOLINT(readability-identifier-naming)
{
#if CC_USE_GEOMETRY_RENDERER
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::pipeline::GeometryRenderer* result = cobj->getGeometryRenderer();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
#else
    return true;
#endif // #if CC_USE_GEOMETRY_RENDERER
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_RenderPipeline_getGeometryRenderer)

static bool js_pipeline_RenderPipeline_getGlobalDSManager(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::pipeline::GlobalDSManager* result = cobj->getGlobalDSManager();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_RenderPipeline_getGlobalDSManager)

static bool js_pipeline_RenderPipeline_getHeight(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
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
SE_BIND_FUNC(js_pipeline_RenderPipeline_getHeight)

static bool js_pipeline_RenderPipeline_getIAByRenderArea(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Rect, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::InputAssembler* result = cobj->getIAByRenderArea(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_getIAByRenderArea)

static bool js_pipeline_RenderPipeline_getPipelineSceneData(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::pipeline::PipelineSceneData* result = cobj->getPipelineSceneData();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_RenderPipeline_getPipelineSceneData)

static bool js_pipeline_RenderPipeline_getProfiler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::scene::Model* result = cobj->getProfiler();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_RenderPipeline_getProfiler)

static bool js_pipeline_RenderPipeline_getQueryPools(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::QueryPool *>& result = cobj->getQueryPools();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_getQueryPools)

static bool js_pipeline_RenderPipeline_getRenderstageByName(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<std::string, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::pipeline::RenderStage* result = cobj->getRenderstageByName(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_getRenderstageByName)

static bool js_pipeline_RenderPipeline_getScissor(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::scene::Camera*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Rect result = cobj->getScissor(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_getScissor)

static bool js_pipeline_RenderPipeline_getShadingScale(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getShadingScale();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_RenderPipeline_getShadingScale)

static bool js_pipeline_RenderPipeline_getViewport(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::scene::Camera*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Viewport result = cobj->getViewport(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_getViewport)

static bool js_pipeline_RenderPipeline_getWidth(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
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
SE_BIND_FUNC(js_pipeline_RenderPipeline_getWidth)

static bool js_pipeline_RenderPipeline_initialize(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::pipeline::RenderPipelineInfo, true> arg0 = {};
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
SE_BIND_FUNC(js_pipeline_RenderPipeline_initialize)

static bool js_pipeline_RenderPipeline_isBloomEnabled(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isBloomEnabled();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_isBloomEnabled)

static bool js_pipeline_RenderPipeline_isClusterEnabled(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isClusterEnabled();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_isClusterEnabled)

static bool js_pipeline_RenderPipeline_isEnvmapEnabled(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isEnvmapEnabled();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_isEnvmapEnabled)

static bool js_pipeline_RenderPipeline_isOccluded(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<const cc::scene::Camera*, false> arg0 = {};
        HolderType<const cc::scene::SubModel*, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        bool result = cobj->isOccluded(arg0.value(), arg1.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_isOccluded)

static bool js_pipeline_RenderPipeline_isOcclusionQueryEnabled(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isOcclusionQueryEnabled();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_isOcclusionQueryEnabled)

static bool js_pipeline_RenderPipeline_isRenderQueueReset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isRenderQueueReset();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_isRenderQueueReset)

static bool js_pipeline_RenderPipeline_onGlobalPipelineStateChanged(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->onGlobalPipelineStateChanged();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_onGlobalPipelineStateChanged)

static bool js_pipeline_RenderPipeline_render(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<std::vector<cc::scene::Camera *>, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->render(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_render)

static bool js_pipeline_RenderPipeline_resetRenderQueue(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<bool, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->resetRenderQueue(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_resetRenderQueue)

static bool js_pipeline_RenderPipeline_setBloomEnabled(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<bool, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setBloomEnabled(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_pipeline_RenderPipeline_setBloomEnabled)

static bool js_pipeline_RenderPipeline_setClusterEnabled(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<bool, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setClusterEnabled(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_pipeline_RenderPipeline_setClusterEnabled)

static bool js_pipeline_RenderPipeline_setOcclusionQueryEnabled(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<bool, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setOcclusionQueryEnabled(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_setOcclusionQueryEnabled)

static bool js_pipeline_RenderPipeline_setProfiler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::scene::Model*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setProfiler(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_pipeline_RenderPipeline_setProfiler)

static bool js_pipeline_RenderPipeline_setShadingScale(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<float, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setShadingScale(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_pipeline_RenderPipeline_setShadingScale)

static bool js_pipeline_RenderPipeline_setValue(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2( cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    do {
        if (argc == 2) {
            HolderType<std::string, true> arg0 = {};
            HolderType<bool, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            cobj->setValue(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            HolderType<std::string, true> arg0 = {};
            HolderType<int32_t, false> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->setValue(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    do {
        if (argc == 2) {
            HolderType<std::string, true> arg0 = {};
            HolderType<std::string, true> arg1 = {};

            ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
            if (!ok) { ok = true; break; }
            ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
            if (!ok) { ok = true; break; }
            cobj->setValue(arg0.value(), arg1.value());
            return true;
        }
    } while(false);

    SE_REPORT_ERROR("wrong number of arguments: %d", (int)argc);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_setValue)

static bool js_pipeline_RenderPipeline_updateQuadVertexData(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::RenderPipeline>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<cc::Vec4, true> arg0 = {};
        HolderType<cc::gfx::Buffer*, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->updateQuadVertexData(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_updateQuadVertexData)

static bool js_pipeline_RenderPipeline_getInstance_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::pipeline::RenderPipeline* result = cc::pipeline::RenderPipeline::getInstance();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_getInstance_static)

static bool js_pipeline_RenderPipeline_getRenderArea_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::scene::Camera*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, nullptr);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::Rect result = cc::pipeline::RenderPipeline::getRenderArea(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_RenderPipeline_getRenderArea_static)

bool js_register_pipeline_RenderPipeline(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("RenderPipeline", obj, __jsb_cc_Asset_proto, nullptr);

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineProperty("globalDSManager", _SE(js_pipeline_RenderPipeline_getGlobalDSManager_asGetter), nullptr);
    cls->defineProperty("descriptorSet", _SE(js_pipeline_RenderPipeline_getDescriptorSet_asGetter), nullptr);
    cls->defineProperty("descriptorSetLayout", _SE(js_pipeline_RenderPipeline_getDescriptorSetLayout_asGetter), nullptr);
    cls->defineProperty("constantMacros", _SE(js_pipeline_RenderPipeline_getConstantMacros_asGetter), nullptr);
    cls->defineProperty("clusterEnabled", nullptr, _SE(js_pipeline_RenderPipeline_setClusterEnabled_asSetter));
    cls->defineProperty("bloomEnabled", nullptr, _SE(js_pipeline_RenderPipeline_setBloomEnabled_asSetter));
    cls->defineProperty("pipelineSceneData", _SE(js_pipeline_RenderPipeline_getPipelineSceneData_asGetter), nullptr);
    cls->defineProperty("geometryRenderer", _SE(js_pipeline_RenderPipeline_getGeometryRenderer_asGetter), nullptr);
    cls->defineProperty("profiler", _SE(js_pipeline_RenderPipeline_getProfiler_asGetter), _SE(js_pipeline_RenderPipeline_setProfiler_asSetter));
    cls->defineProperty("shadingScale", _SE(js_pipeline_RenderPipeline_getShadingScale_asGetter), _SE(js_pipeline_RenderPipeline_setShadingScale_asSetter));
    cls->defineFunction("activate", _SE(js_pipeline_RenderPipeline_activate));
    cls->defineFunction("createQuadInputAssembler", _SE(js_pipeline_RenderPipeline_createQuadInputAssembler));
    cls->defineFunction("ensureEnoughSize", _SE(js_pipeline_RenderPipeline_ensureEnoughSize));
    cls->defineFunction("genQuadVertexData", _SE(js_pipeline_RenderPipeline_genQuadVertexData));
    cls->defineFunction("getClearcolor", _SE(js_pipeline_RenderPipeline_getClearcolor));
    cls->defineFunction("getDevice", _SE(js_pipeline_RenderPipeline_getDevice));
    cls->defineFunction("getHeight", _SE(js_pipeline_RenderPipeline_getHeight));
    cls->defineFunction("getIAByRenderArea", _SE(js_pipeline_RenderPipeline_getIAByRenderArea));
    cls->defineFunction("getQueryPools", _SE(js_pipeline_RenderPipeline_getQueryPools));
    cls->defineFunction("getRenderstageByName", _SE(js_pipeline_RenderPipeline_getRenderstageByName));
    cls->defineFunction("getScissor", _SE(js_pipeline_RenderPipeline_getScissor));
    cls->defineFunction("getViewport", _SE(js_pipeline_RenderPipeline_getViewport));
    cls->defineFunction("getWidth", _SE(js_pipeline_RenderPipeline_getWidth));
    cls->defineFunction("initialize", _SE(js_pipeline_RenderPipeline_initialize));
    cls->defineFunction("isBloomEnabled", _SE(js_pipeline_RenderPipeline_isBloomEnabled));
    cls->defineFunction("isClusterEnabled", _SE(js_pipeline_RenderPipeline_isClusterEnabled));
    cls->defineFunction("isEnvmapEnabled", _SE(js_pipeline_RenderPipeline_isEnvmapEnabled));
    cls->defineFunction("isOccluded", _SE(js_pipeline_RenderPipeline_isOccluded));
    cls->defineFunction("isOcclusionQueryEnabled", _SE(js_pipeline_RenderPipeline_isOcclusionQueryEnabled));
    cls->defineFunction("isRenderQueueReset", _SE(js_pipeline_RenderPipeline_isRenderQueueReset));
    cls->defineFunction("onGlobalPipelineStateChanged", _SE(js_pipeline_RenderPipeline_onGlobalPipelineStateChanged));
    cls->defineFunction("render", _SE(js_pipeline_RenderPipeline_render));
    cls->defineFunction("resetRenderQueue", _SE(js_pipeline_RenderPipeline_resetRenderQueue));
    cls->defineFunction("setOcclusionQueryEnabled", _SE(js_pipeline_RenderPipeline_setOcclusionQueryEnabled));
    cls->defineFunction("setValue", _SE(js_pipeline_RenderPipeline_setValue));
    cls->defineFunction("updateQuadVertexData", _SE(js_pipeline_RenderPipeline_updateQuadVertexData));
    cls->defineStaticFunction("getInstance", _SE(js_pipeline_RenderPipeline_getInstance_static));
    cls->defineStaticFunction("getRenderArea", _SE(js_pipeline_RenderPipeline_getRenderArea_static));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::RenderPipeline>(cls);

    __jsb_cc_pipeline_RenderPipeline_proto = cls->getProto();
    __jsb_cc_pipeline_RenderPipeline_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_ForwardPipeline_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_ForwardPipeline_class = nullptr;  // NOLINT

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_ForwardPipeline_finalize)

static bool js_pipeline_ForwardPipeline_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::ForwardPipeline);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_ForwardPipeline_constructor, __jsb_cc_pipeline_ForwardPipeline_class, js_cc_pipeline_ForwardPipeline_finalize)

static bool js_cc_pipeline_ForwardPipeline_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_ForwardPipeline_finalize)

bool js_register_pipeline_ForwardPipeline(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("ForwardPipeline", obj, __jsb_cc_pipeline_RenderPipeline_proto, _SE(js_pipeline_ForwardPipeline_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_ForwardPipeline_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::ForwardPipeline>(cls);

    __jsb_cc_pipeline_ForwardPipeline_proto = cls->getProto();
    __jsb_cc_pipeline_ForwardPipeline_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_ForwardFlow_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_ForwardFlow_class = nullptr;  // NOLINT

static bool js_pipeline_ForwardFlow_getInitializeInfo_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::pipeline::RenderFlowInfo& result = cc::pipeline::ForwardFlow::getInitializeInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_ForwardFlow_getInitializeInfo_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_ForwardFlow_finalize)

static bool js_pipeline_ForwardFlow_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::ForwardFlow);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_ForwardFlow_constructor, __jsb_cc_pipeline_ForwardFlow_class, js_cc_pipeline_ForwardFlow_finalize)

static bool js_cc_pipeline_ForwardFlow_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_ForwardFlow_finalize)

bool js_register_pipeline_ForwardFlow(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("ForwardFlow", obj, __jsb_cc_pipeline_RenderFlow_proto, _SE(js_pipeline_ForwardFlow_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineStaticFunction("getInitializeInfo", _SE(js_pipeline_ForwardFlow_getInitializeInfo_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_ForwardFlow_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::ForwardFlow>(cls);

    __jsb_cc_pipeline_ForwardFlow_proto = cls->getProto();
    __jsb_cc_pipeline_ForwardFlow_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_ForwardStage_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_ForwardStage_class = nullptr;  // NOLINT

static bool js_pipeline_ForwardStage_getInitializeInfo_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::pipeline::RenderStageInfo& result = cc::pipeline::ForwardStage::getInitializeInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_ForwardStage_getInitializeInfo_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_ForwardStage_finalize)

static bool js_pipeline_ForwardStage_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::ForwardStage);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_ForwardStage_constructor, __jsb_cc_pipeline_ForwardStage_class, js_cc_pipeline_ForwardStage_finalize)

static bool js_cc_pipeline_ForwardStage_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_ForwardStage_finalize)

bool js_register_pipeline_ForwardStage(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("ForwardStage", obj, __jsb_cc_pipeline_RenderStage_proto, _SE(js_pipeline_ForwardStage_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineStaticFunction("getInitializeInfo", _SE(js_pipeline_ForwardStage_getInitializeInfo_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_ForwardStage_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::ForwardStage>(cls);

    __jsb_cc_pipeline_ForwardStage_proto = cls->getProto();
    __jsb_cc_pipeline_ForwardStage_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_ShadowFlow_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_ShadowFlow_class = nullptr;  // NOLINT

static bool js_pipeline_ShadowFlow_getInitializeInfo_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::pipeline::RenderFlowInfo& result = cc::pipeline::ShadowFlow::getInitializeInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_ShadowFlow_getInitializeInfo_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_ShadowFlow_finalize)

static bool js_pipeline_ShadowFlow_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::ShadowFlow);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_ShadowFlow_constructor, __jsb_cc_pipeline_ShadowFlow_class, js_cc_pipeline_ShadowFlow_finalize)

static bool js_cc_pipeline_ShadowFlow_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_ShadowFlow_finalize)

bool js_register_pipeline_ShadowFlow(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("ShadowFlow", obj, __jsb_cc_pipeline_RenderFlow_proto, _SE(js_pipeline_ShadowFlow_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineStaticFunction("getInitializeInfo", _SE(js_pipeline_ShadowFlow_getInitializeInfo_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_ShadowFlow_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::ShadowFlow>(cls);

    __jsb_cc_pipeline_ShadowFlow_proto = cls->getProto();
    __jsb_cc_pipeline_ShadowFlow_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_ShadowStage_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_ShadowStage_class = nullptr;  // NOLINT

static bool js_pipeline_ShadowStage_setFramebuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::ShadowStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Framebuffer*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setFramebuffer(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_ShadowStage_setFramebuffer)

static bool js_pipeline_ShadowStage_setUsage(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::ShadowStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::gfx::DescriptorSet*, false> arg0 = {};
        HolderType<const cc::scene::Light*, false> arg1 = {};
        HolderType<cc::gfx::Framebuffer*, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setUsage(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::gfx::DescriptorSet*, false> arg0 = {};
        HolderType<const cc::scene::Light*, false> arg1 = {};
        HolderType<cc::gfx::Framebuffer*, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setUsage(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_pipeline_ShadowStage_setUsage)

static bool js_pipeline_ShadowStage_getInitializeInfo_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::pipeline::RenderStageInfo& result = cc::pipeline::ShadowStage::getInitializeInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_ShadowStage_getInitializeInfo_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_ShadowStage_finalize)

static bool js_pipeline_ShadowStage_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::ShadowStage);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_ShadowStage_constructor, __jsb_cc_pipeline_ShadowStage_class, js_cc_pipeline_ShadowStage_finalize)

static bool js_cc_pipeline_ShadowStage_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_ShadowStage_finalize)

bool js_register_pipeline_ShadowStage(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("ShadowStage", obj, __jsb_cc_pipeline_RenderStage_proto, _SE(js_pipeline_ShadowStage_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFunction("setFramebuffer", _SE(js_pipeline_ShadowStage_setFramebuffer));
    cls->defineFunction("setUsage", _SE(js_pipeline_ShadowStage_setUsage));
    cls->defineStaticFunction("getInitializeInfo", _SE(js_pipeline_ShadowStage_getInitializeInfo_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_ShadowStage_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::ShadowStage>(cls);

    __jsb_cc_pipeline_ShadowStage_proto = cls->getProto();
    __jsb_cc_pipeline_ShadowStage_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_CSMLayers_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_CSMLayers_class = nullptr;  // NOLINT

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_CSMLayers_finalize)

static bool js_pipeline_CSMLayers_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::CSMLayers);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_CSMLayers_constructor, __jsb_cc_pipeline_CSMLayers_class, js_cc_pipeline_CSMLayers_finalize)

static bool js_cc_pipeline_CSMLayers_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_CSMLayers_finalize)

bool js_register_pipeline_CSMLayers(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("CSMLayers", obj, nullptr, _SE(js_pipeline_CSMLayers_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_CSMLayers_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::CSMLayers>(cls);

    __jsb_cc_pipeline_CSMLayers_proto = cls->getProto();
    __jsb_cc_pipeline_CSMLayers_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_GlobalDSManager_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_GlobalDSManager_class = nullptr;  // NOLINT

static bool js_pipeline_GlobalDSManager_bindBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GlobalDSManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<unsigned int, false> arg0 = {};
        HolderType<cc::gfx::Buffer*, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->bindBuffer(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_GlobalDSManager_bindBuffer)

static bool js_pipeline_GlobalDSManager_bindSampler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GlobalDSManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<unsigned int, false> arg0 = {};
        HolderType<cc::gfx::Sampler*, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->bindSampler(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_GlobalDSManager_bindSampler)

static bool js_pipeline_GlobalDSManager_bindTexture(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GlobalDSManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<unsigned int, false> arg0 = {};
        HolderType<cc::gfx::Texture*, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->bindTexture(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_GlobalDSManager_bindTexture)

static bool js_pipeline_GlobalDSManager_getDescriptorSetLayout(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GlobalDSManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::DescriptorSetLayout* result = cobj->getDescriptorSetLayout();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_GlobalDSManager_getDescriptorSetLayout)

static bool js_pipeline_GlobalDSManager_getGlobalDescriptorSet(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GlobalDSManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::DescriptorSet* result = cobj->getGlobalDescriptorSet();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_GlobalDSManager_getGlobalDescriptorSet)

static bool js_pipeline_GlobalDSManager_getLinearSampler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GlobalDSManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Sampler* result = cobj->getLinearSampler();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_GlobalDSManager_getLinearSampler)

static bool js_pipeline_GlobalDSManager_getOrCreateDescriptorSet(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GlobalDSManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<const cc::scene::Light*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cc::gfx::DescriptorSet* result = cobj->getOrCreateDescriptorSet(arg0.value());
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_GlobalDSManager_getOrCreateDescriptorSet)

static bool js_pipeline_GlobalDSManager_getPointSampler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GlobalDSManager>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Sampler* result = cobj->getPointSampler();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_GlobalDSManager_getPointSampler)

static bool js_pipeline_GlobalDSManager_update(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GlobalDSManager>(s);
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
SE_BIND_FUNC(js_pipeline_GlobalDSManager_update)

static bool js_pipeline_GlobalDSManager_setDescriptorSetLayout_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cc::pipeline::GlobalDSManager::setDescriptorSetLayout();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_GlobalDSManager_setDescriptorSetLayout_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_GlobalDSManager_finalize)

static bool js_pipeline_GlobalDSManager_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::GlobalDSManager);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_GlobalDSManager_constructor, __jsb_cc_pipeline_GlobalDSManager_class, js_cc_pipeline_GlobalDSManager_finalize)

static bool js_cc_pipeline_GlobalDSManager_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_GlobalDSManager_finalize)

bool js_register_pipeline_GlobalDSManager(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("GlobalDSManager", obj, nullptr, _SE(js_pipeline_GlobalDSManager_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFunction("bindBuffer", _SE(js_pipeline_GlobalDSManager_bindBuffer));
    cls->defineFunction("bindSampler", _SE(js_pipeline_GlobalDSManager_bindSampler));
    cls->defineFunction("bindTexture", _SE(js_pipeline_GlobalDSManager_bindTexture));
    cls->defineFunction("getDescriptorSetLayout", _SE(js_pipeline_GlobalDSManager_getDescriptorSetLayout));
    cls->defineFunction("getGlobalDescriptorSet", _SE(js_pipeline_GlobalDSManager_getGlobalDescriptorSet));
    cls->defineFunction("getLinearSampler", _SE(js_pipeline_GlobalDSManager_getLinearSampler));
    cls->defineFunction("getOrCreateDescriptorSet", _SE(js_pipeline_GlobalDSManager_getOrCreateDescriptorSet));
    cls->defineFunction("getPointSampler", _SE(js_pipeline_GlobalDSManager_getPointSampler));
    cls->defineFunction("update", _SE(js_pipeline_GlobalDSManager_update));
    cls->defineStaticFunction("setDescriptorSetLayout", _SE(js_pipeline_GlobalDSManager_setDescriptorSetLayout_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_GlobalDSManager_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::GlobalDSManager>(cls);

    __jsb_cc_pipeline_GlobalDSManager_proto = cls->getProto();
    __jsb_cc_pipeline_GlobalDSManager_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_InstancedBuffer_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_InstancedBuffer_class = nullptr;  // NOLINT

static bool js_pipeline_InstancedBuffer_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::InstancedBuffer>(s);
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
SE_BIND_FUNC(js_pipeline_InstancedBuffer_destroy)

static bool js_pipeline_InstancedBuffer_setDynamicOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::InstancedBuffer>(s);
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
        cobj->setDynamicOffset(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_InstancedBuffer_setDynamicOffset)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_InstancedBuffer_finalize)

static bool js_pipeline_InstancedBuffer_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    const cc::scene::Pass* arg0 = nullptr;
    ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::InstancedBuffer, arg0);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_InstancedBuffer_constructor, __jsb_cc_pipeline_InstancedBuffer_class, js_cc_pipeline_InstancedBuffer_finalize)

static bool js_cc_pipeline_InstancedBuffer_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_InstancedBuffer_finalize)

bool js_register_pipeline_InstancedBuffer(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("InstancedBuffer", obj, nullptr, _SE(js_pipeline_InstancedBuffer_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFunction("destroy", _SE(js_pipeline_InstancedBuffer_destroy));
    cls->defineFunction("setDynamicOffset", _SE(js_pipeline_InstancedBuffer_setDynamicOffset));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_InstancedBuffer_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::InstancedBuffer>(cls);

    __jsb_cc_pipeline_InstancedBuffer_proto = cls->getProto();
    __jsb_cc_pipeline_InstancedBuffer_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_DeferredPipeline_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_DeferredPipeline_class = nullptr;  // NOLINT

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_DeferredPipeline_finalize)

static bool js_pipeline_DeferredPipeline_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::DeferredPipeline);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_DeferredPipeline_constructor, __jsb_cc_pipeline_DeferredPipeline_class, js_cc_pipeline_DeferredPipeline_finalize)

static bool js_cc_pipeline_DeferredPipeline_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_DeferredPipeline_finalize)

bool js_register_pipeline_DeferredPipeline(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("DeferredPipeline", obj, __jsb_cc_pipeline_RenderPipeline_proto, _SE(js_pipeline_DeferredPipeline_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_DeferredPipeline_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::DeferredPipeline>(cls);

    __jsb_cc_pipeline_DeferredPipeline_proto = cls->getProto();
    __jsb_cc_pipeline_DeferredPipeline_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_MainFlow_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_MainFlow_class = nullptr;  // NOLINT

static bool js_pipeline_MainFlow_getInitializeInfo_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::pipeline::RenderFlowInfo& result = cc::pipeline::MainFlow::getInitializeInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_MainFlow_getInitializeInfo_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_MainFlow_finalize)

static bool js_pipeline_MainFlow_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::MainFlow);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_MainFlow_constructor, __jsb_cc_pipeline_MainFlow_class, js_cc_pipeline_MainFlow_finalize)

static bool js_cc_pipeline_MainFlow_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_MainFlow_finalize)

bool js_register_pipeline_MainFlow(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("MainFlow", obj, __jsb_cc_pipeline_RenderFlow_proto, _SE(js_pipeline_MainFlow_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineStaticFunction("getInitializeInfo", _SE(js_pipeline_MainFlow_getInitializeInfo_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_MainFlow_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::MainFlow>(cls);

    __jsb_cc_pipeline_MainFlow_proto = cls->getProto();
    __jsb_cc_pipeline_MainFlow_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_GbufferStage_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_GbufferStage_class = nullptr;  // NOLINT

static bool js_pipeline_GbufferStage_getInitializeInfo_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::pipeline::RenderStageInfo& result = cc::pipeline::GbufferStage::getInitializeInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_GbufferStage_getInitializeInfo_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_GbufferStage_finalize)

static bool js_pipeline_GbufferStage_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::GbufferStage);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_GbufferStage_constructor, __jsb_cc_pipeline_GbufferStage_class, js_cc_pipeline_GbufferStage_finalize)

static bool js_cc_pipeline_GbufferStage_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_GbufferStage_finalize)

bool js_register_pipeline_GbufferStage(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("GbufferStage", obj, __jsb_cc_pipeline_RenderStage_proto, _SE(js_pipeline_GbufferStage_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineStaticFunction("getInitializeInfo", _SE(js_pipeline_GbufferStage_getInitializeInfo_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_GbufferStage_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::GbufferStage>(cls);

    __jsb_cc_pipeline_GbufferStage_proto = cls->getProto();
    __jsb_cc_pipeline_GbufferStage_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_LightingStage_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_LightingStage_class = nullptr;  // NOLINT

static bool js_pipeline_LightingStage_getInitializeInfo_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::pipeline::RenderStageInfo& result = cc::pipeline::LightingStage::getInitializeInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_LightingStage_getInitializeInfo_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_LightingStage_finalize)

static bool js_pipeline_LightingStage_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::LightingStage);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_LightingStage_constructor, __jsb_cc_pipeline_LightingStage_class, js_cc_pipeline_LightingStage_finalize)

static bool js_cc_pipeline_LightingStage_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_LightingStage_finalize)

bool js_register_pipeline_LightingStage(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("LightingStage", obj, __jsb_cc_pipeline_RenderStage_proto, _SE(js_pipeline_LightingStage_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineStaticFunction("getInitializeInfo", _SE(js_pipeline_LightingStage_getInitializeInfo_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_LightingStage_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::LightingStage>(cls);

    __jsb_cc_pipeline_LightingStage_proto = cls->getProto();
    __jsb_cc_pipeline_LightingStage_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_BloomStage_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_BloomStage_class = nullptr;  // NOLINT

static bool js_pipeline_BloomStage_getCombineUBO(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Buffer* result = cobj->getCombineUBO();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BloomStage_getCombineUBO)

static bool js_pipeline_BloomStage_getDownsampleUBO(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        std::array<cc::gfx::Buffer *, 6>& result = cobj->getDownsampleUBO();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BloomStage_getDownsampleUBO)

static bool js_pipeline_BloomStage_getIntensity(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getIntensity();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_BloomStage_getIntensity)

static bool js_pipeline_BloomStage_getIterations(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        int result = cobj->getIterations();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_BloomStage_getIterations)

static bool js_pipeline_BloomStage_getPrefilterUBO(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Buffer* result = cobj->getPrefilterUBO();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BloomStage_getPrefilterUBO)

static bool js_pipeline_BloomStage_getSampler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Sampler* result = cobj->getSampler();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BloomStage_getSampler)

static bool js_pipeline_BloomStage_getThreshold(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getThreshold();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_BloomStage_getThreshold)

static bool js_pipeline_BloomStage_getUpsampleUBO(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        std::array<cc::gfx::Buffer *, 6>& result = cobj->getUpsampleUBO();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BloomStage_getUpsampleUBO)

static bool js_pipeline_BloomStage_setIntensity(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<float, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setIntensity(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_pipeline_BloomStage_setIntensity)

static bool js_pipeline_BloomStage_setIterations(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<int, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setIterations(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_pipeline_BloomStage_setIterations)

static bool js_pipeline_BloomStage_setThreshold(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BloomStage>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<float, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setThreshold(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_pipeline_BloomStage_setThreshold)

static bool js_pipeline_BloomStage_getInitializeInfo_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::pipeline::RenderStageInfo& result = cc::pipeline::BloomStage::getInitializeInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BloomStage_getInitializeInfo_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_BloomStage_finalize)

static bool js_pipeline_BloomStage_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::BloomStage);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_BloomStage_constructor, __jsb_cc_pipeline_BloomStage_class, js_cc_pipeline_BloomStage_finalize)

static bool js_cc_pipeline_BloomStage_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_BloomStage_finalize)

bool js_register_pipeline_BloomStage(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BloomStage", obj, __jsb_cc_pipeline_RenderStage_proto, _SE(js_pipeline_BloomStage_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineProperty("threshold", _SE(js_pipeline_BloomStage_getThreshold_asGetter), _SE(js_pipeline_BloomStage_setThreshold_asSetter));
    cls->defineProperty("intensity", _SE(js_pipeline_BloomStage_getIntensity_asGetter), _SE(js_pipeline_BloomStage_setIntensity_asSetter));
    cls->defineProperty("iterations", _SE(js_pipeline_BloomStage_getIterations_asGetter), _SE(js_pipeline_BloomStage_setIterations_asSetter));
    cls->defineFunction("getCombineUBO", _SE(js_pipeline_BloomStage_getCombineUBO));
    cls->defineFunction("getDownsampleUBO", _SE(js_pipeline_BloomStage_getDownsampleUBO));
    cls->defineFunction("getPrefilterUBO", _SE(js_pipeline_BloomStage_getPrefilterUBO));
    cls->defineFunction("getSampler", _SE(js_pipeline_BloomStage_getSampler));
    cls->defineFunction("getUpsampleUBO", _SE(js_pipeline_BloomStage_getUpsampleUBO));
    cls->defineStaticFunction("getInitializeInfo", _SE(js_pipeline_BloomStage_getInitializeInfo_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_BloomStage_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::BloomStage>(cls);

    __jsb_cc_pipeline_BloomStage_proto = cls->getProto();
    __jsb_cc_pipeline_BloomStage_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_PostProcessStage_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_PostProcessStage_class = nullptr;  // NOLINT

static bool js_pipeline_PostProcessStage_getInitializeInfo_static(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::pipeline::RenderStageInfo& result = cc::pipeline::PostProcessStage::getInitializeInfo();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PostProcessStage_getInitializeInfo_static)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_PostProcessStage_finalize)

static bool js_pipeline_PostProcessStage_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::PostProcessStage);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_PostProcessStage_constructor, __jsb_cc_pipeline_PostProcessStage_class, js_cc_pipeline_PostProcessStage_finalize)

static bool js_cc_pipeline_PostProcessStage_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_PostProcessStage_finalize)

bool js_register_pipeline_PostProcessStage(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("PostProcessStage", obj, __jsb_cc_pipeline_RenderStage_proto, _SE(js_pipeline_PostProcessStage_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineStaticFunction("getInitializeInfo", _SE(js_pipeline_PostProcessStage_getInitializeInfo_static));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_PostProcessStage_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::PostProcessStage>(cls);

    __jsb_cc_pipeline_PostProcessStage_proto = cls->getProto();
    __jsb_cc_pipeline_PostProcessStage_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_PipelineSceneData_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_PipelineSceneData_class = nullptr;  // NOLINT

static bool js_pipeline_PipelineSceneData_activate(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::gfx::Device*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->activate(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_activate)

static bool js_pipeline_PipelineSceneData_addRenderObject(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::pipeline::RenderObject, true> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addRenderObject(std::move(arg0.value()));
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_addRenderObject)

static bool js_pipeline_PipelineSceneData_addValidPunctualLight(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<cc::scene::Light*, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addValidPunctualLight(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_addValidPunctualLight)

static bool js_pipeline_PipelineSceneData_clearRenderObjects(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->clearRenderObjects();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_clearRenderObjects)

static bool js_pipeline_PipelineSceneData_clearValidPunctualLights(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->clearValidPunctualLights();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_clearValidPunctualLights)

static bool js_pipeline_PipelineSceneData_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
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
SE_BIND_FUNC(js_pipeline_PipelineSceneData_destroy)

static bool js_pipeline_PipelineSceneData_getAmbient(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::scene::Ambient* result = cobj->getAmbient();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_PipelineSceneData_getAmbient)

static bool js_pipeline_PipelineSceneData_getDebugRendererPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::scene::Pass* result = cobj->getDebugRendererPass();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getDebugRendererPass)

static bool js_pipeline_PipelineSceneData_getDebugRendererShader(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Shader* result = cobj->getDebugRendererShader();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getDebugRendererShader)

static bool js_pipeline_PipelineSceneData_getFog(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::scene::Fog* result = cobj->getFog();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_PipelineSceneData_getFog)

static bool js_pipeline_PipelineSceneData_getGeometryRendererMaterials(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::IntrusivePtr<cc::Material>>& result = cobj->getGeometryRendererMaterials();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getGeometryRendererMaterials)

static bool js_pipeline_PipelineSceneData_getGeometryRendererPasses(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::scene::Pass *>& result = cobj->getGeometryRendererPasses();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getGeometryRendererPasses)

static bool js_pipeline_PipelineSceneData_getGeometryRendererShaders(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::gfx::Shader *>& result = cobj->getGeometryRendererShaders();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getGeometryRendererShaders)

static bool js_pipeline_PipelineSceneData_getOcclusionQueryInputAssembler(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::InputAssembler* result = cobj->getOcclusionQueryInputAssembler();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getOcclusionQueryInputAssembler)

static bool js_pipeline_PipelineSceneData_getOcclusionQueryPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::scene::Pass* result = cobj->getOcclusionQueryPass();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getOcclusionQueryPass)

static bool js_pipeline_PipelineSceneData_getOcclusionQueryShader(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::gfx::Shader* result = cobj->getOcclusionQueryShader();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getOcclusionQueryShader)

static bool js_pipeline_PipelineSceneData_getOctree(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::scene::Octree* result = cobj->getOctree();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getOctree)

static bool js_pipeline_PipelineSceneData_getShadingScale(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        float result = cobj->getShadingScale();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_PipelineSceneData_getShadingScale)

static bool js_pipeline_PipelineSceneData_getShadows(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::scene::Shadows* result = cobj->getShadows();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_PipelineSceneData_getShadows)

static bool js_pipeline_PipelineSceneData_getSkybox(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        cc::scene::Skybox* result = cobj->getSkybox();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_PipelineSceneData_getSkybox)

static bool js_pipeline_PipelineSceneData_getValidPunctualLights(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<const cc::scene::Light *>& result = cobj->getValidPunctualLights();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_getValidPunctualLights)

static bool js_pipeline_PipelineSceneData_isHDR(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->isHDR();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC_AS_PROP_GET(js_pipeline_PipelineSceneData_isHDR)

static bool js_pipeline_PipelineSceneData_setHDR(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<bool, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setHDR(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_pipeline_PipelineSceneData_setHDR)

static bool js_pipeline_PipelineSceneData_setShadingScale(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        HolderType<float, false> arg0 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setShadingScale(arg0.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC_AS_PROP_SET(js_pipeline_PipelineSceneData_setShadingScale)

static bool js_pipeline_PipelineSceneData_setShadowFramebuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<const cc::scene::Light*, false> arg0 = {};
        HolderType<cc::gfx::Framebuffer*, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->setShadowFramebuffer(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_setShadowFramebuffer)

static bool js_pipeline_PipelineSceneData_updatePipelineSceneData(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::PipelineSceneData>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->updatePipelineSceneData();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_PipelineSceneData_updatePipelineSceneData)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_PipelineSceneData_finalize)

static bool js_pipeline_PipelineSceneData_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::PipelineSceneData);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_PipelineSceneData_constructor, __jsb_cc_pipeline_PipelineSceneData_class, js_cc_pipeline_PipelineSceneData_finalize)

static bool js_cc_pipeline_PipelineSceneData_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_PipelineSceneData_finalize)

bool js_register_pipeline_PipelineSceneData(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("PipelineSceneData", obj, nullptr, _SE(js_pipeline_PipelineSceneData_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineProperty("isHDR", _SE(js_pipeline_PipelineSceneData_isHDR_asGetter), _SE(js_pipeline_PipelineSceneData_setHDR_asSetter));
    cls->defineProperty("shadingScale", _SE(js_pipeline_PipelineSceneData_getShadingScale_asGetter), _SE(js_pipeline_PipelineSceneData_setShadingScale_asSetter));
    cls->defineProperty("fog", _SE(js_pipeline_PipelineSceneData_getFog_asGetter), nullptr);
    cls->defineProperty("ambient", _SE(js_pipeline_PipelineSceneData_getAmbient_asGetter), nullptr);
    cls->defineProperty("skybox", _SE(js_pipeline_PipelineSceneData_getSkybox_asGetter), nullptr);
    cls->defineProperty("shadows", _SE(js_pipeline_PipelineSceneData_getShadows_asGetter), nullptr);
    cls->defineFunction("activate", _SE(js_pipeline_PipelineSceneData_activate));
    cls->defineFunction("addRenderObject", _SE(js_pipeline_PipelineSceneData_addRenderObject));
    cls->defineFunction("addValidPunctualLight", _SE(js_pipeline_PipelineSceneData_addValidPunctualLight));
    cls->defineFunction("clearRenderObjects", _SE(js_pipeline_PipelineSceneData_clearRenderObjects));
    cls->defineFunction("clearValidPunctualLights", _SE(js_pipeline_PipelineSceneData_clearValidPunctualLights));
    cls->defineFunction("destroy", _SE(js_pipeline_PipelineSceneData_destroy));
    cls->defineFunction("getDebugRendererPass", _SE(js_pipeline_PipelineSceneData_getDebugRendererPass));
    cls->defineFunction("getDebugRendererShader", _SE(js_pipeline_PipelineSceneData_getDebugRendererShader));
    cls->defineFunction("getGeometryRendererMaterials", _SE(js_pipeline_PipelineSceneData_getGeometryRendererMaterials));
    cls->defineFunction("getGeometryRendererPasses", _SE(js_pipeline_PipelineSceneData_getGeometryRendererPasses));
    cls->defineFunction("getGeometryRendererShaders", _SE(js_pipeline_PipelineSceneData_getGeometryRendererShaders));
    cls->defineFunction("getOcclusionQueryInputAssembler", _SE(js_pipeline_PipelineSceneData_getOcclusionQueryInputAssembler));
    cls->defineFunction("getOcclusionQueryPass", _SE(js_pipeline_PipelineSceneData_getOcclusionQueryPass));
    cls->defineFunction("getOcclusionQueryShader", _SE(js_pipeline_PipelineSceneData_getOcclusionQueryShader));
    cls->defineFunction("getOctree", _SE(js_pipeline_PipelineSceneData_getOctree));
    cls->defineFunction("getValidPunctualLights", _SE(js_pipeline_PipelineSceneData_getValidPunctualLights));
    cls->defineFunction("setShadowFramebuffer", _SE(js_pipeline_PipelineSceneData_setShadowFramebuffer));
    cls->defineFunction("updatePipelineSceneData", _SE(js_pipeline_PipelineSceneData_updatePipelineSceneData));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_PipelineSceneData_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::PipelineSceneData>(cls);

    __jsb_cc_pipeline_PipelineSceneData_proto = cls->getProto();
    __jsb_cc_pipeline_PipelineSceneData_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_BatchedItem_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_BatchedItem_class = nullptr;  // NOLINT

static bool js_pipeline_BatchedItem_get_vbs(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->vbs, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->vbs, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_vbs)

static bool js_pipeline_BatchedItem_set_vbs(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->vbs, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_vbs)

static bool js_pipeline_BatchedItem_get_vbDatas(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->vbDatas, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->vbDatas, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_vbDatas)

static bool js_pipeline_BatchedItem_set_vbDatas(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->vbDatas, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_vbDatas)

static bool js_pipeline_BatchedItem_get_indexBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->indexBuffer, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->indexBuffer, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_indexBuffer)

static bool js_pipeline_BatchedItem_set_indexBuffer(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->indexBuffer, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_indexBuffer)

static bool js_pipeline_BatchedItem_get_indexData(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->indexData, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->indexData, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_indexData)

static bool js_pipeline_BatchedItem_set_indexData(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->indexData, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_indexData)

static bool js_pipeline_BatchedItem_get_vbCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->vbCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->vbCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_vbCount)

static bool js_pipeline_BatchedItem_set_vbCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->vbCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_vbCount)

static bool js_pipeline_BatchedItem_get_mergeCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->mergeCount, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->mergeCount, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_mergeCount)

static bool js_pipeline_BatchedItem_set_mergeCount(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->mergeCount, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_mergeCount)

static bool js_pipeline_BatchedItem_get_ia(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->ia, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->ia, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_ia)

static bool js_pipeline_BatchedItem_set_ia(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->ia, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_ia)

static bool js_pipeline_BatchedItem_get_ubo(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->ubo, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->ubo, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_ubo)

static bool js_pipeline_BatchedItem_set_ubo(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->ubo, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_ubo)

static bool js_pipeline_BatchedItem_get_uboData(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->uboData, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->uboData, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_uboData)

static bool js_pipeline_BatchedItem_set_uboData(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->uboData, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_uboData)

static bool js_pipeline_BatchedItem_get_descriptorSet(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->descriptorSet, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->descriptorSet, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_descriptorSet)

static bool js_pipeline_BatchedItem_set_descriptorSet(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->descriptorSet, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_descriptorSet)

static bool js_pipeline_BatchedItem_get_pass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->pass, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->pass, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_pass)

static bool js_pipeline_BatchedItem_set_pass(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->pass, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_pass)

static bool js_pipeline_BatchedItem_get_shader(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;

    CC_UNUSED bool ok = true;
    se::Value jsret;
    ok &= nativevalue_to_se(cobj->shader, jsret, s.thisObject() /*ctx*/);
    s.rval() = jsret;
    SE_HOLD_RETURN_VALUE(cobj->shader, s.thisObject(), s.rval());
    return true;
}
SE_BIND_PROP_GET(js_pipeline_BatchedItem_get_shader)

static bool js_pipeline_BatchedItem_set_shader(se::State& s) // NOLINT(readability-identifier-naming)
{
    const auto& args = s.args();
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedItem>(s);
    SE_PRECONDITION2(cobj, false, "Invalid Native Object");

    CC_UNUSED bool ok = true;
    ok &= sevalue_to_native(args[0], &cobj->shader, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing new value");
    return true;
}
SE_BIND_PROP_SET(js_pipeline_BatchedItem_set_shader)


template<>
bool sevalue_to_native(const se::Value &from, cc::pipeline::BatchedItem * to, se::Object *ctx)
{
    assert(from.isObject());
    se::Object *json = from.toObject();
    auto* data = reinterpret_cast<cc::pipeline::BatchedItem*>(json->getPrivateData());
    if (data) {
        *to = *data;
        return true;
    }
    se::Value field;
    bool ok = true;
    json->getProperty("vbs", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->vbs), ctx);
    }
    json->getProperty("vbDatas", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->vbDatas), ctx);
    }
    json->getProperty("indexBuffer", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->indexBuffer), ctx);
    }
    json->getProperty("indexData", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->indexData), ctx);
    }
    json->getProperty("vbCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->vbCount), ctx);
    }
    json->getProperty("mergeCount", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->mergeCount), ctx);
    }
    json->getProperty("ia", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->ia), ctx);
    }
    json->getProperty("ubo", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->ubo), ctx);
    }
    json->getProperty("uboData", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->uboData), ctx);
    }
    json->getProperty("descriptorSet", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->descriptorSet), ctx);
    }
    json->getProperty("pass", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->pass), ctx);
    }
    json->getProperty("shader", &field, true);
    if(!field.isNullOrUndefined()) {
        ok &= sevalue_to_native(field, &(to->shader), ctx);
    }
    return ok;
}

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_BatchedItem_finalize)

static bool js_pipeline_BatchedItem_constructor(se::State& s) // NOLINT(readability-identifier-naming)
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    size_t argc = args.size();

    if(argc == 0)
    {
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::BatchedItem);
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }

    if(argc == 1 && args[0].isObject())
    {
        se::Object *json = args[0].toObject();
        se::Value field;
        auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::BatchedItem);
        auto cobj = ptr->get<cc::pipeline::BatchedItem>();
        ok &= sevalue_to_native(args[0], cobj, s.thisObject());
        if(!ok) {
            delete ptr;
            SE_REPORT_ERROR("argument convertion error");
            return false;
        }
        s.thisObject()->setPrivateObject(ptr);
        return true;
    }
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::BatchedItem);
    auto cobj = ptr->get<cc::pipeline::BatchedItem>();
    if (argc > 0 && !args[0].isUndefined()) {
        ok &= sevalue_to_native(args[0], &(cobj->vbs), nullptr);
    }
    if (argc > 1 && !args[1].isUndefined()) {
        ok &= sevalue_to_native(args[1], &(cobj->vbDatas), nullptr);
    }
    if (argc > 2 && !args[2].isUndefined()) {
        ok &= sevalue_to_native(args[2], &(cobj->indexBuffer), nullptr);
    }
    if (argc > 3 && !args[3].isUndefined()) {
        ok &= sevalue_to_native(args[3], &(cobj->indexData), nullptr);
    }
    if (argc > 4 && !args[4].isUndefined()) {
        ok &= sevalue_to_native(args[4], &(cobj->vbCount), nullptr);
    }
    if (argc > 5 && !args[5].isUndefined()) {
        ok &= sevalue_to_native(args[5], &(cobj->mergeCount), nullptr);
    }
    if (argc > 6 && !args[6].isUndefined()) {
        ok &= sevalue_to_native(args[6], &(cobj->ia), nullptr);
    }
    if (argc > 7 && !args[7].isUndefined()) {
        ok &= sevalue_to_native(args[7], &(cobj->ubo), nullptr);
    }
    if (argc > 8 && !args[8].isUndefined()) {
        ok &= sevalue_to_native(args[8], &(cobj->uboData), nullptr);
    }
    if (argc > 9 && !args[9].isUndefined()) {
        ok &= sevalue_to_native(args[9], &(cobj->descriptorSet), nullptr);
    }
    if (argc > 10 && !args[10].isUndefined()) {
        ok &= sevalue_to_native(args[10], &(cobj->pass), nullptr);
    }
    if (argc > 11 && !args[11].isUndefined()) {
        ok &= sevalue_to_native(args[11], &(cobj->shader), nullptr);
    }

    if(!ok) {
        delete ptr;
        SE_REPORT_ERROR("Argument convertion error");
        return false;
    }
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_BatchedItem_constructor, __jsb_cc_pipeline_BatchedItem_class, js_cc_pipeline_BatchedItem_finalize)

static bool js_cc_pipeline_BatchedItem_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_BatchedItem_finalize)

bool js_register_pipeline_BatchedItem(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BatchedItem", obj, nullptr, _SE(js_pipeline_BatchedItem_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineProperty("vbs", _SE(js_pipeline_BatchedItem_get_vbs), _SE(js_pipeline_BatchedItem_set_vbs));
    cls->defineProperty("vbDatas", _SE(js_pipeline_BatchedItem_get_vbDatas), _SE(js_pipeline_BatchedItem_set_vbDatas));
    cls->defineProperty("indexBuffer", _SE(js_pipeline_BatchedItem_get_indexBuffer), _SE(js_pipeline_BatchedItem_set_indexBuffer));
    cls->defineProperty("indexData", _SE(js_pipeline_BatchedItem_get_indexData), _SE(js_pipeline_BatchedItem_set_indexData));
    cls->defineProperty("vbCount", _SE(js_pipeline_BatchedItem_get_vbCount), _SE(js_pipeline_BatchedItem_set_vbCount));
    cls->defineProperty("mergeCount", _SE(js_pipeline_BatchedItem_get_mergeCount), _SE(js_pipeline_BatchedItem_set_mergeCount));
    cls->defineProperty("ia", _SE(js_pipeline_BatchedItem_get_ia), _SE(js_pipeline_BatchedItem_set_ia));
    cls->defineProperty("ubo", _SE(js_pipeline_BatchedItem_get_ubo), _SE(js_pipeline_BatchedItem_set_ubo));
    cls->defineProperty("uboData", _SE(js_pipeline_BatchedItem_get_uboData), _SE(js_pipeline_BatchedItem_set_uboData));
    cls->defineProperty("descriptorSet", _SE(js_pipeline_BatchedItem_get_descriptorSet), _SE(js_pipeline_BatchedItem_set_descriptorSet));
    cls->defineProperty("pass", _SE(js_pipeline_BatchedItem_get_pass), _SE(js_pipeline_BatchedItem_set_pass));
    cls->defineProperty("shader", _SE(js_pipeline_BatchedItem_get_shader), _SE(js_pipeline_BatchedItem_set_shader));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_BatchedItem_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::BatchedItem>(cls);

    __jsb_cc_pipeline_BatchedItem_proto = cls->getProto();
    __jsb_cc_pipeline_BatchedItem_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
se::Object* __jsb_cc_pipeline_BatchedBuffer_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_BatchedBuffer_class = nullptr;  // NOLINT

static bool js_pipeline_BatchedBuffer_clear(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    if (argc == 0) {
        cobj->clear();
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BatchedBuffer_clear)

static bool js_pipeline_BatchedBuffer_destroy(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedBuffer>(s);
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
SE_BIND_FUNC(js_pipeline_BatchedBuffer_destroy)

static bool js_pipeline_BatchedBuffer_getBatches(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<cc::pipeline::BatchedItem>& result = cobj->getBatches();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BatchedBuffer_getBatches)

static bool js_pipeline_BatchedBuffer_getDynamicOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const std::vector<unsigned int>& result = cobj->getDynamicOffset();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BatchedBuffer_getDynamicOffset)

static bool js_pipeline_BatchedBuffer_getPass(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        const cc::scene::Pass* result = cobj->getPass();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_BatchedBuffer_getPass)

static bool js_pipeline_BatchedBuffer_merge(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedBuffer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<const cc::scene::SubModel*, false> arg0 = {};
        HolderType<unsigned int, false> arg1 = {};
        HolderType<const cc::scene::Model*, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->merge(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_pipeline_BatchedBuffer_merge)

static bool js_pipeline_BatchedBuffer_setDynamicOffset(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::BatchedBuffer>(s);
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
        cobj->setDynamicOffset(arg0.value(), arg1.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 2);
    return false;
}
SE_BIND_FUNC(js_pipeline_BatchedBuffer_setDynamicOffset)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_BatchedBuffer_finalize)

static bool js_pipeline_BatchedBuffer_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    CC_UNUSED bool ok = true;
    const auto& args = s.args();
    const cc::scene::Pass* arg0 = nullptr;
    ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
    SE_PRECONDITION2(ok, false, "Error processing arguments");
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::BatchedBuffer, arg0);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_BatchedBuffer_constructor, __jsb_cc_pipeline_BatchedBuffer_class, js_cc_pipeline_BatchedBuffer_finalize)

static bool js_cc_pipeline_BatchedBuffer_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_BatchedBuffer_finalize)

bool js_register_pipeline_BatchedBuffer(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("BatchedBuffer", obj, nullptr, _SE(js_pipeline_BatchedBuffer_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFunction("clear", _SE(js_pipeline_BatchedBuffer_clear));
    cls->defineFunction("destroy", _SE(js_pipeline_BatchedBuffer_destroy));
    cls->defineFunction("getBatches", _SE(js_pipeline_BatchedBuffer_getBatches));
    cls->defineFunction("getDynamicOffset", _SE(js_pipeline_BatchedBuffer_getDynamicOffset));
    cls->defineFunction("getPass", _SE(js_pipeline_BatchedBuffer_getPass));
    cls->defineFunction("merge", _SE(js_pipeline_BatchedBuffer_merge));
    cls->defineFunction("setDynamicOffset", _SE(js_pipeline_BatchedBuffer_setDynamicOffset));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_BatchedBuffer_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::BatchedBuffer>(cls);

    __jsb_cc_pipeline_BatchedBuffer_proto = cls->getProto();
    __jsb_cc_pipeline_BatchedBuffer_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
#if CC_USE_GEOMETRY_RENDERER
se::Object* __jsb_cc_pipeline_GeometryRenderer_proto = nullptr; // NOLINT
se::Class* __jsb_cc_pipeline_GeometryRenderer_class = nullptr;  // NOLINT

static bool js_pipeline_GeometryRenderer_addArc(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addArc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addArc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addArc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addArc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<cc::Mat4, true> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addArc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 9);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addArc)

static bool js_pipeline_GeometryRenderer_addBezier(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::Vec3, true> arg3 = {};
        HolderType<cc::gfx::Color, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBezier(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::Vec3, true> arg3 = {};
        HolderType<cc::gfx::Color, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBezier(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::Vec3, true> arg3 = {};
        HolderType<cc::gfx::Color, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBezier(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::Vec3, true> arg3 = {};
        HolderType<cc::gfx::Color, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBezier(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::Vec3, true> arg3 = {};
        HolderType<cc::gfx::Color, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<cc::Mat4, true> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBezier(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 9);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addBezier)

static bool js_pipeline_GeometryRenderer_addBoundingBox(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<cc::geometry::AABB, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBoundingBox(arg0.value(), arg1.value());
        return true;
    }
    if (argc == 3) {
        HolderType<cc::geometry::AABB, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<bool, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBoundingBox(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::geometry::AABB, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<bool, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBoundingBox(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::geometry::AABB, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<bool, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBoundingBox(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::geometry::AABB, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<bool, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBoundingBox(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::geometry::AABB, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<bool, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<cc::Mat4, true> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addBoundingBox(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 7);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addBoundingBox)

static bool js_pipeline_GeometryRenderer_addCapsule(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCapsule(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCapsule(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCapsule(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCapsule(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCapsule(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCapsule(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    if (argc == 10) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        HolderType<bool, false> arg9 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        ok &= sevalue_to_native(args[9], &arg9, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCapsule(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value(), arg9.value());
        return true;
    }
    if (argc == 11) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        HolderType<bool, false> arg9 = {};
        HolderType<cc::Mat4, true> arg10 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        ok &= sevalue_to_native(args[9], &arg9, s.thisObject());
        ok &= sevalue_to_native(args[10], &arg10, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCapsule(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value(), arg9.value(), arg10.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 11);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addCapsule)

static bool js_pipeline_GeometryRenderer_addCircle(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCircle(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCircle(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCircle(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCircle(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<cc::Mat4, true> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCircle(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 7);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addCircle)

static bool js_pipeline_GeometryRenderer_addCone(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCone(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCone(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCone(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCone(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCone(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCone(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    if (argc == 10) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        HolderType<cc::Mat4, true> arg9 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        ok &= sevalue_to_native(args[9], &arg9, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCone(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value(), arg9.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 10);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addCone)

static bool js_pipeline_GeometryRenderer_addCross(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCross(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCross(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addCross)

static bool js_pipeline_GeometryRenderer_addCylinder(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCylinder(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCylinder(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCylinder(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCylinder(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCylinder(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCylinder(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    if (argc == 10) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        HolderType<cc::Mat4, true> arg9 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        ok &= sevalue_to_native(args[9], &arg9, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addCylinder(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value(), arg9.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 10);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addCylinder)

static bool js_pipeline_GeometryRenderer_addDashedLine(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addDashedLine(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addDashedLine(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addDashedLine)

static bool js_pipeline_GeometryRenderer_addDisc(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addDisc(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addDisc(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addDisc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addDisc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addDisc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addDisc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<cc::Mat4, true> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addDisc(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 9);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addDisc)

static bool js_pipeline_GeometryRenderer_addFrustum(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<cc::geometry::Frustum, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addFrustum(arg0.value(), arg1.value());
        return true;
    }
    if (argc == 3) {
        HolderType<cc::geometry::Frustum, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<bool, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addFrustum(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 3);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addFrustum)

static bool js_pipeline_GeometryRenderer_addIndexedMesh(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<std::vector<cc::Vec3>, true> arg1 = {};
        HolderType<std::vector<unsigned int>, true> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addIndexedMesh(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<std::vector<cc::Vec3>, true> arg1 = {};
        HolderType<std::vector<unsigned int>, true> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addIndexedMesh(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<std::vector<cc::Vec3>, true> arg1 = {};
        HolderType<std::vector<unsigned int>, true> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addIndexedMesh(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<std::vector<cc::Vec3>, true> arg1 = {};
        HolderType<std::vector<unsigned int>, true> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<cc::Mat4, true> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addIndexedMesh(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 7);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addIndexedMesh)

static bool js_pipeline_GeometryRenderer_addLine(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addLine(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addLine(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 4);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addLine)

static bool js_pipeline_GeometryRenderer_addMesh(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<std::vector<cc::Vec3>, true> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addMesh(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<std::vector<cc::Vec3>, true> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addMesh(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<std::vector<cc::Vec3>, true> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addMesh(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<std::vector<cc::Vec3>, true> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<cc::Mat4, true> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addMesh(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 6);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addMesh)

static bool js_pipeline_GeometryRenderer_addOctahedron(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addOctahedron(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addOctahedron(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addOctahedron(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addOctahedron(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addOctahedron(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<bool, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<cc::Mat4, true> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addOctahedron(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 8);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addOctahedron)

static bool js_pipeline_GeometryRenderer_addPolygon(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addPolygon(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addPolygon(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addPolygon(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addPolygon(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addPolygon(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addPolygon(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<cc::Mat4, true> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addPolygon(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 9);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addPolygon)

static bool js_pipeline_GeometryRenderer_addQuad(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::Vec3, true> arg3 = {};
        HolderType<cc::gfx::Color, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addQuad(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::Vec3, true> arg3 = {};
        HolderType<cc::gfx::Color, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addQuad(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::Vec3, true> arg3 = {};
        HolderType<cc::gfx::Color, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addQuad(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::Vec3, true> arg3 = {};
        HolderType<cc::gfx::Color, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addQuad(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 8);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addQuad)

static bool js_pipeline_GeometryRenderer_addSector(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSector(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSector(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSector(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSector(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSector(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    if (argc == 10) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        HolderType<bool, false> arg9 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        ok &= sevalue_to_native(args[9], &arg9, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSector(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value(), arg9.value());
        return true;
    }
    if (argc == 11) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<float, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        HolderType<bool, false> arg9 = {};
        HolderType<cc::Mat4, true> arg10 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        ok &= sevalue_to_native(args[9], &arg9, s.thisObject());
        ok &= sevalue_to_native(args[10], &arg10, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSector(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value(), arg9.value(), arg10.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 11);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addSector)

static bool js_pipeline_GeometryRenderer_addSphere(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 3) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSphere(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSphere(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSphere(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSphere(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSphere(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSphere(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSphere(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    if (argc == 10) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<cc::gfx::Color, false> arg2 = {};
        HolderType<unsigned int, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        HolderType<cc::Mat4, true> arg9 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        ok &= sevalue_to_native(args[9], &arg9, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSphere(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value(), arg9.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 10);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addSphere)

static bool js_pipeline_GeometryRenderer_addSpline(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 2) {
        HolderType<cc::geometry::Spline, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSpline(arg0.value(), arg1.value());
        return true;
    }
    if (argc == 3) {
        HolderType<cc::geometry::Spline, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<unsigned int, false> arg2 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSpline(arg0.value(), arg1.value(), arg2.value());
        return true;
    }
    if (argc == 4) {
        HolderType<cc::geometry::Spline, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<unsigned int, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSpline(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::geometry::Spline, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<unsigned int, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSpline(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::geometry::Spline, true> arg0 = {};
        HolderType<cc::gfx::Color, false> arg1 = {};
        HolderType<unsigned int, false> arg2 = {};
        HolderType<float, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addSpline(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 6);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addSpline)

static bool js_pipeline_GeometryRenderer_addTorus(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTorus(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTorus(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTorus(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTorus(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    if (argc == 8) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTorus(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value());
        return true;
    }
    if (argc == 9) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTorus(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value());
        return true;
    }
    if (argc == 10) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        HolderType<bool, false> arg9 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        ok &= sevalue_to_native(args[9], &arg9, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTorus(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value(), arg9.value());
        return true;
    }
    if (argc == 11) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<float, false> arg1 = {};
        HolderType<float, false> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<unsigned int, false> arg4 = {};
        HolderType<unsigned int, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        HolderType<bool, false> arg7 = {};
        HolderType<bool, false> arg8 = {};
        HolderType<bool, false> arg9 = {};
        HolderType<cc::Mat4, true> arg10 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        ok &= sevalue_to_native(args[7], &arg7, s.thisObject());
        ok &= sevalue_to_native(args[8], &arg8, s.thisObject());
        ok &= sevalue_to_native(args[9], &arg9, s.thisObject());
        ok &= sevalue_to_native(args[10], &arg10, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTorus(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value(), arg7.value(), arg8.value(), arg9.value(), arg10.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 11);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addTorus)

static bool js_pipeline_GeometryRenderer_addTriangle(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 4) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTriangle(arg0.value(), arg1.value(), arg2.value(), arg3.value());
        return true;
    }
    if (argc == 5) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTriangle(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value());
        return true;
    }
    if (argc == 6) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTriangle(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value());
        return true;
    }
    if (argc == 7) {
        HolderType<cc::Vec3, true> arg0 = {};
        HolderType<cc::Vec3, true> arg1 = {};
        HolderType<cc::Vec3, true> arg2 = {};
        HolderType<cc::gfx::Color, false> arg3 = {};
        HolderType<bool, false> arg4 = {};
        HolderType<bool, false> arg5 = {};
        HolderType<bool, false> arg6 = {};
        ok &= sevalue_to_native(args[0], &arg0, s.thisObject());
        ok &= sevalue_to_native(args[1], &arg1, s.thisObject());
        ok &= sevalue_to_native(args[2], &arg2, s.thisObject());
        ok &= sevalue_to_native(args[3], &arg3, s.thisObject());
        ok &= sevalue_to_native(args[4], &arg4, s.thisObject());
        ok &= sevalue_to_native(args[5], &arg5, s.thisObject());
        ok &= sevalue_to_native(args[6], &arg6, s.thisObject());
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        cobj->addTriangle(arg0.value(), arg1.value(), arg2.value(), arg3.value(), arg4.value(), arg5.value(), arg6.value());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 7);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_addTriangle)

static bool js_pipeline_GeometryRenderer_empty(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
    // SE_PRECONDITION2(cobj, false, "Invalid Native Object");
    if (nullptr == cobj) return true;
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 0) {
        bool result = cobj->empty();
        ok &= nativevalue_to_se(result, s.rval(), nullptr /*ctx*/);
        SE_PRECONDITION2(ok, false, "Error processing arguments");
        SE_HOLD_RETURN_VALUE(result, s.thisObject(), s.rval());
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 0);
    return false;
}
SE_BIND_FUNC(js_pipeline_GeometryRenderer_empty)

static bool js_pipeline_GeometryRenderer_update(se::State& s) // NOLINT(readability-identifier-naming)
{
    auto* cobj = SE_THIS_OBJECT<cc::pipeline::GeometryRenderer>(s);
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
SE_BIND_FUNC(js_pipeline_GeometryRenderer_update)

SE_DECLARE_FINALIZE_FUNC(js_cc_pipeline_GeometryRenderer_finalize)

static bool js_pipeline_GeometryRenderer_constructor(se::State& s) // NOLINT(readability-identifier-naming) constructor.c
{
    auto *ptr = JSB_MAKE_PRIVATE_OBJECT(cc::pipeline::GeometryRenderer);
    s.thisObject()->setPrivateObject(ptr);
    return true;
}
SE_BIND_CTOR(js_pipeline_GeometryRenderer_constructor, __jsb_cc_pipeline_GeometryRenderer_class, js_cc_pipeline_GeometryRenderer_finalize)

static bool js_cc_pipeline_GeometryRenderer_finalize(se::State& s) // NOLINT(readability-identifier-naming)
{
    return true;
}
SE_BIND_FINALIZE_FUNC(js_cc_pipeline_GeometryRenderer_finalize)

bool js_register_pipeline_GeometryRenderer(se::Object* obj) // NOLINT(readability-identifier-naming)
{
    auto* cls = se::Class::create("GeometryRenderer", obj, nullptr, _SE(js_pipeline_GeometryRenderer_constructor));

#if CC_DEBUG
    cls->defineStaticProperty("isJSBClass", _SE(js_pipeline_getter_return_true), nullptr);
#endif
    cls->defineFunction("addArc", _SE(js_pipeline_GeometryRenderer_addArc));
    cls->defineFunction("addBezier", _SE(js_pipeline_GeometryRenderer_addBezier));
    cls->defineFunction("addBoundingBox", _SE(js_pipeline_GeometryRenderer_addBoundingBox));
    cls->defineFunction("addCapsule", _SE(js_pipeline_GeometryRenderer_addCapsule));
    cls->defineFunction("addCircle", _SE(js_pipeline_GeometryRenderer_addCircle));
    cls->defineFunction("addCone", _SE(js_pipeline_GeometryRenderer_addCone));
    cls->defineFunction("addCross", _SE(js_pipeline_GeometryRenderer_addCross));
    cls->defineFunction("addCylinder", _SE(js_pipeline_GeometryRenderer_addCylinder));
    cls->defineFunction("addDashedLine", _SE(js_pipeline_GeometryRenderer_addDashedLine));
    cls->defineFunction("addDisc", _SE(js_pipeline_GeometryRenderer_addDisc));
    cls->defineFunction("addFrustum", _SE(js_pipeline_GeometryRenderer_addFrustum));
    cls->defineFunction("addIndexedMesh", _SE(js_pipeline_GeometryRenderer_addIndexedMesh));
    cls->defineFunction("addLine", _SE(js_pipeline_GeometryRenderer_addLine));
    cls->defineFunction("addMesh", _SE(js_pipeline_GeometryRenderer_addMesh));
    cls->defineFunction("addOctahedron", _SE(js_pipeline_GeometryRenderer_addOctahedron));
    cls->defineFunction("addPolygon", _SE(js_pipeline_GeometryRenderer_addPolygon));
    cls->defineFunction("addQuad", _SE(js_pipeline_GeometryRenderer_addQuad));
    cls->defineFunction("addSector", _SE(js_pipeline_GeometryRenderer_addSector));
    cls->defineFunction("addSphere", _SE(js_pipeline_GeometryRenderer_addSphere));
    cls->defineFunction("addSpline", _SE(js_pipeline_GeometryRenderer_addSpline));
    cls->defineFunction("addTorus", _SE(js_pipeline_GeometryRenderer_addTorus));
    cls->defineFunction("addTriangle", _SE(js_pipeline_GeometryRenderer_addTriangle));
    cls->defineFunction("empty", _SE(js_pipeline_GeometryRenderer_empty));
    cls->defineFunction("update", _SE(js_pipeline_GeometryRenderer_update));
    cls->defineFinalizeFunction(_SE(js_cc_pipeline_GeometryRenderer_finalize));
    cls->install();
    JSBClassType::registerClass<cc::pipeline::GeometryRenderer>(cls);

    __jsb_cc_pipeline_GeometryRenderer_proto = cls->getProto();
    __jsb_cc_pipeline_GeometryRenderer_class = cls;


    se::ScriptEngine::getInstance()->clearException();
    return true;
}
#endif // CC_USE_GEOMETRY_RENDERER
bool register_all_pipeline(se::Object* obj)    // NOLINT
{
    // Get the ns
    se::Value nsVal;
    if (!obj->getProperty("nr", &nsVal, true))
    {
        se::HandleObject jsobj(se::Object::createPlainObject());
        nsVal.setObject(jsobj);
        obj->setProperty("nr", nsVal);
    }
    se::Object* ns = nsVal.toObject();

    js_register_pipeline_BatchedBuffer(ns);
    js_register_pipeline_BatchedItem(ns);
    js_register_pipeline_RenderStage(ns);
    js_register_pipeline_BloomStage(ns);
    js_register_pipeline_CSMLayers(ns);
    js_register_pipeline_RenderPipeline(ns);
    js_register_pipeline_DeferredPipeline(ns);
    js_register_pipeline_RenderFlow(ns);
    js_register_pipeline_ForwardFlow(ns);
    js_register_pipeline_ForwardPipeline(ns);
    js_register_pipeline_ForwardStage(ns);
    js_register_pipeline_GbufferStage(ns);
    #if CC_USE_GEOMETRY_RENDERER
    js_register_pipeline_GeometryRenderer(ns);
    #endif // CC_USE_GEOMETRY_RENDERER
    js_register_pipeline_GlobalDSManager(ns);
    js_register_pipeline_InstancedBuffer(ns);
    js_register_pipeline_LightingStage(ns);
    js_register_pipeline_MainFlow(ns);
    js_register_pipeline_PipelineSceneData(ns);
    js_register_pipeline_PostProcessStage(ns);
    js_register_pipeline_RenderFlowInfo(ns);
    js_register_pipeline_RenderObject(ns);
    js_register_pipeline_RenderPipelineInfo(ns);
    js_register_pipeline_RenderQueueDesc(ns);
    js_register_pipeline_RenderStageInfo(ns);
    js_register_pipeline_ShadowFlow(ns);
    js_register_pipeline_ShadowStage(ns);
    return true;
}

// clang-format on