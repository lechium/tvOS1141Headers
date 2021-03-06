/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, NSAttributedString, NSString;

@interface UIAccessibilityLocationDescriptor : NSObject {

	UIView* _view;
	NSAttributedString* _attributedName;
	CGPoint _point;

}

@property (nonatomic,__weak,readonly) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) CGPoint point;                                    //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UIView *)view;
-(NSString *)name;
-(NSAttributedString *)attributedName;
-(CGPoint)point;
-(id)initWithName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(id)initWithAttributedName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(id)initWithName:(id)arg1 view:(id)arg2 ;
@end

