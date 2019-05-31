/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CKShare, CKRecordID, CKUserIdentity, CKRecord, NSData, CKShareParticipant, NSArray;

@interface CKShareMetadata : NSObject <NSCopying, NSSecureCoding> {

	BOOL _acceptedInProcess;
	NSString* _containerIdentifier;
	CKShare* _share;
	CKRecordID* _rootRecordID;
	long long _participantType;
	long long _participantStatus;
	long long _participantPermission;
	CKUserIdentity* _ownerIdentity;
	CKRecord* _rootRecord;
	long long _environment;
	NSData* _protectedFullToken;
	NSData* _publicToken;
	NSData* _privateToken;
	CKShareParticipant* _callingParticipant;
	NSArray* _outOfNetworkMatches;
	NSString* _rootRecordType;
	NSData* _encryptedData;

}

@property (assign,nonatomic) long long environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSData * protectedFullToken;                            //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,copy) NSData * publicToken;                                   //@synthesize publicToken=_publicToken - In the implementation block
@property (getter=baseToken,nonatomic,readonly) NSString * baseToken; 
@property (nonatomic,copy) NSData * privateToken;                                  //@synthesize privateToken=_privateToken - In the implementation block
@property (nonatomic,copy) CKShareParticipant * callingParticipant;                //@synthesize callingParticipant=_callingParticipant - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                         //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,retain) CKShare * share;                                      //@synthesize share=_share - In the implementation block
@property (assign,nonatomic) long long participantType;                            //@synthesize participantType=_participantType - In the implementation block
@property (assign,nonatomic) long long participantStatus;                          //@synthesize participantStatus=_participantStatus - In the implementation block
@property (assign,nonatomic) long long participantPermission;                      //@synthesize participantPermission=_participantPermission - In the implementation block
@property (nonatomic,retain) CKUserIdentity * ownerIdentity;                       //@synthesize ownerIdentity=_ownerIdentity - In the implementation block
@property (nonatomic,retain) NSArray * outOfNetworkMatches;                        //@synthesize outOfNetworkMatches=_outOfNetworkMatches - In the implementation block
@property (nonatomic,copy) CKRecordID * rootRecordID;                              //@synthesize rootRecordID=_rootRecordID - In the implementation block
@property (nonatomic,retain) CKRecord * rootRecord;                                //@synthesize rootRecord=_rootRecord - In the implementation block
@property (nonatomic,retain) NSString * rootRecordType;                            //@synthesize rootRecordType=_rootRecordType - In the implementation block
@property (assign,nonatomic) BOOL acceptedInProcess;                               //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
@property (nonatomic,retain) NSData * encryptedData;                               //@synthesize encryptedData=_encryptedData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEnvironment:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(CKUserIdentity *)ownerIdentity;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSData *)publicToken;
-(BOOL)acceptedInProcess;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(NSData *)encryptedData;
-(void)setEncryptedData:(NSData *)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)ckShortDescription;
-(long long)participantPermission;
-(NSArray *)outOfNetworkMatches;
-(NSData *)protectedFullToken;
-(void)setPrivateToken:(NSData *)arg1 ;
-(void)setPublicToken:(NSData *)arg1 ;
-(NSData *)privateToken;
-(long long)participantType;
-(NSString *)baseToken;
-(CKShareParticipant *)callingParticipant;
-(void)setParticipantType:(long long)arg1 ;
-(void)setParticipantStatus:(long long)arg1 ;
-(void)setParticipantPermission:(long long)arg1 ;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(NSString *)rootRecordType;
-(void)setRootRecordType:(NSString *)arg1 ;
-(void)setRootRecordID:(CKRecordID *)arg1 ;
-(void)setRootRecord:(CKRecord *)arg1 ;
-(void)setCallingParticipant:(CKShareParticipant *)arg1 ;
-(void)setOwnerIdentity:(CKUserIdentity *)arg1 ;
-(void)setOutOfNetworkMatches:(NSArray *)arg1 ;
-(CKRecordID *)rootRecordID;
-(long long)participantStatus;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(CKRecord *)rootRecord;
-(NSString *)containerIdentifier;
@end
