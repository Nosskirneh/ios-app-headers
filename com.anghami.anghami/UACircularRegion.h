//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface UACircularRegion : NSObject
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_radius;
}

+ (id)circularRegionWithRadius:(id)arg1 latitude:(id)arg2 longitude:(id)arg3;
@property(retain, nonatomic) NSNumber *radius; // @synthesize radius=_radius;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

