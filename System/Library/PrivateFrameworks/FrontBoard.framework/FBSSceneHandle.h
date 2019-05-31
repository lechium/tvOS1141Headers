/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSSceneHandle <NSObject>
@required
-(id)identifier;
-(id)parameters;
-(id)specification;
-(id)hostProcess;
-(id)clientProcess;
-(id)callOutQueue;
-(id)counterpartAgent;
-(id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
-(id)sessionForIdentifier:(id)arg1;
-(void)closeSession:(id)arg1;

@end
