/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimeZone, NSArray, NSString, UIColor;

@interface _MKLocalizedHoursBuilder : NSObject {

	BOOL _isClosedTodayAllDay;
	BOOL _isCurrentlyClosed;
	BOOL _isClosingSoon;
	BOOL _isOpeningSoon;
	unsigned long long _geoMapItemOpeningHourOptions;
	unsigned long long _localizedHoursStringOptions;
	NSTimeZone* _timeZone;
	NSArray* _operatingHours;
	NSString* _localizedOperatingHours;
	UIColor* _hoursStateLabelColor;

}

@property (assign,nonatomic) unsigned long long geoMapItemOpeningHourOptions;              //@synthesize geoMapItemOpeningHourOptions=_geoMapItemOpeningHourOptions - In the implementation block
@property (assign,nonatomic) unsigned long long localizedHoursStringOptions;               //@synthesize localizedHoursStringOptions=_localizedHoursStringOptions - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                        //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSArray * operatingHours;                                     //@synthesize operatingHours=_operatingHours - In the implementation block
@property (nonatomic,readonly) NSString * localizedOperatingHours;                         //@synthesize localizedOperatingHours=_localizedOperatingHours - In the implementation block
@property (nonatomic,readonly) UIColor * hoursStateLabelColor;                             //@synthesize hoursStateLabelColor=_hoursStateLabelColor - In the implementation block
-(NSArray *)operatingHours;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2 ;
-(id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2 ;
-(id)initWithTimeZone:(id)arg1 operatingHours:(id)arg2 geoMapItemOpeningHourOptions:(unsigned long long)arg3 localizedHoursStringOptions:(unsigned long long)arg4 ;
-(void)setGeoMapItemOpeningHourOptions:(unsigned long long)arg1 ;
-(void)setLocalizedHoursStringOptions:(unsigned long long)arg1 ;
-(void)_updateLocalizedString;
-(id)_updatedLocalizedOperatingHoursString;
-(id)_updatedHoursLabelColor;
-(unsigned long long)geoMapItemOpeningHourOptions;
-(unsigned long long)localizedHoursStringOptions;
-(void)setOperatingHours:(NSArray *)arg1 ;
-(NSString *)localizedOperatingHours;
-(UIColor *)hoursStateLabelColor;
@end

