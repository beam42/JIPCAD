#pragma once
#include "Entity.h"


namespace Nome::Scene
{
    class CCamera : public CEntity {
    DEFINE_INPUT(float, para0) { MarkDirty(); }
    DEFINE_INPUT(float, para1) { MarkDirty(); }
    DEFINE_INPUT(float, para2) { MarkDirty(); }
    DEFINE_INPUT(float, para3) { MarkDirty(); }
    DEFINE_INPUT(float, para4) { MarkDirty(); }
    DEFINE_INPUT(float, para5) { MarkDirty(); }
        void MarkDirty() override;
        void UpdateEntity() override;

    public:
        DECLARE_META_CLASS(CCamera, CEntity);
        CCamera() = default;
        explicit CCamera(const std::string& name)
                : CEntity(std::move(name))
        {
        }

        bool IsMesh() override;
        bool IsInstantiable() override;
        CEntity* Instantiate(CSceneTreeNode* treeNode) override;

    public:
        std::string projectionType;
        float para[6];

    private:
        CSceneTreeNode* SceneTreeNode;
    };

}
