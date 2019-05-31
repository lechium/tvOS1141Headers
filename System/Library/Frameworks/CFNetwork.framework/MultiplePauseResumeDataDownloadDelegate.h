/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface MultiplePauseResumeDataDownloadDelegate : NSObject <NSURLSessionDownloadDelegate, NSURLSessionDelegate> {

	long long _sizeOfEntity;
	NSObject*<OS_dispatch_semaphore> _wait;
	BOOL _result;
	long long _totalBytesWritten;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getWaiter;
-(long long)getSizeOfEntity;
-(BOOL)didTestPass;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
@end

