/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (retain) FTMessageDelivery * delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * regions;                         //@synthesize regions=_regions - In the implementation block
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
+(id)sharedInstance;
-(void)setRegions:(NSArray *)arg1 ;
-(void)dealloc;
-(NSArray *)regions;
-(BOOL)isLoading;
-(BOOL)isLoaded;
-(FTMessageDelivery *)delivery;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(id)regionForID:(id)arg1 ;
-(void)setDelivery:(FTMessageDelivery *)arg1 ;
-(void)startLoading;
@end

