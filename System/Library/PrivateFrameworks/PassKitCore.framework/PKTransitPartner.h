/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKTransitPartner : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _localizedDisplayName;

}

@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)localizedDisplayName;
-(id)initWithIdentifier:(id)arg1 localizedDisplayName:(id)arg2 ;
@end
