/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PASymbolHandle;

@interface PASymbolHandleWithKernelBool : NSObject {

	BOOL _isKernel;
	PASymbolHandle* _symbolHandle;

}

@property (retain) PASymbolHandle * symbolHandle;              //@synthesize symbolHandle=_symbolHandle - In the implementation block
@property (assign) BOOL isKernel;                              //@synthesize isKernel=_isKernel - In the implementation block
-(BOOL)isKernel;
-(PASymbolHandle *)symbolHandle;
-(void)setSymbolHandle:(PASymbolHandle *)arg1 ;
-(void)setIsKernel:(BOOL)arg1 ;
@end

