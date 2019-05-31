/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CUIDSWriteRequest : NSObject {

	const char* writeBase;
	const char* writePtr;
	const char* writeEnd;
	CUIDSWriteRequest* next;
	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;                //@synthesize completion=_completion - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end

