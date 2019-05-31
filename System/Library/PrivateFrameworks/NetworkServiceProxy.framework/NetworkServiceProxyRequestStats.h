/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NetworkServiceProxyRespTimeBuckets;

@interface NetworkServiceProxyRequestStats : NSObject <NSSecureCoding> {

	int _service_type;
	unsigned _request_count;
	unsigned _request_failed_count;
	unsigned _direct_connection_count;
	unsigned _direct_connection_failed_count;
	long long _interface_type;
	long long _protocol_type;
	NetworkServiceProxyRespTimeBuckets* _first_byte_buckets;
	NetworkServiceProxyRespTimeBuckets* _last_byte_buckets;
	NetworkServiceProxyRespTimeBuckets* _direct_first_byte_buckets;
	NetworkServiceProxyRespTimeBuckets* _direct_last_byte_buckets;
	NetworkServiceProxyRespTimeBuckets* _udp_rtt_buckets;

}

@property (assign) long long interface_type;                                                    //@synthesize interface_type=_interface_type - In the implementation block
@property (assign) long long protocol_type;                                                     //@synthesize protocol_type=_protocol_type - In the implementation block
@property (assign) int service_type;                                                            //@synthesize service_type=_service_type - In the implementation block
@property (assign) unsigned request_count;                                                      //@synthesize request_count=_request_count - In the implementation block
@property (assign) unsigned request_failed_count;                                               //@synthesize request_failed_count=_request_failed_count - In the implementation block
@property (assign) unsigned direct_connection_count;                                            //@synthesize direct_connection_count=_direct_connection_count - In the implementation block
@property (assign) unsigned direct_connection_failed_count;                                     //@synthesize direct_connection_failed_count=_direct_connection_failed_count - In the implementation block
@property (retain) NetworkServiceProxyRespTimeBuckets * first_byte_buckets;                     //@synthesize first_byte_buckets=_first_byte_buckets - In the implementation block
@property (retain) NetworkServiceProxyRespTimeBuckets * last_byte_buckets;                      //@synthesize last_byte_buckets=_last_byte_buckets - In the implementation block
@property (retain) NetworkServiceProxyRespTimeBuckets * direct_first_byte_buckets;              //@synthesize direct_first_byte_buckets=_direct_first_byte_buckets - In the implementation block
@property (retain) NetworkServiceProxyRespTimeBuckets * direct_last_byte_buckets;               //@synthesize direct_last_byte_buckets=_direct_last_byte_buckets - In the implementation block
@property (retain) NetworkServiceProxyRespTimeBuckets * udp_rtt_buckets;                        //@synthesize udp_rtt_buckets=_udp_rtt_buckets - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)serviceTypeForSigningIdentifier:(id)arg1 ;
-(void)addStats:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)clear;
-(long long)interface_type;
-(long long)protocol_type;
-(unsigned)request_count;
-(void)setRequest_count:(unsigned)arg1 ;
-(id)getAWDMetric;
-(void)setInterface_type:(long long)arg1 ;
-(void)setProtocol_type:(long long)arg1 ;
-(int)service_type;
-(id)getServiceName;
-(unsigned)request_failed_count;
-(unsigned)direct_connection_count;
-(unsigned)direct_connection_failed_count;
-(NetworkServiceProxyRespTimeBuckets *)first_byte_buckets;
-(NetworkServiceProxyRespTimeBuckets *)last_byte_buckets;
-(NetworkServiceProxyRespTimeBuckets *)direct_first_byte_buckets;
-(NetworkServiceProxyRespTimeBuckets *)direct_last_byte_buckets;
-(NetworkServiceProxyRespTimeBuckets *)udp_rtt_buckets;
-(void)setRequest_failed_count:(unsigned)arg1 ;
-(void)setDirect_connection_count:(unsigned)arg1 ;
-(void)setDirect_connection_failed_count:(unsigned)arg1 ;
-(void)setService_type:(int)arg1 ;
-(void)setFirst_byte_buckets:(NetworkServiceProxyRespTimeBuckets *)arg1 ;
-(void)setLast_byte_buckets:(NetworkServiceProxyRespTimeBuckets *)arg1 ;
-(void)setDirect_first_byte_buckets:(NetworkServiceProxyRespTimeBuckets *)arg1 ;
-(void)setDirect_last_byte_buckets:(NetworkServiceProxyRespTimeBuckets *)arg1 ;
-(void)setUdp_rtt_buckets:(NetworkServiceProxyRespTimeBuckets *)arg1 ;
@end

