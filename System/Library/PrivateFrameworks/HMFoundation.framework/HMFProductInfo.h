/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding> {

	long long _productPlatform;
	long long _productClass;
	HMFSoftwareVersion* _softwareVersion;

}

@property (nonatomic,readonly) long long productPlatform;                         //@synthesize productPlatform=_productPlatform - In the implementation block
@property (nonatomic,readonly) long long productClass;                            //@synthesize productClass=_productClass - In the implementation block
@property (nonatomic,readonly) HMFSoftwareVersion * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)decodeSoftwareVersionWithCoder:(id)arg1 ;
+(void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2 ;
+(id)productInfo;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)shortDescription;
-(long long)productPlatform;
-(long long)productClass;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HMFSoftwareVersion *)softwareVersion;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3 ;
@end
