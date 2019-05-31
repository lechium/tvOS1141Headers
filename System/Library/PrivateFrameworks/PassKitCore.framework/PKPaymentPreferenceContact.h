/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentPreference.h>

@class NSOrderedSet, NSString, PKPaymentOptionsRecents;

@interface PKPaymentPreferenceContact : PKPaymentPreference {

	BOOL _showPhoneticName;
	NSOrderedSet* _contactKeys;
	NSString* _addNewTitle;
	NSString* _addExistingTitle;
	NSString* _editExistingTitle;
	unsigned long long _type;

}

@property (nonatomic,retain) PKPaymentOptionsRecents * paymentOptionsRecents; 
@property (nonatomic,copy) NSString * contactKey; 
@property (nonatomic,copy) NSOrderedSet * contactKeys;                                     //@synthesize contactKeys=_contactKeys - In the implementation block
@property (nonatomic,copy) NSString * addNewTitle;                                         //@synthesize addNewTitle=_addNewTitle - In the implementation block
@property (nonatomic,copy) NSString * addExistingTitle;                                    //@synthesize addExistingTitle=_addExistingTitle - In the implementation block
@property (nonatomic,copy) NSString * editExistingTitle;                                   //@synthesize editExistingTitle=_editExistingTitle - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL showPhoneticName;                                        //@synthesize showPhoneticName=_showPhoneticName - In the implementation block
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(void)setErrors:(id)arg1 forPreference:(id)arg2 ;
-(id)errorsForPreference:(id)arg1 ;
-(BOOL)supportsDeletion;
-(BOOL)showPhoneticName;
-(void)setShowPhoneticName:(BOOL)arg1 ;
-(PKPaymentOptionsRecents *)paymentOptionsRecents;
-(void)setPaymentOptionsRecents:(PKPaymentOptionsRecents *)arg1 ;
-(BOOL)preferenceObject:(id)arg1 representsContact:(id)arg2 ;
-(NSOrderedSet *)contactKeys;
-(void)_removeDuplicates;
-(void)setContactKey:(NSString *)arg1 ;
-(NSString *)contactKey;
-(void)mergeRecentsAndMeCard;
-(long long)indexOfContact:(id)arg1 ;
-(void)setContactKeys:(NSOrderedSet *)arg1 ;
-(NSString *)addNewTitle;
-(void)setAddNewTitle:(NSString *)arg1 ;
-(NSString *)addExistingTitle;
-(void)setAddExistingTitle:(NSString *)arg1 ;
-(NSString *)editExistingTitle;
-(void)setEditExistingTitle:(NSString *)arg1 ;
@end

