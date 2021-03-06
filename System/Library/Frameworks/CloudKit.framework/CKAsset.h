/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, CKRecord, NSString, NSData, NSFileHandle, NSNumber, CKAssetCopyInfo, NSDate, CKAssetTransferOptions, CKRecordID, NSDictionary;

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding> {

	BOOL _wasCached;
	BOOL _hasSize;
	BOOL _uploaded;
	BOOL _downloaded;
	BOOL _shouldReadRawEncryptedData;
	NSURL* _fileURL;
	CKRecord* _record;
	NSString* _recordKey;
	NSURL* _contentBaseURL;
	NSString* _owner;
	NSString* _requestor;
	NSString* _authToken;
	NSData* _authRequest;
	NSString* _downloadBaseURL;
	unsigned long long _downloadTokenExpiration;
	NSData* _boundaryKey;
	NSFileHandle* _clientOpenedFileHandle;
	NSData* _signature;
	unsigned long long _size;
	unsigned long long _paddedFileSize;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationCountToSave;
	NSData* _assetContent;
	NSString* _itemTypeHint;
	CKAssetCopyInfo* _assetCopyInfo;
	NSString* _UUID;
	NSURL* _downloadURL;
	NSDate* _downloadURLExpiration;
	NSData* _assetKey;
	NSData* _wrappedAssetKey;
	NSData* _clearAssetKey;
	NSData* _referenceSignature;
	NSString* _uploadReceipt;
	double _uploadReceiptExpiration;
	long long _storageGroupingPolicy;
	CKAssetTransferOptions* _assetTransferOptions;
	long long _arrayIndex;
	CKRecordID* _recordID;
	NSDictionary* _assetChunkerOptions;
	long long _uploadRank;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) CKRecord * record;                                   //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * recordKey;                                         //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,retain) NSURL * contentBaseURL;                                     //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,retain) NSString * owner;                                           //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * requestor;                                       //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,copy) NSString * authToken;                                         //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,copy) NSData * authRequest;                                         //@synthesize authRequest=_authRequest - In the implementation block
