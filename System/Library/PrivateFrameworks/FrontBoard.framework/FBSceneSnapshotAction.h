/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneSnapshotAction.h>

@class NSString, BKSProcessAssertion;

@interface FBSceneSnapshotAction : FBSSceneSnapshotAction {

	NSString* _sceneID;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(void)dealloc;
-(NSString *)sceneID;
-(id)initWithScene:(id)arg1 requests:(id)arg2 expirationInterval:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
@end

