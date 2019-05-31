/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUVMRegionRangeInfo : NSObject {

	unsigned long long address;
	unsigned long long size;
	unsigned long long stackIdentifier;
	unsigned userTag;

}

@property (assign) unsigned long long address; 
@property (assign) unsigned long long size; 
@property (readonly) VMURange range; 
@property (assign) unsigned long long stackIdentifier; 
@property (assign) unsigned userTag; 
-(unsigned long long)address;
-(void)setAddress:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(VMURange)range;
-(unsigned)userTag;
-(unsigned long long)stackIdentifier;
-(void)setStackIdentifier:(unsigned long long)arg1 ;
-(void)setUserTag:(unsigned)arg1 ;
@end
