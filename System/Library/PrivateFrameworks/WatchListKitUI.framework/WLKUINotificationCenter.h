/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/WLKNotificationCenterDelegate.h>
#import <libobjc.A.dylib/WLKUINotificationCenter.h>

@protocol WLKUINotificationCenter <JSExport>
@required
-(void)post:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4;

@end


@class WLKNotificationCenter, NSString;

@interface WLKUINotificationCenter : IKJSObject <WLKNotificationCenterDelegate, WLKUINotificationCenter> {

	WLKNotificationCenter* _center;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAction:(id)arg1 ;
-(void)post:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 ;
-(id)initWithAppContext:(id)arg1 ;
@end

