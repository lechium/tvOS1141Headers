/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSession, NSMutableDictionary, NSString;

@interface ASTNetworking : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _session;
	NSMutableDictionary* _networkStorage;

}

@property (nonatomic,retain) NSURLSession * session;                  //@synthesize session=_session - In the implementation block
@property (retain) NSMutableDictionary * networkStorage;              //@synthesize networkStorage=_networkStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addConnection:(id)arg1 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(void)invalidate;
-(id)initWithSOCKSProxyServer:(id)arg1 port:(id)arg2 ;
-(id)_taskWithConnection:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)networkStorage;
-(void)updateConnectionState:(id)arg1 newState:(long long)arg2 ;
-(int)networkDisconnectRetryCount;
-(BOOL)_verifyResultOfTask:(id)arg1 connection:(id)arg2 ;
-(id)_downloadTaskWithDownloadConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)_verifyMD5ForFileHandle:(id)arg1 task:(id)arg2 ;
-(void)cancelConnectionsOfClass:(Class)arg1 ;
-(void)setNetworkStorage:(NSMutableDictionary *)arg1 ;
@end

