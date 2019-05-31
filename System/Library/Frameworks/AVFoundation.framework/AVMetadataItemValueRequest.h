/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVMetadataItemValueRequestInternal, AVMetadataItem;

@interface AVMetadataItemValueRequest : NSObject {

	AVMetadataItemValueRequestInternal* _valueRequest;

}

@property (__weak,readonly) AVMetadataItem * metadataItem; 
+(id)metadataItemValueRequestWithMetadataItem:(id)arg1 ;
-(void)finalize;
-(id)dataType;
-(id)initWithMetadataItem:(id)arg1 ;
-(void)respondWithValue:(id)arg1 dataType:(id)arg2 ;
-(void)respondWithValue:(id)arg1 ;
-(void)respondWithError:(id)arg1 ;
-(id)error;
-(void)dealloc;
-(id)value;
-(AVMetadataItem *)metadataItem;
@end
