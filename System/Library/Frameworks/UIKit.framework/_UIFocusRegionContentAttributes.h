/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIFocusRegion;

@interface _UIFocusRegionContentAttributes : NSObject <NSCopying> {

	BOOL _requiresIntersectionWithFocusMapSearchArea;
	_UIFocusRegion* _contentRegion;

}

@property (nonatomic,copy) _UIFocusRegion * contentRegion;                                 //@synthesize contentRegion=_contentRegion - In the implementation block
@property (assign,nonatomic) BOOL requiresIntersectionWithFocusMapSearchArea;              //@synthesize requiresIntersectionWithFocusMapSearchArea=_requiresIntersectionWithFocusMapSearchArea - In the implementation block
+(id)attributesForFocusRegionContentInContainer:(id)arg1 coordinateSpace:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentRegion:(_UIFocusRegion *)arg1 ;
-(void)setRequiresIntersectionWithFocusMapSearchArea:(BOOL)arg1 ;
-(_UIFocusRegion *)contentRegion;
-(BOOL)requiresIntersectionWithFocusMapSearchArea;
@end

