/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUUserActivityContainerItem.h>

@class MPMediaEntity;

@interface MPUMutableUserActivityContainerItem : MPUUserActivityContainerItem

@property (assign,nonatomic) long long containerItemType; 
@property (nonatomic,retain) MPMediaEntity * selectedMediaEntity; 
@property (nonatomic,retain) MPMediaEntity * visualReferenceMediaEntity; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerItemType:(long long)arg1 ;
-(void)setSelectedMediaEntity:(MPMediaEntity *)arg1 ;
-(void)setVisualReferenceMediaEntity:(MPMediaEntity *)arg1 ;
@end

