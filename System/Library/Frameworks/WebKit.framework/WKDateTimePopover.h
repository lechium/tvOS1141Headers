/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormRotatingAccessoryPopover.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class WKContentView;

@interface WKDateTimePopover : WKFormRotatingAccessoryPopover <WKFormControl> {

	RetainPtr<WKDateTimePopoverViewController>* _viewController;
	WKContentView* _view;

}
-(id)viewController;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)clear:(id)arg1 ;
-(id)initWithView:(id)arg1 datePickerMode:(long long)arg2 ;
@end

