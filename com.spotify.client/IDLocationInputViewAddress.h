//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IDLocationInputViewAddress : NSObject
{
    double _latitude;
    double _longitude;
    NSString *_town;
    NSString *_street;
    NSString *_housenumber;
    NSString *_junction;
}

+ (id)new;
+ (id)locationInputViewAddressWithVariantMap:(id)arg1;
@property(readonly, copy, nonatomic) NSString *junction; // @synthesize junction=_junction;
@property(readonly, copy, nonatomic) NSString *housenumber; // @synthesize housenumber=_housenumber;
@property(readonly, copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(readonly, copy, nonatomic) NSString *town; // @synthesize town=_town;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToLocationInputViewAddress:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 town:(id)arg3 street:(id)arg4 housenumber:(id)arg5 junction:(id)arg6;
- (id)initWithVariantMap:(id)arg1;

@end

