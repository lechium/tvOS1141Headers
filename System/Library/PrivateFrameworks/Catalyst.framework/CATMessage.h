/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface CATMessage : NSObject <NSSecureCoding> {

	NSUUID* _messageUUID;

}

@property (nonatomic,retain) id cat_assertion; 
@property (nonatomic,retain) NSUUID * messageUUID;              //@synthesize messageUUID=_messageUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)messageUUID;
-(void)setMessageUUID:(NSUUID *)arg1 ;
-(id)cat_assertion;
-(void)setCat_assertion:(id)arg1 ;
@end
