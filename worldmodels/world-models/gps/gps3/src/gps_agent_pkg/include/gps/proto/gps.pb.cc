// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gps.proto

#include "gps.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace gps {
class SampleDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Sample>
      _instance;
} _Sample_default_instance_;
}  // namespace gps
namespace protobuf_gps_2eproto {
static void InitDefaultsSample() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gps::_Sample_default_instance_;
    new (ptr) ::gps::Sample();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gps::Sample::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Sample =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSample}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Sample.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[4];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, t_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, dx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, du_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, do__),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, u_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, obs_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gps::Sample, meta_),
  3,
  0,
  1,
  2,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(::gps::Sample)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gps::_Sample_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gps.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tgps.proto\022\003gps\"}\n\006Sample\022\016\n\001T\030\001 \001(\r:\0031"
      "00\022\n\n\002dX\030\002 \001(\r\022\n\n\002dU\030\003 \001(\r\022\n\n\002dO\030\004 \001(\r\022\r"
      "\n\001X\030\005 \003(\002B\002\020\001\022\r\n\001U\030\006 \003(\002B\002\020\001\022\017\n\003obs\030\007 \003("
      "\002B\002\020\001\022\020\n\004meta\030\010 \003(\002B\002\020\001*\223\004\n\nSampleType\022\n"
      "\n\006ACTION\020\000\022\020\n\014JOINT_ANGLES\020\001\022\024\n\020JOINT_VE"
      "LOCITIES\020\002\022\027\n\023END_EFFECTOR_POINTS\020\003\022!\n\035E"
      "ND_EFFECTOR_POINT_VELOCITIES\020\004\022 \n\034END_EF"
      "FECTOR_POINT_JACOBIANS\020\005\022$\n END_EFFECTOR"
      "_POINT_ROT_JACOBIANS\020\006\022\032\n\026END_EFFECTOR_P"
      "OSITIONS\020\007\022\032\n\026END_EFFECTOR_ROTATIONS\020\010\022\032"
      "\n\026END_EFFECTOR_JACOBIANS\020\t\022\031\n\025END_EFFECT"
      "OR_HESSIANS\020\n\022\r\n\tRGB_IMAGE\020\013\022\017\n\013DEPTH_IM"
      "AGE\020\014\022\022\n\016RGB_IMAGE_SIZE\020\r\022\021\n\rCONTEXT_IMA"
      "GE\020\016\022\026\n\022CONTEXT_IMAGE_SIZE\020\017\022\016\n\nIMAGE_FE"
      "AT\020\020\022!\n\035END_EFFECTOR_POINTS_NO_TARGET\020\021\022"
      "+\n\'END_EFFECTOR_POINT_VELOCITIES_NO_TARG"
      "ET\020\022\022\t\n\005NOISE\020\023\022\024\n\020TOTAL_DATA_TYPES\020\024*J\n"
      "\014ActuatorType\022\r\n\tTRIAL_ARM\020\000\022\021\n\rAUXILIAR"
      "Y_ARM\020\001\022\030\n\024TOTAL_ACTUATOR_TYPES\020\002*_\n\023Pos"
      "itionControlMode\022\016\n\nNO_CONTROL\020\000\022\017\n\013JOIN"
      "T_SPACE\020\001\022\016\n\nTASK_SPACE\020\002\022\027\n\023TOTAL_CONTR"
      "OL_MODES\020\003*o\n\016ControllerType\022\030\n\024LIN_GAUS"
      "S_CONTROLLER\020\000\022\024\n\020CAFFE_CONTROLLER\020\001\022\021\n\r"
      "TF_CONTROLLER\020\002\022\032\n\026TOTAL_CONTROLLER_TYPE"
      "S\020\003"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 963);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gps.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_gps_2eproto
namespace gps {
const ::google::protobuf::EnumDescriptor* SampleType_descriptor() {
  protobuf_gps_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gps_2eproto::file_level_enum_descriptors[0];
}
bool SampleType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ActuatorType_descriptor() {
  protobuf_gps_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gps_2eproto::file_level_enum_descriptors[1];
}
bool ActuatorType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PositionControlMode_descriptor() {
  protobuf_gps_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gps_2eproto::file_level_enum_descriptors[2];
}
bool PositionControlMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ControllerType_descriptor() {
  protobuf_gps_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_gps_2eproto::file_level_enum_descriptors[3];
}
bool ControllerType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Sample::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Sample::kTFieldNumber;
const int Sample::kDXFieldNumber;
const int Sample::kDUFieldNumber;
const int Sample::kDOFieldNumber;
const int Sample::kXFieldNumber;
const int Sample::kUFieldNumber;
const int Sample::kObsFieldNumber;
const int Sample::kMetaFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Sample::Sample()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gps_2eproto::scc_info_Sample.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gps.Sample)
}
Sample::Sample(const Sample& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      x_(from.x_),
      u_(from.u_),
      obs_(from.obs_),
      meta_(from.meta_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&dx_, &from.dx_,
    static_cast<size_t>(reinterpret_cast<char*>(&t_) -
    reinterpret_cast<char*>(&dx_)) + sizeof(t_));
  // @@protoc_insertion_point(copy_constructor:gps.Sample)
}

