#region Usings

using NaroBasicPipes.Actions;
using NaroCppCore.Occ.V3d;
using NaroPipes.Constants;

#endregion

namespace PartModellingLogic.Modifiers.View
{
    public class Front : HandlingAction3D
    {
        public Front() : base(ModifierNames.Front)
        {
        }

        public override void OnActivate()
        {
            View.SetProj(V3dTypeOfOrientation.V3d_Xpos);
            BackToNeutralModifier();
        }
    }
}