/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVLBlockNotificationHandler : NSObject {

	BOOL _listening;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(void)stopObservingAll;
-(void)_notification:(id)arg1 ;
-(void)startObservingNotificationName:(id)arg1 object:(id)arg2 ;
@end

