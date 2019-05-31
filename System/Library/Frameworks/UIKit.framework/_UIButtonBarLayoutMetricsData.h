/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSLayoutDimension, NSLayoutAnchor;


@protocol _UIButtonBarLayoutMetricsData <NSObject>
@property (nonatomic,readonly) NSLayoutDimension * verticalSizeGuide; 
@property (nonatomic,readonly) NSLayoutDimension * minimumSpaceGuide; 
@property (nonatomic,readonly) NSLayoutDimension * flexibleSpaceGuide; 
@property (nonatomic,readonly) NSLayoutAnchor * popoverGuideTopAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * groupSizeGuide; 
@property (nonatomic,readonly) NSLayoutDimension * groupSpacingGuide; 
@property (nonatomic,readonly) BOOL createsPopoverLayoutGuides; 
@property (nonatomic,readonly) BOOL allowsViewWrappers; 
@required
-(id)_upcastIfReadOnly;
-(NSLayoutDimension *)verticalSizeGuide;
-(NSLayoutDimension *)minimumSpaceGuide;
-(NSLayoutDimension *)flexibleSpaceGuide;
-(NSLayoutAnchor *)popoverGuideTopAnchor;
-(NSLayoutDimension *)groupSizeGuide;
-(NSLayoutDimension *)groupSpacingGuide;
-(BOOL)createsPopoverLayoutGuides;
-(BOOL)allowsViewWrappers;

@end
