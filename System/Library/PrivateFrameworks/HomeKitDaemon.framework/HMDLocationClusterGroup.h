/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSMutableArray;

@interface HMDLocationClusterGroup : NSObject {

	CLLocation* _center;
	NSMutableArray* _locations;

}

@property (nonatomic,retain) CLLocation * center;                     //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)groupWithCenter:(id)arg1 ;
-(NSMutableArray *)locations;
-(CLLocation *)center;
-(void)setCenter:(CLLocation *)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
@end

