/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UICollectionView, NSArray, UICollectionViewData, NSMutableIndexSet, NSMutableArray, NSMutableDictionary, NSIndexPath;

@interface UICollectionViewUpdate : NSObject {

	UICollectionView* _collectionView;
	NSArray* _updateItems;
	UICollectionViewData* _oldModel;
	UICollectionViewData* _newModel;
	CGRect _oldVisibleBounds;
	CGRect _newVisibleBounds;
	NSMutableIndexSet* _movedItems;
	NSMutableIndexSet* _movedSections;
	NSMutableIndexSet* _deletedSections;
	NSMutableIndexSet* _insertedSections;
	long long* _oldSectionMap;
	long long* _newSectionMap;
	long long* _oldGlobalItemMap;
	long long* _newGlobalItemMap;
	NSMutableArray* _deletedSupplementaryIndexesSectionArray;
	NSMutableArray* _insertedSupplementaryIndexesSectionArray;
	NSMutableDictionary* _deletedSupplementaryTopLevelIndexesDict;
	NSMutableDictionary* _insertedSupplementaryTopLevelIndexesDict;
	id* _animatedItems;
	id* _animatedHeaders;
	id* _animatedFooters;
	NSMutableArray* _viewAnimations;
	NSIndexPath* _oldFocusedIndexPath;
	NSIndexPath* _newFocusedIndexPath;
	long long _oldFocusedViewType;
	long long _newFocusedViewType;

}
-(void)dealloc;
-(id)description;
-(void)_computeSectionUpdates;
-(void)_computeItemUpdates;
-(id)initWithCollectionView:(id)arg1 updateItems:(id)arg2 oldModel:(id)arg3 newModel:(id)arg4 oldVisibleBounds:(CGRect)arg5 newVisibleBounds:(CGRect)arg6 ;
-(void)_computeSupplementaryUpdates;
-(id)newIndexPathForSupplementaryElementOfKind:(id)arg1 oldIndexPath:(id)arg2 ;
-(id)oldIndexPathForSupplementaryElementOfKind:(id)arg1 newIndexPath:(id)arg2 ;
@end

