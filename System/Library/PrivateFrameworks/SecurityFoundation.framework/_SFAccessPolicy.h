/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding> {

	id _accessPolicyInternal;

}

@property (nonatomic,readonly) const CFDictionaryRef secAccessibilityAttributes; 
@property (nonatomic,copy) NSString * accessGroup; 
@property (nonatomic,copy) NSArray * accessControlList; 
@property (assign,nonatomic) SCD_Struct_SF9 accessibility; 
@property (assign,nonatomic) long long sharingPolicy; 
+(BOOL)supportsSecureCoding;
-(void)setAccessControlList:(NSArray *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessibility:(SCD_Struct_SF9)arg1 ;
-(long long)sharingPolicy;
-(SCD_Struct_SF9)accessibility;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(NSArray *)accessControlList;
-(void)setSharingPolicy:(long long)arg1 ;
-(const CFDictionaryRef)secAccessibilityAttributes;
-(id)initWithAccessibility:(SCD_Struct_SF9)arg1 sharingPolicy:(long long)arg2 ;
@end

