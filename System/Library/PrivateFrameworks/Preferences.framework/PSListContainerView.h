/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class PSListController;

@interface PSListContainerView : UIView {

	PSListController* _delegate;

}

@property (assign,nonatomic,__weak) PSListController * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(PSListController *)delegate;
-(void)setDelegate:(PSListController *)arg1 ;
-(void)layoutMarginsDidChange;
@end

