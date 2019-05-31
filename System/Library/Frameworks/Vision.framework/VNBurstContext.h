/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BurstImageSetInternal;

@interface VNBurstContext : NSObject {

	BurstImageSetInternal* _burstSet;

}

@property (nonatomic,copy) id loggingCallback; 
-(BOOL)isAction;
-(void)dealloc;
-(id)allImageIdentifiers;
-(id)bestImageIdentifiers;
-(id)coverImageIdentifier;
-(BOOL)isPortrait;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)setLoggingCallback:(id)arg1 ;
-(BOOL)addBurstFrameWithIdentifier:(id)arg1 fromImageBuffer:(id)arg2 withProperties:(id)arg3 error:(id*)arg4 ;
-(id)allClusters;
-(id)allImageStats;
-(id)loggingCallback;
@end

