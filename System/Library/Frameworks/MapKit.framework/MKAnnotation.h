/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;
-(NSString *)title;
-(NSString *)subtitle;

@required
-(CLLocationCoordinate2D)coordinate;

@end

