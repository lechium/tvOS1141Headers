/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NetworkServiceProxyDurationBuckets;

@interface NetworkServiceProxyConnectionStats : NSObject <NSSecureCoding> {

	unsigned _connection_count;
	unsigned _tfo_success_count;
	unsigned _mptcp_success_count;
	unsigned _restricted_network_count;
	unsigned _captive_present_count;
	unsigned _result_success_count;
	unsigned _result_network_unavailable_count;
	unsigned _result_server_unreachable_count;
	unsigned _result_send_failure_count;
	unsigned _result_response_timeout_count;
	unsigned _result_connection_reset_count;
	unsigned _result_server_busy_count;
	unsigned _result_server_offline_count;
	unsigned _result_server_detached_count;
	unsigned _result_server_interrupt_count;
	unsigned _result_server_session_expired_count;
	unsigned _result_unknown_error_count;
	unsigned _restricted_network_failed_count;
	unsigned _captive_present_failed_count;
	unsigned _alternate_path_count;
	unsigned _exceeded_mss_count;
	long long _interface_type;
	long long _protocol_type;
	NetworkServiceProxyDurationBuckets* _duration_buckets;

}

@property (assign) long long interface_type;                                           //@synthesize interface_type=_interface_type - In the implementation block
@property (assign) long long protocol_type;                                            //@synthesize protocol_type=_protocol_type - In the implementation block
@property (assign) unsigned connection_count;                                          //@synthesize connection_count=_connection_count - In the implementation block
@property (assign) unsigned tfo_success_count;                                         //@synthesize tfo_success_count=_tfo_success_count - In the implementation block
@property (assign) unsigned mptcp_success_count;                                       //@synthesize mptcp_success_count=_mptcp_success_count - In the implementation block
@property (assign) unsigned restricted_network_count;                                  //@synthesize restricted_network_count=_restricted_network_count - In the implementation block
@property (assign) unsigned captive_present_count;                                     //@synthesize captive_present_count=_captive_present_count - In the implementation block
@property (assign) unsigned result_success_count;                                      //@synthesize result_success_count=_result_success_count - In the implementation block
@property (assign) unsigned result_network_unavailable_count;                          //@synthesize result_network_unavailable_count=_result_network_unavailable_count - In the implementation block
@property (assign) unsigned result_server_unreachable_count;                           //@synthesize result_server_unreachable_count=_result_server_unreachable_count - In the implementation block
@property (assign) unsigned result_send_failure_count;                                 //@synthesize result_send_failure_count=_result_send_failure_count - In the implementation block
@property (assign) unsigned result_response_timeout_count;                             //@synthesize result_response_timeout_count=_result_response_timeout_count - In the implementation block
@property (assign) unsigned result_connection_reset_count;                             //@synthesize result_connection_reset_count=_result_connection_reset_count - In the implementation block
@property (assign) unsigned result_server_busy_count;                                  //@synthesize result_server_busy_count=_result_server_busy_count - In the implementation block
@property (assign) unsigned result_server_offline_count;                               //@synthesize result_server_offline_count=_result_server_offline_count - In the implementation block
@property (assign) unsigned result_server_detached_count;                              //@synthesize result_server_detached_count=_result_server_detached_count - In the implementation block
@property (assign) unsigned result_server_interrupt_count;                             //@synthesize result_server_interrupt_count=_result_server_interrupt_count - In the implementation block
@property (assign) unsigned result_server_session_expired_count;                       //@synthesize result_server_session_expired_count=_result_server_session_expired_count - In the implementation block
@property (assign) unsigned result_unknown_error_count;                                //@synthesize result_unknown_error_count=_result_unknown_error_count - In the implementation block
@property (assign) unsigned restricted_network_failed_count;                           //@synthesize restricted_network_failed_count=_restricted_network_failed_count - In the implementation block
@property (assign) unsigned captive_present_failed_count;                              //@synthesize captive_present_failed_count=_captive_present_failed_count - In the implementation block
@property (assign) unsigned alternate_path_count;                                      //@synthesize alternate_path_count=_alternate_path_count - In the implementation block
@property (assign) unsigned exceeded_mss_count;                                        //@synthesize exceeded_mss_count=_exceeded_mss_count - In the implementation block
@property (retain) NetworkServiceProxyDurationBuckets * duration_buckets;              //@synthesize duration_buckets=_duration_buckets - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)addStats:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)clear;
-(unsigned)result_response_timeout_count;
-(void)setResult_response_timeout_count:(unsigned)arg1 ;
-(unsigned)result_connection_reset_count;
-(void)setResult_connection_reset_count:(unsigned)arg1 ;
-(unsigned)result_network_unavailable_count;
-(void)setResult_network_unavailable_count:(unsigned)arg1 ;
-(unsigned)result_send_failure_count;
-(void)setResult_send_failure_count:(unsigned)arg1 ;
-(unsigned)result_server_unreachable_count;
-(void)setResult_server_unreachable_count:(unsigned)arg1 ;
-(unsigned)result_unknown_error_count;
-(void)setResult_unknown_error_count:(unsigned)arg1 ;
-(long long)interface_type;
-(long long)protocol_type;
-(unsigned)result_success_count;
-(void)setResult_success_count:(unsigned)arg1 ;
-(id)getAWDMetric;
-(void)setInterface_type:(long long)arg1 ;
-(void)setProtocol_type:(long long)arg1 ;
-(unsigned)connection_count;
-(unsigned)tfo_success_count;
-(unsigned)mptcp_success_count;
-(unsigned)restricted_network_count;
-(unsigned)captive_present_count;
-(unsigned)result_server_busy_count;
-(unsigned)result_server_offline_count;
-(unsigned)result_server_detached_count;
-(unsigned)result_server_interrupt_count;
-(unsigned)result_server_session_expired_count;
-(unsigned)restricted_network_failed_count;
-(unsigned)captive_present_failed_count;
-(unsigned)alternate_path_count;
-(unsigned)exceeded_mss_count;
-(NetworkServiceProxyDurationBuckets *)duration_buckets;
-(void)setConnection_count:(unsigned)arg1 ;
-(void)setTfo_success_count:(unsigned)arg1 ;
-(void)setMptcp_success_count:(unsigned)arg1 ;
-(void)setRestricted_network_count:(unsigned)arg1 ;
-(void)setCaptive_present_count:(unsigned)arg1 ;
-(void)setResult_server_busy_count:(unsigned)arg1 ;
-(void)setResult_server_offline_count:(unsigned)arg1 ;
-(void)setResult_server_detached_count:(unsigned)arg1 ;
-(void)setResult_server_interrupt_count:(unsigned)arg1 ;
-(void)setResult_server_session_expired_count:(unsigned)arg1 ;
-(void)setRestricted_network_failed_count:(unsigned)arg1 ;
-(void)setCaptive_present_failed_count:(unsigned)arg1 ;
-(void)setAlternate_path_count:(unsigned)arg1 ;
-(void)setExceeded_mss_count:(unsigned)arg1 ;
-(void)setDuration_buckets:(NetworkServiceProxyDurationBuckets *)arg1 ;
@end

