/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CLSChecklist : NSObject {

	NSString* _checklistName;
	NSString* _serviceName;
	NSArray* _items;

}

@property (nonatomic,retain) NSString * checklistName;              //@synthesize checklistName=_checklistName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSArray * items;                       //@synthesize items=_items - In the implementation block
+(id)checklistWithName:(id)arg1 serviceName:(id)arg2 items:(id)arg3 ;
+(id)checklist;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)serviceName;
-(id)allItems;
-(void)setChecklistName:(NSString *)arg1 ;
-(NSString *)checklistName;
-(void)setServiceName:(NSString *)arg1 ;
@end

