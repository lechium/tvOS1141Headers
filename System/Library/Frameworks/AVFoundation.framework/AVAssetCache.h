/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVAssetCache : NSObject

@property (getter=isPlayableOffline,nonatomic,readonly) BOOL playableOffline; 
+(id)assetCacheWithURL:(id)arg1 ;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1 ;
-(BOOL)isPlayableOffline;
-(long long)maxEntrySize;
-(long long)currentSize;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)sizeOfEntryForKey:(id)arg1 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(id)_init;
-(id)initWithURL:(id)arg1 ;
-(id)allKeys;
-(long long)maxSize;
-(id)URL;
@end

