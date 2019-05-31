/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapServiceTicket;
@interface RTGeocoder : NSObject {

	id<GEOMapServiceTicket> _ticket;

}

@property (nonatomic,retain) id<GEOMapServiceTicket> ticket;              //@synthesize ticket=_ticket - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)geocodeLatitude:(double)arg1 longitude:(double)arg2 handler:(/*^block*/id)arg3 ;
-(id)geocodeLatitude:(double)arg1 longitude:(double)arg2 error:(id*)arg3 ;
-(void)geocodeAddressDictionary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)geocodeAddressDictionary:(id)arg1 error:(id*)arg2 ;
-(void)geocodeAddressString:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)geocodeAddressString:(id)arg1 error:(id*)arg2 ;
-(void)_cancelTicket:(id)arg1 ;
-(id<GEOMapServiceTicket>)ticket;
-(void)setTicket:(id<GEOMapServiceTicket>)arg1 ;
@end
