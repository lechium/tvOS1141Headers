/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement, NSDate;

@interface TVLEventElement : TVLElement {

	NSString* _title;
	NSString* _eventDescription;
	TVLImageElement* _image;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * eventDescription;              //@synthesize eventDescription=_eventDescription - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                       //@synthesize endDate=_endDate - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setImage:(TVLImageElement *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(TVLImageElement *)image;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)eventDescription;
-(void)setEventDescription:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end
