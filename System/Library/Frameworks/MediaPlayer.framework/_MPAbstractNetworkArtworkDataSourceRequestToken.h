/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLRequest;

@interface _MPAbstractNetworkArtworkDataSourceRequestToken : NSObject <NSCopying> {

	NSURLRequest* _request;
	CGSize _bestSize;

}

@property (nonatomic,readonly) NSURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CGSize bestSize;                     //@synthesize bestSize=_bestSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURLRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)bestSize;
-(id)initWithRequest:(id)arg1 bestSize:(CGSize)arg2 ;
@end

