/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/system/libsystem_network.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libsystem_network.dylib/libsystem_network.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_endpoint.h>

@protocol OS_nw_interface;
@class NSObject, NSString;

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {

	BOOL is_local_domain;
	NSObject*<OS_nw_interface> interface;
	char* parent_endpoint_domain;
	char* description;
	NWConcrete_nw_endpoint* proxy_original_endpoint;
	unsigned short alternate_port;
	os_unfair_lock_s lock;

}

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) const char* domainForPolicy; 
@property (nonatomic,readonly) unsigned short port; 
@property (nonatomic,readonly) const char* getDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 ;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
-(id)copyDictionary;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)type;
-(unsigned short)port;
-(const char*)getDescription;
@end

