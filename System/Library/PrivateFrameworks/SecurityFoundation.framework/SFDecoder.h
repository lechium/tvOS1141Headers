/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SFCodingOptions;

@interface SFDecoder : NSObject {

	id _decoderInternal;

}

@property (nonatomic,copy) SFCodingOptions * options; 
-(void)setOptions:(SFCodingOptions *)arg1 ;
-(SFCodingOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(id)decodeValueOfType:(Class)arg1 fromData:(id)arg2 error:(id)arg3 ;
@end
