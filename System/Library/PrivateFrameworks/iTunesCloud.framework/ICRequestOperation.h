/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSString;

@interface ICRequestOperation : ICAsyncOperation <NSProgressReporting> {

	/*^block*/id _completionHandler;
	NSProgress* _progress;

}

@property (retain) NSProgress * progress;                           //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSProgress *)progress;
-(void)performRequestOnOperationQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end
