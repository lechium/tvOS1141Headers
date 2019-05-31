/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying> {

	NSString* _uploadIdentifier;
	BOOL _shouldNotTrustCloudCache;
	BOOL _shouldFilterDefaultValuesForNewProperties;
	BOOL _isSparseFullChange;
	BOOL _inTrash;
	BOOL _inExpunged;
	BOOL _serverRecordIsCorrupted;
	NSString* _identifier;
	NSDate* _recordModificationDate;
	unsigned long long _changeType;
	NSDate* _dateDeleted;
	NSString* _realIdentifier;
	NSData* _recordChangeData;

}

@property (nonatomic,copy) NSString * realIdentifier;                    //@synthesize realIdentifier=_realIdentifier - In the implementation block
@property (nonatomic,copy) NSData * recordChangeData;                    //@synthesize recordChangeData=_recordChangeData - In the implementation block
@property (assign,nonatomic) BOOL serverRecordIsCorrupted;               //@synthesize serverRecordIsCorrupted=_serverRecordIsCorrupted - In the implementation block
@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * recordModificationDate;              //@synthesize recordModificationDate=_recordModificationDate - In the implementation block
@property (assign,nonatomic) unsigned long long changeType;              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,copy) NSDate * dateDeleted;                         //@synthesize dateDeleted=_dateDeleted - In the implementation block
@property (assign,nonatomic) BOOL inTrash;                               //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) BOOL inExpunged;                            //@synthesize inExpunged=_inExpunged - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newRecord;
+(id)cplAdditionalSecureClassesForProperty:(id)arg1 ;
+(Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2 ;
+(/*^block*/id)copyPropertyBlockForDirection:(unsigned long long)arg1 ;
+(id)descriptionForChangeType:(unsigned long long)arg1 ;
+(id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(BOOL)arg2 ;
+(/*^block*/id)equalityBlockForDirection:(unsigned long long)arg1 ;
+(id)descriptionForDirection:(unsigned long long)arg1 ;
+(id)newChangeWithType:(unsigned long long)arg1 ;
+(id)newDeleteChangeWithIdentifier:(id)arg1 ;
+(id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2 ;
+(long long)maxInlineDataSize;
+(id)newRecordWithIdentifier:(id)arg1 ;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isDelete;
-(unsigned long long)totalResourceSize;
-(void)_setShouldNotTrustCloudCache:(BOOL)arg1 ;
-(id)propertiesForChangeType:(unsigned long long)arg1 ;
-(id)_uploadIdentifier;
-(void)_setUploadIdentifier:(id)arg1 ;
-(BOOL)_shouldNotTrustCloudCache;
-(long long)dequeueOrder;
-(id)resourcesDescription;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(BOOL)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1 ;
-(id)propertiesDescription;
-(void)prepareForStorage;
-(void)awakeFromStorage;
-(id)cplFullDescription;
-(BOOL)supportsDirectDeletion;
-(id)storedClassNameForCPLArchiver:(id)arg1 ;
-(id)proposedCloudIdentifierWithError:(id*)arg1 ;
-(id)proposedLocalIdentifier;
-(id)identifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(NSString *)realIdentifier;
-(id)resourceForType:(unsigned long long)arg1 ;
-(id)allRelatedIdentifiers;
-(NSData *)recordChangeData;
-(void)markAsSparseFullChange;
-(unsigned long long)fullChangeTypeForFullRecord;
-(BOOL)resourceChangeWillOnlyChangeDerivatives:(id)arg1 ;
-(void)setRecordChangeData:(NSData *)arg1 ;
-(BOOL)validateFullRecord;
-(id)secondaryIdentifier;
-(void)setSecondaryIdentifier:(id)arg1 ;
-(id)identifierForQuarantine;
-(BOOL)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 direction:(unsigned long long)arg4 updatedProperty:(id*)arg5 ;
-(id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3 updatedProperties:(id*)arg4 ;
-(unsigned long long)originalResourceSize;
-(id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3 ;
-(id)mergeRecordChangeWithNewRecordChange:(id)arg1 direction:(unsigned long long)arg2 ;
-(id)identifiersForQuarantine;
-(BOOL)shouldApplyPropertiesWithSelector:(SEL)arg1 ;
-(void)setShouldFilterDefaultValuesForNewProperties:(BOOL)arg1 ;
-(BOOL)shouldFilterDefaultValuesForNewProperties;
-(BOOL)isSparseFullChange;
-(BOOL)validateChangeWithError:(id*)arg1 ;
-(unsigned long long)estimatedRecordSize;
-(BOOL)_canLowerQuota;
-(BOOL)allResourcesAreAvailable;
-(void)setRealIdentifier:(NSString *)arg1 ;
-(BOOL)serverRecordIsCorrupted;
-(void)setServerRecordIsCorrupted:(BOOL)arg1 ;
-(BOOL)validateRecordForTracker:(id)arg1 ;
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4 ;
-(BOOL)supportsResources;
-(BOOL)inExpunged;
-(BOOL)hasChangeType:(unsigned long long)arg1 ;
-(BOOL)isFullRecord;
-(void)setInTrash:(BOOL)arg1 ;
-(void)setInExpunged:(BOOL)arg1 ;
-(void)setDateDeleted:(NSDate *)arg1 ;
-(void)setRecordModificationDate:(NSDate *)arg1 ;
-(NSDate *)recordModificationDate;
-(BOOL)inTrash;
-(NSDate *)dateDeleted;
-(unsigned long long)realResourceSize;
-(BOOL)supportsDeletion;
-(unsigned long long)changeType;
-(void)setChangeType:(unsigned long long)arg1 ;
@end

