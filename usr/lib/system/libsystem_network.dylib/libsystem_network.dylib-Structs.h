/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/system/libsystem_network.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct nw_protocol_identifier {
	char name[32];
	int level;
	int mapping;
} nw_protocol_identifier;

typedef struct {
	unsigned val[8];
} SCD_Struct_NW1;

typedef struct {
	unsigned char proc_uuid[16];
	unsigned char e_proc_uuid[16];
	unsigned char parent_id[16];
	unsigned long long read_buffer_size;
	unsigned keepalive_idle_time;
	unsigned keepalive_interval;
	unsigned traffic_class;
	int pid;
	unsigned uid;
	SCD_Struct_NW1 e_audit_token;
	int mtu_override;
	int data_mode;
	int required_interface_type;
	int required_interface_subtype;
	int ecn_mode;
	int multipath_service;
	unsigned sleep_keepalive_interval;
	unsigned char address_family;
	unsigned char ip_protocol;
	unsigned short minimum_tls_protocol_version;
	unsigned short maximum_tls_protocol_version;
	unsigned dry_run : 1;
	unsigned prohibit_expensive_paths : 1;
	unsigned prohibit_roaming : 1;
	unsigned no_proxy : 1;
	unsigned no_transform : 1;
	unsigned use_tfo : 1;
	unsigned use_tfo_has_been_set : 1;
	unsigned use_tfo_no_cookie : 1;
	unsigned use_tfo_heuristics : 1;
	unsigned reduce_buffering : 1;
	unsigned no_delay : 1;
	unsigned use_long_outstanding_queries : 1;
	unsigned use_awdl : 1;
	unsigned use_p2p : 1;
	unsigned resolve_ptr : 1;
	unsigned indefinite : 1;
	unsigned reuse_local_address : 1;
	unsigned no_fallback : 1;
	unsigned multipath_fallback : 1;
	unsigned tls : 1;
	unsigned extended_background_idle : 1;
	unsigned receive_any_interface : 1;
	unsigned background_traffic_management : 1;
	unsigned disable_boringssl : 1;
	unsigned enable_tls13 : 1;
	unsigned disable_blackhole_detection : 1;
	unsigned keepalive : 1;
	unsigned keepalive_offload : 1;
	unsigned custom_protocols_only : 1;
	unsigned discretionary : 1;
	unsigned tls_session_ticket : 1;
	unsigned bundle_id_to_uuid_mapping_failed : 1;
	unsigned pid_to_uuid_mapping_failed : 1;
	unsigned allow_socket_access : 1;
	unsigned local_only : 1;
	unsigned tls_enforce_ev : 1;
	unsigned server : 1;
	unsigned is_fallback : 1;
	unsigned desperate_ivan : 1;
	unsigned allow_unusable_addresses : 1;
	unsigned prefer_no_proxy : 1;
	unsigned tls_should_trust_invalid_certificates : 1;
	unsigned __pad_bits : 6;
	unsigned char __pad[4];
} SCD_Struct_NW2;

typedef struct sockaddr_storage {
	unsigned char ss_len;
	unsigned char ss_family;
	char __ss_pad1[6];
	long long __ss_align;
	char __ss_pad2[112];
} sockaddr_storage;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _DNSServiceRef_t* DNSServiceRef_tRef;

typedef struct necp_client_result_netagent {
	unsigned generation;
	unsigned char netagent_uuid[16];
} necp_client_result_netagent;

typedef struct necp_client_result_interface {
	unsigned generation;
	unsigned index;
} necp_client_result_interface;

typedef const struct sk_nexusadv* sk_nexusadvRef;

typedef struct nw_path_necp_result {
	unsigned routing_result;
	/*function pointer*/void* routing_result_parameter;
	unsigned tunnel_interface_index;
	unsigned scoped_interface_index;
	unsigned flow_divert_control_unit;
	I) filter_control_unit;
	unsigned filter_control_unit;
	unsigned service_action;
	unsigned char service_uuid[16];
	unsigned service_flags;
	unsigned service_data;
	unsigned routed_interface_index;
	unsigned direct_interface_index;
	unsigned direct_interface_generation;
	unsigned delegate_interface_index;
	unsigned delegate_interface_generation;
	unsigned policy_id;
	necp_client_result_netagent netagents;
	unsigned num_netagents;
	unsigned char __pad[4];
} nw_path_necp_result;

