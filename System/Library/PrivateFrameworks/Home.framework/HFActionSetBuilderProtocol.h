/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HFActionSetBuilderProtocol <NSObject>
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
@property (getter=isAffectedByEndEvents,nonatomic,readonly) BOOL affectedByEndEvents; 
@required
-(NSArray *)actions;
-(void)addAction:(id)arg1;
-(void)removeAllActions;
-(BOOL)requiresDeviceUnlock;
-(BOOL)isAffectedByEndEvents;
-(void)updateAction:(id)arg1;
-(void)removeAction:(id)arg1;

@end

