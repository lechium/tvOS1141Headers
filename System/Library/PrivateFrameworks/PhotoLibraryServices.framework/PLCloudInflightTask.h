/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLCloudInflightTask : NSObject {

	/*^block*/id _progressBlock;
	/*^block*/id _completionHandler;

}

@property (readonly) id progressBlock; 
@property (readonly) id completionHandler; 
-(void)dealloc;
-(id)completionHandler;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)progressBlock;
@end

