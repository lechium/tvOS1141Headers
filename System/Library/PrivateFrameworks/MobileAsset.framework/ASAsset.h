/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileAsset/MobileAsset-Structs.h>
@class NSString, NSDictionary, NSDate, NSURL;

@interface ASAsset : NSObject {

	NSString* _assetType;
	NSDictionary* _attributes;
	NSDictionary* _downloadOptions;
	NSString* _clientName;
	NSString* _identifier;
	/*^block*/id _progressHandler;
	_MobileAsset* _cfAsset;
	BOOL _userInitiatedDownload;

}

@property (nonatomic,retain) NSString * clientName; 
@property (nonatomic,readonly) NSDictionary * fullAttributes; 
@property (nonatomic,retain) NSDictionary * downloadOptions;                   //@synthesize downloadOptions=_downloadOptions - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                           //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) NSDate * installDate; 
@property (nonatomic,readonly) NSURL * localURL; 
@property (assign,nonatomic) long long garbageCollectionBehavior; 
@property (nonatomic,copy) id progressHandler;                                 //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) BOOL userInitiatedDownload;                       //@synthesize userInitiatedDownload=_userInitiatedDownload - In the implementation block
+(BOOL)nonUserInitiatedDownloadsAllowed;
-(long long)_formatVersion;
-(long long)_contentVersion;
-(void)setGarbageCollectionBehavior:(long long)arg1 ;
-(id)assetServerUrl;
-(id)_getLocalAttribute:(id)arg1 ;
-(long long)assetStateForStateString:(id)arg1 ;
-(_MobileAsset*)mobileAsset;
-(BOOL)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg1 requiredBytes:(long long*)arg2 error:(id*)arg3 ;
-(void)setDownloadOptions:(NSDictionary *)arg1 ;
-(BOOL)userInitiatedDownload;
-(void)_downloadWithOptions:(id)arg1 shouldFireCallback:(BOOL)arg2 ;
-(BOOL)pauseDownloadAndReturnError:(id*)arg1 ;
-(BOOL)resumeDownloadAndReturnError:(id*)arg1 ;
-(id)systemAppServerUrl;
-(long long)garbageCollectionBehavior;
-(void)pauseDownload:(/*^block*/id)arg1 ;
-(id)initWithAssetType:(id)arg1 attributes:(id)arg2 ;
-(NSDictionary *)fullAttributes;
-(BOOL)isPresentOnDisk;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)state;
-(id)identifier;
-(NSDictionary *)attributes;
-(NSURL *)localURL;
-(void)beginDownloadWithOptions:(id)arg1 ;
-(void)resumeDownload:(/*^block*/id)arg1 ;
-(void)adjustDownloadOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setProgressHandler:(id)arg1 ;
-(BOOL)purgeAndReturnError:(id*)arg1 ;
-(NSDictionary *)downloadOptions;
-(NSDate *)installDate;
-(NSString *)assetType;
-(void)setUserInitiatedDownload:(BOOL)arg1 ;
-(BOOL)cancelDownloadAndReturnError:(id*)arg1 ;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(id)progressHandler;
-(void)purge:(/*^block*/id)arg1 ;
-(void)cancelDownload:(/*^block*/id)arg1 ;
-(BOOL)requiredDiskSpaceIsAvailable:(long long*)arg1 error:(id*)arg2 ;
@end

