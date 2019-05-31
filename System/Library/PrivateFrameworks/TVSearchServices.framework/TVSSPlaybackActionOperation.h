/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class TVSSPlaybackActionOperationRequest, NSArray, NSError, NSXPCConnection, NSUUID, NSString, TVSSPlaybackActionOperationResult;

@interface TVSSPlaybackActionOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	TVSSPlaybackActionOperationRequest* _request;
	NSArray* _results;
	NSError* _error;
	NSXPCConnection* _connection;
	NSUUID* _requestID;

}

@property (copy,readonly) NSString * canonicalID; 
@property (copy,readonly) TVSSPlaybackActionOperationResult * result; 
@property (nonatomic,retain) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSUUID * requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (copy) NSArray * results;                                                //@synthesize results=_results - In the implementation block
@property (retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (readonly) TVSSPlaybackActionOperationRequest * request;                 //@synthesize request=_request - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(TVSSPlaybackActionOperationRequest *)request;
-(void)start;
-(id)initWithRequest:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(TVSSPlaybackActionOperationResult *)result;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(void)_finish;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(NSUUID *)requestID;
-(BOOL)isAsynchronous;
-(void)setRequestID:(NSUUID *)arg1 ;
-(NSString *)canonicalID;
-(id)initWithCanonicalID:(id)arg1 ;
@end
