/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIForceLevelClassifierDelegate <NSObject>
@optional
-(void)_forceLevelClassifierDidReset:(id)arg1;
-(void)_forceLevelClassifier:(id)arg1 didUpdateProgress:(double)arg2 toForceLevel:(long long)arg3;

@required
-(void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2;

@end
