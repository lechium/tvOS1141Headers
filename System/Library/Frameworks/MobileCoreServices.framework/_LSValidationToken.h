/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _LSValidationToken : NSObject <NSSecureCoding> {

	NSData* _payload;
	NSData* _nonce;
	NSData* _HMAC;
	id _owner;

}

@property (assign,nonatomic,__weak) id owner;              //@synthesize owner=_owner - In the implementation block
+(id)HMACWithPayload:(id)arg1 nonce:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isCorrectForPayload:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(id)initWithPayload:(id)arg1 ;
@end

