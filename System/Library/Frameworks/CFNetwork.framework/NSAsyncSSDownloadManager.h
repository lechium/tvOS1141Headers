/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@class SSDownloadManager, NSOperationQueue, NSMutableDictionary, NSString;

@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _manager;
	NSOperationQueue* _queue;
	NSMutableDictionary* _downloads;
	BOOL _reconnectInProgress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)withDownload:(long long)arg1 perform:(/*^block*/id)arg2 ;
-(void)withDownload:(long long)arg1 performAsync:(/*^block*/id)arg2 ;
-(void)_attemptReconnect;
-(id)initWithDownloadManager:(id)arg1 ;
-(void)setDelegate:(id)arg1 forDownload:(long long)arg2 ;
-(void)cancelDownload:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)withDownloadMatchingIdentifier:(id)arg1 perform:(/*^block*/id)arg2 ;
-(void)finishDownload:(long long)arg1 ;
-(void)addDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)downloadHandlerDisconnected:(BOOL)arg1 ;
-(void)dealloc;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)addDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
@end

