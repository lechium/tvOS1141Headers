/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying> {

	SSVFairPlaySAPSession* _SAPSession;
	BOOL _usesLocalNetworking;

}

@property (setter=APSession,nonatomic,retain) SSVFairPlaySAPSession * SAPSession;              //@synthesize SAPSession=_SAPSession - In the implementation block
@property (assign,nonatomic) BOOL usesLocalNetworking;                                         //@synthesize usesLocalNetworking=_usesLocalNetworking - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(BOOL)usesLocalNetworking;
-(void)setUsesLocalNetworking:(BOOL)arg1 ;
@end

