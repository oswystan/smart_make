// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client_packet_acc.proto

#ifndef PROTOBUF_client_5fpacket_5facc_2eproto__INCLUDED
#define PROTOBUF_client_5fpacket_5facc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace ClientLbsAccPacket {
class ConnetLbs_C2S;
class ConnetLbs_C2SDefaultTypeInternal;
extern ConnetLbs_C2SDefaultTypeInternal _ConnetLbs_C2S_default_instance_;
class ConnetLbs_S2C;
class ConnetLbs_S2CDefaultTypeInternal;
extern ConnetLbs_S2CDefaultTypeInternal _ConnetLbs_S2C_default_instance_;
class LbsGetAcclist_C2S;
class LbsGetAcclist_C2SDefaultTypeInternal;
extern LbsGetAcclist_C2SDefaultTypeInternal _LbsGetAcclist_C2S_default_instance_;
class LbsGetAcclist_S2C;
class LbsGetAcclist_S2CDefaultTypeInternal;
extern LbsGetAcclist_S2CDefaultTypeInternal _LbsGetAcclist_S2C_default_instance_;
class ServerInfo;
class ServerInfoDefaultTypeInternal;
extern ServerInfoDefaultTypeInternal _ServerInfo_default_instance_;
}  // namespace ClientLbsAccPacket

namespace ClientLbsAccPacket {

namespace protobuf_client_5fpacket_5facc_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_client_5fpacket_5facc_2eproto

// ===================================================================

class ConnetLbs_C2S : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ClientLbsAccPacket.ConnetLbs_C2S) */ {
 public:
  ConnetLbs_C2S();
  virtual ~ConnetLbs_C2S();

  ConnetLbs_C2S(const ConnetLbs_C2S& from);

