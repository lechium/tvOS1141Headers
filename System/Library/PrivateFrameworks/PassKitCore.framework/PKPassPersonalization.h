/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPassPersonalization : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _requiredPersonalizationFields;
	NSString* _termsAndConditions;
	NSString* _localizedDescription;

}

@property (nonatomic,readonly) unsigned long long requiredPersonalizationFields;              //@synthesize requiredPersonalizationFields=_requiredPersonalizationFields - In the implementation block
@property (nonatomic,readonly) NSString * termsAndConditions;                                 //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;                               //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)passPersonalizationWithPassBundle:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)requiredPersonalizationFields;
-(NSString *)termsAndConditions;
@end
