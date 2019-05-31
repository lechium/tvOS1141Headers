/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFContactControllerDelegate;
@class NSMutableDictionary, NSArray, NSDictionary, NSMutableArray;

@interface HFContactController : NSObject {

	id<HFContactControllerDelegate> _delegate;
	NSMutableDictionary* _recipientAvailabilities;
	unsigned long long _familyMembersState;
	NSArray* _familyMembers;
	NSDictionary* _familyMemberDsidToContact;
	NSArray* _descriptors;
	NSMutableArray* _familyMemberCallbacks;

}

@property (nonatomic,retain) NSMutableDictionary * recipientAvailabilities;                //@synthesize recipientAvailabilities=_recipientAvailabilities - In the implementation block
@property (assign,nonatomic) unsigned long long familyMembersState;                        //@synthesize familyMembersState=_familyMembersState - In the implementation block
@property (nonatomic,copy) NSArray * familyMembers;                                        //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,copy) NSDictionary * familyMemberDsidToContact;                       //@synthesize familyMemberDsidToContact=_familyMemberDsidToContact - In the implementation block
@property (nonatomic,copy) NSArray * descriptors;                                          //@synthesize descriptors=_descriptors - In the implementation block
@property (nonatomic,retain) NSMutableArray * familyMemberCallbacks;                       //@synthesize familyMemberCallbacks=_familyMemberCallbacks - In the implementation block
@property (assign,nonatomic,__weak) id<HFContactControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingDestinations; 
+(id)stringForRecipientStatus:(unsigned long long)arg1 ;
+(id)contactForEmailAddress:(id)arg1 keyDescriptors:(id)arg2 ;
+(id)contactForPhoneNumber:(id)arg1 keyDescriptors:(id)arg2 ;
-(id)init;
-(id<HFContactControllerDelegate>)delegate;
-(void)setDelegate:(id<HFContactControllerDelegate>)arg1 ;
-(NSArray *)familyMembers;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(id)initWithKeyDescriptors:(id)arg1 ;
-(void)fetchFamilyMembersWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadFamilyMembersWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)recipientAvailabilities;
-(unsigned long long)familyMembersState;
-(NSMutableArray *)familyMemberCallbacks;
-(NSDictionary *)familyMemberDsidToContact;
-(id)_contactForFamilyMember:(id)arg1 ;
-(void)setFamilyMemberDsidToContact:(NSDictionary *)arg1 ;
-(void)_downloadFamilyMemberPhotos;
-(NSArray *)pendingDestinations;
-(void)entriesUpdated:(id)arg1 ;
-(void)markDestinationsPending:(id)arg1 ;
-(unsigned long long)statusForDestination:(id)arg1 ;
-(id)contactForFamilyMemberWithDsid:(id)arg1 ;
-(void)setRecipientAvailabilities:(NSMutableDictionary *)arg1 ;
-(void)setFamilyMembersState:(unsigned long long)arg1 ;
-(NSArray *)descriptors;
-(void)setDescriptors:(NSArray *)arg1 ;
-(void)setFamilyMemberCallbacks:(NSMutableArray *)arg1 ;
@end

