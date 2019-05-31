/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableViewDataSourcePrivate.h>
#import <UIKit/UIDataSourceModelAssociation.h>
#import <UIKit/UITableViewDelegatePrivate.h>
#import <UIKit/UITableViewDataSourcePrefetching.h>

@class UITableView, NSMutableArray, _UIDataSourceSnapshotter, _UIDataSourceUpdateMap, NSString;

@interface _UITableViewShadowUpdatesController : NSObject <UITableViewDataSourcePrivate, UIDataSourceModelAssociation, UITableViewDelegatePrivate, UITableViewDataSourcePrefetching> {

	UITableView* _tableView;
	NSMutableArray* _shadowUpdates;
	_UIDataSourceSnapshotter* _initialSnapshot;
	_UIDataSourceUpdateMap* _updateMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * shadowUpdates;                                          //@synthesize shadowUpdates=_shadowUpdates - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * initialSnapshot;                              //@synthesize initialSnapshot=_initialSnapshot - In the implementation block
@property (nonatomic,retain) _UIDataSourceUpdateMap * updateMap;                                      //@synthesize updateMap=_updateMap - In the implementation block
@property (nonatomic,readonly) BOOL hasShadowUpdates; 
@property (nonatomic,readonly) _UIDataSourceSnapshotter * dataSourceBeforeShadowUpdates; 
@property (nonatomic,readonly) _UIDataSourceSnapshotter * dataSourceAfterShadowUpdates; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 accessoryTypeForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldUpdateFocusInContext:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)reset;
-(id)initWithTableView:(id)arg1 ;
-(CGRect)tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(CGRect)arg2 ;
-(id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(BOOL)hasShadowUpdates;
-(void)rebaseExistingShadowUpdatesForUpdates:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 deleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 swipeAccessoryButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)indexPathBeforeShadowUpdates:(id)arg1 ;
-(id)indexPathAfterShadowUpdates:(id)arg1 ;
-(void)tableView:(id)arg1 didEndSwipingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateTextFieldForRowAtIndexPath:(id)arg2 withValue:(id)arg3 ;
-(id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2 ;
-(void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2 ;
-(double)tableView:(id)arg1 maxTitleWidthForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 maxTitleWidthForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(double)marginForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2 ;
-(double)heightForHeaderInTableView:(id)arg1 ;
-(double)heightForFooterInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(id)viewForFooterInTableView:(id)arg1 ;
-(CGRect)tableView:(id)arg1 calloutTargetRectForCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2 ;
-(BOOL)_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedItemForTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldUpdateFocusFromRowAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4 ;
-(id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2 ;
-(void)_tableView:(id)arg1 willLayoutCell:(id)arg2 usingTemplateLayoutCell:(id)arg3 forRowAtIndexPath:(id)arg4 ;
-(_UIDataSourceSnapshotter *)dataSourceBeforeShadowUpdates;
-(long long)sectionAfterShadowUpdates:(long long)arg1 ;
-(id)indexPathsBeforeShadowUpdates:(id)arg1 ;
-(id)sectionsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(BOOL)arg2 ;
-(id)indexPathsAfterShadowUpdates:(id)arg1 allowAppendingInsert:(BOOL)arg2 ;
-(id)indexPathAfterShadowUpdates:(id)arg1 allowAppendingInsert:(BOOL)arg2 ;
-(NSMutableArray *)shadowUpdates;
-(id)indexPathAfterShadowUpdates:(id)arg1 startingAtUpdate:(id)arg2 ;
-(void)removeShadowUpdate:(id)arg1 ;
-(void)appendShadowUpdate:(id)arg1 ;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(id)modelIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2 ;
-(id)indexPathForElementWithModelIdentifier:(id)arg1 inView:(id)arg2 ;
-(long long)sectionBeforeShadowUpdates:(long long)arg1 ;
-(UITableView *)tableView;
-(void)setInitialSnapshot:(_UIDataSourceSnapshotter *)arg1 ;
-(void)setUpdateMap:(_UIDataSourceUpdateMap *)arg1 ;
-(_UIDataSourceUpdateMap *)updateMap;
-(_UIDataSourceSnapshotter *)initialSnapshot;
-(void)regenerateUpdateMap;
-(id)shadowUpdateWithIdentifier:(id)arg1 ;
-(_UIDataSourceSnapshotter *)dataSourceAfterShadowUpdates;
-(id)_rebasedShadowUpdatesForUpdate:(id)arg1 initialSnapshot:(id)arg2 ;
-(id)sectionsBeforeShadowUpdates:(id)arg1 ;
-(id)sectionsAfterShadowUpdates:(id)arg1 ;
-(id)indexPathsAfterShadowUpdates:(id)arg1 ;
-(id)indexPathBeforeShadowUpdates:(id)arg1 startingBeforeUpdate:(id)arg2 ;
-(void)setShadowUpdates:(NSMutableArray *)arg1 ;
-(CGPoint)tableView:(id)arg1 newContentOffsetAfterUpdate:(CGPoint)arg2 context:(id)arg3 ;
@end

