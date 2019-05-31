/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class _UIFlowLayoutSection, _UIFlowLayoutRow;

@interface _UIFlowLayoutItem : NSObject {

	SCD_Struct_UI47 _itemFlags;
	_UIFlowLayoutSection* _section;
	_UIFlowLayoutRow* _rowObject;
	CGRect _itemFrame;

}

@property (assign,nonatomic,__weak) _UIFlowLayoutSection * section;                          //@synthesize section=_section - In the implementation block
@property (assign,nonatomic,__weak) _UIFlowLayoutRow * rowObject;                            //@synthesize rowObject=_rowObject - In the implementation block
@property (assign,nonatomic) CGRect itemFrame;                                               //@synthesize itemFrame=_itemFrame - In the implementation block
@property (assign,getter=isSizeEstimated,nonatomic) BOOL sizeEstimated; 
@property (assign,nonatomic) BOOL sizeHasBeenSet; 
@property (assign,getter=isPositionEstimated,nonatomic) BOOL positionEstimated; 
-(id)copy;
-(_UIFlowLayoutSection *)section;
-(void)setSection:(_UIFlowLayoutSection *)arg1 ;
-(CGRect)itemFrame;
-(void)setItemFrame:(CGRect)arg1 ;
-(void)setSizeHasBeenSet:(BOOL)arg1 ;
-(void)setSizeEstimated:(BOOL)arg1 ;
-(_UIFlowLayoutRow *)rowObject;
-(BOOL)isSizeEstimated;
-(BOOL)isPositionEstimated;
-(void)setPositionEstimated:(BOOL)arg1 ;
-(BOOL)sizeHasBeenSet;
-(void)setRowObject:(_UIFlowLayoutRow *)arg1 ;
@end

