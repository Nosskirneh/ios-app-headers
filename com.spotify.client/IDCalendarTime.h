//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDCalendarTime : NSObject
{
    unsigned long long _hour;
    unsigned long long _minute;
}

+ (id)new;
@property(readonly, nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) unsigned long long hour; // @synthesize hour=_hour;
- (id)variantDataRepresentation;
- (_Bool)isEqualToCalendarTime:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithDate:(id)arg1;
- (id)initWithHour:(long long)arg1 minute:(long long)arg2;

@end

