/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusMapArea <NSObject>
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace; 
@property (nonatomic,readonly) CGRect frame; 
@required
-(CGRect)frame;
-(id<UICoordinateSpace>)coordinateSpace;
-(BOOL)intersectsRect:(CGRect)arg1;
-(BOOL)intersectsRegion:(id)arg1;
-(id)intersectionWithRegion:(id)arg1;

@end

