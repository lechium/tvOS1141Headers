/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBObserverClientInterface
@required
-(void)updateSectionOrderRule:(id)arg1;
-(void)updateSectionOrder:(id)arg1;
-(void)updateSectionInfo:(id)arg1;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
-(void)noteAlertBehaviorOverridesChanged:(id)arg1;
-(void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
-(void)noteServerReceivedResponseForBulletin:(id)arg1;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getObserverDebugInfo:(/*^block*/id)arg1;
-(void)removeSection:(id)arg1;

@end

