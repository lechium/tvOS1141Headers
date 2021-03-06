/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEODataSetURLOverride : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSString* _announcementsURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _businessPortalBaseURL;
	unsigned _dataSet;
	NSString* _directionsURL;
	NSString* _dispatcherURL;
	NSString* _etaURL;
	NSString* _logMessageUsageURL;
	NSString* _problemCategoriesURL;
	NSString* _problemOptInURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSString* _simpleETAURL;
	NSString* _spatialLookupURL;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet;                                   //@synthesize dataSet=_dataSet - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL;                           //@synthesize directionsURL=_directionsURL - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL;                                  //@synthesize etaURL=_etaURL - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL;                 //@synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL;                            //@synthesize simpleETAURL=_simpleETAURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL;                //@synthesize addressCorrectionInitURL=_addressCorrectionInitURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL;              //@synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL;                    //@synthesize problemSubmissionURL=_problemSubmissionURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL;                        //@synthesize problemStatusURL=_problemStatusURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL;                    //@synthesize problemCategoriesURL=_problemCategoriesURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAnnouncementsURL; 
@property (nonatomic,retain) NSString * announcementsURL;                        //@synthesize announcementsURL=_announcementsURL - In the implementation block
@property (nonatomic,readonly) BOOL hasDispatcherURL; 
@property (nonatomic,retain) NSString * dispatcherURL;                           //@synthesize dispatcherURL=_dispatcherURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemOptInURL; 
@property (nonatomic,retain) NSString * problemOptInURL;                         //@synthesize problemOptInURL=_problemOptInURL - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessPortalBaseURL; 
@property (nonatomic,retain) NSString * businessPortalBaseURL;                   //@synthesize businessPortalBaseURL=_businessPortalBaseURL - In the implementation block
@property (nonatomic,readonly) BOOL hasLogMessageUsageURL; 
@property (nonatomic,retain) NSString * logMessageUsageURL;                      //@synthesize logMessageUsageURL=_logMessageUsageURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSpatialLookupURL; 
@property (nonatomic,retain) NSString * spatialLookupURL;                        //@synthesize spatialLookupURL=_spatialLookupURL - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setHasDataSet:(BOOL)arg1 ;
-(BOOL)hasDataSet;
-(unsigned)dataSet;
-(BOOL)hasDirectionsURL;
-(BOOL)hasEtaURL;
-(BOOL)hasBatchReverseGeocoderURL;
-(BOOL)hasSimpleETAURL;
-(BOOL)hasAddressCorrectionInitURL;
-(BOOL)hasAddressCorrectionUpdateURL;
-(BOOL)hasProblemSubmissionURL;
-(BOOL)hasProblemStatusURL;
-(BOOL)hasProblemCategoriesURL;
-(BOOL)hasAnnouncementsURL;
-(BOOL)hasDispatcherURL;
-(BOOL)hasProblemOptInURL;
-(BOOL)hasBusinessPortalBaseURL;
-(BOOL)hasLogMessageUsageURL;
-(BOOL)hasSpatialLookupURL;
-(NSString *)directionsURL;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(NSString *)etaURL;
-(void)setEtaURL:(NSString *)arg1 ;
-(NSString *)batchReverseGeocoderURL;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(NSString *)simpleETAURL;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(NSString *)addressCorrectionInitURL;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(NSString *)addressCorrectionUpdateURL;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(NSString *)problemSubmissionURL;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(NSString *)problemStatusURL;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(NSString *)problemCategoriesURL;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(NSString *)announcementsURL;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(NSString *)dispatcherURL;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(NSString *)problemOptInURL;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(NSString *)businessPortalBaseURL;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(NSString *)logMessageUsageURL;
-(void)setLogMessageUsageURL:(NSString *)arg1 ;
-(NSString *)spatialLookupURL;
-(void)setSpatialLookupURL:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

