// GENERATED FILE - DO NOT EDIT.
// Generated by gen_packed_gl_enums.py using data from packed_gl_enums.json.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// PackedGLEnums_autogen.h:
//   Declares ANGLE-specific enums classes for GLenums and functions operating
//   on them.

#ifndef COMMON_PACKEDGLENUMS_AUTOGEN_H_
#define COMMON_PACKEDGLENUMS_AUTOGEN_H_

#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <angle_gl.h>

#include <cstdint>

namespace gl
{

template <typename Enum>
Enum FromGLenum(GLenum from);

enum class AlphaTestFunc : uint8_t
{
    AlwaysPass = 0,
    Equal      = 1,
    Gequal     = 2,
    Greater    = 3,
    Lequal     = 4,
    Less       = 5,
    Never      = 6,
    NotEqual   = 7,

    InvalidEnum = 8,
    EnumCount   = 8,
};

template <>
AlphaTestFunc FromGLenum<AlphaTestFunc>(GLenum from);
GLenum ToGLenum(AlphaTestFunc from);

enum class BufferBinding : uint8_t
{
    Array             = 0,
    AtomicCounter     = 1,
    CopyRead          = 2,
    CopyWrite         = 3,
    DispatchIndirect  = 4,
    DrawIndirect      = 5,
    ElementArray      = 6,
    PixelPack         = 7,
    PixelUnpack       = 8,
    ShaderStorage     = 9,
    TransformFeedback = 10,
    Uniform           = 11,

    InvalidEnum = 12,
    EnumCount   = 12,
};

template <>
BufferBinding FromGLenum<BufferBinding>(GLenum from);
GLenum ToGLenum(BufferBinding from);

enum class BufferUsage : uint8_t
{
    DynamicCopy = 0,
    DynamicDraw = 1,
    DynamicRead = 2,
    StaticCopy  = 3,
    StaticDraw  = 4,
    StaticRead  = 5,
    StreamCopy  = 6,
    StreamDraw  = 7,
    StreamRead  = 8,

    InvalidEnum = 9,
    EnumCount   = 9,
};

template <>
BufferUsage FromGLenum<BufferUsage>(GLenum from);
GLenum ToGLenum(BufferUsage from);

enum class ClientVertexArrayType : uint8_t
{
    Color        = 0,
    Normal       = 1,
    PointSize    = 2,
    TextureCoord = 3,
    Vertex       = 4,

    InvalidEnum = 5,
    EnumCount   = 5,
};

template <>
ClientVertexArrayType FromGLenum<ClientVertexArrayType>(GLenum from);
GLenum ToGLenum(ClientVertexArrayType from);

enum class CullFaceMode : uint8_t
{
    Back         = 0,
    Front        = 1,
    FrontAndBack = 2,

    InvalidEnum = 3,
    EnumCount   = 3,
};

template <>
CullFaceMode FromGLenum<CullFaceMode>(GLenum from);
GLenum ToGLenum(CullFaceMode from);

enum class FogMode : uint8_t
{
    Exp    = 0,
    Exp2   = 1,
    Linear = 2,

    InvalidEnum = 3,
    EnumCount   = 3,
};

template <>
FogMode FromGLenum<FogMode>(GLenum from);
GLenum ToGLenum(FogMode from);

enum class HintSetting : uint8_t
{
    DontCare = 0,
    Fastest  = 1,
    Nicest   = 2,

    InvalidEnum = 3,
    EnumCount   = 3,
};

template <>
HintSetting FromGLenum<HintSetting>(GLenum from);
GLenum ToGLenum(HintSetting from);

enum class LightParameter : uint8_t
{
    Ambient              = 0,
    AmbientAndDiffuse    = 1,
    ConstantAttenuation  = 2,
    Diffuse              = 3,
    LinearAttenuation    = 4,
    Position             = 5,
    QuadraticAttenuation = 6,
    Specular             = 7,
    SpotCutoff           = 8,
    SpotDirection        = 9,
    SpotExponent         = 10,

