/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHADownloadRequestManagement.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, NSString;

@interface PHAAssetResourceDownloadRequestManager : NSObject <PHADownloadRequestManagement> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _dateToRequestPermissionAgain;
	unsigned long long _allowedDownloadCount;
	unsigned long long _expectedRequestsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long expectedRequestsCount;              //@synthesize expectedRequestsCount=_expectedRequestsCount - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setExpectedRequestsCount:(unsigned long long)arg1 ;
-(id)statusAsDictionary;
-(void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)expectedRequestsCount;
@end

