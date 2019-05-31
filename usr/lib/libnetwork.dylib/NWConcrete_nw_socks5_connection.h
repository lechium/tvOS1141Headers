/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_socks5_connection.h>

@protocol OS_nw_connection, OS_dispatch_queue;
@class NSObject, NSString;

@interface NWConcrete_nw_socks5_connection : NSObject <OS_nw_socks5_connection> {

	unsigned long long sc_id;
	NWConcrete_nw_socks5_connection* sc_internally_retained_object;
	NSObject*<OS_nw_connection> sc_in_connection;
	NSObject*<OS_dispatch_queue> sc_queue;
	/*^block*/id sc_cancel;
	unsigned char sc_state;
	unsigned char sc_out_address_type;
	SCD_Union_NW0* sc_out_address;
	unsigned short sc_shoes_request_length_hbo;
	unsigned char sc_out_address_domain_length;
	NSObject*<OS_nw_connection> sc_out_connection;
	unsigned sc_out_connection_failed_or_sent_write_close : 1;
	unsigned sc_in_connection_failed_or_sent_write_close : 1;
	unsigned sc_out_disable_proxy : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 queue:(id)arg2 shoes:(BOOL)arg3 disableProxy:(BOOL)arg4 ;
-(void)dealloc;
@end
