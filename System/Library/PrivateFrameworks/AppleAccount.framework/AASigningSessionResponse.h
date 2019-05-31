/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AASigningSessionResponse : AAResponse {

	NSData* _sessionData;

}

@property (nonatomic,retain) NSData * sessionData;              //@synthesize sessionData=_sessionData - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSData *)sessionData;
-(void)setSessionData:(NSData *)arg1 ;
@end

