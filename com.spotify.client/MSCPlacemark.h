//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MSCPlacemark : NSObject
{
    NSString *_country;
    NSString *_region;
    NSString *_zipCode;
    NSString *_city;
    NSString *_streetname;
    NSString *_crossStreetname;
    NSString *_housenumber;
}

@property(retain) NSString *housenumber; // @synthesize housenumber=_housenumber;
@property(retain) NSString *crossStreetname; // @synthesize crossStreetname=_crossStreetname;
@property(retain) NSString *streetname; // @synthesize streetname=_streetname;
@property(retain) NSString *city; // @synthesize city=_city;
@property(retain) NSString *zipCode; // @synthesize zipCode=_zipCode;
@property(retain) NSString *region; // @synthesize region=_region;
@property(retain) NSString *country; // @synthesize country=_country;
- (void).cxx_destruct;

@end

