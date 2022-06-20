// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DateTime.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_DateTime_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_DateTime_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "DateStructure.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_DateTime_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_DateTime_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DateTime_2eproto;
namespace Arp {
namespace Grpc {
class DateTime;
class DateTimeDefaultTypeInternal;
extern DateTimeDefaultTypeInternal _DateTime_default_instance_;
}  // namespace Grpc
}  // namespace Arp
PROTOBUF_NAMESPACE_OPEN
template<> ::Arp::Grpc::DateTime* Arena::CreateMaybeMessage<::Arp::Grpc::DateTime>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Arp {
namespace Grpc {

enum DateTimeKind : int {
  Unspecified = 0,
  Utc = 1,
  DateTimeKind_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  DateTimeKind_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool DateTimeKind_IsValid(int value);
constexpr DateTimeKind DateTimeKind_MIN = Unspecified;
constexpr DateTimeKind DateTimeKind_MAX = Utc;
constexpr int DateTimeKind_ARRAYSIZE = DateTimeKind_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DateTimeKind_descriptor();
template<typename T>
inline const std::string& DateTimeKind_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DateTimeKind>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DateTimeKind_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DateTimeKind_descriptor(), enum_t_value);
}
inline bool DateTimeKind_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DateTimeKind* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DateTimeKind>(
    DateTimeKind_descriptor(), name, value);
}
// ===================================================================

class DateTime PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Arp.Grpc.DateTime) */ {
 public:
  inline DateTime() : DateTime(nullptr) {}
  virtual ~DateTime();

  DateTime(const DateTime& from);
  DateTime(DateTime&& from) noexcept
    : DateTime() {
    *this = ::std::move(from);
  }

