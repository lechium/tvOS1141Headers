/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSURLSessionDownloadTask;

@interface _TVURLSessionDownloadTaskWrapper : NSObject {

	NSURL* _url;
	NSURLSessionDownloadTask* _downloadTask;
	long long _downloadTaskID;
	long long _state;

}

@property (nonatomic,readonly) long long state; 
-(void)cancel;
-(long long)state;
-(id)initWithURL:(id)arg1 ;
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
@end

