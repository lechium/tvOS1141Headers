/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapItem;
@class NSString, NSDate;

@interface RTLOIDisplayInfo : NSObject {

	int _style;
	long long _type;
	long long _modeOfTransportation;
	id<GEOMapItem> _geoMapItem;
	NSString* _unknownTypeName;
	double _eta;
	NSDate* _arrival;
	NSDate* _deparature;

}

@property (nonatomic,readonly) int style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long modeOfTransportation;              //@synthesize modeOfTransportation=_modeOfTransportation - In the implementation block
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem;                   //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,readonly) NSString * unknownTypeName;                  //@synthesize unknownTypeName=_unknownTypeName - In the implementation block
@property (nonatomic,readonly) double eta;                                  //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) NSDate * arrival;                            //@synthesize arrival=_arrival - In the implementation block
@property (nonatomic,readonly) NSDate * deparature;                         //@synthesize deparature=_deparature - In the implementation block
+(id)dateFormatter;
+(id)durationFormatter;
-(id<GEOMapItem>)geoMapItem;
-(id)mapsURL;
-(NSDate *)arrival;
-(double)eta;
-(id)description;
-(id)localizedDescription;
-(long long)type;
-(int)style;
-(id)localizedTitle;
-(id)initWithStyle:(int)arg1 type:(long long)arg2 geoMapItem:(id)arg3 unknownTypeName:(id)arg4 eta:(double)arg5 arrival:(id)arg6 departure:(id)arg7 modeOfTransportation:(long long)arg8 ;
-(BOOL)isEquivalentToDisplayInfo:(id)arg1 ;
-(id)localizedMessage;
-(long long)modeOfTransportation;
-(NSString *)unknownTypeName;
-(NSDate *)deparature;
@end
