/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/system/libsystem_network.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_protocol_transform.h>

@protocol OS_nw_endpoint, OS_xpc_object;
@class NSObject, NSString;

@interface NWConcrete_nw_protocol_transform : NSObject <OS_nw_protocol_transform> {

	unsigned clear_application : 1;
	unsigned clear_transport : 1;
	unsigned clear_internet : 1;
	unsigned no_proxy : 1;
	unsigned prohibit_direct : 1;
	unsigned tfo : 1;
	unsigned tfo_no_cookie : 1;
	unsigned no_fallback : 1;
	unsigned use_tfo_heuristics : 1;
	int fallback_mode;
	int multipath_service;
	int data_mode;
	unsigned char ip_protocol;
	NSObject*<OS_nw_endpoint> replace_endpoint;
	NSObject*<OS_xpc_object> disabled_protocols;
	NSObject*<OS_xpc_object> application_protocols;
	NSObject*<OS_xpc_object> transport_protocols;
	NSObject*<OS_xpc_object> internet_protocols;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

