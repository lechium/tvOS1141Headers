/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NUIWidgetGridViewCell.h>

@class NUIWidgetGridView;

@interface NUIWidgetGridViewEmptyCell : UIView <NUIWidgetGridViewCell> {

	NUIWidgetGridView* _gridView;
	double _width;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long index; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(unsigned long long)index;
-(CGSize)donatableSpaceAllowRemeasure:(BOOL)arg1 ;
-(id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3 ;
-(CGSize)donatableSpace;
@end

