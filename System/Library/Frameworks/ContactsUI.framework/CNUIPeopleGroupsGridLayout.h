/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface CNUIPeopleGroupsGridLayout : UICollectionViewFlowLayout {

	CGSize _intrinsicContentSize;

}

@property (assign,nonatomic) CGSize intrinsicContentSize;              //@synthesize intrinsicContentSize=_intrinsicContentSize - In the implementation block
+(unsigned long long)maximumNumberOfRowsForTraitCollection:(id)arg1 ;
+(unsigned long long)groupCountPerRowForTraitCollection:(id)arg1 ;
+(CGSize)itemSizeForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2 ;
+(double)verticalMargin;
+(unsigned long long)maximumNumberOfGroupsForTraitCollection:(id)arg1 ;
+(id)layoutForTraitCollection:(id)arg1 contentSizeCategory:(id)arg2 numberOfGroups:(unsigned long long)arg3 ;
-(CGSize)intrinsicContentSize;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
@end

