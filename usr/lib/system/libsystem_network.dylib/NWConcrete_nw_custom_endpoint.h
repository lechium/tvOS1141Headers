/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/system/libsystem_network.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libsystem_network.dylib/NWConcrete_nw_endpoint.h>

@protocol OS_dispatch_data;
@class NSObject;

@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint {

	NSObject*<OS_dispatch_data> data;
	/*^block*/id resolver_block;
	unsigned type;

}
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 ;
-(unsigned long long)getHash;
-(id)initWithType:(unsigned)arg1 resolver:(/*^block*/id)arg2 data:(id)arg3 ;
-(id)copyDictionary;
-(unsigned)type;
-(const char*)getDescription;
@end

