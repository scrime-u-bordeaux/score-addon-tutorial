#pragma once
#include <Engine/LocalTree/Scenario/ProcessComponent.hpp>
#include <Engine/LocalTree/LocalTreeComponent.hpp>

namespace Tutorial
{
class ProcessModel;

//! This component displays informations about an object in the Device Explorer,
//! in the left panel.
class LocalTreeProcessComponent :
        public Engine::LocalTree::ProcessComponent_T<ProcessModel>
{
        COMPONENT_METADATA("b387ed01-831a-487d-8686-42094813f2a7")

    public:
       LocalTreeProcessComponent(
               const Id<score::Component>& id,
               ossia::net::node_base& parent,
               Tutorial::ProcessModel& scenario,
               Engine::LocalTree::DocumentPlugin& doc,
               QObject* parent_obj);

    ~LocalTreeProcessComponent();

    private:
        std::unique_ptr<Engine::LocalTree::BaseProperty> m_bananaProperty;
};

using LocalTreeProcessComponentFactory = Engine::LocalTree::ProcessComponentFactory_T<LocalTreeProcessComponent>;
}
