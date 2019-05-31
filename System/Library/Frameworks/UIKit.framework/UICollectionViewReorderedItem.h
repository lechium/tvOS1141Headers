/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewReorderedItem : NSObject {

	UICollectionViewCell* _cell;
	NSIndexPath* _originalIndexPath;
	NSIndexPath* _targetIndexPath;
	BOOL _pinned;
	/*^block*/id _pinningTest;
	CGPoint _pinnedPreviousContentOffset;

}

@property (nonatomic,readonly) UICollectionViewCell * cell;                    //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * originalIndexPath;                  //@synthesize originalIndexPath=_originalIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * targetIndexPath;                    //@synthesize targetIndexPath=_targetIndexPath - In the implementation block
@property (assign,nonatomic) BOOL pinned;                                      //@synthesize pinned=_pinned - In the implementation block
@property (assign,nonatomic) CGPoint pinnedPreviousContentOffset;              //@synthesize pinnedPreviousContentOffset=_pinnedPreviousContentOffset - In the implementation block
@property (nonatomic,copy) id pinningTest;                                     //@synthesize pinningTest=_pinningTest - In the implementation block
-(id)description;
-(BOOL)isNOOP;
-(void)setPinned:(BOOL)arg1 ;
-(void)setTargetIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)targetIndexPath;
-(NSIndexPath *)originalIndexPath;
-(id)initWithCell:(id)arg1 indexPath:(id)arg2 ;
-(void)setOriginalIndexPath:(NSIndexPath *)arg1 ;
-(UICollectionViewCell *)cell;
-(BOOL)pinned;
-(CGPoint)pinnedPreviousContentOffset;
-(void)setPinnedPreviousContentOffset:(CGPoint)arg1 ;
-(id)pinningTest;
-(void)setPinningTest:(id)arg1 ;
@end

