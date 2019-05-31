/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITableViewSubviewManagerDelegate;
@class UITableViewCell, UITableView, NSCountedSet, NSMapTable;

@interface _UITableViewSubviewManager : NSObject {

	UITableViewCell* _reorderingCell;
	UITableView*<_UITableViewSubviewManagerDelegate> _tableView;
	NSCountedSet* _reusePreventedCells;
	NSMapTable* _cellsReadyForReuse;

}

@property (assign,nonatomic,__weak) UITableView*<_UITableViewSubviewManagerDelegate> tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSCountedSet * reusePreventedCells;                                             //@synthesize reusePreventedCells=_reusePreventedCells - In the implementation block
@property (nonatomic,retain) NSMapTable * cellsReadyForReuse;                                                //@synthesize cellsReadyForReuse=_cellsReadyForReuse - In the implementation block
@property (nonatomic,retain) UITableViewCell * reorderingCell;                                               //@synthesize reorderingCell=_reorderingCell - In the implementation block
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(UITableView*<_UITableViewSubviewManagerDelegate>)arg1 ;
-(BOOL)shouldDeferReuseOfCell:(id)arg1 ;
-(void)cellReadyForReuse:(id)arg1 withIndexPath:(id)arg2 didEndDisplaying:(BOOL)arg3 ;
-(UITableView*<_UITableViewSubviewManagerDelegate>)tableView;
-(void)resumeReuseOfCell:(id)arg1 ;
-(void)preventReuseOfCell:(id)arg1 ;
-(void)setReorderingCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)reorderingCell;
-(NSCountedSet *)reusePreventedCells;
-(void)setReusePreventedCells:(NSCountedSet *)arg1 ;
-(NSMapTable *)cellsReadyForReuse;
-(void)setCellsReadyForReuse:(NSMapTable *)arg1 ;
@end

