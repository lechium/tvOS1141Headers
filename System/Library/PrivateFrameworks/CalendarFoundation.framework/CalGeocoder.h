/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MKLocalSearch;

@interface CalGeocoder : NSObject {

	NSString* _locationString;
	/*^block*/id _completionBlock;
	MKLocalSearch* _search;

}

@property (nonatomic,retain) NSString * locationString;              //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,copy) id completionBlock;                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) MKLocalSearch * search;                 //@synthesize search=_search - In the implementation block
+(void)geocodeLocationString:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(MKLocalSearch *)search;
-(void)setSearch:(MKLocalSearch *)arg1 ;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)_callCompletionBlockWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithLocationString:(id)arg1 andCompletionBlock:(/*^block*/id)arg2 ;
-(void)startGeocoding;
@end

