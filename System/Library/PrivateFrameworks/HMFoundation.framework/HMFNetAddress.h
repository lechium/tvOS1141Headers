/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress : HMFObject {

	HMFNetAddressInternal* _internal;

}

@property (nonatomic,readonly) HMFNetAddressInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) unsigned long long addressFamily; 
@property (nonatomic,copy,readonly) NSString * addressString; 
+(id)shortDescription;
+(id)localAddress;
-(NSString *)addressString;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)shortDescription;
-(unsigned long long)addressFamily;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(HMFNetAddressInternal *)internal;
-(id)descriptionWithPointer:(BOOL)arg1 ;
@end