@property (nonatomic,retain) NSString * downloadBaseURL;                                 //@synthesize downloadBaseURL=_downloadBaseURL - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTokenExpiration;                 //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
@property (nonatomic,copy) NSData * boundaryKey;                                         //@synthesize boundaryKey=_boundaryKey - In the implementation block
@property (nonatomic,retain) NSFileHandle * clientOpenedFileHandle;                      //@synthesize clientOpenedFileHandle=_clientOpenedFileHandle - In the implementation block
@property (nonatomic,copy) NSData * signature;                                           //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) unsigned long long size;                                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long paddedFileSize;                          //@synthesize paddedFileSize=_paddedFileSize - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                                      //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSNumber * fileID;                                        //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationCountToSave;                           //@synthesize generationCountToSave=_generationCountToSave - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSData * assetContent;                                        //@synthesize assetContent=_assetContent - In the implementation block
@property (nonatomic,retain) NSString * itemTypeHint;                                    //@synthesize itemTypeHint=_itemTypeHint - In the implementation block
@property (nonatomic,retain) CKAssetCopyInfo * assetCopyInfo;                            //@synthesize assetCopyInfo=_assetCopyInfo - In the implementation block
@property (nonatomic,readonly) NSString * assetHandleUUID; 
@property (nonatomic,retain) NSString * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSURL * downloadURL;                                        //@synthesize downloadURL=_downloadURL - In the implementation block
@property (nonatomic,retain) NSDate * downloadURLExpiration;                             //@synthesize downloadURLExpiration=_downloadURLExpiration - In the implementation block
@property (nonatomic,retain) NSData * assetKey;                                          //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSData * wrappedAssetKey;                                   //@synthesize wrappedAssetKey=_wrappedAssetKey - In the implementation block
@property (nonatomic,retain) NSData * clearAssetKey;                                     //@synthesize clearAssetKey=_clearAssetKey - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;                                //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,copy) NSString * uploadReceipt;                                     //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (assign,nonatomic) double uploadReceiptExpiration;                             //@synthesize uploadReceiptExpiration=_uploadReceiptExpiration - In the implementation block
@property (assign,nonatomic) long long storageGroupingPolicy;                            //@synthesize storageGroupingPolicy=_storageGroupingPolicy - In the implementation block
@property (assign,nonatomic) BOOL wasCached;                                             //@synthesize wasCached=_wasCached - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                               //@synthesize hasSize=_hasSize - In the implementation block
@property (assign,nonatomic) BOOL uploaded;                                              //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) BOOL downloaded;                                            //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                            //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
@property (nonatomic,retain) CKAssetTransferOptions * assetTransferOptions;              //@synthesize assetTransferOptions=_assetTransferOptions - In the implementation block
@property (assign,nonatomic) long long arrayIndex;                                       //@synthesize arrayIndex=_arrayIndex - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                      //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSDictionary * assetChunkerOptions;                         //@synthesize assetChunkerOptions=_assetChunkerOptions - In the implementation block
@property (assign,nonatomic) long long uploadRank;                                       //@synthesize uploadRank=_uploadRank - In the implementation block
+(BOOL)supportsSecureCoding;
+(int)errorCodeFromPOSIXCode:(int)arg1 ;
+(id)openToReadRawEncryptedDataWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)_openUnencryptedWithOpenInfo:(id)arg1 genCountCheck:(BOOL)arg2 error:(id*)arg3 ;
+(id)assetWithFileURL:(id)arg1 ;
+(id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3 ;
+(id)openWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)getFileSizeWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)getFileMetadataAtPath:(id)arg1 error:(id*)arg2 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(id)init;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)UUID;
-(NSString *)owner;
-(void)setOwner:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 ;
-(CKAssetCopyInfo *)assetCopyInfo;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3 ;
-(id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3 ;
-(id)initWithCopyInfo:(id)arg1 fileURL:(id)arg2 ;
-(NSString *)assetHandleUUID;
-(void)setGenerationCountToSave:(NSNumber *)arg1 ;
-(NSData *)assetContent;
-(void)setAssetContent:(NSData *)arg1 ;
-(void)setAssetCopyInfo:(CKAssetCopyInfo *)arg1 ;
-(void)setStorageGroupingPolicy:(long long)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(NSURL *)downloadURL;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(NSNumber *)deviceID;
-(NSString *)requestor;
-(void)setRequestor:(NSString *)arg1 ;
-(unsigned long long)paddedFileSize;
-(void)setWasCached:(BOOL)arg1 ;
-(NSString *)recordKey;
-(id)openWithError:(id*)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)referenceSignature;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(NSData *)wrappedAssetKey;
-(NSData *)clearAssetKey;
-(void)setClearAssetKey:(NSData *)arg1 ;
-(NSURL *)contentBaseURL;
-(void)setContentBaseURL:(NSURL *)arg1 ;
-(long long)arrayIndex;
-(void)setDownloaded:(BOOL)arg1 ;
-(void)setPaddedFileSize:(unsigned long long)arg1 ;
-(BOOL)downloaded;
-(void)setArrayIndex:(long long)arg1 ;
-(long long)storageGroupingPolicy;
-(long long)uploadRank;
-(BOOL)uploaded;
-(NSNumber *)fileID;
-(NSString *)itemTypeHint;
-(void)setItemTypeHint:(NSString *)arg1 ;
-(NSFileHandle *)clientOpenedFileHandle;
-(void)setUploaded:(BOOL)arg1 ;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
-(NSData *)assetKey;
-(NSString *)uploadReceipt;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(double)uploadReceiptExpiration;
-(void)setUploadReceiptExpiration:(double)arg1 ;
-(id)_initBare;
-(void)setRecordKey:(NSString *)arg1 ;
-(NSString *)downloadBaseURL;
-(NSDate *)downloadURLExpiration;
-(void)setDownloadURL:(NSURL *)arg1 ;
-(NSData *)authRequest;
-(NSData *)boundaryKey;
-(unsigned long long)downloadTokenExpiration;
-(CKAssetTransferOptions *)assetTransferOptions;
-(NSNumber *)generationCountToSave;
-(BOOL)shouldReadRawEncryptedData;
-(NSDictionary *)assetChunkerOptions;
-(void)setClientOpenedFileHandle:(NSFileHandle *)arg1 ;
-(void)setAuthRequest:(NSData *)arg1 ;
-(void)setWrappedAssetKey:(NSData *)arg1 ;
-(void)setBoundaryKey:(NSData *)arg1 ;
-(void)setDownloadTokenExpiration:(unsigned long long)arg1 ;
-(void)setAssetChunkerOptions:(NSDictionary *)arg1 ;
-(void)setUploadRank:(long long)arg1 ;
-(void)setDownloadBaseURL:(NSString *)arg1 ;
-(void)setDownloadURLExpiration:(NSDate *)arg1 ;
-(BOOL)wasCached;
-(void)setAssetTransferOptions:(CKAssetTransferOptions *)arg1 ;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
@end

