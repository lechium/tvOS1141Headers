/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/AFUISiriRemoteViewHosting.h>

@class UIView, NSString;

@interface AFUISiriRemoteContainerView : UIView <AFUISiriRemoteViewHosting> {

	UIView* _remoteContentView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * remoteContentView;              //@synthesize remoteContentView=_remoteContentView - In the implementation block
-(void)layoutSubviews;
-(UIView *)remoteContentView;
-(void)setRemoteContentView:(UIView *)arg1 ;
@end