    InvalidEnum = 11,
    EnumCount   = 11,
};

template <>
LightParameter FromGLenum<LightParameter>(GLenum from);
GLenum ToGLenum(LightParameter from);

enum class LogicalOperation : uint8_t
{
    And          = 0,
    AndInverted  = 1,
    AndReverse   = 2,
    Clear        = 3,
    Copy         = 4,
    CopyInverted = 5,
    Equiv        = 6,
    Invert       = 7,
    Nand         = 8,
    Noop         = 9,
    Nor          = 10,
    Or           = 11,
    OrInverted   = 12,
    OrReverse    = 13,
    Set          = 14,
    Xor          = 15,

    InvalidEnum = 16,
    EnumCount   = 16,
};

template <>
LogicalOperation FromGLenum<LogicalOperation>(GLenum from);
GLenum ToGLenum(LogicalOperation from);

enum class MaterialParameter : uint8_t
{
    Ambient           = 0,
    AmbientAndDiffuse = 1,
    Diffuse           = 2,
    Emission          = 3,
    Shininess         = 4,
    Specular          = 5,

    InvalidEnum = 6,
    EnumCount   = 6,
};

template <>
MaterialParameter FromGLenum<MaterialParameter>(GLenum from);
GLenum ToGLenum(MaterialParameter from);

enum class MatrixType : uint8_t
{
    Modelview  = 0,
    Projection = 1,
    Texture    = 2,

    InvalidEnum = 3,
    EnumCount   = 3,
};

template <>
MatrixType FromGLenum<MatrixType>(GLenum from);
GLenum ToGLenum(MatrixType from);

enum class PointParameter : uint8_t
{
    PointSizeMin             = 0,
    PointSizeMax             = 1,
    PointFadeThresholdSize   = 2,
    PointDistanceAttenuation = 3,

    InvalidEnum = 4,
    EnumCount   = 4,
};

template <>
PointParameter FromGLenum<PointParameter>(GLenum from);
GLenum ToGLenum(PointParameter from);

enum class PrimitiveMode : uint8_t
{
    Points                 = 0,
    Lines                  = 1,
    LineLoop               = 2,
    LineStrip              = 3,
    Triangles              = 4,
    TriangleStrip          = 5,
    TriangleFan            = 6,
    LinesAdjacency         = 7,
    LineStripAdjacency     = 8,
    TrianglesAdjacency     = 9,
    TriangleStripAdjacency = 10,

    InvalidEnum = 11,
    EnumCount   = 11,
};

template <>
PrimitiveMode FromGLenum<PrimitiveMode>(GLenum from);
GLenum ToGLenum(PrimitiveMode from);

enum class QueryType : uint8_t
{
    AnySamples                         = 0,
    AnySamplesConservative             = 1,
    CommandsCompleted                  = 2,
    PrimitivesGenerated                = 3,
    TimeElapsed                        = 4,
    Timestamp                          = 5,
    TransformFeedbackPrimitivesWritten = 6,

    InvalidEnum = 7,
    EnumCount   = 7,
};

template <>
QueryType FromGLenum<QueryType>(GLenum from);
GLenum ToGLenum(QueryType from);

enum class ShaderType : uint8_t
{
    Vertex   = 0,
    Fragment = 1,
    Geometry = 2,
    Compute  = 3,

    InvalidEnum = 4,
    EnumCount   = 4,
};

template <>
ShaderType FromGLenum<ShaderType>(GLenum from);
GLenum ToGLenum(ShaderType from);

enum class ShadingModel : uint8_t
{
    Flat   = 0,
    Smooth = 1,

    InvalidEnum = 2,
    EnumCount   = 2,
};

template <>
ShadingModel FromGLenum<ShadingModel>(GLenum from);
GLenum ToGLenum(ShadingModel from);

enum class TextureCombine : uint8_t
{
    Add         = 0,
    AddSigned   = 1,
    Dot3Rgb     = 2,
    Dot3Rgba    = 3,
    Interpolate = 4,
    Modulate    = 5,
    Replace     = 6,
    Subtract    = 7,