void Sample::SharedCtor() {
  ::memset(&dx_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&do__) -
      reinterpret_cast<char*>(&dx_)) + sizeof(do__));
  t_ = 100u;
}

Sample::~Sample() {
  // @@protoc_insertion_point(destructor:gps.Sample)
  SharedDtor();
}

void Sample::SharedDtor() {
}

void Sample::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Sample::descriptor() {
  ::protobuf_gps_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gps_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Sample& Sample::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gps_2eproto::scc_info_Sample.base);
  return *internal_default_instance();
}


void Sample::Clear() {
// @@protoc_insertion_point(message_clear_start:gps.Sample)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  x_.Clear();
  u_.Clear();
  obs_.Clear();
  meta_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    ::memset(&dx_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&do__) -
        reinterpret_cast<char*>(&dx_)) + sizeof(do__));
    t_ = 100u;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Sample::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gps.Sample)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 T = 1 [default = 100];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_t();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &t_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 dX = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_dx();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 dU = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_du();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &du_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 dO = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_do_();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &do__)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float X = 5 [packed = true];
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_x())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u /* 45 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 42u, input, this->mutable_x())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float U = 6 [packed = true];
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_u())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(53u /* 53 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 50u, input, this->mutable_u())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float obs = 7 [packed = true];
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_obs())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(61u /* 61 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 58u, input, this->mutable_obs())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float meta = 8 [packed = true];
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_meta())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(69u /* 69 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 66u, input, this->mutable_meta())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gps.Sample)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gps.Sample)
  return false;
#undef DO_
}

void Sample::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gps.Sample)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 T = 1 [default = 100];
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->t(), output);
  }

  // optional uint32 dX = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->dx(), output);
  }

  // optional uint32 dU = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->du(), output);
  }

  // optional uint32 dO = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->do_(), output);
  }

  // repeated float X = 5 [packed = true];
  if (this->x_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _x_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->x().data(), this->x_size(), output);
  }

  // repeated float U = 6 [packed = true];
  if (this->u_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(6, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _u_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->u().data(), this->u_size(), output);
  }

  // repeated float obs = 7 [packed = true];
  if (this->obs_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(7, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _obs_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->obs().data(), this->obs_size(), output);
  }

  // repeated float meta = 8 [packed = true];
  if (this->meta_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(8, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _meta_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->meta().data(), this->meta_size(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:gps.Sample)
}

::google::protobuf::uint8* Sample::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gps.Sample)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 T = 1 [default = 100];
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->t(), target);
  }

  // optional uint32 dX = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->dx(), target);
  }

  // optional uint32 dU = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->du(), target);
  }

  // optional uint32 dO = 4;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->do_(), target);
  }

  // repeated float X = 5 [packed = true];
  if (this->x_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _x_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->x_, target);
  }

  // repeated float U = 6 [packed = true];
  if (this->u_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      6,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _u_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->u_, target);
  }

  // repeated float obs = 7 [packed = true];
  if (this->obs_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      7,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _obs_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->obs_, target);
  }

  // repeated float meta = 8 [packed = true];
  if (this->meta_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      8,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _meta_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->meta_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gps.Sample)
  return target;
}

size_t Sample::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gps.Sample)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated float X = 5 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->x_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _x_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float U = 6 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->u_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _u_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float obs = 7 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->obs_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _obs_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float meta = 8 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->meta_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _meta_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (_has_bits_[0 / 32] & 15u) {
    // optional uint32 dX = 2;
    if (has_dx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dx());
    }

    // optional uint32 dU = 3;
    if (has_du()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->du());
    }

    // optional uint32 dO = 4;
    if (has_do_()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->do_());
    }

    // optional uint32 T = 1 [default = 100];
    if (has_t()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->t());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Sample::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gps.Sample)
  GOOGLE_DCHECK_NE(&from, this);
  const Sample* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Sample>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gps.Sample)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gps.Sample)
    MergeFrom(*source);
  }
}

void Sample::MergeFrom(const Sample& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gps.Sample)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  x_.MergeFrom(from.x_);
  u_.MergeFrom(from.u_);
  obs_.MergeFrom(from.obs_);
  meta_.MergeFrom(from.meta_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      dx_ = from.dx_;
    }
    if (cached_has_bits & 0x00000002u) {
      du_ = from.du_;
    }
    if (cached_has_bits & 0x00000004u) {
      do__ = from.do__;
    }
    if (cached_has_bits & 0x00000008u) {
      t_ = from.t_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Sample::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gps.Sample)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sample::CopyFrom(const Sample& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gps.Sample)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sample::IsInitialized() const {
  return true;
}

void Sample::Swap(Sample* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Sample::InternalSwap(Sample* other) {
  using std::swap;
  x_.InternalSwap(&other->x_);
  u_.InternalSwap(&other->u_);
  obs_.InternalSwap(&other->obs_);
  meta_.InternalSwap(&other->meta_);
  swap(dx_, other->dx_);
  swap(du_, other->du_);
  swap(do__, other->do__);
  swap(t_, other->t_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Sample::GetMetadata() const {
  protobuf_gps_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gps_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace gps
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gps::Sample* Arena::CreateMaybeMessage< ::gps::Sample >(Arena* arena) {
  return Arena::CreateInternal< ::gps::Sample >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
