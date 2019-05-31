/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, TXRImageInfo;

@interface TXRDeferredImageInfo : NSObject {

	NSObject*<OS_dispatch_semaphore> _infoLoaded;
	TXRImageInfo* _info;

}

@property (nonatomic,retain) TXRImageInfo * info;              //@synthesize info=_info - In the implementation block
-(void)signalLoaded;
-(id)init;
-(TXRImageInfo *)info;
-(void)setInfo:(TXRImageInfo *)arg1 ;
@end

