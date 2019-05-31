/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKValueAddedMerchant : NSObject <NSSecureCoding> {

	NSData* _identifier;
	long long _timesPresented;

}

@property (nonatomic,retain) NSData * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long timesPresented;              //@synthesize timesPresented=_timesPresented - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)identifier;
-(void)setIdentifier:(NSData *)arg1 ;
-(long long)timesPresented;
-(void)setTimesPresented:(long long)arg1 ;
@end

