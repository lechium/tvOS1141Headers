/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <WeatherFoundation/WFTask.h>

@class NSString, MKLocalSearchCompletion, WFLocation;

@interface WFGeocodeRequest : WFTask {

	/*^block*/id _resultHandler;
	NSString* _searchString;
	MKLocalSearchCompletion* _autocompleteSearchResult;
	WFLocation* _geocodedResult;
	CLLocationCoordinate2D _coordinate;

}

@property (retain) NSString * searchString;                                         //@synthesize searchString=_searchString - In the implementation block
@property (retain) MKLocalSearchCompletion * autocompleteSearchResult;              //@synthesize autocompleteSearchResult=_autocompleteSearchResult - In the implementation block
@property (assign) CLLocationCoordinate2D coordinate;                               //@synthesize coordinate=_coordinate - In the implementation block
@property (retain) WFLocation * geocodedResult;                                     //@synthesize geocodedResult=_geocodedResult - In the implementation block
@property (readonly) id resultHandler;                                              //@synthesize resultHandler=_resultHandler - In the implementation block
@property (readonly) NSString * searchTerm; 
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)description;
-(NSString *)searchString;
-(void)cleanup;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(id)initWithSearchCompletion:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)initWithSearchString:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)handleCancellation;
-(MKLocalSearchCompletion *)autocompleteSearchResult;
-(void)setGeocodedResult:(WFLocation *)arg1 ;
-(WFLocation *)geocodedResult;
-(void)setAutocompleteSearchResult:(MKLocalSearchCompletion *)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)resultHandler;
@end

