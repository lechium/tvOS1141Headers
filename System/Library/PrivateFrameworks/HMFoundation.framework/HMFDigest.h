/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface HMFDigest : HMFObject <HMFObject, NSCopying, NSSecureCoding> {

	long long _algorithm;
	NSData* _value;

}

@property (readonly) long long algorithm;                              //@synthesize algorithm=_algorithm - In the implementation block
@property (copy,readonly) NSData * value;                              //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * propertyDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)value;
-(id)initWithAlgorithm:(long long)arg1 value:(id)arg2 ;
-(NSString *)propertyDescription;
-(long long)algorithm;
@end
