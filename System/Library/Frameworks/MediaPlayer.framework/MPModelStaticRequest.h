/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class MPModelStaticResponse;

@interface MPModelStaticRequest : MPModelRequest {

	MPModelStaticResponse* _staticResponse;

}

@property (nonatomic,retain) MPModelStaticResponse * staticResponse;              //@synthesize staticResponse=_staticResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelStaticResponse *)staticResponse;
-(void)setStaticResponse:(MPModelStaticResponse *)arg1 ;
@end

