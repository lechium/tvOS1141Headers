/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSURL, NSDictionary, NSArray, NSData;

@interface IMFileTransfer : NSObject {

	BOOL _isIncoming;
	BOOL _isDirectory;
	BOOL _shouldAttemptToResume;
	BOOL _wasRegisteredAsStandalone;
	BOOL _shouldForceArchive;
	BOOL _needsWrapper;
	BOOL _isAuxImage;
	BOOL _isAuxVideo;
	BOOL _isSticker;
	BOOL _hideAttachment;
	BOOL _isLocation;
	BOOL _isContact;
	BOOL _appMessageFallbackImage;
	unsigned short _hfsFlags;
	unsigned _hfsType;
	unsigned _hfsCreator;
	double _lastUpdatedInterval;
	double _lastAveragedInterval;
	unsigned long long _lastAveragedBytes;
	NSString* _guid;
	NSString* _messageGUID;
	NSDate* _startDate;
	NSDate* _createdDate;
	long long _transferState;
	NSString* _filename;
	NSURL* _transferDataURL;
	NSString* _utiType;
	NSString* _mimeType;
	NSString* _accountID;
	NSString* _otherPerson;
	unsigned long long _currentBytes;
	unsigned long long _totalBytes;
	unsigned long long _averageTransferRate;
	long long _error;
	NSString* _errorDescription;
	NSDictionary* _localUserInfo;
	NSString* _transferredFilename;
	NSDictionary* _transcoderUserInfo;
	NSDictionary* _AuxTranscoderUserInfo;
	NSDictionary* _stickerUserInfo;
	NSArray* _attachmentSendContexts;
	long long _cloudKitSyncState;
	NSData* _cloudKitServerChangeTokenBlob;
	NSString* _cloudKitRecordID;
	long long _srCloudKitSyncState;
	NSData* _srCloudKitServerChangeTokenBlob;
	NSString* _srCloudKitRecordID;
	NSURL* _localURL;
	NSURL* _temporaryHighQualityLocalURL;
	NSDictionary* _attributionInfo;
	NSString* _originalGUID;

}

