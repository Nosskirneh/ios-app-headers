//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CLRegion, NSString;

@interface ULRCircularRegion : NSObject <NSSecureCoding, NSCopying>
{
    CLRegion *_region;
    long long _designation;
}

+ (_Bool)supportsSecureCoding;
+ (id)regionWithCLRegion:(id)arg1;
+ (id)regionWithCLRegion:(id)arg1 designation:(long long)arg2;
+ (_Bool)circularRegionsSupported;
@property(readonly, nonatomic) long long designation; // @synthesize designation=_designation;
@property(readonly, nonatomic) CLRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
- (_Bool)isLocationTriggerRegion;
- (_Bool)isCardinalLocationTriggerRegion;
- (_Bool)isEncircleLocationTriggerRegion;
- (_Bool)isOwnedByULR;
- (_Bool)isValidTriggerRegion;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) double radius;
@property(readonly, nonatomic) struct CLLocationCoordinate2D center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 designation:(long long)arg4;

@end