  inline ConnetLbs_C2S& operator=(const ConnetLbs_C2S& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ConnetLbs_C2S(ConnetLbs_C2S&& from) noexcept
    : ConnetLbs_C2S() {
    *this = ::std::move(from);
  }

  inline ConnetLbs_C2S& operator=(ConnetLbs_C2S&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ConnetLbs_C2S& default_instance();

  static inline const ConnetLbs_C2S* internal_default_instance() {
    return reinterpret_cast<const ConnetLbs_C2S*>(
               &_ConnetLbs_C2S_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ConnetLbs_C2S* other);
  friend void swap(ConnetLbs_C2S& a, ConnetLbs_C2S& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ConnetLbs_C2S* New() const PROTOBUF_FINAL { return New(NULL); }

  ConnetLbs_C2S* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ConnetLbs_C2S& from);
  void MergeFrom(const ConnetLbs_C2S& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ConnetLbs_C2S* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 vec_server_ip = 1;
  int vec_server_ip_size() const;
  void clear_vec_server_ip();
  static const int kVecServerIpFieldNumber = 1;
  ::google::protobuf::int32 vec_server_ip(int index) const;
  void set_vec_server_ip(int index, ::google::protobuf::int32 value);
  void add_vec_server_ip(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      vec_server_ip() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_vec_server_ip();

  // int32 is_manual_set = 2;
  void clear_is_manual_set();
  static const int kIsManualSetFieldNumber = 2;
  ::google::protobuf::int32 is_manual_set() const;
  void set_is_manual_set(::google::protobuf::int32 value);

  // int32 isp_idx = 3;
  void clear_isp_idx();
  static const int kIspIdxFieldNumber = 3;
  ::google::protobuf::int32 isp_idx() const;
  void set_isp_idx(::google::protobuf::int32 value);

  // int64 location_code = 4;
  void clear_location_code();
  static const int kLocationCodeFieldNumber = 4;
  ::google::protobuf::int64 location_code() const;
  void set_location_code(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:ClientLbsAccPacket.ConnetLbs_C2S)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > vec_server_ip_;
  mutable int _vec_server_ip_cached_byte_size_;
  ::google::protobuf::int32 is_manual_set_;
  ::google::protobuf::int32 isp_idx_;
  ::google::protobuf::int64 location_code_;
  mutable int _cached_size_;
  friend struct protobuf_client_5fpacket_5facc_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ServerInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ClientLbsAccPacket.ServerInfo) */ {
 public:
  ServerInfo();
  virtual ~ServerInfo();

  ServerInfo(const ServerInfo& from);

  inline ServerInfo& operator=(const ServerInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ServerInfo(ServerInfo&& from) noexcept
    : ServerInfo() {
    *this = ::std::move(from);
  }

  inline ServerInfo& operator=(ServerInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerInfo& default_instance();

  static inline const ServerInfo* internal_default_instance() {
    return reinterpret_cast<const ServerInfo*>(
               &_ServerInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ServerInfo* other);
  friend void swap(ServerInfo& a, ServerInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ServerInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  ServerInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ServerInfo& from);
  void MergeFrom(const ServerInfo& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ServerInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 port = 2;
  int port_size() const;
  void clear_port();
  static const int kPortFieldNumber = 2;
  ::google::protobuf::int32 port(int index) const;
  void set_port(int index, ::google::protobuf::int32 value);
  void add_port(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      port() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_port();

  // int32 ip = 1;
  void clear_ip();
  static const int kIpFieldNumber = 1;
  ::google::protobuf::int32 ip() const;
  void set_ip(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ClientLbsAccPacket.ServerInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > port_;
  mutable int _port_cached_byte_size_;
  ::google::protobuf::int32 ip_;
  mutable int _cached_size_;
  friend struct protobuf_client_5fpacket_5facc_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ConnetLbs_S2C : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ClientLbsAccPacket.ConnetLbs_S2C) */ {
 public:
  ConnetLbs_S2C();
  virtual ~ConnetLbs_S2C();

  ConnetLbs_S2C(const ConnetLbs_S2C& from);

  inline ConnetLbs_S2C& operator=(const ConnetLbs_S2C& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ConnetLbs_S2C(ConnetLbs_S2C&& from) noexcept
    : ConnetLbs_S2C() {
    *this = ::std::move(from);
  }

  inline ConnetLbs_S2C& operator=(ConnetLbs_S2C&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ConnetLbs_S2C& default_instance();

  static inline const ConnetLbs_S2C* internal_default_instance() {
    return reinterpret_cast<const ConnetLbs_S2C*>(
               &_ConnetLbs_S2C_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(ConnetLbs_S2C* other);
  friend void swap(ConnetLbs_S2C& a, ConnetLbs_S2C& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ConnetLbs_S2C* New() const PROTOBUF_FINAL { return New(NULL); }

  ConnetLbs_S2C* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ConnetLbs_S2C& from);
  void MergeFrom(const ConnetLbs_S2C& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ConnetLbs_S2C* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ClientLbsAccPacket.ServerInfo server_info = 2;
  int server_info_size() const;
  void clear_server_info();
  static const int kServerInfoFieldNumber = 2;
  const ::ClientLbsAccPacket::ServerInfo& server_info(int index) const;
  ::ClientLbsAccPacket::ServerInfo* mutable_server_info(int index);
  ::ClientLbsAccPacket::ServerInfo* add_server_info();
  ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo >*
      mutable_server_info();
  const ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo >&
      server_info() const;

  // int32 rsp_code = 1;
  void clear_rsp_code();
  static const int kRspCodeFieldNumber = 1;
  ::google::protobuf::int32 rsp_code() const;
  void set_rsp_code(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ClientLbsAccPacket.ConnetLbs_S2C)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo > server_info_;
  ::google::protobuf::int32 rsp_code_;
  mutable int _cached_size_;
  friend struct protobuf_client_5fpacket_5facc_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class LbsGetAcclist_C2S : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ClientLbsAccPacket.LbsGetAcclist_C2S) */ {
 public:
  LbsGetAcclist_C2S();
  virtual ~LbsGetAcclist_C2S();

  LbsGetAcclist_C2S(const LbsGetAcclist_C2S& from);

  inline LbsGetAcclist_C2S& operator=(const LbsGetAcclist_C2S& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LbsGetAcclist_C2S(LbsGetAcclist_C2S&& from) noexcept
    : LbsGetAcclist_C2S() {
    *this = ::std::move(from);
  }

  inline LbsGetAcclist_C2S& operator=(LbsGetAcclist_C2S&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LbsGetAcclist_C2S& default_instance();

  static inline const LbsGetAcclist_C2S* internal_default_instance() {
    return reinterpret_cast<const LbsGetAcclist_C2S*>(
               &_LbsGetAcclist_C2S_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(LbsGetAcclist_C2S* other);
  friend void swap(LbsGetAcclist_C2S& a, LbsGetAcclist_C2S& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LbsGetAcclist_C2S* New() const PROTOBUF_FINAL { return New(NULL); }

  LbsGetAcclist_C2S* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LbsGetAcclist_C2S& from);
  void MergeFrom(const LbsGetAcclist_C2S& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LbsGetAcclist_C2S* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 ip = 1;
  void clear_ip();
  static const int kIpFieldNumber = 1;
  ::google::protobuf::int32 ip() const;
  void set_ip(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ClientLbsAccPacket.LbsGetAcclist_C2S)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 ip_;
  mutable int _cached_size_;
  friend struct protobuf_client_5fpacket_5facc_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class LbsGetAcclist_S2C : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ClientLbsAccPacket.LbsGetAcclist_S2C) */ {
 public:
  LbsGetAcclist_S2C();
  virtual ~LbsGetAcclist_S2C();

  LbsGetAcclist_S2C(const LbsGetAcclist_S2C& from);

  inline LbsGetAcclist_S2C& operator=(const LbsGetAcclist_S2C& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LbsGetAcclist_S2C(LbsGetAcclist_S2C&& from) noexcept
    : LbsGetAcclist_S2C() {
    *this = ::std::move(from);
  }

  inline LbsGetAcclist_S2C& operator=(LbsGetAcclist_S2C&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LbsGetAcclist_S2C& default_instance();

  static inline const LbsGetAcclist_S2C* internal_default_instance() {
    return reinterpret_cast<const LbsGetAcclist_S2C*>(
               &_LbsGetAcclist_S2C_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(LbsGetAcclist_S2C* other);
  friend void swap(LbsGetAcclist_S2C& a, LbsGetAcclist_S2C& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LbsGetAcclist_S2C* New() const PROTOBUF_FINAL { return New(NULL); }

  LbsGetAcclist_S2C* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LbsGetAcclist_S2C& from);
  void MergeFrom(const LbsGetAcclist_S2C& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LbsGetAcclist_S2C* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ClientLbsAccPacket.ServerInfo server_info = 2;
  int server_info_size() const;
  void clear_server_info();
  static const int kServerInfoFieldNumber = 2;
  const ::ClientLbsAccPacket::ServerInfo& server_info(int index) const;
  ::ClientLbsAccPacket::ServerInfo* mutable_server_info(int index);
  ::ClientLbsAccPacket::ServerInfo* add_server_info();
  ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo >*
      mutable_server_info();
  const ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo >&
      server_info() const;

  // int32 rsp_code = 1;
  void clear_rsp_code();
  static const int kRspCodeFieldNumber = 1;
  ::google::protobuf::int32 rsp_code() const;
  void set_rsp_code(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ClientLbsAccPacket.LbsGetAcclist_S2C)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo > server_info_;
  ::google::protobuf::int32 rsp_code_;
  mutable int _cached_size_;
  friend struct protobuf_client_5fpacket_5facc_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConnetLbs_C2S

// repeated int32 vec_server_ip = 1;
inline int ConnetLbs_C2S::vec_server_ip_size() const {
  return vec_server_ip_.size();
}
inline void ConnetLbs_C2S::clear_vec_server_ip() {
  vec_server_ip_.Clear();
}
inline ::google::protobuf::int32 ConnetLbs_C2S::vec_server_ip(int index) const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.ConnetLbs_C2S.vec_server_ip)
  return vec_server_ip_.Get(index);
}
inline void ConnetLbs_C2S::set_vec_server_ip(int index, ::google::protobuf::int32 value) {
  vec_server_ip_.Set(index, value);
  // @@protoc_insertion_point(field_set:ClientLbsAccPacket.ConnetLbs_C2S.vec_server_ip)
}
inline void ConnetLbs_C2S::add_vec_server_ip(::google::protobuf::int32 value) {
  vec_server_ip_.Add(value);
  // @@protoc_insertion_point(field_add:ClientLbsAccPacket.ConnetLbs_C2S.vec_server_ip)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ConnetLbs_C2S::vec_server_ip() const {
  // @@protoc_insertion_point(field_list:ClientLbsAccPacket.ConnetLbs_C2S.vec_server_ip)
  return vec_server_ip_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ConnetLbs_C2S::mutable_vec_server_ip() {
  // @@protoc_insertion_point(field_mutable_list:ClientLbsAccPacket.ConnetLbs_C2S.vec_server_ip)
  return &vec_server_ip_;
}

// int32 is_manual_set = 2;
inline void ConnetLbs_C2S::clear_is_manual_set() {
  is_manual_set_ = 0;
}
inline ::google::protobuf::int32 ConnetLbs_C2S::is_manual_set() const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.ConnetLbs_C2S.is_manual_set)
  return is_manual_set_;
}
inline void ConnetLbs_C2S::set_is_manual_set(::google::protobuf::int32 value) {
  
  is_manual_set_ = value;
  // @@protoc_insertion_point(field_set:ClientLbsAccPacket.ConnetLbs_C2S.is_manual_set)
}

// int32 isp_idx = 3;
inline void ConnetLbs_C2S::clear_isp_idx() {
  isp_idx_ = 0;
}
inline ::google::protobuf::int32 ConnetLbs_C2S::isp_idx() const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.ConnetLbs_C2S.isp_idx)
  return isp_idx_;
}
inline void ConnetLbs_C2S::set_isp_idx(::google::protobuf::int32 value) {
  
  isp_idx_ = value;
  // @@protoc_insertion_point(field_set:ClientLbsAccPacket.ConnetLbs_C2S.isp_idx)
}

// int64 location_code = 4;
inline void ConnetLbs_C2S::clear_location_code() {
  location_code_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ConnetLbs_C2S::location_code() const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.ConnetLbs_C2S.location_code)
  return location_code_;
}
inline void ConnetLbs_C2S::set_location_code(::google::protobuf::int64 value) {
  
  location_code_ = value;
  // @@protoc_insertion_point(field_set:ClientLbsAccPacket.ConnetLbs_C2S.location_code)
}

// -------------------------------------------------------------------

// ServerInfo

// int32 ip = 1;
inline void ServerInfo::clear_ip() {
  ip_ = 0;
}
inline ::google::protobuf::int32 ServerInfo::ip() const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.ServerInfo.ip)
  return ip_;
}
inline void ServerInfo::set_ip(::google::protobuf::int32 value) {
  
  ip_ = value;
  // @@protoc_insertion_point(field_set:ClientLbsAccPacket.ServerInfo.ip)
}

// repeated int32 port = 2;
inline int ServerInfo::port_size() const {
  return port_.size();
}
inline void ServerInfo::clear_port() {
  port_.Clear();
}
inline ::google::protobuf::int32 ServerInfo::port(int index) const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.ServerInfo.port)
  return port_.Get(index);
}
inline void ServerInfo::set_port(int index, ::google::protobuf::int32 value) {
  port_.Set(index, value);
  // @@protoc_insertion_point(field_set:ClientLbsAccPacket.ServerInfo.port)
}
inline void ServerInfo::add_port(::google::protobuf::int32 value) {
  port_.Add(value);
  // @@protoc_insertion_point(field_add:ClientLbsAccPacket.ServerInfo.port)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ServerInfo::port() const {
  // @@protoc_insertion_point(field_list:ClientLbsAccPacket.ServerInfo.port)
  return port_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ServerInfo::mutable_port() {
  // @@protoc_insertion_point(field_mutable_list:ClientLbsAccPacket.ServerInfo.port)
  return &port_;
}

// -------------------------------------------------------------------

// ConnetLbs_S2C

// int32 rsp_code = 1;
inline void ConnetLbs_S2C::clear_rsp_code() {
  rsp_code_ = 0;
}
inline ::google::protobuf::int32 ConnetLbs_S2C::rsp_code() const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.ConnetLbs_S2C.rsp_code)
  return rsp_code_;
}
inline void ConnetLbs_S2C::set_rsp_code(::google::protobuf::int32 value) {
  
  rsp_code_ = value;
  // @@protoc_insertion_point(field_set:ClientLbsAccPacket.ConnetLbs_S2C.rsp_code)
}

// repeated .ClientLbsAccPacket.ServerInfo server_info = 2;
inline int ConnetLbs_S2C::server_info_size() const {
  return server_info_.size();
}
inline void ConnetLbs_S2C::clear_server_info() {
  server_info_.Clear();
}
inline const ::ClientLbsAccPacket::ServerInfo& ConnetLbs_S2C::server_info(int index) const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.ConnetLbs_S2C.server_info)
  return server_info_.Get(index);
}
inline ::ClientLbsAccPacket::ServerInfo* ConnetLbs_S2C::mutable_server_info(int index) {
  // @@protoc_insertion_point(field_mutable:ClientLbsAccPacket.ConnetLbs_S2C.server_info)
  return server_info_.Mutable(index);
}
inline ::ClientLbsAccPacket::ServerInfo* ConnetLbs_S2C::add_server_info() {
  // @@protoc_insertion_point(field_add:ClientLbsAccPacket.ConnetLbs_S2C.server_info)
  return server_info_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo >*
ConnetLbs_S2C::mutable_server_info() {
  // @@protoc_insertion_point(field_mutable_list:ClientLbsAccPacket.ConnetLbs_S2C.server_info)
  return &server_info_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo >&
ConnetLbs_S2C::server_info() const {
  // @@protoc_insertion_point(field_list:ClientLbsAccPacket.ConnetLbs_S2C.server_info)
  return server_info_;
}

// -------------------------------------------------------------------

// LbsGetAcclist_C2S

// int32 ip = 1;
inline void LbsGetAcclist_C2S::clear_ip() {
  ip_ = 0;
}
inline ::google::protobuf::int32 LbsGetAcclist_C2S::ip() const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.LbsGetAcclist_C2S.ip)
  return ip_;
}
inline void LbsGetAcclist_C2S::set_ip(::google::protobuf::int32 value) {
  
  ip_ = value;
  // @@protoc_insertion_point(field_set:ClientLbsAccPacket.LbsGetAcclist_C2S.ip)
}

// -------------------------------------------------------------------

// LbsGetAcclist_S2C

// int32 rsp_code = 1;
inline void LbsGetAcclist_S2C::clear_rsp_code() {
  rsp_code_ = 0;
}
inline ::google::protobuf::int32 LbsGetAcclist_S2C::rsp_code() const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.LbsGetAcclist_S2C.rsp_code)
  return rsp_code_;
}
inline void LbsGetAcclist_S2C::set_rsp_code(::google::protobuf::int32 value) {
  
  rsp_code_ = value;
  // @@protoc_insertion_point(field_set:ClientLbsAccPacket.LbsGetAcclist_S2C.rsp_code)
}

// repeated .ClientLbsAccPacket.ServerInfo server_info = 2;
inline int LbsGetAcclist_S2C::server_info_size() const {
  return server_info_.size();
}
inline void LbsGetAcclist_S2C::clear_server_info() {
  server_info_.Clear();
}
inline const ::ClientLbsAccPacket::ServerInfo& LbsGetAcclist_S2C::server_info(int index) const {
  // @@protoc_insertion_point(field_get:ClientLbsAccPacket.LbsGetAcclist_S2C.server_info)
  return server_info_.Get(index);
}
inline ::ClientLbsAccPacket::ServerInfo* LbsGetAcclist_S2C::mutable_server_info(int index) {
  // @@protoc_insertion_point(field_mutable:ClientLbsAccPacket.LbsGetAcclist_S2C.server_info)
  return server_info_.Mutable(index);
}
inline ::ClientLbsAccPacket::ServerInfo* LbsGetAcclist_S2C::add_server_info() {
  // @@protoc_insertion_point(field_add:ClientLbsAccPacket.LbsGetAcclist_S2C.server_info)
  return server_info_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo >*
LbsGetAcclist_S2C::mutable_server_info() {
  // @@protoc_insertion_point(field_mutable_list:ClientLbsAccPacket.LbsGetAcclist_S2C.server_info)
  return &server_info_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ClientLbsAccPacket::ServerInfo >&
LbsGetAcclist_S2C::server_info() const {
  // @@protoc_insertion_point(field_list:ClientLbsAccPacket.LbsGetAcclist_S2C.server_info)
  return server_info_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace ClientLbsAccPacket

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_client_5fpacket_5facc_2eproto__INCLUDED
