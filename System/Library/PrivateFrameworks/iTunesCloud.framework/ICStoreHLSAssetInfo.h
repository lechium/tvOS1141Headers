/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSURL;

@interface ICStoreHLSAssetInfo : NSObject <NSCopying> {

	NSDictionary* _itemResponseDictionary;
	BOOL _isiTunesStoreStream;
	NSURL* _keyCertificateURL;
	NSURL* _keyServerURL;
	NSURL* _playlistURL;

}

@property (nonatomic,copy) NSURL * playlistURL;                                              //@synthesize playlistURL=_playlistURL - In the implementation block
@property (nonatomic,copy) NSURL * keyCertificateURL;                                        //@synthesize keyCertificateURL=_keyCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * keyServerURL;                                             //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (assign,getter=isiTunesStoreStream,nonatomic) BOOL iTunesStoreStream;              //@synthesize isiTunesStoreStream=_isiTunesStoreStream - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(void)setKeyCertificateURL:(NSURL *)arg1 ;
-(void)setPlaylistURL:(NSURL *)arg1 ;
-(BOOL)isiTunesStoreStream;
-(NSURL *)playlistURL;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(void)setITunesStoreStream:(BOOL)arg1 ;
-(void)setKeyServerURL:(NSURL *)arg1 ;
@end

