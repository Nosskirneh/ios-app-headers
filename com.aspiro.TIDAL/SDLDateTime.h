//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber;
@protocol SDLInt;

@interface SDLDateTime : SDLRPCStruct
{
}

@property(copy, nonatomic) NSNumber<SDLInt> *timezoneHourOffset;
@property(copy, nonatomic) NSNumber<SDLInt> *timezoneMinuteOffset;
@property(copy, nonatomic) NSNumber<SDLInt> *year;
@property(copy, nonatomic) NSNumber<SDLInt> *month;
@property(copy, nonatomic) NSNumber<SDLInt> *day;
@property(copy, nonatomic) NSNumber<SDLInt> *hour;
@property(copy, nonatomic) NSNumber<SDLInt> *minute;
@property(copy, nonatomic) NSNumber<SDLInt> *second;
@property(copy, nonatomic) NSNumber<SDLInt> *millisecond;
- (id)initWithHour:(unsigned char)arg1 minute:(unsigned char)arg2 second:(unsigned char)arg3 millisecond:(unsigned short)arg4 day:(unsigned char)arg5 month:(unsigned char)arg6 year:(unsigned short)arg7 timezoneMinuteOffset:(unsigned char)arg8 timezoneHourOffset:(int)arg9;
- (id)initWithHour:(unsigned char)arg1 minute:(unsigned char)arg2 second:(unsigned char)arg3 millisecond:(unsigned short)arg4 day:(unsigned char)arg5 month:(unsigned char)arg6 year:(unsigned short)arg7;
- (id)initWithHour:(unsigned char)arg1 minute:(unsigned char)arg2 second:(unsigned char)arg3 millisecond:(unsigned short)arg4;
- (id)initWithHour:(unsigned char)arg1 minute:(unsigned char)arg2;

@end

