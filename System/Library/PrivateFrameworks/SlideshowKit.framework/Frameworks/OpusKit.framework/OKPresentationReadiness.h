/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKPresentationReadiness <NSObject>
@required
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1;
-(void)removeAllReadyNotifications;
-(BOOL)isReady:(BOOL)arg1;
-(double)readyProgress:(BOOL)arg1;

@end

