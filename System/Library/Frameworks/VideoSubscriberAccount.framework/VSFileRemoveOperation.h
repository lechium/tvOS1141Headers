/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, NSError;

@interface VSFileRemoveOperation : VSAsyncOperation {

	NSURL* _fileURL;
	NSError* _error;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSURL *)fileURL;
-(void)executionDidBegin;
@end

