/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSISEngineDelegate <NSObject>
@optional
-(void)solutionDidChangeInEngine:(id)arg1;

@required
-(void)constraintsDidChangeInEngine:(id)arg1;
-(id)engine:(id)arg1 markerForConstraintToBreakAmongConstraints:(id)arg2;
-(void)engine:(id)arg1 willBreakConstraint:(id)arg2 dueToMutuallyExclusiveConstraints:(id)arg3;

@end

