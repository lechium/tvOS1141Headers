/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/system/libsystem_network.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libsystem_network.dylib/NWConcrete_nw_endpoint.h>

@interface NWConcrete_nw_bonjour_service_endpoint : NWConcrete_nw_endpoint {

	char* service_name;
	char* service_type;
	char* service_domain;
	char* service_composite;

}
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 ;
-(unsigned long long)getHash;
-(const char*)domainForPolicy;
-(id)copyDictionary;
-(id)initWithName:(const char*)arg1 type:(const char*)arg2 domain:(const char*)arg3 ;
-(void)dealloc;
-(unsigned)type;
-(const char*)getDescription;
@end

