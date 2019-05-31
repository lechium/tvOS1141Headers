/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BBBulletin.h>

@class NSString, NSDate, NSDictionary, NSSet, NSArray, BBContent, BBSectionIcon, NSTimeZone, BBAccessoryIcon, BBSound, BBAttachmentMetadata, BBAction;

@interface BBBulletinRequest : BBBulletin {

	unsigned long long _expirationEvents;

}

@property (nonatomic,copy) NSString * bulletinID; 
@property (nonatomic,retain) NSDate * lastInterruptDate; 
@property (nonatomic,retain) NSDate * publicationDate; 
@property (nonatomic,copy) NSString * universalSectionID; 
@property (nonatomic,copy) NSString * parentSectionID; 
@property (assign,nonatomic) long long contentPreviewSetting; 
@property (nonatomic,retain) NSDictionary * context; 
@property (nonatomic,copy) NSString * unlockActionLabelOverride; 
@property (assign,nonatomic) unsigned long long realertCount_deprecated; 
@property (nonatomic,copy) NSSet * alertSuppressionAppIDs_deprecated; 
@property (nonatomic,copy) NSString * sectionID; 
@property (nonatomic,copy) NSSet * subsectionIDs; 
@property (nonatomic,copy) NSString * recordID; 
@property (nonatomic,copy) NSString * publisherBulletinID; 
@property (nonatomic,copy) NSString * dismissalID; 
@property (nonatomic,copy) NSString * categoryID; 
@property (nonatomic,copy) NSString * threadID; 
@property (nonatomic,copy) NSArray * peopleIDs; 
@property (assign,nonatomic) long long addressBookRecordID; 
@property (assign,nonatomic) long long sectionSubtype; 
@property (nonatomic,copy) NSArray * intentIDs; 
@property (assign,nonatomic) unsigned long long counter; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) BBContent * modalAlertContent; 
@property (nonatomic,retain) BBSectionIcon * icon; 
@property (assign,nonatomic) BOOL hasEventDate; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * recencyDate; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (assign,nonatomic) BOOL dateIsAllDay; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) BBAccessoryIcon * accessoryIconMask; 
@property (assign,nonatomic) BOOL clearable; 
@property (nonatomic,retain) BBSound * sound; 
@property (assign,nonatomic) BOOL turnsOnDisplay; 
@property (nonatomic,copy) BBAttachmentMetadata * primaryAttachment; 
@property (nonatomic,copy) NSArray * additionalAttachments; 
@property (assign,nonatomic) BOOL wantsFullscreenPresentation; 
@property (assign,nonatomic) BOOL ignoresQuietMode; 
@property (nonatomic,copy) NSSet * alertSuppressionContexts; 
@property (nonatomic,copy) BBAction * defaultAction; 
@property (nonatomic,copy) BBAction * alternateAction; 
@property (nonatomic,copy) BBAction * acknowledgeAction; 
@property (nonatomic,copy) BBAction * dismissAction; 
@property (nonatomic,copy) BBAction * snoozeAction; 
@property (nonatomic,copy) BBAction * raiseAction; 
@property (nonatomic,copy) BBAction * silenceAction; 
@property (nonatomic,copy) NSArray * supplementaryActions; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (assign,nonatomic) unsigned long long expirationEvents;                     //@synthesize expirationEvents=_expirationEvents - In the implementation block
@property (nonatomic,copy) BBAction * expireAction; 
@property (assign,nonatomic) BOOL usesExternalSync; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,retain) BBContent * starkBannerContent; 
@property (assign,nonatomic) BOOL expiresOnPublisherDeath; 
@property (nonatomic,copy) NSString * section; 
@property (assign,nonatomic) unsigned long long realertCount; 
@property (assign,nonatomic) BOOL showsUnreadIndicator; 
@property (assign,nonatomic) BOOL tentative; 
@property (assign,nonatomic) long long primaryAttachmentType; 
-(id)replacementObjectForCoder:(id)arg1 ;
-(void)publish;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(BOOL)tentative;
-(void)setTentative:(BOOL)arg1 ;
-(unsigned long long)expirationEvents;
-(void)setExpirationEvents:(unsigned long long)arg1 ;
-(void)publish:(BOOL)arg1 ;
-(void)setSupplementaryActions:(id)arg1 forLayout:(long long)arg2 ;
-(void)_updateSupplementaryAction:(id)arg1 ;
-(void)addButton:(id)arg1 ;
-(void)withdraw;
-(void)setUnlockActionLabel:(id)arg1 ;
-(unsigned long long)realertCount;
-(void)setRealertCount:(unsigned long long)arg1 ;
-(void)addAlertSuppressionAppID:(id)arg1 ;
-(void)generateBulletinID;
-(void)setShowsUnreadIndicator:(BOOL)arg1 ;
-(BOOL)showsUnreadIndicator;
-(BOOL)hasContentModificationsRelativeTo:(id)arg1 ;
-(BOOL)hasAdditionalAttachmentsModificationsRelativeTo:(id)arg1 ;
-(void)generateNewBulletinID;
-(void)setSupplementaryActions:(NSArray *)arg1 ;
-(void)setContextValue:(id)arg1 forKey:(id)arg2 ;
-(void)setPrimaryAttachmentType:(long long)arg1 ;
-(void)addAttachmentOfType:(long long)arg1 ;
@end

