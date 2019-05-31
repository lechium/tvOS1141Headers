/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, PRPersonaStore;

@interface CNAvatarViewControllerSettings : NSObject {

	BOOL _threeDTouchEnabled;
	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;

}

@property (nonatomic,retain) PRPersonaStore * personaStore;              //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                    //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
+(id)settingsWithContactStore:(id)arg1 ;
+(id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
+(BOOL)threeDTouchEnabledDefaultValue;
+(id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
+(id)defaultSettings;
-(PRPersonaStore *)personaStore;
-(id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(BOOL)threeDTouchEnabled;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end
