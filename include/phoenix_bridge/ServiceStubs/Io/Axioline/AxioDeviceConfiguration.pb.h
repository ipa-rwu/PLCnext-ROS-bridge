// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AxioDeviceConfiguration.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AxioDeviceConfiguration_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AxioDeviceConfiguration_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_AxioDeviceConfiguration_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AxioDeviceConfiguration_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AxioDeviceConfiguration_2eproto;
namespace Arp {
namespace Io {
namespace Axioline {
namespace Services {
namespace Grpc {
class AxioDeviceConfiguration;
class AxioDeviceConfigurationDefaultTypeInternal;
extern AxioDeviceConfigurationDefaultTypeInternal _AxioDeviceConfiguration_default_instance_;
}  // namespace Grpc
}  // namespace Services
}  // namespace Axioline
}  // namespace Io
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> ::Arp::Io::Axioline::Services::Grpc::AxioDeviceConfiguration* Arena::CreateMaybeMessage<::Arp::Io::Axioline::Services::Grpc::AxioDeviceConfiguration>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Arp {
namespace Io {
namespace Axioline {
namespace Services {
namespace Grpc {

// ===================================================================

class AxioDeviceConfiguration PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Arp.Io.Axioline.Services.Grpc.AxioDeviceConfiguration) */ {
 public:
  inline AxioDeviceConfiguration() : AxioDeviceConfiguration(nullptr) {}
  virtual ~AxioDeviceConfiguration();

  AxioDeviceConfiguration(const AxioDeviceConfiguration& from);
  AxioDeviceConfiguration(AxioDeviceConfiguration&& from) noexcept
    : AxioDeviceConfiguration() {
    *this = ::std::move(from);
  }

  inline AxioDeviceConfiguration& operator=(const AxioDeviceConfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  inline AxioDeviceConfiguration& operator=(AxioDeviceConfiguration&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AxioDeviceConfiguration& default_instance();

  static inline const AxioDeviceConfiguration* internal_default_instance() {
    return reinterpret_cast<const AxioDeviceConfiguration*>(
               &_AxioDeviceConfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AxioDeviceConfiguration& a, AxioDeviceConfiguration& b) {
    a.Swap(&b);
  }
  inline void Swap(AxioDeviceConfiguration* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AxioDeviceConfiguration* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AxioDeviceConfiguration* New() const final {
    return CreateMaybeMessage<AxioDeviceConfiguration>(nullptr);
  }

  AxioDeviceConfiguration* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AxioDeviceConfiguration>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AxioDeviceConfiguration& from);
  void MergeFrom(const AxioDeviceConfiguration& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AxioDeviceConfiguration* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Arp.Io.Axioline.Services.Grpc.AxioDeviceConfiguration";
  }
  protected:
  explicit AxioDeviceConfiguration(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_AxioDeviceConfiguration_2eproto);
    return ::descriptor_table_AxioDeviceConfiguration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 1,
    kIdFieldNumber = 2,
    kLengthFieldNumber = 3,
  };
  // uint32 Type = 1;
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::uint32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_type() const;
  void _internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 Id = 2;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // int32 Length = 3;
  void clear_length();
  ::PROTOBUF_NAMESPACE_ID::int32 length() const;
  void set_length(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_length() const;
  void _internal_set_length(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Arp.Io.Axioline.Services.Grpc.AxioDeviceConfiguration)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::uint32 type_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::int32 length_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_AxioDeviceConfiguration_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AxioDeviceConfiguration

// uint32 Type = 1;
inline void AxioDeviceConfiguration::clear_type() {
  type_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AxioDeviceConfiguration::_internal_type() const {
  return type_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AxioDeviceConfiguration::type() const {
  // @@protoc_insertion_point(field_get:Arp.Io.Axioline.Services.Grpc.AxioDeviceConfiguration.Type)
  return _internal_type();
}
inline void AxioDeviceConfiguration::_internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  type_ = value;
}
inline void AxioDeviceConfiguration::set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:Arp.Io.Axioline.Services.Grpc.AxioDeviceConfiguration.Type)
}

// uint32 Id = 2;
inline void AxioDeviceConfiguration::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AxioDeviceConfiguration::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AxioDeviceConfiguration::id() const {
  // @@protoc_insertion_point(field_get:Arp.Io.Axioline.Services.Grpc.AxioDeviceConfiguration.Id)
  return _internal_id();
}
inline void AxioDeviceConfiguration::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void AxioDeviceConfiguration::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Arp.Io.Axioline.Services.Grpc.AxioDeviceConfiguration.Id)
}

// int32 Length = 3;
inline void AxioDeviceConfiguration::clear_length() {
  length_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AxioDeviceConfiguration::_internal_length() const {
  return length_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AxioDeviceConfiguration::length() const {
  // @@protoc_insertion_point(field_get:Arp.Io.Axioline.Services.Grpc.AxioDeviceConfiguration.Length)
  return _internal_length();
}
inline void AxioDeviceConfiguration::_internal_set_length(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  length_ = value;
}
inline void AxioDeviceConfiguration::set_length(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_length(value);
  // @@protoc_insertion_point(field_set:Arp.Io.Axioline.Services.Grpc.AxioDeviceConfiguration.Length)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Grpc
}  // namespace Services
}  // namespace Axioline
}  // namespace Io
}  // namespace Arp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AxioDeviceConfiguration_2eproto
