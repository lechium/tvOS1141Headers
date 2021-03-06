/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationHistoryProvider;
@class NSArray;

@interface MNLocationHistory : NSObject {

	id<MNLocationHistoryProvider> _locationHistoryProvider;

}

@property (nonatomic,retain) id<MNLocationHistoryProvider> locationHistoryProvider;              //@synthesize locationHistoryProvider=_locationHistoryProvider - In the implementation block
@property (readonly) NSArray * locationHistory; 
-(id)init;
-(NSArray *)locationHistory;
-(id<MNLocationHistoryProvider>)locationHistoryProvider;
-(void)setLocationHistoryProvider:(id<MNLocationHistoryProvider>)arg1 ;
@end

