/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRAudioDataBlock.h>

@class MRAudioBuffer;

@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property (nonatomic,retain) MRAudioBuffer * buffer; 
@property (assign,nonatomic) SCD_Struct_MR20 time; 
@property (assign,nonatomic) float gain; 
-(void)setTime:(SCD_Struct_MR20)arg1 ;
-(void)setGain:(float)arg1 ;
-(void)setBuffer:(MRAudioBuffer *)arg1 ;
@end
