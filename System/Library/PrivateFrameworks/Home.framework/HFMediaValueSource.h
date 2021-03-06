/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol HFMediaValueSource <NSObject>
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfile; 
@property (nonatomic,readonly) BOOL hasPendingWrites; 
@property (nonatomic,readonly) NSError * cachedPlaybackStateWriteError; 
@required
-(long long)lastPlaybackStateForProfile;
-(id)writePlaybackState:(long long)arg1;
-(BOOL)hasPendingWrites;
-(NSError *)cachedPlaybackStateWriteError;
-(id<HFMediaProfileContainer>)mediaProfile;

@end

