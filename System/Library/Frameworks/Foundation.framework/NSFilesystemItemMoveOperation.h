/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSError;

@interface NSFilesystemItemMoveOperation : NSOperation {

	id _delegate;
	NSURL* _sourceURL;
	NSURL* _destinationURL;
	NSError* _error;
	unsigned long long _options;

}
+(id)filesystemItemMoveOperationWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3 ;
+(id)_errorWithErrno:(int)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3 ;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(void)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3 ;
-(id)error;
-(void)_setError:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)main;
@end

