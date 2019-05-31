/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class BWIrisMovieInfo;

@interface BWNodeIrisReferenceMovieRequestMessage : BWNodeMessage {

	BWIrisMovieInfo* _irisMovieInfo;

}

@property (readonly) BWIrisMovieInfo * irisMovieInfo; 
+(id)newMessageWithIrisMovieInfo:(id)arg1 ;
-(BWIrisMovieInfo *)irisMovieInfo;
-(id)_initWithIrisMovieInfo:(id)arg1 ;
-(void)dealloc;
@end

