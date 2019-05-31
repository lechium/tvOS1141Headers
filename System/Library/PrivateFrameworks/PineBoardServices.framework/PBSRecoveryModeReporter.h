/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PBSRecoveryModeReporter : NSObject {

	NSMutableArray* _actions;

}

@property (nonatomic,retain) NSMutableArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)sharedReporter;
+(void)reportAction:(id)arg1 ;
+(id)reportedActions;
+(id)pathsToPreserveAcrossObliteration;
-(id)init;
-(void)setActions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)actions;
-(void)_reportAction:(id)arg1 ;
-(id)_actionFilePath;
@end

