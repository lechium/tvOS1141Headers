/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class NSString, NSArray;

@interface RTAccount : NSObject {

	BOOL _primaryEmailVerified;
	NSString* _dsid;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _appleID;
	NSString* _altDSID;
	NSString* _primaryEmail;
	NSString* _appleIDAlias;
	NSArray* _appleIDAliases;

}

@property (nonatomic,retain) NSString * dsid;                        //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                    //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) BOOL primaryEmailVerified;              //@synthesize primaryEmailVerified=_primaryEmailVerified - In the implementation block
@property (nonatomic,retain) NSString * appleID;                     //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                     //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * primaryEmail;                //@synthesize primaryEmail=_primaryEmail - In the implementation block
@property (nonatomic,retain) NSString * appleIDAlias;                //@synthesize appleIDAlias=_appleIDAlias - In the implementation block
@property (nonatomic,retain) NSArray * appleIDAliases;               //@synthesize appleIDAliases=_appleIDAliases - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)description;
-(NSString *)appleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)primaryEmail;
-(void)setPrimaryEmail:(NSString *)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)dsid;
-(id)initWithACAccount:(id)arg1 ;
-(id)appleIDs;
-(BOOL)primaryEmailVerified;
-(void)setPrimaryEmailVerified:(BOOL)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)appleIDAlias;
-(void)setAppleIDAlias:(NSString *)arg1 ;
-(NSArray *)appleIDAliases;
-(void)setAppleIDAliases:(NSArray *)arg1 ;
@end

