/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebFormRotatingAccessoryPopover.h>
#import <UIKit/UIWebFormControl.h>

@class UIWebSelectTableViewController;

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

	UIWebSelectTableViewController* _tableViewController;

}

@property (nonatomic,retain) UIWebSelectTableViewController * _tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
-(void)dealloc;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(BOOL)arg5 ;
-(void)_userActionDismissedPopover:(id)arg1 ;
-(void)set_tableViewController:(UIWebSelectTableViewController *)arg1 ;
-(UIWebSelectTableViewController *)_tableViewController;
@end
