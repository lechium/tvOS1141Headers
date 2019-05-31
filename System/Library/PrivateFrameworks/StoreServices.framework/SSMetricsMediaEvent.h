/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSNumber, NSString;

@interface SSMetricsMediaEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSNumber * itemIdentifier; 
@property (nonatomic,retain) NSString * locationDescription; 
@property (nonatomic,retain) NSString * mediaEventType; 
@property (nonatomic,retain) NSString * mediaURL; 
-(id)init;
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)arg1 ;
-(void)setLocationWithEventLocations:(id)arg1 ;
-(NSString *)mediaEventType;
-(void)setMediaEventType:(NSString *)arg1 ;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)mediaURL;
-(void)setMediaURL:(NSString *)arg1 ;
@end
