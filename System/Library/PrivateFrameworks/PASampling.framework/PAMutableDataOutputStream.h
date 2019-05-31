/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PAOutputStream.h>

@class NSMutableData;

@interface PAMutableDataOutputStream : PAOutputStream {

	NSMutableData* _outputData;

}

@property (nonatomic,readonly) NSMutableData * outputData;              //@synthesize outputData=_outputData - In the implementation block
-(NSMutableData *)outputData;
-(int)printWithFormat:(const char*)arg1 ;
-(id)initWithMutableData:(id)arg1 ;
@end

