/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>

@class NSString, HFRoomBuilder, NSArray, HMAccessory;

@interface HFAccessoryBuilder : HFItemBuilder <HFServiceLikeBuilder> {

	BOOL isFavorite;
	NSString* name;
	HFRoomBuilder* room;

}

@property (nonatomic,readonly) HMAccessory * accessory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
+(Class)homeKitRepresentationClass;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setIsFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(NSString *)originalName;
-(id)_lazilyUpdateName;
-(id)_lazilyUpdateRoom;
-(id)_lazilyUpdateFavorite;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
-(HMAccessory *)accessory;
-(HFRoomBuilder *)room;
-(id)accessories;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
@end

