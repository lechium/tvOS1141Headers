/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage, NSURL, NSArray;

@interface AVContentProposal : NSObject <NSCopying> {

	double _automaticAcceptanceInterval;
	NSString* _title;
	UIImage* _previewImage;
	NSURL* _URL;
	NSArray* _metadata;
	SCD_Struct_AV1 _contentTimeForTransition;

}

@property (nonatomic,readonly) SCD_Struct_AV1 contentTimeForTransition;              //@synthesize contentTimeForTransition=_contentTimeForTransition - In the implementation block
@property (assign,nonatomic) double automaticAcceptanceInterval;                     //@synthesize automaticAcceptanceInterval=_automaticAcceptanceInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                               //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSArray * metadata;                                       //@synthesize metadata=_metadata - In the implementation block
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)isEqualToContentProposal:(id)arg1 ;
-(SCD_Struct_AV1)contentTimeForTransition;
-(UIImage *)previewImage;
-(void)setAutomaticAcceptanceInterval:(double)arg1 ;
-(id)initWithContentTimeForTransition:(SCD_Struct_AV1)arg1 title:(id)arg2 previewImage:(id)arg3 ;
-(double)automaticAcceptanceInterval;
@end

