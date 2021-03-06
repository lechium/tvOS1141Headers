/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AASigningSession : NSObject {

	NACContextOpaque_Ref _context;
	NSString* _certURL;
	NSString* _sessionURL;
	int _error;

}

@property (nonatomic,readonly) int error;              //@synthesize error=_error - In the implementation block
+(id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id*)arg3 ;
+(id)_badURLError;
-(int)error;
-(void)dealloc;
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(void)establishSession;
-(id)signatureForData:(id)arg1 ;
@end

