/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUUID.h>

@interface __NSConcreteUUID : NSUUID {

	unsigned char _uuidBytes[16];

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(SCD_Struct_NS72)_cfUUIDBytes;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)UUIDString;
-(id)initWithUUIDString:(id)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg1 ;
@end

