/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSError, NSString;

@interface myDeli : NSObject <NSURLSessionDelegate> {

	NSError* _errorResult;
	BOOL _receivedResponse;
	BOOL _hasCanceled;

}

@property (retain) NSError * someError;                             //@synthesize errorResult=_errorResult - In the implementation block
@property (assign) BOOL receivedResponse;                           //@synthesize receivedResponse=_receivedResponse - In the implementation block
@property (assign) BOOL hasCanceled;                                //@synthesize hasCanceled=_hasCanceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setReceivedResponse:(BOOL)arg1 ;
-(void)setSomeError:(NSError *)arg1 ;
-(NSError *)someError;
-(BOOL)receivedResponse;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)setHasCanceled:(BOOL)arg1 ;
-(BOOL)hasCanceled;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
@end

