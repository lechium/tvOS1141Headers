/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3Entity, NSString, NSDictionary;

@interface ML3ArtworkTokenSet : NSObject {

	ML3Entity* _entity;
	long long _artworkType;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;
	long long _fetchableArtworkSourceType;
	NSDictionary* _artworkSourceToTokenMap;
	BOOL _faultedInBestTokens;
	BOOL _faultedInTokens;
	double _retrievalTime;

}

@property (assign,nonatomic) double retrievalTime;                                //@synthesize retrievalTime=_retrievalTime - In the implementation block
@property (nonatomic,readonly) NSString * availableArtworkToken; 
@property (nonatomic,readonly) NSString * fetchableArtworkToken; 
@property (nonatomic,readonly) long long fetchableArtworkSourceType; 
-(void)_faultInBestTokens;
-(void)_faultInTokens;
-(long long)fetchableArtworkSourceType;
-(void)setRetrievalTime:(double)arg1 ;
-(double)retrievalTime;
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(id)initWithEntity:(id)arg1 artworkType:(long long)arg2 ;
-(id)artworkTokenForSource:(long long)arg1 ;
@end