  inline DateTime& operator=(const DateTime& from) {
    CopyFrom(from);
    return *this;
  }
  inline DateTime& operator=(DateTime&& from) noexcept {
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
  static const DateTime& default_instance();

  enum ValueCase {
    kTicks = 2,
    kDatestructure = 3,
    VALUE_NOT_SET = 0,
  };

  static inline const DateTime* internal_default_instance() {
    return reinterpret_cast<const DateTime*>(
               &_DateTime_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DateTime& a, DateTime& b) {
    a.Swap(&b);
  }
  inline void Swap(DateTime* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DateTime* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DateTime* New() const final {
    return CreateMaybeMessage<DateTime>(nullptr);
  }

  DateTime* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DateTime>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DateTime& from);
  void MergeFrom(const DateTime& from);
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
  void InternalSwap(DateTime* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Arp.Grpc.DateTime";
  }
  protected:
  explicit DateTime(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_DateTime_2eproto);
    return ::descriptor_table_DateTime_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDateTimeKindFieldNumber = 1,
    kTicksFieldNumber = 2,
    kDatestructureFieldNumber = 3,
  };
  // .Arp.Grpc.DateTimeKind DateTimeKind = 1;
  void clear_datetimekind();
  ::Arp::Grpc::DateTimeKind datetimekind() const;
  void set_datetimekind(::Arp::Grpc::DateTimeKind value);
  private:
  ::Arp::Grpc::DateTimeKind _internal_datetimekind() const;
  void _internal_set_datetimekind(::Arp::Grpc::DateTimeKind value);
  public:

  // sint64 ticks = 2;
  private:
  bool _internal_has_ticks() const;
  public:
  void clear_ticks();
  ::PROTOBUF_NAMESPACE_ID::int64 ticks() const;
  void set_ticks(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_ticks() const;
  void _internal_set_ticks(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // .Arp.Grpc.DateStructure datestructure = 3;
  bool has_datestructure() const;
  private:
  bool _internal_has_datestructure() const;
  public:
  void clear_datestructure();
  const ::Arp::Grpc::DateStructure& datestructure() const;
  ::Arp::Grpc::DateStructure* release_datestructure();
  ::Arp::Grpc::DateStructure* mutable_datestructure();
  void set_allocated_datestructure(::Arp::Grpc::DateStructure* datestructure);
  private:
  const ::Arp::Grpc::DateStructure& _internal_datestructure() const;
  ::Arp::Grpc::DateStructure* _internal_mutable_datestructure();
  public:
  void unsafe_arena_set_allocated_datestructure(
      ::Arp::Grpc::DateStructure* datestructure);
  ::Arp::Grpc::DateStructure* unsafe_arena_release_datestructure();

  void clear_Value();
  ValueCase Value_case() const;
  // @@protoc_insertion_point(class_scope:Arp.Grpc.DateTime)
 private:
  class _Internal;
  void set_has_ticks();
  void set_has_datestructure();

  inline bool has_Value() const;
  inline void clear_has_Value();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int datetimekind_;
  union ValueUnion {
    ValueUnion() {}
    ::PROTOBUF_NAMESPACE_ID::int64 ticks_;
    ::Arp::Grpc::DateStructure* datestructure_;
  } Value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_DateTime_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DateTime

// .Arp.Grpc.DateTimeKind DateTimeKind = 1;
inline void DateTime::clear_datetimekind() {
  datetimekind_ = 0;
}
inline ::Arp::Grpc::DateTimeKind DateTime::_internal_datetimekind() const {
  return static_cast< ::Arp::Grpc::DateTimeKind >(datetimekind_);
}
inline ::Arp::Grpc::DateTimeKind DateTime::datetimekind() const {
  // @@protoc_insertion_point(field_get:Arp.Grpc.DateTime.DateTimeKind)
  return _internal_datetimekind();
}
inline void DateTime::_internal_set_datetimekind(::Arp::Grpc::DateTimeKind value) {
  
  datetimekind_ = value;
}
inline void DateTime::set_datetimekind(::Arp::Grpc::DateTimeKind value) {
  _internal_set_datetimekind(value);
  // @@protoc_insertion_point(field_set:Arp.Grpc.DateTime.DateTimeKind)
}

// sint64 ticks = 2;
inline bool DateTime::_internal_has_ticks() const {
  return Value_case() == kTicks;
}
inline void DateTime::set_has_ticks() {
  _oneof_case_[0] = kTicks;
}
inline void DateTime::clear_ticks() {
  if (_internal_has_ticks()) {
    Value_.ticks_ = PROTOBUF_LONGLONG(0);
    clear_has_Value();
  }
}
inline ::PROTOBUF_NAMESPACE_ID::int64 DateTime::_internal_ticks() const {
  if (_internal_has_ticks()) {
    return Value_.ticks_;
  }
  return PROTOBUF_LONGLONG(0);
}
inline void DateTime::_internal_set_ticks(::PROTOBUF_NAMESPACE_ID::int64 value) {
  if (!_internal_has_ticks()) {
    clear_Value();
    set_has_ticks();
  }
  Value_.ticks_ = value;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 DateTime::ticks() const {
  // @@protoc_insertion_point(field_get:Arp.Grpc.DateTime.ticks)
  return _internal_ticks();
}
inline void DateTime::set_ticks(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_ticks(value);
  // @@protoc_insertion_point(field_set:Arp.Grpc.DateTime.ticks)
}

// .Arp.Grpc.DateStructure datestructure = 3;
inline bool DateTime::_internal_has_datestructure() const {
  return Value_case() == kDatestructure;
}
inline bool DateTime::has_datestructure() const {
  return _internal_has_datestructure();
}
inline void DateTime::set_has_datestructure() {
  _oneof_case_[0] = kDatestructure;
}
inline ::Arp::Grpc::DateStructure* DateTime::release_datestructure() {
  // @@protoc_insertion_point(field_release:Arp.Grpc.DateTime.datestructure)
  if (_internal_has_datestructure()) {
    clear_has_Value();
      ::Arp::Grpc::DateStructure* temp = Value_.datestructure_;
    if (GetArena() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    Value_.datestructure_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Arp::Grpc::DateStructure& DateTime::_internal_datestructure() const {
  return _internal_has_datestructure()
      ? *Value_.datestructure_
      : reinterpret_cast< ::Arp::Grpc::DateStructure&>(::Arp::Grpc::_DateStructure_default_instance_);
}
inline const ::Arp::Grpc::DateStructure& DateTime::datestructure() const {
  // @@protoc_insertion_point(field_get:Arp.Grpc.DateTime.datestructure)
  return _internal_datestructure();
}
inline ::Arp::Grpc::DateStructure* DateTime::unsafe_arena_release_datestructure() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Arp.Grpc.DateTime.datestructure)
  if (_internal_has_datestructure()) {
    clear_has_Value();
    ::Arp::Grpc::DateStructure* temp = Value_.datestructure_;
    Value_.datestructure_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void DateTime::unsafe_arena_set_allocated_datestructure(::Arp::Grpc::DateStructure* datestructure) {
  clear_Value();
  if (datestructure) {
    set_has_datestructure();
    Value_.datestructure_ = datestructure;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Arp.Grpc.DateTime.datestructure)
}
inline ::Arp::Grpc::DateStructure* DateTime::_internal_mutable_datestructure() {
  if (!_internal_has_datestructure()) {
    clear_Value();
    set_has_datestructure();
    Value_.datestructure_ = CreateMaybeMessage< ::Arp::Grpc::DateStructure >(GetArena());
  }
  return Value_.datestructure_;
}
inline ::Arp::Grpc::DateStructure* DateTime::mutable_datestructure() {
  // @@protoc_insertion_point(field_mutable:Arp.Grpc.DateTime.datestructure)
  return _internal_mutable_datestructure();
}

inline bool DateTime::has_Value() const {
  return Value_case() != VALUE_NOT_SET;
}
inline void DateTime::clear_has_Value() {
  _oneof_case_[0] = VALUE_NOT_SET;
}
inline DateTime::ValueCase DateTime::Value_case() const {
  return DateTime::ValueCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Grpc
}  // namespace Arp

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Arp::Grpc::DateTimeKind> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Arp::Grpc::DateTimeKind>() {
  return ::Arp::Grpc::DateTimeKind_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_DateTime_2eproto
