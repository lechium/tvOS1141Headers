/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@interface BLColorMatrix : NSObject
+(SCD_Struct_BL13)warmCoolMatrix:(float)arg1 ;
+(SCD_Struct_BL12)mix:(float)arg1 channelMix1:(SCD_Struct_BL12)arg2 channelMix2:(SCD_Struct_BL12)arg3 ;
+(SCD_Struct_BL13)mix:(float)arg1 matrix1:(SCD_Struct_BL13)arg2 matrix2:(SCD_Struct_BL13)arg3 ;
+(SCD_Struct_BL13)matrix:(float)arg1 numBlocks:(int)arg2 matrices:(SCD_Struct_BL13*)arg3 ;
@end

