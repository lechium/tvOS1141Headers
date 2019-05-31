/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding> {

	NSString* _sessionID;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)sessionID;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithSessionID:(id)arg1 ;
-(id)initNewMessage;
@end
