/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSSortDescriptor.h>

@class NSDictionary;

@interface MPMultiSortDescriptor : NSSortDescriptor {

	NSDictionary* _relatedProperties;

}

@property (nonatomic,copy) NSDictionary * relatedProperties;              //@synthesize relatedProperties=_relatedProperties - In the implementation block
+(id)sortDescriptorWithRelatedProperties:(id)arg1 ascending:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)relatedProperties;
-(void)setRelatedProperties:(NSDictionary *)arg1 ;
@end