@property (assign,setter=_setLastUpdatedInterval:,nonatomic) double _lastUpdatedInterval;                   //@synthesize lastUpdatedInterval=_lastUpdatedInterval - In the implementation block
@property (assign,setter=_setLastAveragedInterval:,nonatomic) double _lastAveragedInterval;                 //@synthesize lastAveragedInterval=_lastAveragedInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long _lastAveragedBytes;                                       //@synthesize lastAveragedBytes=_lastAveragedBytes - In the implementation block
@property (nonatomic,retain) NSString * guid;                                                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                                        //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSDate * createdDate;                                                          //@synthesize createdDate=_createdDate - In the implementation block
@property (setter=_setStartDate:,nonatomic,retain) NSDate * startDate;                                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,setter=_setTransferState:,nonatomic) long long transferState;                             //@synthesize transferState=_transferState - In the implementation block
@property (assign,nonatomic) BOOL isIncoming;                                                               //@synthesize isIncoming=_isIncoming - In the implementation block
@property (nonatomic,retain) NSString * transferredFilename;                                                //@synthesize transferredFilename=_transferredFilename - In the implementation block
@property (setter=_setTransferDataURL:,nonatomic,retain) NSURL * transferDataURL;                           //@synthesize transferDataURL=_transferDataURL - In the implementation block
@property (nonatomic,retain) NSString * filename;                                                           //@synthesize filename=_filename - In the implementation block
@property (setter=_setLocalPath:,nonatomic,retain) NSString * localPath; 
@property (nonatomic,retain) NSString * type;                                                               //@synthesize utiType=_utiType - In the implementation block
@property (setter=_setLocalURL:,nonatomic,retain) NSURL * localURL;                                         //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSURL * temporaryHighQualityLocalURL;                                          //@synthesize temporaryHighQualityLocalURL=_temporaryHighQualityLocalURL - In the implementation block
@property (assign,nonatomic) unsigned hfsType;                                                              //@synthesize hfsType=_hfsType - In the implementation block
@property (assign,nonatomic) unsigned hfsCreator;                                                           //@synthesize hfsCreator=_hfsCreator - In the implementation block
@property (assign,nonatomic) unsigned short hfsFlags;                                                       //@synthesize hfsFlags=_hfsFlags - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                                          //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSString * otherPerson;                                                        //@synthesize otherPerson=_otherPerson - In the implementation block
@property (assign,nonatomic) unsigned long long currentBytes;                                               //@synthesize currentBytes=_currentBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                                                 //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long averageTransferRate;                                        //@synthesize averageTransferRate=_averageTransferRate - In the implementation block
@property (assign,setter=_setNeedsWrapper:,nonatomic) BOOL _needsWrapper;                                   //@synthesize needsWrapper=_needsWrapper - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                                                              //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,nonatomic) BOOL shouldAttemptToResume;                                                    //@synthesize shouldAttemptToResume=_shouldAttemptToResume - In the implementation block
@property (assign,setter=_setForceArchive:,nonatomic) BOOL shouldForceArchive;                              //@synthesize shouldForceArchive=_shouldForceArchive - In the implementation block
@property (assign,setter=_setError:,nonatomic) long long error;                                             //@synthesize error=_error - In the implementation block
@property (setter=_setErrorDescription:,nonatomic,retain) NSString * errorDescription;                      //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,retain) NSString * originalGUID;                                                       //@synthesize originalGUID=_originalGUID - In the implementation block
@property (nonatomic,readonly) BOOL canBeAccepted; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) BOOL existsAtLocalPath; 
@property (assign,nonatomic) BOOL isAuxImage;                                                               //@synthesize isAuxImage=_isAuxImage - In the implementation block
@property (assign,nonatomic) BOOL isAuxVideo;                                                               //@synthesize isAuxVideo=_isAuxVideo - In the implementation block
@property (assign,nonatomic) BOOL isSticker;                                                                //@synthesize isSticker=_isSticker - In the implementation block
@property (nonatomic,readonly) BOOL isRecipeBasedSticker; 
@property (nonatomic,readonly) BOOL isAutoloopVideo; 
@property (assign,nonatomic) BOOL isLocation;                                                               //@synthesize isLocation=_isLocation - In the implementation block
@property (assign,nonatomic) BOOL isContact;                                                                //@synthesize isContact=_isContact - In the implementation block
@property (assign,nonatomic) BOOL hideAttachment;                                                           //@synthesize hideAttachment=_hideAttachment - In the implementation block
@property (nonatomic,retain,readonly) NSString * temporaryHighQualityLocalPath; 
@property (nonatomic,retain,readonly) NSString * permanentHighQualityLocalPath; 
@property (nonatomic,retain,readonly) NSString * mimeType;                                                  //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSDictionary * transcoderUserInfo;                                             //@synthesize transcoderUserInfo=_transcoderUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * AuxTranscoderUserInfo;                                          //@synthesize AuxTranscoderUserInfo=_AuxTranscoderUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                                       //@synthesize localUserInfo=_localUserInfo - In the implementation block
@property (nonatomic,retain) NSArray * attachmentSendContexts;                                              //@synthesize attachmentSendContexts=_attachmentSendContexts - In the implementation block
@property (nonatomic,retain) NSDictionary * stickerUserInfo;                                                //@synthesize stickerUserInfo=_stickerUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * attributionInfo;                                                //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (assign,setter=setRegisteredAsStandalone:,nonatomic) BOOL wasRegisteredAsStandalone;              //@synthesize wasRegisteredAsStandalone=_wasRegisteredAsStandalone - In the implementation block
@property (assign,nonatomic) BOOL appMessageFallbackImage;                                                  //@synthesize appMessageFallbackImage=_appMessageFallbackImage - In the implementation block
@property (assign,nonatomic) long long cloudKitSyncState;                                                   //@synthesize cloudKitSyncState=_cloudKitSyncState - In the implementation block
@property (nonatomic,retain) NSData * cloudKitServerChangeTokenBlob;                                        //@synthesize cloudKitServerChangeTokenBlob=_cloudKitServerChangeTokenBlob - In the implementation block
@property (nonatomic,retain) NSString * cloudKitRecordID;                                                   //@synthesize cloudKitRecordID=_cloudKitRecordID - In the implementation block
@property (assign,nonatomic) long long srCloudKitSyncState;                                                 //@synthesize srCloudKitSyncState=_srCloudKitSyncState - In the implementation block
@property (nonatomic,retain) NSData * srCloudKitServerChangeTokenBlob;                                      //@synthesize srCloudKitServerChangeTokenBlob=_srCloudKitServerChangeTokenBlob - In the implementation block
@property (nonatomic,retain) NSString * srCloudKitRecordID;                                                 //@synthesize srCloudKitRecordID=_srCloudKitRecordID - In the implementation block
+(id)guidByStrippingAuxPrefix:(id)arg1 ;
+(BOOL)_doesLocalURLRequireArchiving:(id)arg1 ;
+(id)AuxGUIDFromFileTransferGUID:(id)arg1 ;
-(BOOL)isDirectory;
-(NSDate *)startDate;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(long long)error;
-(id)_dictionaryRepresentation;
-(void)_setError:(long long)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSDictionary *)userInfo;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)mimeType;
-(NSString *)displayName;
-(NSURL *)localURL;
-(BOOL)isFinished;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(BOOL)isAutoloopVideo;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setCurrentBytes:(unsigned long long)arg1 ;
-(unsigned short)hfsFlags;
-(NSDictionary *)transcoderUserInfo;
-(NSURL *)temporaryHighQualityLocalURL;
-(void)_calculateTypeInformation;
-(BOOL)canBeAccepted;
-(BOOL)isRecipeBasedSticker;
-(void)_setTransferDataURL:(id)arg1 ;
-(NSString *)temporaryHighQualityLocalPath;
-(unsigned)hfsType;
-(double)_lastUpdatedInterval;
-(void)_setLastAveragedInterval:(double)arg1 ;
-(NSURL *)transferDataURL;
-(void)setHfsType:(unsigned)arg1 ;
-(void)setHfsFlags:(unsigned short)arg1 ;
-(unsigned)hfsCreator;
-(void)setHfsCreator:(unsigned)arg1 ;
-(void)setOtherPerson:(NSString *)arg1 ;
-(void)setAverageTransferRate:(unsigned long long)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(BOOL)shouldAttemptToResume;
-(void)setShouldAttemptToResume:(BOOL)arg1 ;
-(void)_setNeedsWrapper:(BOOL)arg1 ;
-(void)setTranscoderUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)AuxTranscoderUserInfo;
-(void)setAuxTranscoderUserInfo:(NSDictionary *)arg1 ;
-(NSArray *)attachmentSendContexts;
-(void)setAttachmentSendContexts:(NSArray *)arg1 ;
-(void)setIsLocation:(BOOL)arg1 ;
-(void)setIsContact:(BOOL)arg1 ;
-(void)setTemporaryHighQualityLocalURL:(NSURL *)arg1 ;
-(BOOL)appMessageFallbackImage;
-(void)setAppMessageFallbackImage:(BOOL)arg1 ;
-(NSString *)messageGUID;
-(void)setMessageGUID:(NSString *)arg1 ;
-(NSString *)localPath;
-(BOOL)isSticker;
-(long long)transferState;
-(id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned)arg8 hfsCreator:(unsigned)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(BOOL)arg11 ;
-(void)_setAccount:(id)arg1 otherPerson:(id)arg2 ;
-(BOOL)isIncoming;
-(void)_setForceArchive:(BOOL)arg1 ;
-(void)_setTransferState:(long long)arg1 ;
-(void)_setLocalURL:(id)arg1 ;
-(NSString *)otherPerson;
-(void)setRegisteredAsStandalone:(BOOL)arg1 ;
-(BOOL)_updateWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)wasRegisteredAsStandalone;
-(void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2 ;
-(void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3 ;
-(void)setIsAuxImage:(BOOL)arg1 ;
-(void)setIsAuxVideo:(BOOL)arg1 ;
-(void)setHideAttachment:(BOOL)arg1 ;
-(NSDictionary *)attributionInfo;
-(NSDictionary *)stickerUserInfo;
-(BOOL)isContact;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(long long)cloudKitSyncState;
-(BOOL)_needsWrapper;
-(unsigned long long)averageTransferRate;
-(unsigned long long)currentBytes;
-(double)_lastAveragedInterval;
-(unsigned long long)_lastAveragedBytes;
-(void)_setLastUpdatedInterval:(double)arg1 ;
-(void)_setStartDate:(id)arg1 ;
-(void)_setDirectory:(BOOL)arg1 hfsType:(unsigned)arg2 hfsCreator:(unsigned)arg3 hfsFlags:(unsigned short)arg4 ;
-(void)_setErrorDescription:(id)arg1 ;
-(BOOL)shouldForceArchive;
-(NSString *)transferredFilename;
-(void)setTransferredFilename:(NSString *)arg1 ;
-(BOOL)hideAttachment;
-(BOOL)isLocation;
-(void)setSrCloudKitRecordID:(NSString *)arg1 ;
-(void)setSrCloudKitSyncState:(long long)arg1 ;
-(void)setSrCloudKitServerChangeTokenBlob:(NSData *)arg1 ;
-(void)setCloudKitRecordID:(NSString *)arg1 ;
-(void)setCloudKitSyncState:(long long)arg1 ;
-(void)setCloudKitServerChangeTokenBlob:(NSData *)arg1 ;
-(void)_setLocalPath:(id)arg1 ;
-(NSData *)cloudKitServerChangeTokenBlob;
-(NSString *)srCloudKitRecordID;
-(NSString *)cloudKitRecordID;
-(BOOL)existsAtLocalPath;
-(BOOL)isAuxImage;
-(long long)srCloudKitSyncState;
-(void)setIsIncoming:(BOOL)arg1 ;
-(void)setIsSticker:(BOOL)arg1 ;
-(void)setStickerUserInfo:(NSDictionary *)arg1 ;
-(void)setOriginalGUID:(NSString *)arg1 ;
-(BOOL)isAuxVideo;
-(NSData *)srCloudKitServerChangeTokenBlob;
-(NSString *)originalGUID;
-(NSString *)permanentHighQualityLocalPath;
-(id)_auxVideoPathIfItExists;
-(NSString *)errorDescription;
-(void)_clear;
@end