    InvalidEnum = 8,
    EnumCount   = 8,
};

template <>
TextureCombine FromGLenum<TextureCombine>(GLenum from);
GLenum ToGLenum(TextureCombine from);

enum class TextureEnvMode : uint8_t
{
    Add      = 0,
    Blend    = 1,
    Combine  = 2,
    Decal    = 3,
    Modulate = 4,
    Replace  = 5,

    InvalidEnum = 6,
    EnumCount   = 6,
};

template <>
TextureEnvMode FromGLenum<TextureEnvMode>(GLenum from);
GLenum ToGLenum(TextureEnvMode from);

enum class TextureEnvParameter : uint8_t
{
    Mode              = 0,
    Color             = 1,
    CombineRgb        = 2,
    CombineAlpha      = 3,
    RgbScale          = 4,
    AlphaScale        = 5,
    Src0Rgb           = 6,
    Src1Rgb           = 7,
    Src2Rgb           = 8,
    Src0Alpha         = 9,
    Src1Alpha         = 10,
    Src2Alpha         = 11,
    Op0Rgb            = 12,
    Op1Rgb            = 13,
    Op2Rgb            = 14,
    Op0Alpha          = 15,
    Op1Alpha          = 16,
    Op2Alpha          = 17,
    PointCoordReplace = 18,

    InvalidEnum = 19,
    EnumCount   = 19,
};

template <>
TextureEnvParameter FromGLenum<TextureEnvParameter>(GLenum from);
GLenum ToGLenum(TextureEnvParameter from);

enum class TextureEnvTarget : uint8_t
{
    Env         = 0,
    PointSprite = 1,

    InvalidEnum = 2,
    EnumCount   = 2,
};

template <>
TextureEnvTarget FromGLenum<TextureEnvTarget>(GLenum from);
GLenum ToGLenum(TextureEnvTarget from);

enum class TextureOp : uint8_t
{
    OneMinusSrcAlpha = 0,
    OneMinusSrcColor = 1,
    SrcAlpha         = 2,
    SrcColor         = 3,

    InvalidEnum = 4,
    EnumCount   = 4,
};

template <>
TextureOp FromGLenum<TextureOp>(GLenum from);
GLenum ToGLenum(TextureOp from);

enum class TextureSrc : uint8_t
{
    Constant     = 0,
    Previous     = 1,
    PrimaryColor = 2,
    Texture      = 3,

    InvalidEnum = 4,
    EnumCount   = 4,
};

template <>
TextureSrc FromGLenum<TextureSrc>(GLenum from);
GLenum ToGLenum(TextureSrc from);

enum class TextureTarget : uint8_t
{
    _2D                 = 0,
    _2DArray            = 1,
    _2DMultisample      = 2,
    _2DMultisampleArray = 3,
    _3D                 = 4,
    External            = 5,
    Rectangle           = 6,
    CubeMapPositiveX    = 7,
    CubeMapNegativeX    = 8,
    CubeMapPositiveY    = 9,
    CubeMapNegativeY    = 10,
    CubeMapPositiveZ    = 11,
    CubeMapNegativeZ    = 12,

    InvalidEnum = 13,
    EnumCount   = 13,
};

template <>
TextureTarget FromGLenum<TextureTarget>(GLenum from);
GLenum ToGLenum(TextureTarget from);

enum class TextureType : uint8_t
{
    _2D                 = 0,
    _2DArray            = 1,
    _2DMultisample      = 2,
    _2DMultisampleArray = 3,
    _3D                 = 4,
    External            = 5,
    Rectangle           = 6,
    CubeMap             = 7,

    InvalidEnum = 8,
    EnumCount   = 8,
};

template <>
TextureType FromGLenum<TextureType>(GLenum from);
GLenum ToGLenum(TextureType from);

enum class VertexArrayType : uint8_t
{
    Color        = 0,
    Normal       = 1,
    PointSize    = 2,
    TextureCoord = 3,
    Vertex       = 4,

    InvalidEnum = 5,
    EnumCount   = 5,
};

template <>
VertexArrayType FromGLenum<VertexArrayType>(GLenum from);
GLenum ToGLenum(VertexArrayType from);

}  // namespace gl

#endif  // COMMON_PACKEDGLENUMS_AUTOGEN_H_
