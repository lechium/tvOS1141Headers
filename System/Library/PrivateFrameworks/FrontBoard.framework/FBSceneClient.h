/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneClient <NSObject>
@required
-(void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)host:(id)arg1 didReceiveActions:(id)arg2;

@end
