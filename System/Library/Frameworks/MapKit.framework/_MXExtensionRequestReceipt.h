/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface _MXExtensionRequestReceipt : NSObject {

	NSTimer* _timer;
	/*^block*/id _completion;

}
-(void)cancel;
-(void)dealloc;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelWithTimeInterval:(double)arg1 ;
@end
