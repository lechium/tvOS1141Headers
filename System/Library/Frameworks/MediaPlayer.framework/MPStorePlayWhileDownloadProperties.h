/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSURL;

@interface MPStorePlayWhileDownloadProperties : NSObject {

	unsigned long long _downloadToken;
	NSString* _localFilePath;
	NSArray* _sinfs;
	NSURL* _sourceURL;

}

@property (assign,nonatomic) unsigned long long downloadToken;              //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,copy) NSString * localFilePath;                        //@synthesize localFilePath=_localFilePath - In the implementation block
@property (nonatomic,copy) NSArray * sinfs;                                 //@synthesize sinfs=_sinfs - In the implementation block
@property (nonatomic,copy) NSURL * sourceURL;                               //@synthesize sourceURL=_sourceURL - In the implementation block
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(unsigned long long)downloadToken;
-(void)setDownloadToken:(unsigned long long)arg1 ;
-(NSArray *)sinfs;
-(NSString *)localFilePath;
-(void)setSinfs:(NSArray *)arg1 ;
-(void)setLocalFilePath:(NSString *)arg1 ;
@end

