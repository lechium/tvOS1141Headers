/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIRemoveControl, UIControl, UIView;

@interface _UITableViewCellOldEditingData : NSObject {

	UIRemoveControl* _removeControl;
	UIControl* _grabber;
	UIView* _separator;

}

@property (nonatomic,retain) UIControl * reorderControl;              //@synthesize grabber=_grabber - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                  //@synthesize separator=_separator - In the implementation block
-(UIView *)separatorView;
-(BOOL)dataRequired;
-(UIControl *)reorderControl;
-(void)setReorderControl:(UIControl *)arg1 ;
-(void)setSeparatorView:(UIView *)arg1 ;
@end

