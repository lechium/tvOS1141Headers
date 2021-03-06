/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UICollectionViewShadowUpdatesController.h>

@class NSMutableArray, NSUUID, NSArray;

@interface _UICollectionViewDragAndDropController : _UICollectionViewShadowUpdatesController {

	int _sessionKind;
	NSMutableArray* __reorderedItems;
	NSUUID* _currentDropInsertionShadowUpdateIdentifier;

}

@property (nonatomic,retain) NSMutableArray * _reorderedItems;                                 //@synthesize _reorderedItems=__reorderedItems - In the implementation block
@property (nonatomic,retain) NSUUID * currentDropInsertionShadowUpdateIdentifier;              //@synthesize currentDropInsertionShadowUpdateIdentifier=_currentDropInsertionShadowUpdateIdentifier - In the implementation block
@property (assign,nonatomic) int sessionKind;                                                  //@synthesize sessionKind=_sessionKind - In the implementation block
@property (nonatomic,readonly) NSArray * reorderedItems; 
@property (nonatomic,readonly) unsigned long long reorderingCapabilities; 
-(id)description;
-(void)reset;
-(BOOL)hasShadowUpdates;
-(void)didRebaseWithNewBaseUpdateMap:(id)arg1 ;
-(id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1 ;
-(void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 ;
-(BOOL)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
-(int)sessionKind;
-(NSMutableArray *)_reorderedItems;
-(int)_determineSessionKind;
-(void)setSessionKind:(int)arg1 ;
-(void)_beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2 ;
-(void)_beginDragAndDropInsertingItemAtIndexPath:(id)arg1 ;
-(BOOL)_isReordering;
-(BOOL)_hasReorderingMoved;
-(void)_rollbackCurrentDropInsertion;
-(id)indexPathForCurrentReorderedItem;
-(id)indexPathForOriginalReorderedItem;
-(void)_resetReorderedItems;
-(void)setCurrentDropInsertionShadowUpdateIdentifier:(NSUUID *)arg1 ;
-(id)indexPathForDragAndDropInsertion;
-(NSUUID *)currentDropInsertionShadowUpdateIdentifier;
-(BOOL)_deleteShadowUpdateWithIdentifier:(id)arg1 ;
-(void)_removeReorderedItemsCellsFromViewHierarchy;
-(BOOL)beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2 ;
-(void)updateReorderingTargetIndexPath:(id)arg1 ;
-(/*^block*/id)cancelReordering;
-(/*^block*/id)endReordering;
-(void)updateAppearanceForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)cancelReorderingShouldRevertOrdering;
-(BOOL)isCellPerformingLegacyReorderingAtIndexPath:(id)arg1 ;
-(NSArray *)reorderedItems;
-(unsigned long long)reorderingCapabilities;
-(BOOL)updateWillCauseInternalInconsistency:(id)arg1 ;
-(void)_shadowUpdatesWereReverted;
-(BOOL)_removeMoveShadowUpdateMatchingReorderedItem:(id)arg1 ;
-(void)set_reorderedItems:(NSMutableArray *)arg1 ;
@end

