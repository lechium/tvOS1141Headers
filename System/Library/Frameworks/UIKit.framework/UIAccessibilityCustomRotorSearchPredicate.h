/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIAccessibilityCustomRotorItemResult;

@interface UIAccessibilityCustomRotorSearchPredicate : NSObject {

	UIAccessibilityCustomRotorItemResult* _currentItem;
	long long _searchDirection;

}

@property (nonatomic,retain) UIAccessibilityCustomRotorItemResult * currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) long long searchDirection;                                       //@synthesize searchDirection=_searchDirection - In the implementation block
-(UIAccessibilityCustomRotorItemResult *)currentItem;
-(void)setCurrentItem:(UIAccessibilityCustomRotorItemResult *)arg1 ;
-(long long)searchDirection;
-(void)setSearchDirection:(long long)arg1 ;
@end
