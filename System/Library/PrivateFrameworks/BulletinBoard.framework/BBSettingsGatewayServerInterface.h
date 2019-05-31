/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBSettingsGatewayServerInterface <NSObject>
@required
-(void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
-(void)getSectionOrderRuleWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPrivilegedSenderTypesWithHandler:(/*^block*/id)arg1;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)setSectionOrderRule:(long long)arg1;
-(void)getEffectiveGlobalContentPreviewsSettingWithHandler:(/*^block*/id)arg1;
-(void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
-(void)getSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getBehaviorOverridesWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesEnabledWithHandler:(/*^block*/id)arg1;
-(void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesEnabledAndEffectiveDateWithHandler:(/*^block*/id)arg1;
-(void)setOrderedSectionIDs:(id)arg1;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
-(void)setBehaviorOverrideStatus:(long long)arg1 effectiveDate:(id)arg2 source:(unsigned long long)arg3;
-(void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
-(void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
-(void)setBehaviorOverridesChangeUpdatesEnabled:(BOOL)arg1;
-(void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(BOOL)arg1;
-(void)setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)arg1;
-(void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)arg1;
-(void)setActiveBehaviorOverrideTypesChangeAssertionCountUpdatesEnabled:(BOOL)arg1;
-(void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(BOOL)arg1;
-(void)setPrivilegedSenderTypesChangeUpdatesEnabled:(BOOL)arg1;
-(void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1 source:(unsigned long long)arg2;
-(void)requestQuietModeOverrideAssertionWithCompletion:(/*^block*/id)arg1;

@end

