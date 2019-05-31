/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXCollectionViewData : NSObject {

	NSMutableDictionary* _children;
	long long _childCount;

}

@property (assign,nonatomic) long long childCount;                          //@synthesize childCount=_childCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * children;              //@synthesize children=_children - In the implementation block
-(id)init;
-(id)description;
-(NSMutableDictionary *)children;
-(long long)childCount;
-(void)setChildCount:(long long)arg1 ;
@end

