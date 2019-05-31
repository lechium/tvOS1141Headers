/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSClue.h>

@interface CLSMeaningClue : CLSClue {

	id _relatedData;

}

@property (retain) id relatedData;              //@synthesize relatedData=_relatedData - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(id)init;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)setRelatedData:(id)arg1 ;
-(id)relatedData;
@end
